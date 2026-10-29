@interface WCAccountControlMgr : MMUserService <MMKernelExt, MMAuthServiceExt, WCAccountAutoLoginControlLogicDelegate, WCAccountCloseMainFrameLogicDelegate, IExptServiceExt, MMServiceProtocol>
{
    NSString * m_reportClientID; // +0x8
    WCAccountAutoLoginControlLogic * m_autoLoginLogic; // +0x10
    BOOL m_isAutoLoginRequiring; // +0x18
    WCAccountSwitchLogic * m_switchLogic; // +0x20
    WCAccountCloseMainFrameLogic * m_closeMainFrameLogic; // +0x28
    id /* block */ m_quitCompleteBlock; // +0x30
    BOOL _m_isInMainFrame; // +0x38
    BOOL _m_isLogin; // +0x39
    BOOL _m_isAutoLoginMode; // +0x3a
    BOOL _m_isMainHostDisaster; // +0x3b
    BOOL _m_needAuthAgainForUpdateInfo; // +0x3c
    WCAccountSignHelper * m_signHelper; // +0x40
    unsigned long long _m_lastmakesuretime; // +0x48
    unsigned long long _m_lastAuthFinishTime; // +0x50
}
- (id)init;
- (void)inheritFromAccountControlMgrForGuest:(id)arg1;
- (BOOL)isInSwitchView;
- (BOOL)isSupportPureOfflineMigration;
- (id)getReportClientID;
- (void)resetReportClientID;
- (void)startManualAuth;
- (id)getLoginUserInfos;
- (void)updateLastLoginInfo:(id)arg1;
- (void)updateLastLoginInfo:(id)arg1 fromSwitch:(BOOL)arg2;
- (void)deleteLoginInfo:(id)arg1;
- (id)getCurrentLoginInfo;
- (void)reportSwitchAccountWithOpCode:(unsigned int)arg1 userName:(id)arg2;
- (BOOL)isLogoutSwitch;
- (void)startAutoAuth;
- (BOOL)isLogin;
- (void)resetLastAuthTime;
- (BOOL)makeSureAuthWithHost:(id)arg1;
- (void)onSessionTimeout;
- (void)onNotifyDisasterNode:(id)arg1;
- (void)quitLogin;
- (void)logoutCurrentAccount:(id /* block */)arg1;
- (void)setSwitchLogin:(id)arg1;
- (void)deleteAccountSuccess;
- (void)makeAutoAuthForUpdateInfo;
- (void)makeAutoAuth;
- (void)onCloseMainFrameWithoutStop;
- (id)signHelper;
- (void)setSignHelper:(id)arg1;
- (id)pubKeyInfoAfterUpdateForCgiName:(id)arg1;
- (id)pubKeyInfoWithoutUpdate;
- (id)ecdsaSignWithData:(id)arg1;
- (void)tryTestEcdsaSign;
- (void)doTestEcdsaSignCgi;
- (void)onWCAccountCloseMainFrameLogicDone;
- (void)startCloseMainFrame:(unsigned int)arg1;
- (void)onWCAccountAutoLoginControlLogicStop:(unsigned long long)arg1;
- (void)onPreQuit;
- (void)onManulLoginOK;
- (void)onAuthOK;
- (void)onAxTicketExpiredWithNeedRetryAuth;
- (void)onExptItemListChange;
- (BOOL)m_isInMainFrame;
- (void)setM_isInMainFrame:(BOOL)arg1;
- (BOOL)m_isLogin;
- (void)setM_isLogin:(BOOL)arg1;
- (BOOL)m_isAutoLoginMode;
- (void)setM_isAutoLoginMode:(BOOL)arg1;
- (BOOL)m_isMainHostDisaster;
- (void)setM_isMainHostDisaster:(BOOL)arg1;
- (unsigned long long)m_lastmakesuretime;
- (void)setM_lastmakesuretime:(unsigned long long)arg1;
- (unsigned long long)m_lastAuthFinishTime;
- (void)setM_lastAuthFinishTime:(unsigned long long)arg1;
- (BOOL)m_needAuthAgainForUpdateInfo;
- (void)setM_needAuthAgainForUpdateInfo:(BOOL)arg1;
- (void).cxx_destruct;
@end
