@interface WxpayLFSDynamicModuleCapability : WxpayHostModuleCapability
{
    LiteAppDynamicModuleConfig * _config; // +0x8
    NSDictionary * _methodDescriptors; // +0x10
    NSDictionary * _parameterDescriptors; // +0x18
    NSSet * _bufferMethods; // +0x20
    NSDictionary * _returnDescriptors; // +0x28
}
- (id)initWithModuleName:(id)arg1 className:(id)arg2;
- (id)canonicalDescriptor;
- (id)invokeModuleMethod:(id)arg1 context:(id)arg2 payload:(id)arg3 reply:(id /* block */)arg4;
- (id)config;
- (void)setConfig:(id)arg1;
- (id)methodDescriptors;
- (void)setMethodDescriptors:(id)arg1;
- (id)parameterDescriptors;
- (void)setParameterDescriptors:(id)arg1;
- (id)bufferMethods;
- (void)setBufferMethods:(id)arg1;
- (id)returnDescriptors;
- (void)setReturnDescriptors:(id)arg1;
- (void).cxx_destruct;
@end
