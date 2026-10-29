@interface MMHeavyUserMonitorMgr : MMUserService <MMHeavyUserDataSourceDelegate, MMHeavyUserClassifierDelegate, MMHeavyUserEvaluatorDelegate, MMStackReportConnectionDelegate, IDiskUsageMgr, MMServiceProtocol>
{
    unsigned long long m_uiHeavyUserType; // +0x8
    MMStackReportConnection * m_customInfoReporter; // +0x10
    unsigned long long m_contactCount; // +0x18
    unsigned long long m_sessionCount; // +0x20
    unsigned long long m_wechatSize; // +0x28
    NSObject<OS_dispatch_queue> * m_heavyUsrQueue; // +0x30
    MMHeavyUserDataSource * _heavyUserDataSource; // +0x38
    MMHeavyUserClassifier * _heavyUserClassifier; // +0x40
    MMHeavyUserEvaluator * _heavyUserEvaluator; // +0x48
}
+ (id)getHeavyUserInfoPath;
- (id)init;
- (void)onServiceInit;
- (void)onServiceEnterBackground;
- (void)startCheckDiskSize;
- (void)onDiskUsageMgrFinishOneScan:(id)arg1;
- (void)p_checkFirstReport;
- (id)getHeavyUserDataSource;
- (void)updateSessionCount:(unsigned long long)arg1;
- (void)updateContactCount:(unsigned long long)arg1;
- (void)updateWechatSize:(unsigned long long)arg1;
- (void)addDumpCount;
- (void)updateFinderAEC:(double)arg1;
- (void)updateLiveTime:(unsigned long long)arg1;
- (void)clearCache;
- (void)onHeavyUserDataUpdate;
- (void)onHeavyUserTypeChange:(unsigned long long)arg1;
- (void)p_reportHeavyUserSubtype:(unsigned long long)arg1;
- (void)p_reportToMMTestWithHeavyUserType:(unsigned long long)arg1;
- (void)p_updateIDKeySetting:(unsigned long long)arg1;
- (void)onHeavyUserPointChange:(unsigned long long)arg1;
- (void)onStackReportCompleted:(BOOL)arg1;
- (id)heavyUserDataSource;
- (void)setHeavyUserDataSource:(id)arg1;
- (id)heavyUserClassifier;
- (void)setHeavyUserClassifier:(id)arg1;
- (id)heavyUserEvaluator;
- (void)setHeavyUserEvaluator:(id)arg1;
- (void).cxx_destruct;
@end
