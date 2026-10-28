@interface WCFinderTLCityViewModel : WCFinderFullFeedCommonViewModel <WCFinderDataItemExt, WCFinderPostingCommentExt, WCFinderFeedContentVMExt, WCFinderLiveExt, WCFinderContactExt, WCFinderContactCommonExt, WCFinderStreamPrefetchExt>
{
    BOOL _hasProcessLocalData; // +0x8
    BOOL _hasFetchEnterData; // +0x9
    BOOL _isFetchingLocalFeed; // +0xa
    BOOL _showPrivateMSGTips; // +0xb
    BOOL _showFriendCommentSpread; // +0xc
    BOOL _isByFindPage; // +0xd
    BOOL _lastForegoundGPSAuthorizeState; // +0xe
    BOOL _hasFetchAuthority; // +0xf
    BOOL _pullEnterIsEmpty; // +0x10
    BOOL _needCleanData; // +0x11
    BOOL _shouldRecordEnterIndexPath; // +0x12
    BOOL _isFetchLivingStream; // +0x13
    BOOL _enterFeedByAppend; // +0x14
    WCFinderFeedLayoutContentVM * _livingLayout; // +0x18
    NSArray * _commentFailTidArray; // +0x20
    NSString * _enterDataReportID; // +0x28
    NSIndexPath * _enterIndexPath; // +0x30
    NSMutableDictionary * _loadingReportDict; // +0x38
    unsigned long long _guideBarObjectId; // +0x40
    WCFinderOpenTimelineParams * _openTimelineParams; // +0x48
    NSMutableArray * _topObjects; // +0x50
    unsigned long long _commentFailTidCount; // +0x58
    NSMutableArray * _serverFetchTasks; // +0x60
    WCFinderAbstractTask * _currentServerFetchTask; // +0x68
    NSString * _historyLabelText; // +0x70
    NSArray * _streamDataArray; // +0x78
    unsigned long long _historyType; // +0x80
    long long _friendLikeSplitIndex; // +0x88
    FinderStreamLayoutInfo * _streamLayoutInfo; // +0x90
    WCFinderFeedLayoutContentVM * _displayContentColumnCard; // +0x98
    WCFinderFeedLayoutContentVM * _preloadContentColumnCard; // +0xa0
    NSMutableSet * _fetchNextPageStreamCards; // +0xa8
    NSMutableArray * _preloadArray; // +0xb0
    NSMutableArray * _previewJumpArray; // +0xb8
    NSData * _cardBuffer; // +0xc0
    WCFinderRedDotCtrlInfo * _appendRedDotCtrlInfo; // +0xc8
    FinderRelatedRecommendTips * _relatedRecommendTips; // +0xd0
    unsigned long long _topRefreshCount; // +0xd8
    unsigned long long _lastFetchLbsTimeStamp; // +0xe0
}
- (id)init;
- (void)dealloc;
- (void)markShouldRecordEnterIndexPath;
- (void)recordEnterIndexPathIfNeeded;
- (id)loadingReportDict;
- (id)fetchNextPageStreamCards;
- (void)updateFailPostComment;
- (id)getCurCommentFailTidArray;
- (unsigned long long)sectionNums;
- (id)filterDataItemArray:(id)arg1;
- (id)processServerData:(id)arg1;
- (void)clearDataByServerRequestWithHasNewFeed:(BOOL)arg1;
- (id)getUnreadDataItems;
- (id)addStatsFeedArray;
- (void)loadingLocalData;
- (void)checkCacheDataIsValid:(id)arg1;
- (BOOL)enableUseCityTab;
- (id)getLocalCacheContentVMs;
- (void)loadingFirstPageData;
- (void)loadingNextPagePageData;
- (BOOL)shouldStopFetchNextPageByFooter;
- (id)getLbsStreamLocation;
- (BOOL)isFetchFinderAuthority;
- (void)triggerLbsPrefetchStream;
- (void)loadingNextStreamFeedPage;
- (id)firstPrefetchDataItem;
- (id)getHotTabLastBuff;
- (BOOL)hotTabNeedTopRefresh;
- (void)checkGPSUpdateDuration;
- (void)pullToRefreshWithPullType:(unsigned long long)arg1;
- (BOOL)preserveLocalContentVMs:(unsigned long long)arg1;
- (void)resetFirstItemSilentToNo:(unsigned long long)arg1;
- (void)preformNextServerFetchTasks;
- (void)checkServerFetchTasks;
- (void)refreshLatestDataByEnter:(BOOL)arg1;
- (void)fetchFirstPageData;
- (id)allPreviewJumpArray;
- (BOOL)shouldShowMoreHotContentCell;
- (long long)firstFeedNum;
- (int)tabType;
- (unsigned long long)rowNumsWithSection:(unsigned long long)arg1;
- (id)vaildTopIndexPath;
- (void)clearAllContentVMLayoutCache;
- (void)changeFirstItemToMuteBeforeRefresh;
- (id)allLiveDataSource;
- (void)setLivingLayout:(id)arg1;
- (void)appendEnterContentVM:(id)arg1 dataItems:(id)arg2 cardBuffer:(id)arg3 appendRedDotCtrlInfo:(id)arg4;
- (void)appendFinderContentVM:(id)arg1;
- (void)insertContentVM:(id)arg1 toIndex:(long long)arg2;
- (void)bindFeedWidgetInfoWithStreamLayoutInfo:(id)arg1 dataItemArray:(id)arg2;
- (void)bindJumpFeedWidgetInfoWithStreamLayoutInfo:(id)arg1 dataItemArray:(id)arg2;
- (void)addDividerWithStreamLayoutInfo:(id)arg1 contentVMArray:(id)arg2;
- (BOOL)checkLivingStreamLayoutInfo:(id)arg1;
- (id)transformFinderItemToContentVM:(id)arg1 isHistoryData:(BOOL)arg2;
- (void)contentUnlikeFeedback:(id)arg1;
- (void)startPreloadVideoItemsWithContentVMArray:(id)arg1 playedContentVMArray:(id)arg2;
- (void)stopPreloadVideoItem:(id)arg1;
- (void)stopAllPreloadVideoItems;
- (id)streamLoadingInfoByExitVC;
- (void)addFavRelateActionWithContentVM:(id)arg1 relateActionType:(unsigned long long)arg2;
- (void)fetchMoreLivingList;
- (void)updateTimelineCachePageWithTid:(id)arg1;
- (void)removeFinderContentVMWithTid:(id)arg1;
- (void)insertFinderEnhanceContentVM:(id)arg1 location:(unsigned long long)arg2;
- (void)deleteAndCollectAllUnreadItems;
- (void)clearUnreadCacheContentVMs;
- (void)reloadNoMoreDataWithPullType:(unsigned long long)arg1;
- (void)reloadErrorPageWithPullType:(unsigned long long)arg1;
- (id)partialExposedObjectId;
- (BOOL)noMoreData;
- (void)finishFetchDataSuccessful:(BOOL)arg1;
- (long long)convertToFluencyStartScene:(unsigned long long)arg1;
- (void)onFinderDataItemDelete:(id)arg1;
- (void)onFinderDataItemDeleteBySpamList:(id)arg1;
- (void)onFinderDataItemDeleteFromScene:(int)arg1 tid:(id)arg2 toastWording:(id)arg3;
- (void)onFinderDataItemDeleteByUserPageMergeWithTidList:(id)arg1;
- (void)onFinderDataItemCleanBySecurityUpgrade;
- (void)onFinderDataCacheHasBeCleaned;
- (BOOL)hasFetchEnterData;
- (void)onFinderDataItemPostingCommentCountUpdate;
- (int)feedViewControllerScene;
- (void)updateExposureStatusOfContentVM:(id)arg1;
- (void)finderStreamPrefetchFinishedWithTabType:(int)arg1;
- (void)onFeedContentFoldInfoChange:(id)arg1 scene:(int)arg2;
- (void)onFinderLiveCloseWithTid:(id)arg1;
- (void)onFinderContactRefuseListAdded:(id)arg1 wxUsernames:(id)arg2;
- (void)replaceStreamCard:(id)arg1 withNewCard:(id)arg2;
- (void)preloadLayoutContentVMNextColumn:(id)arg1;
- (void)finishFetchNextCardForVM:(id)arg1 newCardVM:(id)arg2;
- (void)loadCardFirstScreenContent:(id)arg1;
- (void)finishLoadCardFirstScreenContent:(id)arg1;
- (BOOL)shouldShowGuideNextBubbleCurProgress:(double)arg1;
- (id)getRecommendTips;
- (void)resetRecommendTips;
- (void)reportTopRefreshActionWithLastStayFeedID:(id)arg1 mode:(unsigned long long)arg2 progress:(unsigned long long)arg3;
- (void)deleteAllFeedAfterTid:(id)arg1;
- (id)livingLayout;
- (id)commentFailTidArray;
- (void)setCommentFailTidArray:(id)arg1;
- (BOOL)hasProcessLocalData;
- (void)setHasProcessLocalData:(BOOL)arg1;
- (void)setHasFetchEnterData:(BOOL)arg1;
- (id)enterDataReportID;
- (void)setEnterDataReportID:(id)arg1;
- (id)enterIndexPath;
- (void)setEnterIndexPath:(id)arg1;
- (BOOL)isFetchingLocalFeed;
- (void)setIsFetchingLocalFeed:(BOOL)arg1;
- (BOOL)showPrivateMSGTips;
- (void)setLoadingReportDict:(id)arg1;
- (BOOL)showFriendCommentSpread;
- (unsigned long long)guideBarObjectId;
- (void)setGuideBarObjectId:(unsigned long long)arg1;
- (id)openTimelineParams;
- (void)setOpenTimelineParams:(id)arg1;
- (id)topObjects;
- (void)setTopObjects:(id)arg1;
- (BOOL)isByFindPage;
- (void)setIsByFindPage:(BOOL)arg1;
- (BOOL)lastForegoundGPSAuthorizeState;
- (void)setLastForegoundGPSAuthorizeState:(BOOL)arg1;
- (BOOL)hasFetchAuthority;
- (void)setHasFetchAuthority:(BOOL)arg1;
- (unsigned long long)commentFailTidCount;
- (void)setCommentFailTidCount:(unsigned long long)arg1;
- (id)serverFetchTasks;
- (void)setServerFetchTasks:(id)arg1;
- (id)currentServerFetchTask;
- (void)setCurrentServerFetchTask:(id)arg1;
- (id)historyLabelText;
- (void)setHistoryLabelText:(id)arg1;
- (BOOL)pullEnterIsEmpty;
- (void)setPullEnterIsEmpty:(BOOL)arg1;
- (id)streamDataArray;
- (void)setStreamDataArray:(id)arg1;
- (BOOL)needCleanData;
- (void)setNeedCleanData:(BOOL)arg1;
- (unsigned long long)historyType;
- (void)setHistoryType:(unsigned long long)arg1;
- (BOOL)shouldRecordEnterIndexPath;
- (void)setShouldRecordEnterIndexPath:(BOOL)arg1;
- (long long)friendLikeSplitIndex;
- (void)setFriendLikeSplitIndex:(long long)arg1;
- (id)streamLayoutInfo;
- (void)setStreamLayoutInfo:(id)arg1;
- (id)displayContentColumnCard;
- (void)setDisplayContentColumnCard:(id)arg1;
- (id)preloadContentColumnCard;
- (void)setPreloadContentColumnCard:(id)arg1;
- (void)setFetchNextPageStreamCards:(id)arg1;
- (BOOL)isFetchLivingStream;
- (void)setIsFetchLivingStream:(BOOL)arg1;
- (id)preloadArray;
- (void)setPreloadArray:(id)arg1;
- (id)previewJumpArray;
- (void)setPreviewJumpArray:(id)arg1;
- (id)cardBuffer;
- (void)setCardBuffer:(id)arg1;
- (id)appendRedDotCtrlInfo;
- (void)setAppendRedDotCtrlInfo:(id)arg1;
- (BOOL)enterFeedByAppend;
- (void)setEnterFeedByAppend:(BOOL)arg1;
- (id)relatedRecommendTips;
- (void)setRelatedRecommendTips:(id)arg1;
- (unsigned long long)topRefreshCount;
- (void)setTopRefreshCount:(unsigned long long)arg1;
- (unsigned long long)lastFetchLbsTimeStamp;
- (void)setLastFetchLbsTimeStamp:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
