@interface WCFinderFeedFollowVM : WCFinderFullFeedCommonViewModel <WCFinderDataItemExt, WCFinderPostingCommentExt, WCFinderRedDotNotifyExt, WCFinderPostDataItemExt, WCFinderFeedContentVMExt, WCFinderLiveExt, WCFinderContactExt, WCFinderContactCommonExt, WCFinderStreamPrefetchExt>
{
    BOOL _stopFetchNextPage; // +0x8
    BOOL _hasProcessLocalData; // +0x9
    BOOL _hasFetchEnterData; // +0xa
    BOOL _hasDisplayRedDotObject; // +0xb
    BOOL _isFetchingLocalFeed; // +0xc
    BOOL _isRequesting; // +0xd
    BOOL _showPrivateMSGTips; // +0xe
    BOOL _isByFindPage; // +0xf
    BOOL _postFeedInsertMachineTab; // +0x10
    BOOL _shouldFetchHistory; // +0x11
    BOOL _pullEnterIsEmpty; // +0x12
    BOOL _needCleanData; // +0x13
    BOOL _hasAddHistoryTips; // +0x14
    BOOL _shouldRecordEnterIndexPath; // +0x15
    BOOL _isFetchLivingStream; // +0x16
    BOOL _enterFeedByAppend; // +0x17
    id <WCFinderFeedFollowVMDelegate> _followTabDetailDelegate; // +0x18
    NSArray * _commentFailTidArray; // +0x20
    NSArray * _unreadCacheContentVMs; // +0x28
    unsigned long long _preFetchNextPageIndex; // +0x30
    NSString * _enterDataReportID; // +0x38
    unsigned long long _refreshTime; // +0x40
    NSIndexPath * _enterIndexPath; // +0x48
    long long _partialExposeSection; // +0x50
    long long _partialHotAreaSection; // +0x58
    NSMutableDictionary * _loadingReportDict; // +0x60
    NSString * _requestReportSceneKey; // +0x68
    NSString * _uiReportSceneKey; // +0x70
    WCFinderFeedLayoutContentVM * _livingLayout; // +0x78
    unsigned long long _guideBarObjectId; // +0x80
    NSMutableArray * _topObjects; // +0x88
    FinderCommByPass * _commByPass; // +0x90
    unsigned long long _newFeedIndex; // +0x98
    FinderStreamOftenReadBar * _oftenReadBar; // +0xa0
    NSString * _lastStayFeedTidBeforeTopRefresh; // +0xa8
    NSString * _lastStayFeedTidBeforeReload; // +0xb0
    unsigned long long _maxTid; // +0xb8
    unsigned long long _commentFailTidCount; // +0xc0
    unsigned long long _unReadMSGCount; // +0xc8
    NSMutableArray * _serverFetchTasks; // +0xd0
    WCFinderAbstractTask * _currentServerFetchTask; // +0xd8
    NSString * _historyLabelText; // +0xe0
    NSArray * _streamDataArray; // +0xe8
    unsigned long long _historyType; // +0xf0
    NSMutableSet * _unfollowUseranemSet; // +0xf8
    FinderStreamLayoutInfo * _streamLayoutInfo; // +0x100
    NSMutableArray * _preloadArray; // +0x108
    NSData * _cardBuffer; // +0x110
    NSArray * _feedCacheArray; // +0x118
    unsigned long long _flowViewState; // +0x120
    MMTimer * _detectionValidityTimer; // +0x128
    NSData * _lastCheckBuffer; // +0x130
    unsigned long long _lastdetectionValidityTimestamp; // +0x138
    WCFinderRedDotCtrlInfo * _appendRedDotCtrlInfo; // +0x140
    FinderRelatedRecommendTips * _relatedRecommendTips; // +0x148
    unsigned long long _topRefreshCount; // +0x150
}
+ (long long)followTabFlowStyleCacheCount;
- (id)init;
- (void)dealloc;
- (void)markShouldRecordEnterIndexPath;
- (void)recordEnterIndexPathIfNeeded;
- (id)loadingReportDict;
- (id)unfollowUseranemSet;
- (void)updateFailPostComment;
- (unsigned long long)sectionNums;
- (void)onFinderContentVMDelete:(id)arg1;
- (id)filterDataItemArray:(id)arg1;
- (id)processServerData:(id)arg1;
- (void)clearDataByServerRequestWithHasNewFeed:(BOOL)arg1;
- (id)getUnreadDataItems;
- (id)getLocalCacheContentVMs;
- (id)getRedDotDataItem:(id)arg1;
- (void)updateFluencyReportInfoForGetCommentDetail:(id)arg1;
- (void)loadingLocalData;
- (void)checkCacheDataIsValid:(id)arg1;
- (void)loadingFirstPageData;
- (void)loadingNextPagePageData;
- (BOOL)shouldStopFetchNextPageByFooter;
- (id)getHotTabLastBuff;
- (BOOL)hotTabNeedTopRefresh;
- (void)loadingNextSreamFeedPage;
- (id)firstPrefetchDataItem;
- (id)fetchTopFetchStreamCGIParamsAsReadOnly:(BOOL)arg1;
- (void)pullToRefreshWithPullType:(unsigned long long)arg1;
- (BOOL)preserveLocalContentVMs:(unsigned long long)arg1;
- (void)bindFeedWidgetInfoWithStreamLayoutInfo:(id)arg1 dataItemArray:(id)arg2;
- (void)resetFirstItemSilentToNo:(unsigned long long)arg1;
- (void)preformNextServerFetchTasks;
- (void)checkServerFetchTasks;
- (void)_fetchHistoryWithPullType:(unsigned long long)arg1 successBlock:(id /* block */)arg2 failBlock:(id /* block */)arg3;
- (void)fetchHistoryWithPullType:(unsigned long long)arg1;
- (void)refreshLatestDataByEnter:(BOOL)arg1;
- (void)fetchFirstPageData;
- (BOOL)shouldShowMoreHotContentCell;
- (long long)firstFeedNum;
- (int)tabType;
- (unsigned long long)rowNumsWithSection:(unsigned long long)arg1;
- (unsigned long long)limitModeRowNumsWithSection:(unsigned long long)arg1;
- (id)vaildTopIndexPath;
- (id)contentVMAtDataIndex:(unsigned long long)arg1;
- (long long)dataIndexOfContentVM:(id)arg1;
- (long long)dataIndexOfTid:(id)arg1;
- (id)contentVMWithLocalTid:(id)arg1;
- (void)clearAllContentVMLayoutCache;
- (void)changeFirstItemToMuteBeforeRefresh;
- (id)oftenReadItems;
- (void)setLivingLayout:(id)arg1;
- (void)appendEnterContentVM:(id)arg1 dataItems:(id)arg2 cardBuffer:(id)arg3 appendRedDotCtrlInfo:(id)arg4;
- (void)appendFinderContentVM:(id)arg1;
- (id)transformFinderItemToContentVM:(id)arg1;
- (id)transformHistoryFinderItemToContentVM:(id)arg1;
- (BOOL)checkRegardfulLayout:(id)arg1;
- (void)addDividerWithStreamLayoutInfo:(id)arg1 contentVMArray:(id)arg2;
- (BOOL)checkLivingStreamLayoutInfo:(id)arg1;
- (void)contentUnlikeFeedback:(id)arg1 subType:(long long)arg2;
- (void)startPreloadVideoItemsWithContentVMArray:(id)arg1 playedContentVMArray:(id)arg2;
- (void)stopPreloadVideoItem:(id)arg1;
- (void)stopAllPreloadVideoItems;
- (id)streamLoadingInfoByExitVC;
- (void)addFavRelateActionWithContentVM:(id)arg1 relateActionType:(unsigned long long)arg2;
- (void)fetchMoreLivingList;
- (void)updateTimelineCachePageWithTid:(id)arg1;
- (unsigned long long)getTLFirstPageCacheCount;
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
- (void)onFinderPostSessionUpLoadSuccessful:(id)arg1;
- (void)onFinderPostSessionUpLoadFailWithTid:(id)arg1 errorType:(long long)arg2;
- (BOOL)shouldShowUploadDataItem:(id)arg1;
- (BOOL)_enableShowPostStateFeed;
- (void)onFinderPostSessionStartUpload:(id)arg1;
- (BOOL)hasFetchEnterData;
- (void)onFinderNotifyWechatUnreadMentionCountNeedReload;
- (void)onFinderNotifyPrivateMsgTipsChange;
- (void)onFinderDataItemPostingCommentCountUpdate;
- (int)feedViewControllerScene;
- (void)updateExposureStatusOfContentVM:(id)arg1;
- (void)finderStreamPrefetchFinishedWithTabType:(int)arg1;
- (void)onFeedContentFoldInfoChange:(id)arg1 scene:(int)arg2;
- (void)onFinderLiveCloseWithTid:(id)arg1;
- (void)onFinderContactFollowListHasChange:(id)arg1;
- (void)filterOutDataItemsByContact:(id)arg1;
- (void)startDetectionFeedsValidity;
- (void)stopDetectionFeedsValidity;
- (void)detectionFeedsValidity;
- (void)_addDetectionFeedsValidityTimerWithTimeInterval:(double)arg1;
- (BOOL)shouldShowGuideNextBubbleCurProgress:(double)arg1;
- (id)getRecommendTips;
- (void)resetRecommendTips;
- (void)clearUnreadCacheContentVMs;
- (void)reportTopRefreshActionWithLastStayFeedID:(id)arg1 mode:(unsigned long long)arg2 progress:(unsigned long long)arg3;
- (void)deleteAllFeedAfterTid:(id)arg1;
- (id)followTabDetailDelegate;
- (void)setFollowTabDetailDelegate:(id)arg1;
- (id)commentFailTidArray;
- (void)setCommentFailTidArray:(id)arg1;
- (BOOL)stopFetchNextPage;
- (void)setStopFetchNextPage:(BOOL)arg1;
- (BOOL)hasProcessLocalData;
- (void)setHasProcessLocalData:(BOOL)arg1;
- (void)setHasFetchEnterData:(BOOL)arg1;
- (id)unreadCacheContentVMs;
- (void)setUnreadCacheContentVMs:(id)arg1;
- (BOOL)hasDisplayRedDotObject;
- (void)setHasDisplayRedDotObject:(BOOL)arg1;
- (unsigned long long)preFetchNextPageIndex;
- (void)setPreFetchNextPageIndex:(unsigned long long)arg1;
- (id)enterDataReportID;
- (void)setEnterDataReportID:(id)arg1;
- (unsigned long long)refreshTime;
- (void)setRefreshTime:(unsigned long long)arg1;
- (id)enterIndexPath;
- (void)setEnterIndexPath:(id)arg1;
- (long long)partialExposeSection;
- (void)setPartialExposeSection:(long long)arg1;
- (BOOL)isFetchingLocalFeed;
- (void)setIsFetchingLocalFeed:(BOOL)arg1;
- (BOOL)isRequesting;
- (void)setIsRequesting:(BOOL)arg1;
- (long long)partialHotAreaSection;
- (void)setPartialHotAreaSection:(long long)arg1;
- (BOOL)showPrivateMSGTips;
- (void)setShowPrivateMSGTips:(BOOL)arg1;
- (void)setLoadingReportDict:(id)arg1;
- (id)requestReportSceneKey;
- (void)setRequestReportSceneKey:(id)arg1;
- (id)uiReportSceneKey;
- (void)setUiReportSceneKey:(id)arg1;
- (id)livingLayout;
- (unsigned long long)guideBarObjectId;
- (void)setGuideBarObjectId:(unsigned long long)arg1;
- (id)topObjects;
- (void)setTopObjects:(id)arg1;
- (id)commByPass;
- (void)setCommByPass:(id)arg1;
- (BOOL)isByFindPage;
- (void)setIsByFindPage:(BOOL)arg1;
- (unsigned long long)newFeedIndex;
- (void)setNewFeedIndex:(unsigned long long)arg1;
- (BOOL)postFeedInsertMachineTab;
- (void)setPostFeedInsertMachineTab:(BOOL)arg1;
- (id)oftenReadBar;
- (void)setOftenReadBar:(id)arg1;
- (id)lastStayFeedTidBeforeTopRefresh;
- (void)setLastStayFeedTidBeforeTopRefresh:(id)arg1;
- (id)lastStayFeedTidBeforeReload;
- (void)setLastStayFeedTidBeforeReload:(id)arg1;
- (unsigned long long)maxTid;
- (void)setMaxTid:(unsigned long long)arg1;
- (unsigned long long)commentFailTidCount;
- (void)setCommentFailTidCount:(unsigned long long)arg1;
- (unsigned long long)unReadMSGCount;
- (void)setUnReadMSGCount:(unsigned long long)arg1;
- (id)serverFetchTasks;
- (void)setServerFetchTasks:(id)arg1;
- (id)currentServerFetchTask;
- (void)setCurrentServerFetchTask:(id)arg1;
- (BOOL)shouldFetchHistory;
- (void)setShouldFetchHistory:(BOOL)arg1;
- (id)historyLabelText;
- (void)setHistoryLabelText:(id)arg1;
- (BOOL)pullEnterIsEmpty;
- (void)setPullEnterIsEmpty:(BOOL)arg1;
- (id)streamDataArray;
- (void)setStreamDataArray:(id)arg1;
- (BOOL)needCleanData;
- (void)setNeedCleanData:(BOOL)arg1;
- (BOOL)hasAddHistoryTips;
- (void)setHasAddHistoryTips:(BOOL)arg1;
- (unsigned long long)historyType;
- (void)setHistoryType:(unsigned long long)arg1;
- (BOOL)shouldRecordEnterIndexPath;
- (void)setShouldRecordEnterIndexPath:(BOOL)arg1;
- (void)setUnfollowUseranemSet:(id)arg1;
- (id)streamLayoutInfo;
- (void)setStreamLayoutInfo:(id)arg1;
- (BOOL)isFetchLivingStream;
- (void)setIsFetchLivingStream:(BOOL)arg1;
- (id)preloadArray;
- (void)setPreloadArray:(id)arg1;
- (id)cardBuffer;
- (void)setCardBuffer:(id)arg1;
- (id)feedCacheArray;
- (void)setFeedCacheArray:(id)arg1;
- (unsigned long long)flowViewState;
- (void)setFlowViewState:(unsigned long long)arg1;
- (id)detectionValidityTimer;
- (void)setDetectionValidityTimer:(id)arg1;
- (id)lastCheckBuffer;
- (void)setLastCheckBuffer:(id)arg1;
- (unsigned long long)lastdetectionValidityTimestamp;
- (void)setLastdetectionValidityTimestamp:(unsigned long long)arg1;
- (id)appendRedDotCtrlInfo;
- (void)setAppendRedDotCtrlInfo:(id)arg1;
- (BOOL)enterFeedByAppend;
- (void)setEnterFeedByAppend:(BOOL)arg1;
- (id)relatedRecommendTips;
- (void)setRelatedRecommendTips:(id)arg1;
- (unsigned long long)topRefreshCount;
- (void)setTopRefreshCount:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

