@interface WCFinderFriendLikeFoldedViewModel : WCFinderFullFeedCommonViewModel
{
    BOOL _didFetchEnterData; // +0x8
    BOOL _shouldRecordEnterIndexPath; // +0x9
    WCFinderFullFeedCommonViewModel * _parentFeedVM; // +0x10
    FinderObjectPlaceHolderInfo * _placeHolderInfo; // +0x18
    NSIndexPath * _enterIndexPath; // +0x20
}
- (id)init;
- (long long)firstFeedNum;
- (int)tabType;
- (unsigned long long)sectionNums;
- (unsigned long long)rowNumsWithSection:(unsigned long long)arg1;
- (id)vaildTopIndexPath;
- (void)appendFinderContentVM:(id)arg1;
- (void)changeFirstItemToMuteBeforeRefresh;
- (id)streamLoadingInfoByExitVC;
- (void)loadingFirstPageData;
- (BOOL)hasFetchEnterData;
- (void)refreshLatestDataByEnter:(BOOL)arg1;
- (void)clearDataByServerRequestWithHasNewFeed:(BOOL)arg1 cleanDataOnly:(BOOL)arg2;
- (id)processServerData:(id)arg1;
- (void)stopAllPreloadVideoItems;
- (void)startPreloadVideoItemsWithContentVMArray:(id)arg1 playedContentVMArray:(id)arg2;
- (void)loadingNextPagePageData;
- (void)updateTimelineCachePageWithTid:(id)arg1;
- (id)firstPrefetchDataItem;
- (void)deleteAllFeedAfterTid:(id)arg1;
- (void)markShouldRecordEnterIndexPath;
- (void)recordEnterIndexPathIfNeeded;
- (void)stopPreloadVideoItem:(id)arg1;
- (void)insertFinderEnhanceContentVM:(id)arg1 location:(unsigned long long)arg2;
- (void)removeFinderContentVMWithTid:(id)arg1;
- (void)deleteAndCollectAllUnreadItems;
- (void)clearUnreadCacheContentVMs;
- (void)updateExposureStatusOfContentVM:(id)arg1;
- (void)loadInitialData;
- (void)loadNextPage;
- (int)feedViewControllerScene;
- (void)fetchStreamWithPullType:(unsigned long long)arg1;
- (BOOL)isValidServerDataItem:(id)arg1;
- (void)replaceAllDataWithContentVMs:(id)arg1;
- (void)clearAllDataItemsAndTids;
- (id)parentFeedVM;
- (void)setParentFeedVM:(id)arg1;
- (id)placeHolderInfo;
- (void)setPlaceHolderInfo:(id)arg1;
- (BOOL)didFetchEnterData;
- (void)setDidFetchEnterData:(BOOL)arg1;
- (BOOL)shouldRecordEnterIndexPath;
- (void)setShouldRecordEnterIndexPath:(BOOL)arg1;
- (id)enterIndexPath;
- (void)setEnterIndexPath:(id)arg1;
- (void).cxx_destruct;
@end
