@interface LVCacheManager : NSObject
{
    LVMainFeedViewController * _currentVC; // +0x8
}
- (id)init;
- (void)dealloc;
- (void)addPageInstanceToCache:(id)arg1;
- (void)removePageInstanceFromCache;
- (id)getPageInstanceFromCache;
- (void)onSurviveEnd;
- (void)receiveMemoryWarning:(id)arg1;
- (id)currentVC;
- (void)setCurrentVC:(id)arg1;
- (void).cxx_destruct;
@end

