@interface WCAdWebStorePreloadMgr : MMObject
{
    NSRecursiveLock * _preloadLock; // +0x8
    NSMutableArray * _timelineAdInfoList; // +0x10
    NSMutableDictionary * _preloadingWebStoreDict; // +0x18
    NSMutableDictionary * _preloadedWebStoreDict; // +0x20
    NSMutableDictionary * _weAppPreloadWebStoreDict; // +0x28
}
+ (id)sharedInstance;
- (id)init;
- (void)dealloc;
- (void)onApplicationDidReceiveMemoryWarning:(id)arg1;
- (BOOL)preloadWebStoreWithUrl:(id)arg1 skAdItem:(id)arg2;
- (void)updatePreloadCacheWithKey:(id)arg1 productVC:(id)arg2 resule:(BOOL)arg3 error:(id)arg4;
- (void)removeWebStoreWithUrl:(id)arg1 skAdItem:(id)arg2;
- (id)fetchWebStoreWithUrl:(id)arg1 skAdItem:(id)arg2;
- (void)preloadWebStoreForCanvasWithAdInfo:(id)arg1;
- (void)removeWebStoreForCanvasWithAdInfo:(id)arg1;
- (void)preloadWebStoreForTimelineWithAdInfo:(id)arg1;
- (void)removeWebStoreForTimelineWithAdInfo:(id)arg1;
- (void)preloadWebStoresForTimeline;
- (void)cleanUpWebStoreCache;
- (void)preloadWebStoreForWeAppWithUrl:(id)arg1 skAdItem:(id)arg2 appId:(id)arg3;
- (void)removeWebStoreForWeAppWithUrl:(id)arg1 skAdItem:(id)arg2;
- (void)removeWebStoreForWeAppWithAppId:(id)arg1;
- (id)generateKeyWithUrl:(id)arg1 skAdItem:(id)arg2;
- (id)preloadLock;
- (void)setPreloadLock:(id)arg1;
- (id)timelineAdInfoList;
- (void)setTimelineAdInfoList:(id)arg1;
- (id)preloadingWebStoreDict;
- (void)setPreloadingWebStoreDict:(id)arg1;
- (id)preloadedWebStoreDict;
- (void)setPreloadedWebStoreDict:(id)arg1;
- (id)weAppPreloadWebStoreDict;
- (void)setWeAppPreloadWebStoreDict:(id)arg1;
- (void).cxx_destruct;
@end

