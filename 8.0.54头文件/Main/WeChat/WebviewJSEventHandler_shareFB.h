@interface WebviewJSEventHandler_shareFB : WebviewJSEventHandlerBase <JSShareFBLogicHelperDelegate, FacebookViewControllerDelegate, IMMFacebookMgrExt>
{
    JSShareFBLogicHelper * m_jsShareFBHelper; // +0x8
    NSDictionary * m_eventParamsDic; // +0x10
}
- (id)init;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)showConfirmView;
- (void)OnWillAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)onExtendTokenFinish:(BOOL)arg1;
- (void)onJSShareFBSharing;
- (void)onJSShareFBFinished;
- (void)onJSShareFBFailedWithError:(int)arg1 msg:(id)arg2;
- (void)onBindFacebook;
- (void)OnFacebookBinded;
- (id)getViewController;
- (void).cxx_destruct;
@end

