@interface TingPlayListCpp : UnitRCObjcBaseProxyClass <TingPlayList>
- (id)getPlayTaskService;
- (id)getRecommendListSource;
- (void)setPlayTaskService:(id)arg1;
- (void)setPlayTaskServiceAsync:(id)arg1 callback:(id /* block */)arg2;
- (void)updateRecommendListSource:(id)arg1;
- (int)getPlaylistCount;
- (id)getPlaylistItem:(int)arg1;
- (BOOL)moveToFirst:(id)arg1;
- (void)clear;
- (BOOL)getRandomPlaylist;
- (void)setRandomPlaylist:(BOOL)arg1;
- (void)setShuffled:(BOOL)arg1 topClientId:(id)arg2;
- (id)getItems;
- (void)addPlayListListener:(id)arg1;
- (void)removePlayListListener:(id)arg1;
- (void)addRecommendListListener:(id)arg1;
- (void)removeRecommendListListener:(id)arg1;
- (id)getRecommendCategoryFeed;
- (id)getRecommendTaskServiceList;
- (void)setEnableRecommendListSource:(BOOL)arg1;
- (BOOL)getEnableRecommendListSource;
@end

