@interface WebSearchPlatformManagerCallback : NSObject
{
    WebSearchPlatformManagerDispatcherBridgeObjcImpl * dispatcher_bridge; // +0x8
}
- (id)initWithCpp:(WebSearchPlatformManagerDispatcherBridgeObjcImpl *)arg1;
- (void)onGetWebViewPixelsComplete:(unsigned long long)arg1 pixels:(id)arg2;
- (void)onNotifyFilterShowOrHideComplete:(unsigned long long)arg1 errorCode:(int)arg2;
- (void)onNativeEventsEvent:(id)arg1 params:(id)arg2;
@end
