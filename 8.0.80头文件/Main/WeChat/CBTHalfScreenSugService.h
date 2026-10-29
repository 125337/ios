@interface CBTHalfScreenSugService : NSObject
+ (id)shareInstance;
+ (void)getSugUiState:(int *)arg1 shareType:(int *)arg2 forRouteType:(long long)arg3;
- (id)syncSugForUiState:(int)arg1 shareType:(int)arg2;
- (id)syncSugForRouteType:(long long)arg1;
- (id)sugByExperiment:(id)arg1 uiState:(int)arg2 shareType:(int)arg3;
- (long long)currentSugExperimentType;
- (id)cachedSugEntryForUiState:(int)arg1 shareType:(int)arg2;
- (id)extractSugEntryFromResp:(id)arg1 uiState:(int)arg2 shareType:(int)arg3;
- (void)fetchAllSugs:(id /* block */)arg1;
- (void)preloadAllSugs;
- (void)clearCache;
@end
