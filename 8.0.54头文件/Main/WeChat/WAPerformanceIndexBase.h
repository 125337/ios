@interface WAPerformanceIndexBase : MMObject
{
    unsigned int _recordedCount; // +0x8
    NSString * _appid; // +0x10
    unsigned long long _lastEnterForegroundIndexNum; // +0x18
    long long _veryFirstForegroundIncreaseNum; // +0x20
    long long _foregroundTotalIncreaseNum; // +0x28
    long long _lifeCycleTotalIncreaseNum; // +0x30
    unsigned long long _indexNumOnInit; // +0x38
    unsigned long long _currentAvgIndexNum; // +0x40
    unsigned long long _currentMaxIndexNum; // +0x48
}
- (id)init;
- (unsigned long long)getInitIndexNum;
- (void)recordIndex;
- (unsigned long long)getAvgIndexNum;
- (unsigned long long)getMaxIndexNum;
- (unsigned long long)getCurrentIndexNum;
- (unsigned int)getIndexType;
- (id)appid;
- (void)setAppid:(id)arg1;
- (unsigned int)recordedCount;
- (void)setRecordedCount:(unsigned int)arg1;
- (unsigned long long)lastEnterForegroundIndexNum;
- (void)setLastEnterForegroundIndexNum:(unsigned long long)arg1;
- (long long)veryFirstForegroundIncreaseNum;
- (void)setVeryFirstForegroundIncreaseNum:(long long)arg1;
- (long long)foregroundTotalIncreaseNum;
- (void)setForegroundTotalIncreaseNum:(long long)arg1;
- (long long)lifeCycleTotalIncreaseNum;
- (void)setLifeCycleTotalIncreaseNum:(long long)arg1;
- (unsigned long long)indexNumOnInit;
- (void)setIndexNumOnInit:(unsigned long long)arg1;
- (unsigned long long)currentAvgIndexNum;
- (void)setCurrentAvgIndexNum:(unsigned long long)arg1;
- (unsigned long long)currentMaxIndexNum;
- (void)setCurrentMaxIndexNum:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

