@interface WebviewJSEventHandler_requestSubscribeMessage : WebviewJSEventHandlerBase <BrandTemplateMsgAuthLogicDelegate>
{
    JSEvent * _event; // +0x8
    BrandTemplateMsgAuthLogic * _logic; // +0x10
}
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)onSubscriptionMessageLogic:(id)arg1 finishedWithResult:(id)arg2 extInfo:(id)arg3 success:(BOOL)arg4 errorCode:(long long)arg5 errorMessage:(id)arg6;
- (void)onSubscriptionMessageLogicWillShowPageSheet:(id)arg1;
- (void)onSubscriptionMessageLogicWillDismissPageSheet:(id)arg1;
- (id)viewControllerToShowPageSheet;
- (id)pageSheetLifecyclePlugin;
- (id)event;
- (void)setEvent:(id)arg1;
- (id)logic;
- (void)setLogic:(id)arg1;
- (void).cxx_destruct;
@end

