@interface WCInnerJumpMgr : MMUserService <MMServiceProtocol>
- (void)handleInactiveAPNSPushWithUsrInfo:(id)arg1;
- (void)handleBackgroundAPNSPushWithUsrInfo:(id)arg1;
- (void)handleApnsNotificationPushWithUsrInfo:(id)arg1;
- (void)handleLocalPushWithUsrInfo:(id)arg1;
- (void)gotoWebViewController:(id)arg1;
@end

