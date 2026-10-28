@interface MMSUserBehaviorMgr : MMUserService <MMServiceProtocol>
- (void)onServiceInit;
- (void)dealloc;
- (void)onServiceClearData;
- (void)didTakeScreenshot:(id)arg1;
- (void)didWebTakeScreenshot:(id)arg1 viewController:(id)arg2;
- (void)didChatTakeScreenshot:(id)arg1;
- (void)didPaidOrderDetailTakeScreenshot:(id)arg1;
- (void)reportChatScreenshot:(id)arg1;
@end
