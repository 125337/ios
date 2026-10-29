@interface ChatbotiOSOnlyCPP2NativeCallerCallback : NSObject
{
    ChatbotiOSOnlyCPP2NativeCallerDispatcherBridgeObjcImpl * dispatcher_bridge; // +0x8
}
- (id)initWithCpp:(ChatbotiOSOnlyCPP2NativeCallerDispatcherBridgeObjcImpl *)arg1;
- (void)onOnRecvBlueMicroInfoComplete:(unsigned long long)arg1;
- (void)onOnRecvAsstCardComplete:(unsigned long long)arg1;
- (void)onOnMsgStorageIdReadyComplete:(unsigned long long)arg1;
- (void)onOnRecvA2UIDefinitionComplete:(unsigned long long)arg1;
- (void)onOnUploadMultimodalImageResultComplete:(unsigned long long)arg1;
@end
