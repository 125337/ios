@interface FunctionCallCPP2NativeCallerCallback : NSObject
{
    FunctionCallCPP2NativeCallerDispatcherBridgeObjcImpl * dispatcher_bridge; // +0x8
}
- (id)initWithCpp:(FunctionCallCPP2NativeCallerDispatcherBridgeObjcImpl *)arg1;
- (void)onNotifyFunctionCallStartComplete:(unsigned long long)arg1 success:(BOOL)arg2;
- (void)onNotifyFunctionCallEndComplete:(unsigned long long)arg1 success:(BOOL)arg2;
- (void)onGetFunctionProtocolPathComplete:(unsigned long long)arg1 protocolFilePath:(id)arg2;
- (void)onGetProtocolTempDirComplete:(unsigned long long)arg1 tempDir:(id)arg2;
@end
