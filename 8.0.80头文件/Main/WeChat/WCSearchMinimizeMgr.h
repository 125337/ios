@interface WCSearchMinimizeMgr : MMUserService <IMinimizeTaskDelegateInterface, MMServiceProtocol>
{
    NSRecursiveLock * _lock; // +0x8
    OrderedDictionary * _seachVcDic; // +0x10
    NSMutableDictionary * _searchVcKeepAliveCheckDic; // +0x18
}
- (void)addMinimizeTaskWithNSDictionary:(id)arg1 fromVC:(id)arg2 animationViewImage:(id)arg3 fromViewFrame:(CGRect)arg4;
- (BOOL)tryAddMinimizeTask:(id)arg1;
- (void)removeMinimizeTaskWithNSDictionary:(id)arg1;
- (id)generateOneTaskDataWithNSDictionary:(id)arg1;
- (BOOL)onEnterMinimizedTask:(id)arg1 openContext:(id)arg2 taskEnterScene:(unsigned int)arg3;
- (void)onRemoveMinimizedTask:(id)arg1;
- (id)getMinimizeViewControllerWithKey:(id)arg1;
- (void)addMinimizeViewController:(id)arg1 forKey:(id)arg2;
- (void)removeMinimizeViewControllerWithKey:(id)arg1;
- (void)makeSureReleaseKeepAliveVC:(id)arg1;
- (long long)keepAliveMaxCount;
- (void)onServiceInit;
- (void)onServiceEnterBackground;
- (void)onMemoryWarning:(id)arg1;
- (id)lock;
- (void)setLock:(id)arg1;
- (id)seachVcDic;
- (void)setSeachVcDic:(id)arg1;
- (id)searchVcKeepAliveCheckDic;
- (void)setSearchVcKeepAliveCheckDic:(id)arg1;
- (void).cxx_destruct;
@end
