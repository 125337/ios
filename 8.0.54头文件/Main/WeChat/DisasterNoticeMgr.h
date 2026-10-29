@interface DisasterNoticeMgr : MMRootService <PBMessageObserverDelegate, MMServiceProtocol>
{
    unsigned int m_gettingDisasterInfoNoticeId; // +0x8
    NSMutableDictionary * m_dicSvrErrorInfo; // +0x10
    unsigned int m_manualAuthNoticeId; // +0x18
    BOOL m_needContinueHandleAfterManualAuth; // +0x1c
    SvrErrorTipViewController * _fullScreenViewController; // +0x20
    unsigned long long m_lastFullScreenShowTime; // +0x28
}
+ (void)onManualAuthFinished;
- (void)makeSureInit;
- (void)removeExpireInfos;
- (void)SaveData;
- (void)continueAfterManualAuthFinished;
- (void)onNewDnsError:(id)arg1;
- (void)MainThreadNotifyOldIDCErrorMsg:(id)arg1;
- (void)onNewIDCErrorWithNoticeId:(unsigned int)arg1 uiCgi:(unsigned int)arg2;
- (void)MainThreadNotifyIDCErrorMsg:(unsigned int)arg1;
- (void)getDisasterInfo:(unsigned int)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleDisasterInfo:(id)arg1;
- (void)showFullScreenSvrErrorTip:(id)arg1 urlStr:(id)arg2 timeOut:(unsigned int)arg3;
- (void)OnGetLoginDisaster:(id)arg1 Tips:(id)arg2 Url:(id)arg3 isManualAuth:(BOOL)arg4;
- (void)OnGetSvrError:(id)arg1 Url:(id)arg2 Tips:(id)arg3;
- (void).cxx_destruct;
@end

