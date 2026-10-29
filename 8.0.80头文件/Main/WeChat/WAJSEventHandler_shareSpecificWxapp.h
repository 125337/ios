@interface WAJSEventHandler_shareSpecificWxapp : WAJSEventHandler_BaseEvent <ForwardMessageLogicDelegate, WAShareAppMessageForwardLogicControllerComponentDelegate>
{
    WAContact * _contact; // +0x8
    ForwardMessageLogicController * _forwardLogic; // +0x10
    WAShareAppMessageThumbImagePool * _thumbImagePool; // +0x18
    WAShareAppMessageForwardLogicControllerComponent * _forwardLogicComponent; // +0x20
    WAShareAppMessageContextModel * _shareContextModel; // +0x28
    WAShareAppMessageCommonParamsModel * _paramsModel; // +0x30
}
- (void)handleJSEvent:(id)arg1;
- (void)configForwardLogic;
- (void)shareMiniToolToForkWithUsrName:(id)arg1 appId:(id)arg2 customParams:(id)arg3;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageException:(id)arg1;
- (id)viewControllerForForwardLogicControllerToShow:(id)arg1;
- (void)onWAShareAppMessageForwardLogicControllerComponent_MessageSend:(id)arg1;
- (void)onWAShareAppMessageForwardLogicControllerComponent_MessageCancel:(id)arg1;
- (void)onWAShareAppMessageForwardLogicControllerComponent_MessageException:(id)arg1;
- (id)getShareStatReport:(id)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (id)forwardLogic;
- (void)setForwardLogic:(id)arg1;
- (id)thumbImagePool;
- (void)setThumbImagePool:(id)arg1;
- (id)forwardLogicComponent;
- (void)setForwardLogicComponent:(id)arg1;
- (id)shareContextModel;
- (void)setShareContextModel:(id)arg1;
- (id)paramsModel;
- (void)setParamsModel:(id)arg1;
- (void).cxx_destruct;
@end
