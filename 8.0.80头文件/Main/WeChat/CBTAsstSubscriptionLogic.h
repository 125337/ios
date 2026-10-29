@interface CBTAsstSubscriptionLogic : NSObject <MMActionNotifyCommBizExt, IMsgExt, IMMNewSessionMgrExt, MMKernelExt>
{
    BOOL m_hasTriggeredSync; // +0x8
}
- (void)setup;
- (void)teardown;
- (void)dealloc;
- (void)triggerSyncIfNeeded;
- (void)syncSubscriptionListAndReportRead;
- (BOOL)hasMiniTaskPageChat;
- (void)reportRead:(id)arg1;
- (void)reportReadForSubscribedSessions;
- (void)onAuthOK;
- (void)onManulLoginOK;
- (void)onGetBizId1:(long long)arg1 data:(id)arg2;
- (void)onActiveUsrNameChange:(id)arg1 curUsrName:(id)arg2;
- (BOOL)isSubscriptionRelatedChat:(id)arg1;
- (void)recordSessionEnterTime:(id)arg1;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (BOOL)isMessageAtMe:(id)arg1;
@end
