@interface CBTDramaCppToNativeCallerCallback : NSObject
{
    CBTDramaCppToNativeCallerDispatcherBridgeObjcImpl * dispatcher_bridge; // +0x8
}
- (id)initWithCpp:(CBTDramaCppToNativeCallerDispatcherBridgeObjcImpl *)arg1;
- (void)onOnDramaUpdateComplete:(unsigned long long)arg1;
@end
