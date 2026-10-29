@interface MMHeavyUserEvaluator : NSObject
{
    MMHeavyUserDataSource * m_dataSource; // +0x8
    unsigned long long m_contactCount; // +0x10
    unsigned long long m_sessionCount; // +0x18
    unsigned long long m_wechatSize; // +0x20
    unsigned long long m_yesterDayDumpCount; // +0x28
    double m_finderAEC; // +0x30
    double m_liveWatchRate; // +0x38
    NSObject<OS_dispatch_queue> * m_calQueue; // +0x40
    float m_pointStandard; // +0x48
    id <MMHeavyUserEvaluatorDelegate> _delegate; // +0x50
}
+ (float)p_getGaussianCDFWithMu:(float)arg1 withStd:(float)arg2 withValue:(float)arg3;
- (id)initWithDataSource:(id)arg1 withQueue:(id)arg2;
- (void)reevaluate;
- (unsigned long long)getHeavyUserPoint;
- (void)p_reloadData;
- (unsigned long long)p_evaluateHeavyUserPoint;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
