@interface TingObjcPlayCenterManagerCpp : TingApiPlayCenterManagerCpp <TingObjcPlayCenterManager>
+ (id)sharedInstance;
- (void)addListener:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)onManagerInit:(id /* block */)arg1;
- (void)onManagerClearData:(id /* block */)arg1;
- (void)onCategoryItemUpdated:(id)arg1 callback:(id /* block */)arg2;
- (void)applyTapePlayingInfo:(id)arg1 callback:(id /* block */)arg2;
- (void)updateCurTapePlayingInfo:(id)arg1 playingInfo:(id)arg2 callback:(id /* block */)arg3;
- (void)getRecentTapeInfoList:(id /* block */)arg1;
- (id)getRecentTapeInfoListSync;
- (void)checkUpdateRecentTapeInfoList:(id /* block */)arg1;
- (void)callDeleteRecentTapeInfo:(unsigned long long)arg1 tapeId:(id)arg2 callback:(id /* block */)arg3;
- (void)deleteRecentTapeInfo:(id)arg1 callback:(id /* block */)arg2;
- (void)clearLastTapePlayingInfo:(id /* block */)arg1;
- (void)getLastTapePlayingInfo:(id /* block */)arg1;
- (id)getLastCategoryTapePlayingInfoSync;
- (void)getLastCategoryTapePlayingInfo:(id /* block */)arg1;
- (id)getPreviousTapePlayingInfoSync;
- (void)getPreviousTapePlayingInfo:(id /* block */)arg1;
- (id)getContiniousTapePlayingInfoSync:(id)arg1;
- (void)getContiniousTapePlayingInfo:(id)arg1 callback:(id /* block */)arg2;
- (void)getLastPlayingInfoStatus:(id)arg1 callback:(id /* block */)arg2;
- (id)getDefaultRecommendCategoryItemSync;
@end
