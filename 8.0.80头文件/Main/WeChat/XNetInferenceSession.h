@interface XNetInferenceSession : NSObject
{
    shared_ptr<xnet::InferenceSession> _session; // +0x8
}
+ (id)GetXNetSDKVersion;
- (id)initWithPath:(id)arg1 error:(id *)arg2;
- (id)initWithPath:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)inference:(id)arg1 error:(id *)arg2;
- (id)convertCpp2ObjCTensors:(const void *)arg1;
- (map<std::string, xnet::Tensor<xnet::Storage<DeviceKindCPU, ResourceKindBuffer>>, std::less<std::string>, std::allocator<std::pair<const std::string, xnet::Tensor<xnet::Storage<DeviceKindCPU, ResourceKindBuffer>>>>>)convertObjC2CppTensors:(id)arg1;
- (id)modelDescriptionWithError:(id *)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
