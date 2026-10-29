@interface WAJSEventHandler_requestSubscribeMessage : WAJSEventHandler_BaseEvent <WASubscriptionMessageLogicDelegate, WASubscriptionMessageLogicDataSource>
{
    WASubscriptionMessageLogic * _logic; // +0x8
}
- (void)handleJSEvent:(id)arg1;
- (void)onSubscriptionMessageLogic:(id)arg1 finishedWithResult:(id)arg2 success:(BOOL)arg3 cancel:(BOOL)arg4 errorMessage:(id)arg5 errorCode:(long long)arg6;
- (void)onSubscriptionMessageLogicWillShowPageSheet:(id)arg1;
- (void)onSubscriptionMessageLogicWillDismissPageSheet:(id)arg1;
- (id)viewControllerToShowPageSheet;
- (id)logic;
- (void)setLogic:(id)arg1;
- (void).cxx_destruct;
@end

