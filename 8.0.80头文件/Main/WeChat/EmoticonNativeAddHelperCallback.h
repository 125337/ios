@interface EmoticonNativeAddHelperCallback : NSObject
{
    EmoticonNativeAddHelperDispatcherBridgeObjcImpl * dispatcher_bridge; // +0x8
}
- (id)initWithCpp:(EmoticonNativeAddHelperDispatcherBridgeObjcImpl *)arg1;
- (void)onAddCustomEmoticonComplete:(unsigned long long)arg1 isSuccess:(BOOL)arg2 md5:(id)arg3 errMsg:(id)arg4;
@end
