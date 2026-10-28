@interface TingMusicSquareDataServiceCpp : UnitRCObjcBaseProxyClass <TingMusicSquareDataService>
+ (id)sharedInstance;
- (BOOL)addListener:(id)arg1;
- (BOOL)removeListener:(id)arg1;
- (id)fetchData:(id)arg1;
- (void)stopFetching;
- (id)getSquareData;
- (int)getLoadingStatus;
- (void)updateSingleDiscoverItem:(id)arg1 line:(id)arg2;
- (id)getCachedData;
- (void)saveCachedData:(id)arg1;
- (id)myLineService;
- (void)onRefreshEvent:(id)arg1;
@end
