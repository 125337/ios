@interface WAShareAppMessageProxyImplementationContext : NSObject <WAShareAppMessageForwardLogicControllerComponentDelegate>
{
    WAWebViewPlugin_WeAppMsg * _shareAppMessagePlugin; // +0x8
    WAWebViewPlugin_ReportPageEvent * _reportPageEventPlugin; // +0x10
    WAShareAppMessageForwardLogicControllerComponent * _forwardLogicControllerComponent; // +0x18
}
- (id)initWithShareAppMessagePlugin:(id)arg1 reportPageEventPlugin:(id)arg2;
- (id)forwardLogicControllerComponent;
- (id)viewControllerForForwardLogicControllerToShow:(id)arg1;
- (void)onWAShareAppMessageForwardLogicControllerComponent_MessageSend:(id)arg1;
- (void)onWAShareAppMessageForwardLogicControllerComponent_MessageCancel:(id)arg1;
- (void)onWAShareAppMessageForwardLogicControllerComponent_ConfirmCanceled:(id)arg1;
- (void)onWAShareAppMessageForwardLogicControllerComponent_MessageException:(id)arg1;
- (void)onWAShareAppMessageForwardLogicControllerComponent_MessageSelectSession:(id)arg1;
- (void)onWAShareAppMessageForwardLogicControllerComponent_WeAppMessageSend:(id)arg1 appMsgItem:(id)arg2;
- (id)shareAppMessagePlugin;
- (void)setShareAppMessagePlugin:(id)arg1;
- (id)reportPageEventPlugin;
- (void)setReportPageEventPlugin:(id)arg1;
- (void)setForwardLogicControllerComponent:(id)arg1;
- (void).cxx_destruct;
@end
