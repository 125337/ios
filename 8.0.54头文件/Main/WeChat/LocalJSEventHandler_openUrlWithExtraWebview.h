@interface LocalJSEventHandler_openUrlWithExtraWebview : LocalJSEventHandler_BaseEvent
{
    id /* block */ _callbackBlock; // +0x8
}
+ (BOOL)getGlobalHasShow;
+ (void)setGlobalHasShow:(BOOL)arg1;
- (void)dealloc;
- (void)handleJSEvent:(id)arg1;
- (id)backgroundTaskForKey:(id)arg1;
- (id)genNewWebExtraInfoFromParams:(id)arg1 toUrl:(id)arg2 csPreInjectJSExtObj:(id)arg3;
- (id)pageSheetConfigFromParams:(id)arg1;
- (void)delayDoAction;
- (void)ShowWebViewControllerWithType:(unsigned long long)arg1 andWebViewVC:(id)arg2;
- (void).cxx_destruct;
@end

