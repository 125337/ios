@interface WCFinderDynamicFriendTabViewModel : WCFinderFullFeedCommonViewModel
{
    BOOL _usesEntranceData; // +0x8
    BOOL _didFetchEnterData; // +0x9
    BOOL _shouldRecordEnterIndexPath; // +0xa
    BOOL _didConsumeEntryRedDot; // +0xb
    unsigned int _tabId; // +0xc
    int _commentScene; // +0x10
    NSString * _tabName; // +0x18
    NSString * _enterDataReportID; // +0x20
    unsigned long long _guideBarObjectId; // +0x28
    WCFinderOpenTimelineParams * _openTimelineParams; // +0x30
    NSIndexPath * _enterIndexPath; // +0x38
    NSData * _cardBuffer; // +0x40
    WCFinderRedDotCtrlInfo * _appendRedDotCtrlInfo; // +0x48
    unsigned long long _requestingPullType; // +0x50
}
- (id)initWithTabId:(unsigned int)arg1 tabName:(id)arg2 commentScene:(int)arg3 usesEntranceData:(BOOL)arg4;
- (void)dealloc;
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
- (void)addFavRelateActionWithContentVM:(id)arg1 relateActionType:(unsigned long long)arg2;
- (void)appendEnterContentVM:(id)arg1 dataItems:(id)arg2 cardBuffer:(id)arg3 appendRedDotCtrlInfo:(id)arg4;
- (int)feedViewControllerScene;
- (void)fetchStreamWithPullType:(unsigned long long)arg1;
- (void)consumeEntryRedDotIfNeeded;
- (void)replaceAllDataWithContentVMs:(id)arg1;
- (void)clearAllDataItemsAndTids;
- (unsigned int)tabId;
- (void)setTabId:(unsigned int)arg1;
- (id)tabName;
- (void)setTabName:(id)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (BOOL)usesEntranceData;
- (void)setUsesEntranceData:(BOOL)arg1;
- (id)enterDataReportID;
- (void)setEnterDataReportID:(id)arg1;
- (unsigned long long)guideBarObjectId;
- (void)setGuideBarObjectId:(unsigned long long)arg1;
- (id)openTimelineParams;
- (void)setOpenTimelineParams:(id)arg1;
- (BOOL)didFetchEnterData;
- (void)setDidFetchEnterData:(BOOL)arg1;
- (BOOL)shouldRecordEnterIndexPath;
- (void)setShouldRecordEnterIndexPath:(BOOL)arg1;
- (id)enterIndexPath;
- (void)setEnterIndexPath:(id)arg1;
- (id)cardBuffer;
- (void)setCardBuffer:(id)arg1;
- (id)appendRedDotCtrlInfo;
- (void)setAppendRedDotCtrlInfo:(id)arg1;
- (BOOL)didConsumeEntryRedDot;
- (void)setDidConsumeEntryRedDot:(BOOL)arg1;
- (unsigned long long)requestingPullType;
- (void)setRequestingPullType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
