@interface TingApiPlayPrefetchServiceCpp : UnitRCObjcBaseProxyClass <TingApiPlayPrefetchService>
+ (id)sharedInstance;
- (BOOL)isEnablePrefetch;
- (void)preloadItemList:(id)arg1 scene:(int)arg2;
- (void)preloadItemList:(id)arg1 scene:(int)arg2 checkSpam:(BOOL)arg3;
- (void)preloadItem:(id)arg1 scene:(int)arg2;
- (void)preloadItem:(id)arg1 scene:(int)arg2 checkSpam:(BOOL)arg3;
@end
