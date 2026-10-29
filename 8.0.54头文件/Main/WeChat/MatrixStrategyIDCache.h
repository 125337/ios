@interface MatrixStrategyIDCache : NSObject
{
    NSMutableDictionary * _strategyMap; // +0x8
    NSRecursiveLock * _idArrayLock; // +0x10
}
- (id)init;
- (void)dealloc;
- (void)didEnterBackground;
- (id)getStrategyObjectByName:(id)arg1;
- (void)addReportID:(id)arg1 forStrategy:(id)arg2;
- (id)getReportIDForStrategy:(id)arg1;
- (id)strategyMap;
- (void)setStrategyMap:(id)arg1;
- (id)idArrayLock;
- (void)setIdArrayLock:(id)arg1;
- (void).cxx_destruct;
@end

