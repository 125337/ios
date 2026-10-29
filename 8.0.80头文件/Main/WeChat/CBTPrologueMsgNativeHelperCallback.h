@interface CBTPrologueMsgNativeHelperCallback : NSObject
{
    CBTPrologueMsgNativeHelperDispatcherBridgeObjcImpl * dispatcher_bridge; // +0x8
}
- (id)initWithCpp:(CBTPrologueMsgNativeHelperDispatcherBridgeObjcImpl *)arg1;
- (void)onOnPrologueMsgUpdateComplete:(unsigned long long)arg1;
- (void)onOnDeletePrologueMsgComplete:(unsigned long long)arg1;
@end
