@interface BrandFansMsgSessionMgr : MMUserService <PBMessageObserverDelegate, BizTlPersonalCenterMgrExt, IMsgExt, MMServiceProtocol>
{
    BOOL _currentMsgNotifyEnable; // +0x8
    BrandBizInfo * _currentBizInfo; // +0x10
    BrandFansMsgSessionStorage * _currentSessionStorage; // +0x18
    NSMutableDictionary * _sessionStorages; // +0x20
    WCTDatabase * _sessionDB; // +0x28
    BrandMsgNotification * _currentBrandNotification; // +0x30
}
+ (id)bizForMessage:(id)arg1;
- (void)onServiceInit;
- (void)onServiceClearData;
- (id)sessionStorageForBizuin:(id)arg1;
- (id)sessionDB;
- (id)chatLogicControllerForSessionInfo:(id)arg1;
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
- (id)currentBizUin;
- (void)onBizPersonalCenterLoginBizUin:(id)arg1;
- (void)onBizPersonalCenterLogoutBizUin:(id)arg1;
- (BOOL)isValidUsrName:(id)arg1;
- (void)OnDelMsg:(id)arg1;
- (void)OnAddMsgListForSession:(id)arg1 NotifyUsrName:(id)arg2;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)OnModMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)addSendFailedSystemMsgIfNeedForSession:(id)arg1 msgWrap:(id)arg2;
- (id)sessionControllerForCurrentBizuin;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)currentBizInfo;
- (void)setCurrentBizInfo:(id)arg1;
- (id)currentSessionStorage;
- (void)setCurrentSessionStorage:(id)arg1;
- (BOOL)currentMsgNotifyEnable;
- (void)setCurrentMsgNotifyEnable:(BOOL)arg1;
- (id)sessionStorages;
- (void)setSessionStorages:(id)arg1;
- (void)setSessionDB:(id)arg1;
- (id)currentBrandNotification;
- (void)setCurrentBrandNotification:(id)arg1;
- (void).cxx_destruct;
@end
