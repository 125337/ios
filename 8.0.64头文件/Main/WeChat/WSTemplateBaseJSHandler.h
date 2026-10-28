@interface WSTemplateBaseJSHandler : NSObject <WSTemplateJSLogicImplDelegate>
{
    id <WSTemplateBaseJSHandlerDelegate> _delegate; // +0x8
    MMUIViewController * _containerVC; // +0x10
}
- (void)handleJSApi_openAdPage:(id)arg1 callbackID:(id)arg2;
- (void)setContainerVC:(id)arg1;
- (id)jsEventsNeedRegister;
- (BOOL)onJsApiHandlerForwardDealWithFunc:(id)arg1 params:(id)arg2 callbackID:(id)arg3;
- (void)handleJSApi_OpenWebView:(id)arg1 callbackID:(id)arg2;
- (void)handleJSApi_log:(id)arg1 callbackID:(id)arg2;
- (void)handleJSApi_openWeAppPage:(id)arg1 callbackID:(id)arg2;
- (void)handleJSApi_reportKV:(id)arg1 callbackID:(id)arg2;
- (void)handleJSApi_ClosePage:(id)arg1 callbackID:(id)arg2;
- (void)handleJSApi_openProfilePage:(id)arg1 callbackID:(id)arg2;
- (void)handleJSApi_playVideo:(id)arg1 callbackID:(id)arg2;
- (void)handleJSApi_openFinderView:(id)arg1 callbackID:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)containerVC;
- (void).cxx_destruct;
@end
