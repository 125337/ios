@interface WAOpenSDKJSEventHandler_shareAppMessage : WAOpenSDKJSEventHandler_BaseEvent <WAShareAppMessageForwardLogicControllerComponentDelegate>
{
    WAShareAppMessageContextModel * _shareContextModel; // +0x8
    WAShareAppMessageCommonParamsModel * _paramsModel; // +0x10
    WAShareAppMessageForwardLogicControllerComponent * _forwardLogicControllerComponent; // +0x18
}
- (void)handleJSEvent:(id)arg1;
- (void)shareMsg:(id)arg1 toContacts:(id)arg2 forNativeWeApp:(BOOL)arg3;
- (id)viewControllerForForwardLogicControllerToShow:(id)arg1;
- (void)onWAShareAppMessageForwardLogicControllerComponent_MessageSend:(id)arg1;
- (void)onWAShareAppMessageForwardLogicControllerComponent_MessageCancel:(id)arg1;
- (void)onWAShareAppMessageForwardLogicControllerComponent_ConfirmCanceled:(id)arg1;
- (void)onWAShareAppMessageForwardLogicControllerComponent_MessageException:(id)arg1;
- (void)onWAShareAppMessageForwardLogicControllerComponent_MessageSelectSession:(id)arg1;
- (void)onWAShareAppMessageForwardLogicControllerComponent_WeAppMessageSend:(id)arg1 appMsgItem:(id)arg2;
- (void)reportForwardMsg:(id)arg1;
- (id)shareContextModel;
- (void)setShareContextModel:(id)arg1;
- (id)paramsModel;
- (void)setParamsModel:(id)arg1;
- (id)forwardLogicControllerComponent;
- (void)setForwardLogicControllerComponent:(id)arg1;
- (void).cxx_destruct;
@end
