@interface ChatbotFileUtilCPP2NativeCallerCallback : NSObject
{
    ChatbotFileUtilCPP2NativeCallerDispatcherBridgeObjcImpl * dispatcher_bridge; // +0x8
}
- (id)initWithCpp:(ChatbotFileUtilCPP2NativeCallerDispatcherBridgeObjcImpl *)arg1;
- (void)onGetUserCachePathComplete:(unsigned long long)arg1 cachePath:(id)arg2;
@end
