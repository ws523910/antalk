// Copyright (c) 2014 Baidu, Inc.
// Author: Ge,Jun (gejun@baidu.com)
// Date: 2010-12-04 11:59

#include <gtest/gtest.h>
#include <syscall.h>                         // SYS_clock_gettime
#include <unistd.h>                          // syscall
#include "butil/time.h"
#include "butil/macros.h"
#include "butil/logging.h"

namespace {

TEST(BaiduTimeTest, diff_between_gettimeofday_and_REALTIME) {
    long t1 = butil::gettimeofday_us();
    timespec time;
    clock_gettime(CLOCK_REALTIME, &time);
    long t2 = butil::timespec_to_microseconds(time);
    LOG(INFO) << "t1=" << t1 << " t2=" << t2;
}

const char* clock_desc[] = {
    "CLOCK_REALTIME",                 //0
    "CLOCK_MONOTONIC",                //1
    "CLOCK_PROCESS_CPUTIME_ID",       //2
    "CLOCK_THREAD_CPUTIME_ID",        //3
    "CLOCK_MONOTONIC_RAW",            //4
    "CLOCK_REALTIME_COARSE",          //5
    "CLOCK_MONOTONIC_COARSE",         //6
    "CLOCK_BOOTTIME",                 //7
    "CLOCK_REALTIME_ALARM",           //8
    "CLOCK_BOOTTIME_ALARM",           //9
    "CLOCK_SGI_CYCLE",                //10
    "CLOCK_TAI"                       //11
};

TEST(BaiduTimeTest, cost_of_timer) {
    printf("sizeof(time_t)=%lu\n", sizeof(time_t));
    
    butil::Timer t1, t2;
    timespec ts;
    const size_t N = 200000;
    t1.start();
    for (size_t i = 0; i < N; ++i) {
        t2.stop();
    }
    t1.stop();
    printf("Timer::stop() takes %ldns\n", t1.n_elapsed() / N);

    t1.start();
    for (size_t i = 0; i < N; ++i) {
        clock();
    }
    t1.stop();
    printf("clock() takes %ldns\n", t1.n_elapsed() / N);

    long s = 0;
    t1.start();
    for (size_t i = 0; i < N; ++i) {
        s += butil::cpuwide_time_ns();
    }
    t1.stop();
    printf("cpuwide_time() takes %ldns\n", t1.n_elapsed() / N);

    t1.start();
    for (size_t i = 0; i < N; ++i) {
        s += butil::gettimeofday_us();
    }
    t1.stop();
    printf("gettimeofday_us takes %luns\n", t1.n_elapsed() / N);

    t1.start();
    for (size_t i = 0; i < N; ++i) {
        time(NULL);
    }
    t1.stop();
    printf("time(NULL) takes %luns\n", t1.n_elapsed() / N);

    t1.start();
    for (size_t i = 0; i < N; ++i) {
        s += butil::monotonic_time_ns();
    }
    t1.stop();
    printf("monotonic_time_ns takes %luns\n", t1.n_elapsed() / N);

    for (size_t i = 0; i < arraysize(clock_desc); ++i) {
        if (0 == syscall(SYS_clock_gettime, (clockid_t)i, &ts)) {
            t1.start();
            for (size_t j = 0; j < N; ++j) {
                syscall(SYS_clock_gettime, (clockid_t)i, &ts);
            }
            t1.stop();
            printf("sys   clock_gettime(%s) takes %luns\n",
                   clock_desc[i], t1.n_elapsed() / N);
        }
        if (0 == clock_gettime((clockid_t)i, &ts)) {
            t1.start();
            for (size_t j = 0; j < N; ++j) {
                clock_gettime((clockid_t)i, &ts);
            }
            t1.stop();
            printf("glibc clock_gettime(%s) takes %luns\n",
                   clock_desc[i], t1.n_elapsed() / N);
        }
    }
}

TEST(BaiduTimeTest, timespec) {
    timespec ts1 = { 0, -1 };
    butil::timespec_normalize(&ts1);
    ASSERT_EQ(999999999L, ts1.tv_nsec);
    ASSERT_EQ(-1, ts1.tv_sec);

    timespec ts2 = { 0, 1000000000L };
    butil::timespec_normalize(&ts2);
    ASSERT_EQ(0L, ts2.tv_nsec);
    ASSERT_EQ(1L, ts2.tv_sec);

    timespec ts3 = { 0, 999999999L };
    butil::timespec_normalize(&ts3);
    ASSERT_EQ(999999999L, ts3.tv_nsec);
    ASSERT_EQ(0, ts3.tv_sec);

    timespec ts4 = { 0, 1L };
    butil::timespec_add(&ts4, ts3);
    ASSERT_EQ(0, ts4.tv_nsec);
    ASSERT_EQ(1L, ts4.tv_sec);

    timespec ts5 = { 0, 999999999L };
    butil::timespec_minus(&ts5, ts3);
    ASSERT_EQ(0, ts5.tv_nsec);
    ASSERT_EQ(0, ts5.tv_sec);

    timespec ts6 = { 0, 999999998L };
    butil::timespec_minus(&ts6, ts3);
    ASSERT_EQ(999999999L, ts6.tv_nsec);
    ASSERT_EQ(-1L, ts6.tv_sec);

    timespec ts7 = butil::nanoseconds_from(ts3, 1L);
    ASSERT_EQ(0, ts7.tv_nsec);
    ASSERT_EQ(1L, ts7.tv_sec);

    timespec ts8 = butil::nanoseconds_from(ts3, -1000000000L);
    ASSERT_EQ(999999999L, ts8.tv_nsec);
    ASSERT_EQ(-1L, ts8.tv_sec);

    timespec ts9 = butil::microseconds_from(ts3, 1L);
    ASSERT_EQ(999L, ts9.tv_nsec);
    ASSERT_EQ(1L, ts9.tv_sec);

    timespec ts10 = butil::microseconds_from(ts3, -1000000L);
    ASSERT_EQ(999999999L, ts10.tv_nsec);
    ASSERT_EQ(-1L, ts10.tv_sec);

    timespec ts11 = butil::milliseconds_from(ts3, 1L);
    ASSERT_EQ(999999L, ts11.tv_nsec);
    ASSERT_EQ(1L, ts11.tv_sec);

    timespec ts12 = butil::milliseconds_from(ts3, -1000L);
    ASSERT_EQ(999999999L, ts12.tv_nsec);
    ASSERT_EQ(-1L, ts12.tv_sec);

    timespec ts13 = butil::seconds_from(ts3, 1L);
    ASSERT_EQ(999999999L, ts13.tv_nsec);
    ASSERT_EQ(1, ts13.tv_sec);

    timespec ts14 = butil::seconds_from(ts3, -1L);
    ASSERT_EQ(999999999L, ts14.tv_nsec);
    ASSERT_EQ(-1L, ts14.tv_sec);
}

TEST(BaiduTimeTest, every_many_us) {
    butil::EveryManyUS every_10ms(10000L);
    size_t i = 0;
    const long start_time = butil::gettimeofday_ms();
    while (1) {
        if (every_10ms) {
            printf("enter this branch at %lums\n",
                   butil::gettimeofday_ms() - start_time);
            if (++i >= 10) {
                break;
            }
        }
    }
}

TEST(BaiduTimeTest, timer_auto_start) {
    butil::Timer t(butil::Timer::STARTED);
    usleep(100);
    t.stop();
    printf("Cost %ldus\n", t.u_elapsed());
}

}
