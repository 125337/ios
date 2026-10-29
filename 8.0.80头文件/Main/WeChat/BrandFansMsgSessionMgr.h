@interface BrandFansMsgSessionMgr : MMUserService <PBMessageObserverDelegate, BizTlPersonalCenterMgrExt, IMsgExt, BrandFansMsgGreetBoxMgrExt, MMServiceProtocol>
{
    BOOL _currentMsgNotifyEnable; // +0x8
    BOOL _photoAccountMsgNotifyEnable; // +0x9
    BrandBizInfo * _currentBizInfo; // +0x10
    BrandBizInfo * _photoAccountInfo; // +0x18
    NSMutableDictionary * _sessionStorages; // +0x20
    WCTDatabase * _sessionDB; // +0x28
    BrandMsgNotification * _currentBrandNotification; // +0x30
    BrandMsgNotification * _photoAccountBrandNotification; // +0x38
}
+ (id)bizForMessage:(id)arg1;
- (void)onServiceInit;
- (void)onServiceClearData;
- (id)sessionStorageForBizuin:(id)arg1;
- (id)sessionDB;
- (id)bizInfoForBizType:(int)arg1;
- (id)sessionStorageForBizType:(int)arg1;
- (id)greetBoxForBizType:(int)arg1;
- (void)onGreetBoxUpdatedForBizuin:(id)arg1 bizType:(int)arg2 greetBox:(id)arg3;
- (id)chatLogicControllerForSessionInfo:(id)arg1;
- (id)chatLogicControllerForOpenID:(id)arg1 bizuin:(id)arg2 bizType:(int)arg3 preferredNickname:(id)arg4;
- (unsigned long long)getUnreadCountForBizuin:(id)arg1;
- (void)addOrUpdateSessionForSessionID:(id)arg1 message:(id)arg2 bizuin:(id)arg3;
- (void)clearAllUnreadCountForBizuin:(id)arg1;
- (void)clearUnreadCountForSessionInfo:(id)arg1;
- (void)clearUnreadCountForSessionInfo:(id)arg1 fromPush:(BOOL)arg2;
- (void)sendClearUnreadCountCGIForSessionInfo:(id)arg1;
- (void)handleClearUnreadCountResponse:(id)arg1 request:(id)arg2;
- (void)deleteSessionInfo:(id)arg1;
- (void)updateReplyTipsForSessionInfo:(id)arg1;
- (void)handleUpdateReplyTipsResponse:(id)arg1 request:(id)arg2;
- (void)onBrandMsgNotificationUpdatedWithDigest:(id)arg1 timestamp:(int)arg2;
- (void)updateMsgNotifyEnable:(BOOL)arg1;
- (void)onPhotoAccountBrandMsgNotificationUpdatedWithDigest:(id)arg1 timestamp:(int)arg2;
- (void)updatePhotoAccountMsgNotifyEnable:(BOOL)arg1;
- (id)currentBizUin;
- (id)photoAccountBizUin;
- (void)onBizPersonalCenterLoginBizUin:(id)arg1;
- (void)onBizPersonalCenterLogoutBizUin:(id)arg1;
- (id)currentSessionStorage;
- (void)onBizPersonalCenterLoginPhotoAccount:(id)arg1;
- (void)onBizPersonalCenterLogoutPhotoAccount:(id)arg1;
- (id)photoAccountSessionStorage;
- (void)onPhotoWorkEntryTimestampUpdated:(unsigned long long)arg1;
- (void)onBrandEnterPersonalCenterTimestampUpdated:(unsigned long long)arg1;
- (int)serviceTypeForBizuin:(id)arg1;
- (BOOL)isValidUsrName:(id)arg1;
- (void)OnDelMsg:(id)arg1;
- (void)OnAddMsgListForSession:(id)arg1 NotifyUsrName:(id)arg2;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)OnModMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)addSendFailedSystemMsgIfNeedForSession:(id)arg1 msgWrap:(id)arg2;
- (void)handleDangerUserMsg:(id)arg1 message:(id)arg2 bizuin:(id)arg3;
- (void)handleSpamXmlMsg:(id)arg1 msgWrap:(id)arg2;
- (void)addSpamSystemMsgForSession:(id)arg1 msgWrap:(id)arg2 wording:(id)arg3;
- (void)addSpamSystemMsgForSession:(id)arg1 msgWrap:(id)arg2 wording:(id)arg3 createTimeOffset:(unsigned int)arg4;
- (BOOL)shouldShowFansMsgPrivacyTips;
- (void)markFansMsgPrivacyTipsShown;
- (BOOL)shouldShowPhotoFansMsgPrivacyTips;
- (void)markPhotoFansMsgPrivacyTipsShown;
- (id)sessionControllerForCurrentBizuin;
- (id)sessionControllerForPhotoAccount;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)photoAccountBrandNotification;
- (void)openFansMsgListForBizType:(int)arg1 fromViewController:(id)arg2;
- (void)openFlutterFansMsgListForBizType:(int)arg1 fromViewController:(id)arg2;
- (void)openNativeFansMsgListForBizType:(int)arg1 fromViewController:(id)arg2;
- (void)sendCReplyBInviteShareMsg:(id)arg1 toUsrName:(id)arg2 sharedServiceType:(long long)arg3 notifyMsgId:(unsigned long long)arg4 svrId:(unsigned long long)arg5 notifyServiceType:(long long)arg6;
- (void)handleBizSchemeWrap:(id)arg1 viewController:(id)arg2 talkerNickname:(id)arg3 talkerUsrName:(id)arg4 messageWrap:(id)arg5;
- (void)jumpToBizProfile:(id)arg1 navigationController:(id)arg2;
- (void)openBizRegisterWithServiceType:(long long)arg1 viewController:(id)arg2 talkerNickname:(id)arg3 talkerUsrName:(id)arg4 messageWrap:(id)arg5;
- (void)handleNeedShareAfterCreated:(id)arg1 sharedServiceType:(long long)arg2 toUsrName:(id)arg3 notifyMsgId:(unsigned long long)arg4 svrId:(unsigned long long)arg5 notifyServiceType:(long long)arg6;
- (id)currentBizInfo;
- (void)setCurrentBizInfo:(id)arg1;
- (BOOL)currentMsgNotifyEnable;
- (void)setCurrentMsgNotifyEnable:(BOOL)arg1;
- (id)photoAccountInfo;
- (void)setPhotoAccountInfo:(id)arg1;
- (BOOL)photoAccountMsgNotifyEnable;
- (void)setPhotoAccountMsgNotifyEnable:(BOOL)arg1;
- (id)sessionStorages;
- (void)setSessionStorages:(id)arg1;
- (void)setSessionDB:(id)arg1;
- (id)currentBrandNotification;
- (void)setCurrentBrandNotification:(id)arg1;
- (void)setPhotoAccountBrandNotification:(id)arg1;
- (void).cxx_destruct;
@end
