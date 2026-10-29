@interface WCFinderLiveHomePageViewModel : NSObject <MMLiveTaskMgrExt, IVOIPUILogicMgrExt, MultiTalkMgrExt, MonoServiceLogicExt, MMLiveMorphTransitionExt, WCFinderLiveStreamExt, WCFinderFeedFlowViewUIEvents, MMLiveMorphDismissTarget>
{
    BOOL _isFakeLoading; // +0x8
    BOOL _isUsingDataCache; // +0x9
    BOOL _hasFetchedData; // +0xa
    BOOL _skipGetAllLiveTabs; // +0xb
    BOOL _skipAsyncLoadLiveInfo; // +0xc
    BOOL _skipFeedsReport; // +0xd
    BOOL _hasFetchedNavTab; // +0xe
    BOOL _batchStreamUseQuickestResp; // +0xf
    unsigned int _enterSquareScene; // +0x10
    unsigned int _totalLoadingCount; // +0x14
    id <WCFinderLiveHomePageViewModelDelegate> _delegate; // +0x18
    WCFinderLiveHomePageViewController * _currentHomePageVC; // +0x20
    NSMutableArray * _containerVMs; // +0x28
    unsigned long long _state; // +0x30
    unsigned long long _refreshTime; // +0x38
    unsigned long long _autoPlaySection; // +0x40
    WCFinderLiveFeedGenericAutoPlayModel * _autoPlayModel; // +0x48
    NSArray * _navTabList; // +0x50
    WCFinderLiveHomePageReportSession * _reportSession; // +0x58
    WCFinderRedDotCtrlInfo * _finderLiveEntryRedDotCtrlInfo; // +0x60
    WCFinderLiveHomePageCtx * _ctx; // +0x68
    MMFinderLiveFeedExtraInfoFetchLogic * _extraFetchLogic; // +0x70
    NSMutableDictionary * _cgiDict; // +0x78
    WCFinderLiveHomePageInitialParams * _params; // +0x80
    FetchingRecommendTask * _fetchRecListTask; // +0x88
    NSMutableSet * _fetchRelatedTidList; // +0x90
    unsigned long long _refreshInterval; // +0x98
    MMFinderLiveBuyTicketHandle * _ticketHandle; // +0xa0
    MMFinderLiveReserveNoticeGenericLogic * _noticeHalfLogic; // +0xa8
    FinderNavLiveStreamPreloadControlConfig * _preloadCtrlConf; // +0xb0
    FinderLiveNavStreamStatus * _latestNavStreamStatus; // +0xb8
    FinderLiveEnterSquareStatus * _latestEnterStatus; // +0xc0
    WCFinderLiveHomePageFeedFlowLoadingStatus * _latestLoadingStatus; // +0xc8
    WCFinderFeedFlowView * _preloadedFeedFlowView; // +0xd0
    NSMutableArray * _reportedCoverObjects; // +0xd8
    unsigned long long _navEnterTimeStamp; // +0xe0
    unsigned long long _initialTimeStampe; // +0xe8
    unsigned long long _topRefreshCgiFlag; // +0xf0
    MMFinderLiveNavLiveStreamModel * _mainRespModel; // +0xf8
    MMFinderLiveNavLiveStreamModel * _liteRespModel; // +0x100
    WCFinderLiveElectronicCommerceRoomConfigCGI * _fetchECConfigCgi; // +0x108
}
- (id)initWithParams:(id)arg1;
- (void)initReportSession;
- (void)initExtraFetch;
- (void)initContext;
- (void)refreshTop;
- (void)refreshTopForRedDotPreload:(BOOL)arg1;
- (BOOL)isSkeletonLoading;
- (BOOL)hasPrefetchCGIResp;
- (void)preloadCoversIfNeeded:(id)arg1 maxPreloadCnt:(unsigned long long)arg2;
- (id)calculateNavRespShouldPreloadCoverItems:(id)arg1 maxPreloadCnt:(unsigned long long)arg2;
- (BOOL)checkUseDataCache;
- (BOOL)isFetchingTop;
- (void)handleFakeLoading:(BOOL)arg1;
- (void)fetchMoreData:(unsigned long long)arg1;
- (void)refreshSpecifySection:(unsigned long long)arg1;
- (void)deduplicateContainerElements:(id)arg1 oldContainerModel:(id)arg2;
- (void)cancelAllCgi;
- (void)updateTabStreamStyle;
- (void)reinitContainerVMs:(id)arg1 skeletonData:(BOOL)arg2;
- (id)createContainerVM:(id)arg1 sectionIndex:(unsigned long long)arg2 tabListContainer:(id)arg3 skeletonData:(BOOL)arg4;
- (id)topRequestCgiList;
- (id)containerCgiList:(unsigned long long)arg1;
- (void)cancelContainerCgi:(unsigned long long)arg1;
- (void)refreshNavTabList;
- (void)updateCacheTabsListIfNeeded;
- (void)updateLastStyleCacheInfo;
- (id)followSectionVM;
- (id)historyCacheLiveTab;
- (id)historyCacheNavTab;
- (void)checkPreloadNavTabLbsLiveStream:(id)arg1;
- (void)reloadContainerSection:(unsigned long long)arg1;
- (void)updateWatchContextWithSectionModel:(id)arg1;
- (void)updateStateForLiveStream;
- (BOOL)liveStreamContinueFlag;
- (BOOL)isFetchingLiveStream;
- (id)liveStreamContainerModel;
- (id)liveStreamSectionVM;
- (id)tabLiveStreamSectionVM;
- (void)disposeRedDotOnAction;
- (BOOL)hasData;
- (id)globalStyleInfo;
- (id)GetUnreadDataItemList;
- (id)GetContainerContext:(unsigned long long)arg1 tabInfo:(id)arg2;
- (void)openRecommendURL:(id)arg1;
- (void)openProfileWithContact:(id)arg1 feedVM:(id)arg2;
- (BOOL)judgeSelectionActionCondition:(id)arg1;
- (void)openLiveRoomWithElementModel:(id)arg1 sectionVM:(id)arg2 recommendRelated:(BOOL)arg3 cardIndex:(unsigned long long)arg4 goToReplay:(BOOL)arg5;
- (void)openLiveRoomWithElementModels:(id)arg1 selectIndex:(unsigned long long)arg2 sectionVM:(id)arg3 recommendRelated:(BOOL)arg4 cardIndex:(unsigned long long)arg5 goToReplay:(BOOL)arg6;
- (void)openMoreLiveWithSpecificTabInfo:(id)arg1 scene:(unsigned int)arg2;
- (void)openJumpInfoPageWithCtrlInfo:(id)arg1;
- (void)openAdH5Page:(id)arg1;
- (void)contentDislikeFeedback:(id)arg1 containerId:(unsigned long long)arg2;
- (void)removeDataItem:(id)arg1 containerId:(unsigned long long)arg2;
- (id)liveStreamIndexPathWithTid:(id)arg1;
- (id)sectionVMForContainerId:(unsigned long long)arg1;
- (void)deleteHistoryLiveWithObjectID:(unsigned long long)arg1 containerID:(unsigned long long)arg2;
- (void)openNoticeDetailsHalf:(id)arg1 sectionVM:(id)arg2;
- (void)aggregationOpenLiveRoomWithDataItem:(id)arg1;
- (void)jumpThemeTemplateWithElementModel:(id)arg1 entryBuffer:(id)arg2 jumpBypass:(id)arg3;
- (unsigned int)currentHomePageResponseFlag;
- (BOOL)enableNavRightSearch;
- (void)handleTopRefreshCgiResp:(unsigned long long)arg1 respModel:(id)arg2;
- (void)onViewDidLoad;
- (void)_realCheckUseMainOrLiteResp;
- (void)loadFirstScreenBottomDataOnBatchesIfNeeded:(id)arg1;
- (void)stopAutoPlay:(BOOL)arg1;
- (void)stopCurrentPlay;
- (void)_tryStopAllVisibleCells;
- (void)stopPlayWithCell:(id)arg1 indexPath:(id)arg2;
- (void)checkAutoPlayWhenAppear;
- (void)checkAutoPlayWithSection:(unsigned long long)arg1 playCenterY:(BOOL)arg2;
- (void)checkAutoPlayWhenDataReload;
- (BOOL)isSectionCellEdgeTopExpose:(id)arg1;
- (void)checkAutoPlayWhenEndScroll;
- (void)liveStreamCenterPlayIndexPath:(id *)arg1 rightIndexPath:(id *)arg2;
- (id)suitableAutoplayIndexPath:(unsigned long long)arg1;
- (void)stopAutoPlayWithSection:(unsigned long long)arg1;
- (void)stopAutoPlayAtIndexPath:(id)arg1;
- (void)stopAllSectionAutoPlayIgnoreContainerModel:(id)arg1;
- (void)liveContainerStartPlayWithIndexPath:(id)arg1;
- (void)liveContainerStopWithIndexPath:(id)arg1;
- (void)liveStreamStartPlayWithIndexPath:(id)arg1;
- (void)liveStreamStopWithIndexPath:(id)arg1;
- (id)firstCellWithSection:(unsigned long long)arg1;
- (void)switchAutoPlaySectionTo:(id)arg1;
- (void)checkAppendReadyRelatedList;
- (void)innerCheckAppendReadyRelatedList:(id)arg1;
- (BOOL)checkStartLiveRecommendInRedDotScene;
- (void)startDelayFetchRecommendRelatedList:(id)arg1;
- (void)cancelDelayFetchRecommendRelatedList;
- (void)_fetchRecommendRelatedList;
- (BOOL)isFetchRelatedListCgiFinish;
- (void)onMMLiveWillStart;
- (void)onExitLiveSuccessWithLiveTaskId:(id)arg1;
- (void)onExtendFromCollapseAnimationDidEndWithLiveTask:(id)arg1;
- (void)onCollapseAnimationWillStartBeforeRotation:(id)arg1;
- (void)onMinimizeInteractiveWillEnd:(id)arg1;
- (void)_innelCancelDelayFetchByMinimizeLiveTask:(id)arg1;
- (BOOL)isLiveTaskValidForFetchRelatedRecommendList:(id)arg1;
- (void)onLiveTaskDisliked:(id)arg1;
- (unsigned long long)ContainerIdWithTid:(id)arg1 ignoreFollow:(BOOL)arg2;
- (void)onBeginMultiTalk;
- (void)onVideoVoipViewDidAppear:(id)arg1;
- (void)onMonoServiceDidEnd;
- (id)autoPlayModel;
- (id)fetchRelatedTidList;
- (int)commentScene;
- (unsigned long long)cardRatio;
- (void)morphTransitionEnding;
- (void)morphTransitionCanceled;
- (BOOL)shouldLiveUseMorphDismissForCustomKey:(id)arg1;
- (CGRect)liveMorphDismissTargetFrameOnScreenForCustomKey:(id)arg1 videoSize:(CGSize)arg2;
- (void)checkAbnormalLiveIfNeeded;
- (void)addPrefetchFeature;
- (void)reportRedDotExpose;
- (BOOL)targetingRedDotAutoPlayWithObjectId:(unsigned long long)arg1 targetSection:(unsigned long long *)arg2;
- (void)checkRedDotAutoPlayWithSectionNumber:(id)arg1;
- (BOOL)isSectionSupportAutoPlay:(unsigned long long)arg1;
- (BOOL)isSectionWithHeader:(unsigned long long)arg1;
- (BOOL)isBannerSection:(unsigned long long)arg1;
- (void)reportFeedExpose:(id)arg1 collectionView:(id)arg2 indexPath:(id)arg3;
- (void)reportFeedExposeEnd:(id)arg1 collectionView:(id)arg2 indexPath:(id)arg3;
- (void)updateReportSessionSkipReport;
- (void)reportHomePageNoticeAction:(BOOL)arg1 feedVM:(id)arg2;
- (void)reportShowConcertTicketAction:(id)arg1;
- (void)reportOnDisAppear;
- (void)reportAllCellsExposeEnd;
- (void)setFromLiveID:(unsigned long long)arg1;
- (void)setFromReportScene:(id)arg1;
- (id)visibleElementModels;
- (id)refreshHighlightTagExtraInfoItems;
- (id)brandsChannelCardsShouldRefresh;
- (void)onNoticeCardReserveStatusUpdate:(id)arg1;
- (void)onFinderFeedFlowView:(id)arg1 loadingStateDidChangeFrom:(unsigned long long)arg2 to:(unsigned long long)arg3 loadingType:(unsigned long long)arg4;
- (void)onFinderFeedFlowViewDidConsumePreAppendedData:(id)arg1;
- (id)getDescrptiveStringFromLoadingState:(unsigned long long)arg1;
- (id)latestNavStreamStatus;
- (id)latestEnterStatus;
- (id)latestLoadingStatus;
- (void)recordLoadingWithNavType:(int)arg1 fromState:(unsigned long long)arg2 toState:(unsigned long long)arg3 context:(id)arg4;
- (void)clearLoadingInfo;
- (void)syncLoadingStatusToNavStatus;
- (void)recordCurrentNavStatusForReport;
- (void)recursiveVisitHomePageSubview:(id)arg1 visitCoverObjectBlock:(id /* block */)arg2 genericVisitBlock:(id /* block */)arg3;
- (void)doReportRecordedNavStatus;
- (void)recordNavEnterStatus;
- (void)fillNavVCCachedEnterStatusIfNeeded;
- (void)setFinderLiveEntryRedDotCtrlInfo:(id)arg1;
- (void)setEnterSquareScene:(unsigned int)arg1;
- (void)fillNavEnterReddotType;
- (void)fillNavEnterTypeByRefreshIfNeeded:(id)arg1;
- (void)fillNavEnterLoadingTimeByRefreshFinishIfNeeded;
- (void)fillNavEnterLoadingTimeByDisAppearIfNeeded;
- (void)innerFillNavEnterLoadingTime;
- (void)reinitSkeletonData:(BOOL)arg1;
- (void)makeBottomSkeletonData;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)currentHomePageVC;
- (void)setCurrentHomePageVC:(id)arg1;
- (id)containerVMs;
- (void)setContainerVMs:(id)arg1;
- (unsigned long long)state;
- (void)setState:(unsigned long long)arg1;
- (BOOL)isFakeLoading;
- (void)setIsFakeLoading:(BOOL)arg1;
- (unsigned long long)refreshTime;
- (void)setRefreshTime:(unsigned long long)arg1;
- (unsigned long long)autoPlaySection;
- (void)setAutoPlaySection:(unsigned long long)arg1;
- (void)setAutoPlayModel:(id)arg1;
- (id)navTabList;
- (void)setNavTabList:(id)arg1;
- (id)reportSession;
- (void)setReportSession:(id)arg1;
- (id)finderLiveEntryRedDotCtrlInfo;
- (id)ctx;
- (void)setCtx:(id)arg1;
- (id)extraFetchLogic;
- (void)setExtraFetchLogic:(id)arg1;
- (unsigned int)enterSquareScene;
- (BOOL)isUsingDataCache;
- (void)setIsUsingDataCache:(BOOL)arg1;
- (BOOL)hasFetchedData;
- (void)setHasFetchedData:(BOOL)arg1;
- (id)cgiDict;
- (void)setCgiDict:(id)arg1;
- (BOOL)skipGetAllLiveTabs;
- (void)setSkipGetAllLiveTabs:(BOOL)arg1;
- (BOOL)skipAsyncLoadLiveInfo;
- (void)setSkipAsyncLoadLiveInfo:(BOOL)arg1;
- (BOOL)skipFeedsReport;
- (void)setSkipFeedsReport:(BOOL)arg1;
- (BOOL)hasFetchedNavTab;
- (void)setHasFetchedNavTab:(BOOL)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (id)fetchRecListTask;
- (void)setFetchRecListTask:(id)arg1;
- (void)setFetchRelatedTidList:(id)arg1;
- (unsigned long long)refreshInterval;
- (void)setRefreshInterval:(unsigned long long)arg1;
- (id)ticketHandle;
- (void)setTicketHandle:(id)arg1;
- (id)noticeHalfLogic;
- (void)setNoticeHalfLogic:(id)arg1;
- (id)preloadCtrlConf;
- (void)setPreloadCtrlConf:(id)arg1;
- (void)setLatestNavStreamStatus:(id)arg1;
- (void)setLatestEnterStatus:(id)arg1;
- (void)setLatestLoadingStatus:(id)arg1;
- (unsigned int)totalLoadingCount;
- (void)setTotalLoadingCount:(unsigned int)arg1;
- (id)preloadedFeedFlowView;
- (void)setPreloadedFeedFlowView:(id)arg1;
- (id)reportedCoverObjects;
- (void)setReportedCoverObjects:(id)arg1;
- (unsigned long long)navEnterTimeStamp;
- (void)setNavEnterTimeStamp:(unsigned long long)arg1;
- (unsigned long long)initialTimeStampe;
- (void)setInitialTimeStampe:(unsigned long long)arg1;
- (BOOL)batchStreamUseQuickestResp;
- (void)setBatchStreamUseQuickestResp:(BOOL)arg1;
- (unsigned long long)topRefreshCgiFlag;
- (void)setTopRefreshCgiFlag:(unsigned long long)arg1;
- (id)mainRespModel;
- (void)setMainRespModel:(id)arg1;
- (id)liteRespModel;
- (void)setLiteRespModel:(id)arg1;
- (id)fetchECConfigCgi;
- (void)setFetchECConfigCgi:(id)arg1;
- (void).cxx_destruct;
@end

