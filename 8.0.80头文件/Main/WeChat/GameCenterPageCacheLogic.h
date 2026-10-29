@interface GameCenterPageCacheLogic : NSObject
+ (id)readPageCacheForUrl:(id)arg1;
+ (void)removePageCacheForPkgId:(id)arg1;
+ (void)markNeedDiscardPageCacheForWebView:(id)arg1;
+ (BOOL)needDiscardPageCacheForWebView:(id)arg1;
@end
