@interface FunctionCallNativeImplCallback : NSObject
{
    FunctionCallNativeImplDispatcherBridgeObjcImpl * dispatcher_bridge; // +0x8
}
- (id)initWithCpp:(FunctionCallNativeImplDispatcherBridgeObjcImpl *)arg1;
- (void)onInvokeComplete:(unsigned long long)arg1 ret:(id)arg2;
@end
