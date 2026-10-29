@interface TingMusicRecentLineMgrCpp : UnitRCObjcBaseProxyClass <TingMusicRecentLineMgr>
+ (id)sharedInstance;
- (BOOL)addListener:(id)arg1;
- (BOOL)removeListener:(id)arg1;
- (id)getRecentTapeInfoList;
- (void)appendRecentTapeInfo:(id)arg1;
- (void)deleteRecentTapeInfo:(id)arg1;
- (BOOL)checkUpdateRecentTapeInfoList:(BOOL)arg1;
- (void)updateWithRecommendInfo:(id)arg1;
- (BOOL)onCategoryItemUpdated:(id)arg1;
- (BOOL)updateTopTapInfo:(id)arg1 newInfo:(id)arg2;
@end

