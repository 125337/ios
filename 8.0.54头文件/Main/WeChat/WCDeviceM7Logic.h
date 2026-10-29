@interface WCDeviceM7Logic : MMObject
{
    id <WCDeviceM7LogicDelegate> _delegate; // +0x8
    BOOL m_bStepGetting; // +0x10
    BOOL m_bHadGetHKStep; // +0x11
    BOOL m_bHadGetM7Step; // +0x12
    WCDeviceStepObject * m_oStepObject; // +0x18
    BOOL m_bHadObserverQuery; // +0x20
    BOOL m_bForceUploadSteps; // +0x21
    int m_lastGetStepTime; // +0x24
    BOOL m_bHKAuthorized; // +0x28
    BOOL m_bDataChanged; // +0x29
    NSMutableArray * m_aryWhiteList; // +0x30
    double _reportRandom; // +0x38
    CMPedometer * _cmPedometer; // +0x40
    HKHealthStore * _healthStore; // +0x48
    HKObserverQuery * _observerQuery; // +0x50
}
- (id)init;
- (void)dealloc;
- (id)cmPedometer;
- (void)updateSampleSourceList:(id)arg1;
- (void)uploadYesterdayStep;
- (void)retryUploadYesterdayStep;
- (BOOL)p_canTryUploadStepCount;
- (BOOL)getM7OrHealthKitStepCount:(BOOL)arg1;
- (BOOL)canUploadM7StepCount;
- (void)updateHealthStoreData;
- (void)tryDoObserverStepQuery;
- (int)getStepFromHealthKit;
- (id)hkSource2ClientSource:(id)arg1;
- (BOOL)isInWhiteList:(id)arg1;
- (void)getStepCount:(id)arg1;
- (int)getCurrM7StepCount;
- (BOOL)getHKAuthorizationStatus;
- (void)setHealthKitAuthorized:(BOOL)arg1;
- (void)checkCallDelegate;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)m_aryWhiteList;
- (void)setM_aryWhiteList:(id)arg1;
- (BOOL)m_bDataChanged;
- (void)setM_bDataChanged:(BOOL)arg1;
- (double)reportRandom;
- (void)setReportRandom:(double)arg1;
- (void)setCmPedometer:(id)arg1;
- (id)healthStore;
- (void)setHealthStore:(id)arg1;
- (id)observerQuery;
- (void)setObserverQuery:(id)arg1;
- (void).cxx_destruct;
@end

