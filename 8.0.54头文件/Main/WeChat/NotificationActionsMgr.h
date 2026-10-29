@interface NotificationActionsMgr : MMUserService <PBMessageObserverDelegate, UNUserNotificationCenterDelegate, IMMNewSessionMgrExt, MMServiceProtocol>
{
    NSMutableDictionary * _actionCompletions; // +0x8
    WeToast * _toastView; // +0x10
    NSMutableArray * _sendingMessages; // +0x18
    UNNotificationSettings * _notificationSettings; // +0x20
    BOOL _appLaunchedDueToNotification; // +0x28
    NSDictionary * _actionMaping; // +0x30
}
+ (void)registerNotification;
+ (void)setApplicationIconBadgeNumber:(unsigned int)arg1;
- (void)onServiceInit;
- (void)onServiceEnterBackground;
- (void)onServiceClearData;
- (void)onServiceTerminate;
- (void)userNotificationCenter:(id)arg1 willPresentNotification:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)handleLocalActionWithIdentifier:(id)arg1 forUserInfo:(id)arg2 withResponseInfo:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)handleRemoteActionWithIdentifier:(id)arg1 forUserInfo:(id)arg2 withResponseInfo:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)handleActionWithIdentifier:(id)arg1 forUserInfo:(id)arg2 withResponseInfo:(id)arg3 isRemote:(BOOL)arg4 completionHandler:(id /* block */)arg5;
- (void)handleMarkAsReadAction:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)handleUnlockDeviceAction:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)handleReplyAction:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)handleReplyYoAction:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)onAppIconTotalUnreadCountChange:(unsigned int)arg1;
- (void)replyText:(id)arg1 toUsername:(id)arg2 userInfo:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)notifyUserSendMessageFailWithClientId:(unsigned int)arg1 toUsername:(id)arg2;
- (void)markChatRead:(id)arg1 completionHandler:(id /* block */)arg2;
- (unsigned int)genRandomClienMsgId;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleSendMsgResp:(id)arg1;
- (void)handleStatusNotifyResp:(id)arg1;
- (void)handleReceiveRemoteNotification:(id)arg1 requestID:(id)arg2;
- (void)handleReceiveLocalNotification:(id)arg1;
- (void)handleApnsDeepLink:(id)arg1;
- (id)actionMaping;
- (id)notificationSettings;
- (BOOL)appLaunchedDueToNotification;
- (void)setAppLaunchedDueToNotification:(BOOL)arg1;
- (void).cxx_destruct;
@end

