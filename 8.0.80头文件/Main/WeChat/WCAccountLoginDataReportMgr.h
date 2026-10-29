@interface WCAccountLoginDataReportMgr : MMRootService <MMServiceProtocol>
{
    unsigned long long[9] _switchCostTimestamps; // +0x8
    BOOL _m_switchCostTrackingActive; // +0x50
    unsigned long long _m_loginStartTime; // +0x58
    WCAccountLoginReportData * _reportData; // +0x60
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)updateLoginSessionId:(BOOL)arg1;
- (void)clearLoginSessionId;
- (void)clearLoginPageSessionId;
- (void)updateLoginMethod:(unsigned long long)arg1;
- (id)generateSessionId;
- (id)getLoginPageSessionId;
- (id)getStayTimeMs;
- (id)getReportParams:(unsigned long long)arg1;
- (void)reportLoginSuccess:(unsigned long long)arg1;
- (void)initViewReport:(id)arg1 viewID:(id)arg2 pageOaType:(unsigned long long)arg3;
- (void)reportSheetItemEvent:(id)arg1 viewID:(id)arg2 pageOaType:(unsigned long long)arg3;
- (void)reportLoginAccountClk:(unsigned long long)arg1;
- (void)reportLogicPageInOut:(BOOL)arg1 pageOaType:(unsigned long long)arg2;
- (void)reportCustomItemClick:(id)arg1 pageOaType:(unsigned long long)arg2;
- (void)reportLogoutDialogExp;
- (void)reportLoginEntryClick:(unsigned long long)arg1;
- (void)reportSyncMsgLoginEvent:(BOOL)arg1;
- (void)reportSelectSyncMsgEvent:(BOOL)arg1;
- (void)reportLoginRequestEvent:(unsigned long long)arg1;
- (void)reportLoginFail:(unsigned long long)arg1 errReturnCode:(long long)arg2 inputUsername:(id)arg3 selfShowUsername:(id)arg4;
- (void)beginSwitchCostTracking;
- (void)markSwitchCostMilestone:(unsigned long long)arg1;
- (void)reportSwitchAccountCost:(BOOL)arg1;
- (unsigned long long)m_loginStartTime;
- (void)setM_loginStartTime:(unsigned long long)arg1;
- (id)reportData;
- (void)setReportData:(id)arg1;
- (BOOL)m_switchCostTrackingActive;
- (void)setM_switchCostTrackingActive:(BOOL)arg1;
- (void).cxx_destruct;
@end
