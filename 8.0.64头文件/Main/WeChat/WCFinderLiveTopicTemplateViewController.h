@interface WCFinderLiveTopicTemplateViewController : MMUIViewController <WCFinderTabPageViewDataSource, WCFinderTabPageViewDelegate, WCFinderLiveTopicTemplatePageManagerDelegate, WCFinderTabPageViewBasicViewDelegate, MMFinderLiveFeedExtraInfoFetcherDelegate, MMScrollActionSheetDelegate, RecentForwardScrollViewDelegate, ForwardMessageLogicDelegate, WCCommitViewResultDelegate>
{
    BOOL _navWasHidden; // +0x70
    BOOL _isVisible; // +0x71
    BOOL _hasReportAppear; // +0x72
    BOOL _tilingSwitch; // +0x73
    NSData * _entryBuffer; // +0x78
    unsigned long long _enterScene; // +0x80
    WCFinderLiveTopicTemplateTabPageView * _tabPageView; // +0x88
    UIView * _navBarView; // +0x90
    MMLiveColorfulLabel * _navLabel; // +0x98
    WCFinderLiveTopicTemplateHeaderView * _headerView; // +0xa0
    WCFinderLiveTopicTemplateTabContainerView * _tabContainer; // +0xa8
    MMWebImageView * _bgImgView; // +0xb0
    WCFinderLiveStreamContainerModel * _tagContainerModel; // +0xb8
    NSMutableArray * _containerModels; // +0xc0
    NSMutableSet * _exposedDataItemTids; // +0xc8
    NSMutableDictionary * _pageMgrMap; // +0xd0
    NSString * _themeId; // +0xd8
    unsigned long long _lastVisibleIndex; // +0xe0
    WCFinderEmptyTipsView * _firstScreenLoadingView; // +0xe8
    unsigned long long _reqContainerId; // +0xf0
    FinderThemeLiveStreamResponse * _latestResp; // +0xf8
    MMFinderLiveFeedExtraInfoFetcher * _extraInfoFetcher; // +0x100
    MMTimer * _extraInfoFetchTimer; // +0x108
    PAGFile * _hotSalePAGFile; // +0x110
    FinderLiveEcGetLiveConfigResponse_ShowAnimation_HotSellingOptions * _hotSellingOptions; // +0x118
    FinderThemeLiveStreamAppearance * _currentAppearance; // +0x120
    FinderThemeLiveStreamShareInfo * _shareInfo; // +0x128
    CAGradientLayer * _bgGradientLayer; // +0x130
    WCFinderLivePageStayReporter * _stayReporter; // +0x138
    MMScrollActionSheet * _shareActionSheet; // +0x140
    ForwardMessageLogicController * _forwardLogic; // +0x148
}
- (id)initWithThemeId:(id)arg1 defaultAppearance:(id)arg2 fromSceneIsTilingSwitch:(BOOL)arg3;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)initBgImageView;
- (void)initNavBarView;
- (void)initMoreButton;
- (BOOL)shouldInteractivePop;
- (id)navigationBarBackgroundColor;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)onEnterForeground;
- (void)onEnterBackground;
- (void)onMoreButtonClicked;
- (BOOL)pageManagerCanAutoPlayLive:(id)arg1;
- (id)getViewControllerForPageManager:(id)arg1;
- (void)fetchDataForPageManager:(id)arg1 fromTop:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)pageManager:(id)arg1 onDataItemExposed:(id)arg2;
- (id)getHotSalePAGFileForPageManager:(id)arg1;
- (id)styleInfoForPageManager:(id)arg1;
- (void)feedFlowViewDidScrollInPageManager:(id)arg1;
- (id)getNavLastBufferForPageManager:(id)arg1;
- (id)finderTabPageView:(id)arg1 pageViewAtIndex:(unsigned long long)arg2;
- (void)finderTabPageView:(id)arg1 switchFromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (void)finderTabPageView:(id)arg1 targetAlphaOfTabContainerChanged:(double)arg2;
- (double)topInsetOfFinderTabPageView:(id)arg1;
- (long long)numberOfTabPageInFinderTabPageView:(id)arg1;
- (double)finderTabPageView:(id)arg1 heightForTabViewAtIndex:(unsigned long long)arg2;
- (id)finderTabPageView:(id)arg1 tabViewAtIndex:(unsigned long long)arg2;
- (id)tabViewContainerInFinderTabPageView:(id)arg1;
- (id)customTabContainerBackgroundColorForFinderTabPageView:(id)arg1;
- (double)heightForTabViewContainerInFinderTabPageView:(id)arg1;
- (void)finderTabPageView:(id)arg1 didSelectIndex:(unsigned long long)arg2 isTriggerByUser:(BOOL)arg3;
- (double)heightForHeaderViewChangeAlphaInFinderTabPageView:(id)arg1;
- (id)headerView;
- (id)headerViewInFinderTabPageView:(id)arg1;
- (double)heightForHeaderViewInFinderTabPageView:(id)arg1;
- (BOOL)hasTabContainer;
- (int)getCommentSceneWithContainerType:(unsigned int)arg1;
- (void)autoPlayCurrentLive;
- (void)stopPlayingCurrentLive;
- (void)setupNavWithAppearance:(id)arg1;
- (void)layoutNavLabel;
- (void)onAppearanceUpdated;
- (void)handleWillSwitchToPage:(unsigned long long)arg1 switchType:(unsigned long long)arg2;
- (void)setupBackgroundColor;
- (void)startExtraInfoFetchingTimer;
- (BOOL)enabledTimedRefresh;
- (void)initFetcherIfNeeded;
- (void)scheduleExtraInfoCheckTimer;
- (void)onTimedFetchExtraInfo;
- (void)fetchExtraInfoForVisibleLiveIfNeeded;
- (void)onFeedHighlightTagUpdate:(unsigned long long)arg1 tag:(id)arg2;
- (void)onFeedAggregationCardUpdate:(id)arg1 card:(id)arg2;
- (void)onFeedProductCardUpdate:(unsigned long long)arg1 card:(id)arg2;
- (void)initializeShareActionSheet;
- (void)shareToChat:(id)arg1;
- (void)shareToMoment;
- (id)genShareItem;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)clickRFItemCallBack:(id)arg1;
- (void)relayoutScrollSheet;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)onCancelForwardForForwardView:(id)arg1;
- (void)onDoneForwardForForwardView:(id)arg1;
- (void)forwardViewControllerDidCancel:(id)arg1;
- (void)forwardViewController:(id)arg1 didFinishForwardingWithDataItem:(id)arg2;
- (void)requestECConfig;
- (void)loadData;
- (void)fetchDataWithIndex:(unsigned long long)arg1 fromTop:(BOOL)arg2 completion:(id /* block */)arg3;
- (id)getUnreadDataItemList;
- (id)getContainerContextForContainer:(id)arg1;
- (void)syncHotSellingOptionsToPageManagers;
- (id)getDefaultSessionExtraKey;
- (void)saveDataItemAndExtraInfosWithContainerModels:(id)arg1 commentScene:(int)arg2 extraKey:(id)arg3;
- (id)genSessionModelWithDataItem:(id)arg1 scene:(int)arg2 extraKey:(id)arg3;
- (id)tabPageView;
- (id)firstScreenLoadingView;
- (id)getCommentSceneStrWithPageIndex:(unsigned long long)arg1;
- (id)getReportPageUdfKVWithPageIndex:(unsigned long long)arg1;
- (void)reportPageAppearWithIndex:(unsigned long long)arg1;
- (void)reportPageDisappearWithIndex:(unsigned long long)arg1;
- (id)entryBuffer;
- (void)setEntryBuffer:(id)arg1;
- (unsigned long long)enterScene;
- (void)setEnterScene:(unsigned long long)arg1;
- (void)setTabPageView:(id)arg1;
- (id)navBarView;
- (void)setNavBarView:(id)arg1;
- (id)navLabel;
- (void)setNavLabel:(id)arg1;
- (BOOL)navWasHidden;
- (void)setNavWasHidden:(BOOL)arg1;
- (void)setHeaderView:(id)arg1;
- (id)tabContainer;
- (void)setTabContainer:(id)arg1;
- (id)bgImgView;
- (void)setBgImgView:(id)arg1;
- (id)tagContainerModel;
- (void)setTagContainerModel:(id)arg1;
- (id)containerModels;
- (void)setContainerModels:(id)arg1;
- (id)exposedDataItemTids;
- (void)setExposedDataItemTids:(id)arg1;
- (id)pageMgrMap;
- (void)setPageMgrMap:(id)arg1;
- (id)themeId;
- (void)setThemeId:(id)arg1;
- (BOOL)isVisible;
- (void)setIsVisible:(BOOL)arg1;
- (unsigned long long)lastVisibleIndex;
- (void)setLastVisibleIndex:(unsigned long long)arg1;
- (void)setFirstScreenLoadingView:(id)arg1;
- (unsigned long long)reqContainerId;
- (void)setReqContainerId:(unsigned long long)arg1;
- (id)latestResp;
- (void)setLatestResp:(id)arg1;
- (id)extraInfoFetcher;
- (void)setExtraInfoFetcher:(id)arg1;
- (id)extraInfoFetchTimer;
- (void)setExtraInfoFetchTimer:(id)arg1;
- (id)hotSalePAGFile;
- (void)setHotSalePAGFile:(id)arg1;
- (id)hotSellingOptions;
- (void)setHotSellingOptions:(id)arg1;
- (id)currentAppearance;
- (void)setCurrentAppearance:(id)arg1;
- (id)shareInfo;
- (void)setShareInfo:(id)arg1;
- (id)bgGradientLayer;
- (void)setBgGradientLayer:(id)arg1;
- (id)stayReporter;
- (void)setStayReporter:(id)arg1;
- (BOOL)hasReportAppear;
- (void)setHasReportAppear:(BOOL)arg1;
- (BOOL)tilingSwitch;
- (void)setTilingSwitch:(BOOL)arg1;
- (id)shareActionSheet;
- (void)setShareActionSheet:(id)arg1;
- (id)forwardLogic;
- (void)setForwardLogic:(id)arg1;
- (void).cxx_destruct;
@end
