@interface MMHeavyUserClassifier : NSObject
{
    MMHeavyUserDataSource * m_dataSource; // +0x8
    unsigned long long m_contactCountStandard; // +0x10
    unsigned long long m_sessionCountStandard; // +0x18
    unsigned long long m_wechatSizeStandard; // +0x20
    double m_finderAECStandard; // +0x28
    double m_liveWatchRateStandard; // +0x30
    NSObject<OS_dispatch_queue> * m_calQueue; // +0x38
    id <MMHeavyUserClassifierDelegate> _delegate; // +0x40
}
+ (BOOL)isContactsType:(unsigned long long)arg1;
+ (BOOL)isSessionType:(unsigned long long)arg1;
+ (BOOL)isFileSpaceType:(unsigned long long)arg1;
+ (BOOL)isFinderType:(unsigned long long)arg1;
+ (BOOL)isLiveType:(unsigned long long)arg1;
- (id)initWithDataSource:(id)arg1 withQueue:(id)arg2;
- (BOOL)isHeavyUser;
- (unsigned long long)heavyUserType;
- (void)reclassify;
- (void)p_heavyUserTypeChange:(unsigned long long)arg1;
- (void)checkContactType;
- (void)checkSessionType;
- (void)checkFileSpaceType;
- (void)checkFinderType;
- (void)checkLiveType;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
