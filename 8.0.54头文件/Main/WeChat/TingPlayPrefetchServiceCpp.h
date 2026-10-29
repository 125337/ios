@interface TingPlayPrefetchServiceCpp : UnitRCObjcBaseProxyClass <TingPlayPrefetchService>
+ (id)sharedInstance;
- (BOOL)isEnablePrefetch;
- (void)onExposedWithItemList:(id)arg1 scene:(int)arg2;
- (void)onExposedWithItem:(id)arg1 scene:(int)arg2 index:(int)arg3;
- (void)doPrefetchPlayUrlAndCheckSpamForTingItem:(id)arg1 scene:(int)arg2;
@end

