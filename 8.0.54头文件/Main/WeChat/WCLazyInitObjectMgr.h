@interface WCLazyInitObjectMgr : NSObject
{
    BOOL _bDelayLoad; // +0x8
    NSMutableArray * _lazyInitArray; // +0x10
    MMTimer * _refreshTimer; // +0x18
    double _currentTimeDis; // +0x20
    NSRecursiveLock * _threadLock; // +0x28
}
+ (id)sharedInstance;
- (id)init;
- (void)timeToInit;
- (void)destroyAllEvent;
- (void)triggerObjectToInit:(id)arg1;
- (void)addLazyInitObject:(id)arg1;
- (BOOL)isDelayLoad;
- (id)lazyInitArray;
- (void)setLazyInitArray:(id)arg1;
- (id)refreshTimer;
- (void)setRefreshTimer:(id)arg1;
- (double)currentTimeDis;
- (void)setCurrentTimeDis:(double)arg1;
- (BOOL)bDelayLoad;
- (void)setBDelayLoad:(BOOL)arg1;
- (id)threadLock;
- (void)setThreadLock:(id)arg1;
- (void).cxx_destruct;
@end

