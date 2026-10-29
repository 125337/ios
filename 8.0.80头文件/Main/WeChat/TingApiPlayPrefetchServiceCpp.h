@interface TingApiPlayPrefetchServiceCpp : UnitRCObjcBaseProxyClass <TingApiPlayPrefetchService>
+ (id)sharedInstance;
- (BOOL)isEnablePrefetch;
- (void)preloadItemList:(id)arg1 scene:(int)arg2;
- (void)preloadItem:(id)arg1 scene:(int)arg2;
@end
