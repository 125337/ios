@interface MMFinderLiveCommentDataMgr : MMLiveCommentDataMgr
- (void)initData;
- (void)updateMaxCacheCommentCount;
- (unsigned long long)maxCommentCount:(id)arg1;
- (BOOL)checkNeedFilterSelf:(id)arg1 boxId:(id)arg2;
@end

