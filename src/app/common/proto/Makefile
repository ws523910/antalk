PROTOC = protoc
PROTOC_EXTRA_ARGS = 

.PHONY:all
all: common.pb.cc  auth.pb.cc data.pb.cc apigw.pb.cc msg.pb.cc IM.BaseDefine.pb.cc 

.PHONY:clean
clean:
	@echo "Cleaning"
	@rm -rf data.pb.cc data.pb.h apigw.pb.h apigw.pb.cc auth.pb.h auth.pb.cc common.pb.h common.pb.cc msg.pb.h msg.pb.cc



%.pb.cc %.pb.h:%.proto
	@echo "Generating $@"
	@$(PROTOC) --cpp_out=. --proto_path=. $(PROTOC_EXTRA_ARGS) $<

libproto.so:%.o

%.o:%.cpp
	@echo "Compiling $@"
	@$(CXX) -c $(HDRPATHS) $(CXXFLAGS) $< -o $@

%.o:%.cc
	@echo "Compiling $@"
	@$(CXX) -c $(HDRPATHS) $(CXXFLAGS) $< -o $@
