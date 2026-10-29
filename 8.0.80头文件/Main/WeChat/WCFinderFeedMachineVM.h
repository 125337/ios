@interface WCFinderFeedMachineVM : WCFinderFullFeedCommonViewModel <WCFinderDataItemExt, WCFinderPostingCommentExt, WCFinderRedDotNotifyExt, WCFinderContactCommonExt, WCFinderStreamPrefetchExt, WCFinderPostDataItemExt>
{
    BOOL _hasFetchEnterData; // +0x8
    BOOL _forbiddenBottomRequestForPullFromTop; // +0x9
    BOOL _showPrivateMSGTips; // +0xa
    BOOL _hotTLShouldShowCategoryCell; // +0xb
    BOOL _isByFindPage; // +0xc
    BOOL _postFeedInsertMachineTab; // +0xd
    BOOL _shouldFetchHistory; // +0xe
    BOOL _pullEnterIsEmpty; // +0xf
    BOOL _needCleanData; // +0x10
    BOOL _hasAddHistoryTips; // +0x11
    BOOL _shouldRecordEnterIndexPath; // +0x12
    BOOL _shouldSpecialFetch; // +0x13
    BOOL _appendingPlaceholderDataItems; // +0x14
    BOOL _enterFeedByAppend; // +0x15
    NSArray * _commentFailTidArray; // +0x18
    NSString * _enterDataReportID; // +0x20
    NSIndexPath * _enterIndexPath; // +0x28
    NSMutableDictionary * _loadingReportDict; // +0x30
    unsigned long long _guideBarObjectId; // +0x38
    WCFinderOpenTimelineParams * _openTimelineParams; // +0x40
    NSString * _localPostFailFeedId; // +0x48
    NSMutableArray * _topObjects; // +0x50
    WCFinderRedDotCtrlInfo * _findEntryRedDotCtrl; // +0x58
    unsigned long long _maxTid; // +0x60
    unsigned long long _commentFailTidCount; // +0x68
    unsigned long long _unReadMSGCount; // +0x70
    NSMutableArray * _serverFetchTasks; // +0x78
    WCFinderAbstractTask * _currentServerFetchTask; // +0x80
    NSData * _rerankLastBuffer; // +0x88
    NSString * _historyLabelText; // +0x90
    NSArray * _streamDataArray; // +0x98
    unsigned long long _backupFeedToTopCount; // +0xa0
    unsigned long long _backupFeedToBottomCount; // +0xa8
    NSMutableArray * _backupFeedToTop; // +0xb0
    FinderStreamLayoutInfo * _streamLayoutInfo; // +0xb8
    unsigned long long _historyType; // +0xc0
    NSMutableSet * _hasPreLoadRelatedSet; // +0xc8
    NSMutableSet * _hotAreaTidSet; // +0xd0
    NSMutableArray * _preloadArray; // +0xd8
    NSData * _cardBuffer; // +0xe0
    NSMutableDictionary * _feedLastExposeTsDic; // +0xe8
    NSMutableDictionary * _feedExposeDurationDic; // +0xf0
    NSString * _hasObjectIdChecked; // +0xf8
    NSString * _hasNetOffCheckedWithTid; // +0x100
    WCFinderRedDotCtrlInfo * _appendRedDotCtrlInfo; // +0x108
    FinderRelatedRecommendTips * _relatedRecommendTips; // +0x110
}
- (id)init;
- (void)dealloc;
- (id)feedLastExposeTsDic;
- (id)feedExposeDurationDic;
- (void)markShouldRecordEnterIndexPath;
- (void)recordEnterIndexPathIfNeeded;
- (id)loadingReportDict;
- (BOOL)containRecommendGuideFeed;
- (void)updateFailPostComment;
- (void)onFinderPostSessionUpLoadSuccessful:(id)arg1;
- (void)onMemberShipFeedPostSessionUpLoadSuccessful:(id)arg1;
- (void)_postSessionByUpLoadInfo:(id)arg1;
- (void)onFinderPostSessionUpLoadFailWithTid:(id)arg1 errorType:(long long)arg2;
- (void)onMemberShipFeedPostSessionStartUpload:(id)arg1;
- (void)onMemberShipFeedPostSessionUpLoadFailWithTid:(id)arg1 errorType:(long long)arg2;
- (void)onFinderPostSessionStartUpload:(id)arg1;
- (id)processServerData:(id)arg1;
- (void)clearDataByServerRequestWithHasNewFeed:(BOOL)arg1 cleanDataOnly:(BOOL)arg2;
- (void)addHotAreaFeedWithTid:(id)arg1;
- (id)getLocalCacheContentVMs;
- (void)loadingLocalData;
- (void)checkPrefetchDataIsValid:(id)arg1 checkPrefetchType:(int)arg2 pullType:(unsigned long long)arg3;
- (void)checkCacheDataIsValid:(id)arg1;
- (void)loadingFirstPageData;
- (void)loadingNextPagePageData;
- (void)loadingNextSreamFeedPage;
- (id)firstPrefetchDataItem;
- (id)fetchTopFetchStreamCGIParamsAsReadOnly:(BOOL)arg1;
- (void)requestPretchRerankData:(id)arg1;
- (void)pullToRefreshWithPullType:(unsigned long long)arg1 reportReadStatsFeeds:(id)arg2;
- (void)pullToRefreshWithPullType:(unsigned long long)arg1 reportReadStatsFeeds:(id)arg2 specialRequestScene:(int)arg3;
- (BOOL)produceFromShareSceneAction:(id)arg1 pullType:(unsigned long long)arg2 successBlock:(id /* block */)arg3;
- (BOOL)preserveLocalContentVMs:(unsigned long long)arg1;
- (id)bindRedDotHoverInfo:(id)arg1 dataArray:(id)arg2;
- (void)clearRedDotFromFindPage;
- (void)resetFirstItemSilentToNo:(unsigned long long)arg1;
- (void)preformNextServerFetchTasks;
- (void)checkServerFetchTasks;
- (void)_fetchHistoryWithPullType:(unsigned long long)arg1 successBlock:(id /* block */)arg2 failBlock:(id /* block */)arg3;
- (void)fetchHistoryWithPullType:(unsigned long long)arg1;
- (void)refreshLatestDataByEnter:(BOOL)arg1;
- (void)refreshTopDataBySpecialRequestScene:(int)arg1;
- (BOOL)forbiddenBottomRequestForPullFromTop;
- (void)useLocalBackupFeedWhenPullFromTop;
- (void)insertLocalBackupFeedToTop;
- (void)fetchFirstPageData;
- (unsigned long long)sectionNums;
- (long long)firstFeedNum;
- (int)tabType;
- (long long)firstNewStreamFeed;
- (unsigned long long)rowNumsWithSection:(unsigned long long)arg1;
- (id)vaildTopIndexPath;
- (void)clearAllContentVMLayoutCache;
- (void)changeFirstItemToMuteBeforeRefresh;
- (void)appendEnterContentVM:(id)arg1 dataItems:(id)arg2 cardBuffer:(id)arg3 appendRedDotCtrlInfo:(id)arg4 appendDatasScene:(unsigned long long)arg5;
- (void)appendFinderContentVM:(id)arg1;
- (unsigned long long)deleteUnExposedItemsWithMaxUnreadCount:(unsigned long long)arg1 targetTid:(id)arg2;
- (id)getUnreadDataItems;
- (void)clearUnreadCacheContentVMs;
- (unsigned long long)deleteUnExposedRelatedItemsWithContentVM:(id)arg1;
- (unsigned long long)getLastUnExposedRelatedItemsIndex;
- (unsigned long long)getLastExposedRelatedItemsIndex;
- (void)insertFinderEnhanceContentVM:(id)arg1 location:(unsigned long long)arg2;
- (void)insertFinderContentVM:(id)arg1 location:(unsigned long long)arg2 targetTid:(id)arg3;
- (void)insertNetOffSettingFeed;
- (void)updatePlaceholderDataItemsWithStreamBackupInfo:(id)arg1;
- (BOOL)canAppendPlaceholderObject;
- (void)appendPlaceholderObject;
- (BOOL)insertNetOffFeedAfterTid:(id)arg1;
- (id)_getNetOffContentVM;
- (void)clearUnreadFeedsAfterTid:(id)arg1;
- (void)insertOfflineFeedAfterTid:(id)arg1;
- (BOOL)showShowEnableRecommendView;
- (void)collectUnExposedContentVM:(id)arg1 location:(unsigned long long)arg2 targetTid:(id)arg3;
- (void)deleteAllUnExposedContentVM;
- (void)deleteAllFeedAfterTid:(id)arg1;
- (void)addDividerWithStreamLayoutInfo:(id)arg1 contentVMArray:(id)arg2;
- (id)transformHistoryFinderItemToContentVM:(id)arg1;
- (void)contentUnlikeFeedback:(id)arg1;
- (void)startPreloadVideoItemsWithContentVMArray:(id)arg1 playedContentVMArray:(id)arg2;
- (void)stopPreloadVideoItem:(id)arg1;
- (void)stopAllPreloadVideoItems;
- (void)updateExposureStatusOfContentVM:(id)arg1;
- (void)updateLastReadFeedId:(id)arg1;
- (void)updateTimelineCachePageWithTid:(id)arg1;
- (void)finderStreamPrefetchFinishedWithTabType:(int)arg1;
- (void)replaceFeedContentArray:(id)arg1;
- (id)streamLoadingInfoByExitVC;
- (void)resetLastBuffer:(id)arg1;
- (void)reloadNoMoreDataWithPullType:(unsigned long long)arg1;
- (void)reloadErrorPageWithPullType:(unsigned long long)arg1;
- (id)partialExposedObjectId;
- (void)finishFetchDataSuccessful:(BOOL)arg1;
- (long long)convertToFluencyStartScene:(unsigned long long)arg1;
- (BOOL)shouldShowUploadDataItem:(id)arg1;
- (void)onFinderDataItemDelete:(id)arg1;
- (void)onFinderDataItemDeleteFromScene:(int)arg1 tid:(id)arg2 toastWording:(id)arg3;
- (void)onFinderDataItemDeleteByUserPageMergeWithTidList:(id)arg1;
- (void)onFinderDataItemCleanBySecurityUpgrade;
- (void)cleanAllDataItems;
- (void)onFinderDataCacheHasBeCleaned;
- (BOOL)hasFetchEnterData;
- (void)onFinderNotifyWechatUnreadMentionCountNeedReload;
- (void)onFinderNotifyPrivateMsgTipsChange;
- (void)onFinderDataItemPostingCommentCountUpdate;
- (int)feedViewControllerScene;
- (id)contentVMWithLocalTid:(id)arg1;
- (void)feedBeginExpose:(id)arg1;
- (void)feedEndExpose:(id)arg1;
- (BOOL)shouldShowGuideNextBubbleCurProgress:(double)arg1;
- (id)getRecommendTips;
- (void)resetRecommendTips;
- (id)commentFailTidArray;
- (void)setCommentFailTidArray:(id)arg1;
- (void)setHasFetchEnterData:(BOOL)arg1;
- (void)setForbiddenBottomRequestForPullFromTop:(BOOL)arg1;
- (id)enterDataReportID;
- (void)setEnterDataReportID:(id)arg1;
- (id)enterIndexPath;
- (void)setEnterIndexPath:(id)arg1;
- (BOOL)showPrivateMSGTips;
- (void)setShowPrivateMSGTips:(BOOL)arg1;
- (void)setLoadingReportDict:(id)arg1;
- (BOOL)hotTLShouldShowCategoryCell;
- (void)setHotTLShouldShowCategoryCell:(BOOL)arg1;
- (unsigned long long)guideBarObjectId;
- (void)setGuideBarObjectId:(unsigned long long)arg1;
- (id)openTimelineParams;
- (void)setOpenTimelineParams:(id)arg1;
- (id)localPostFailFeedId;
- (void)setLocalPostFailFeedId:(id)arg1;
- (id)topObjects;
- (void)setTopObjects:(id)arg1;
- (id)findEntryRedDotCtrl;
- (void)setFindEntryRedDotCtrl:(id)arg1;
- (BOOL)isByFindPage;
- (void)setIsByFindPage:(BOOL)arg1;
- (BOOL)postFeedInsertMachineTab;
- (void)setPostFeedInsertMachineTab:(BOOL)arg1;
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
- (id)rerankLastBuffer;
- (void)setRerankLastBuffer:(id)arg1;
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
- (unsigned long long)backupFeedToTopCount;
- (void)setBackupFeedToTopCount:(unsigned long long)arg1;
- (unsigned long long)backupFeedToBottomCount;
- (void)setBackupFeedToBottomCount:(unsigned long long)arg1;
- (id)backupFeedToTop;
- (void)setBackupFeedToTop:(id)arg1;
- (id)streamLayoutInfo;
- (void)setStreamLayoutInfo:(id)arg1;
- (unsigned long long)historyType;
- (void)setHistoryType:(unsigned long long)arg1;
- (BOOL)shouldRecordEnterIndexPath;
- (void)setShouldRecordEnterIndexPath:(BOOL)arg1;
- (id)hasPreLoadRelatedSet;
- (void)setHasPreLoadRelatedSet:(id)arg1;
- (id)hotAreaTidSet;
- (void)setHotAreaTidSet:(id)arg1;
- (BOOL)shouldSpecialFetch;
- (void)setShouldSpecialFetch:(BOOL)arg1;
- (id)preloadArray;
- (void)setPreloadArray:(id)arg1;
- (id)cardBuffer;
- (void)setCardBuffer:(id)arg1;
- (void)setFeedLastExposeTsDic:(id)arg1;
- (void)setFeedExposeDurationDic:(id)arg1;
- (BOOL)appendingPlaceholderDataItems;
- (void)setAppendingPlaceholderDataItems:(BOOL)arg1;
- (id)hasObjectIdChecked;
- (void)setHasObjectIdChecked:(id)arg1;
- (id)hasNetOffCheckedWithTid;
- (void)setHasNetOffCheckedWithTid:(id)arg1;
- (id)appendRedDotCtrlInfo;
- (void)setAppendRedDotCtrlInfo:(id)arg1;
- (BOOL)enterFeedByAppend;
- (void)setEnterFeedByAppend:(BOOL)arg1;
- (id)relatedRecommendTips;
- (void)setRelatedRecommendTips:(id)arg1;
- (void).cxx_destruct;
@end
