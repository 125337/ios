@interface WAPerformanceIndexObject : MMObject
{
    BOOL _isGame; // +0x8
    BOOL _shouldReport; // +0x9
    unsigned int _appVersion; // +0xc
    unsigned int _performanceIndexReportGap; // +0x10
    NSString * _instanceId; // +0x18
    NSString * _appid; // +0x20
    NSString * _username; // +0x28
    NSString * _nickname; // +0x30
    NSString * _libStringVersion; // +0x38
    NSMutableArray * _performanceIndexs; // +0x40
    MMTimer * _timer; // +0x48
    NSMutableDictionary * _sceneCountDic; // +0x50
}
- (id)initWithPerformanceIndexs:(id)arg1 shouldReport:(BOOL)arg2;
- (void)dealloc;
- (void)createPerformanceIndexs:(id)arg1;
- (void)setAppid:(id)arg1;
- (void)taskDidFinishColdLaunch;
- (void)taskDidEnterBackground;
- (void)taskDidEnterForeground;
- (void)taskDidEnterSuspend;
- (void)taskDidDie;
- (void)reportPerformanceIndexInScene:(unsigned long long)arg1;
- (void)recordRegisteredIndexesInScene:(unsigned long long)arg1;
- (void)onTimer;
- (void)releaseTimer;
- (id)instanceId;
- (void)setInstanceId:(id)arg1;
- (id)appid;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)nickname;
- (void)setNickname:(id)arg1;
- (unsigned int)appVersion;
- (void)setAppVersion:(unsigned int)arg1;
- (BOOL)isGame;
- (void)setIsGame:(BOOL)arg1;
- (id)libStringVersion;
- (void)setLibStringVersion:(id)arg1;
- (id)performanceIndexs;
- (void)setPerformanceIndexs:(id)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
- (id)sceneCountDic;
- (void)setSceneCountDic:(id)arg1;
- (unsigned int)performanceIndexReportGap;
- (void)setPerformanceIndexReportGap:(unsigned int)arg1;
- (BOOL)shouldReport;
- (void)setShouldReport:(BOOL)arg1;
- (void).cxx_destruct;
@end

