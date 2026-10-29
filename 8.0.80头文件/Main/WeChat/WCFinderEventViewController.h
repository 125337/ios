@interface WCFinderEventViewController : MMUIViewController <WCFinderEventViewModelDelegate, MMScrollActionSheetDelegate, WCActionSheetDelegate, MMSightCameraViewControllerDelegate, WCFinderCameraViewControllerDelegate, MJShootComposingViewControllerDelegate, WCGeneralMonitorDelegate, WCFinderEventHeaderViewDelegate, MMWebImageViewDelegate, WCFinderInvalidTipsViewDelegate, WCFinderCreateCoordinatorDelegate, CAAnimationDelegate, WCFinderTabPageViewDataSource, WCFinderTabPageViewDelegate, WCFinderEventPageViewManagerDelegate, WCFinderFeedFlowViewLayoutDelegate, ILinkEventExt, WCFinderEventDescriptionViewControllerDelegate, WCFinderVideoTemplateSelectVCDelegate, MMImagePickerManagerDelegate, WCFinderShareCustomTransitionProtocol, WCFinderFeedBaseViewControllerProtocol, MJPublisherDataSource>
{
    BOOL _showTotalTags; // +0x70
    BOOL _enablePostFeed; // +0x71
    BOOL _showTransparentNaviBar; // +0x72
    int _topicType; // +0x74
    int _refCommentScene; // +0x78
    int _tabType; // +0x7c
    int _fromType; // +0x80
    unsigned int _preSelectFilterType; // +0x84
    MJPublisher * _mjPublisher; // +0x88
    WCFinderEventViewModel * _viewModel; // +0x90
    WCFinderCreateLiveViewModel * _createLiveVM; // +0x98
    WCFinderAnimationLoadingView * _loadingView; // +0xa0
    WCFinderTabPageView * _tabPageView; // +0xa8
    FinderEventInfo * _eventInfo; // +0xb0
    NSMutableDictionary * _pageViewManagerDict; // +0xb8
    WCFinderTopicRouteParams * _params; // +0xc0
    unsigned long long _eventTopicId; // +0xc8
    NSString * _topicTitle; // +0xd0
    FinderLocation * _topicLocation; // +0xd8
    NSString * _latitude; // +0xe0
    NSString * _longitude; // +0xe8
    NSString * _navigationBarTitle; // +0xf0
    NSString * _refObjectid; // +0xf8
    unsigned long long _eventEnterScene; // +0x100
    NSString * _visitId; // +0x108
    NSString * _traceId; // +0x110
    unsigned long long _sourceType; // +0x118
    NSDictionary * _sourceExtInfo; // +0x120
    FinderGetTopicListResponse * _cacheResponse; // +0x128
    NSArray * _cacheDataItems; // +0x130
    WCFinderSectionInfo * _sectionInfo; // +0x138
    WCFinderTagHeaderCollectionReusableView * _tagHeaderView; // +0x140
    unsigned long long _exportMark; // +0x148
    NSMutableArray * _selectedArray; // +0x150
    NSMutableDictionary * _exposeTimeDict; // +0x158
    WCActionSheetWithHeadAvatar * _publishActionSheet; // +0x160
    WCActionSheet * _eventActionSheet; // +0x168
    RecommendedMusicInfo * _musicInfo; // +0x170
    WCFinderCreateCoordinator * _createCoordinator; // +0x178
    NSString * _refUsername; // +0x180
    UIBarButtonItem * _moreRightButtonItem; // +0x188
    UIBarButtonItem * _postRightButtonItem; // +0x190
    NSString * _encryptedTopicId; // +0x198
    UIView * _eventBackgroundContainer; // +0x1a0
    MMWebImageView * _backgroundImageView; // +0x1a8
    UIView * _eventFirstAppearForegroundView; // +0x1b0
    UIView * _gradientView; // +0x1b8
    UIView * _statementView; // +0x1c0
    WCFinderScrollActionSheet * _moreActionSheet; // +0x1c8
    unsigned long long _enterTime; // +0x1d0
    NSData * _byPassInfo; // +0x1d8
}
- (id)initWithParams:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (long long)overrideUserInterfaceStyle;
- (BOOL)shouldInteractivePop;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidBePushOrPresent:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)willDisappear;
- (id)navigationBarBackgroundColor;
- (void)setupNavigationBarTitle;
- (void)onFinderSearchResultUpdatePatNavTitle;
- (void)startLoadingAnimation;
- (void)stopLoadingAnimation;
- (id)loadingView;
- (id)tabPageView;
- (id)pageViewManagerDict;
- (id)selectedArray;
- (id)eventBackgroundContainer;
- (void)setGradientView;
- (id)backgroundImageView;
- (id)statementView;
- (void)initEventFirstAppearForegroundView;
- (void)updateEventUI;
- (double)contentDisplayWidth;
- (double)contentLeftMargin;
- (id)activeManager;
- (id)managerAtTabIndex:(unsigned long long)arg1;
- (id)managerAtTabIndex:(unsigned long long)arg1 filterIndex:(unsigned long long)arg2;
- (long long)numberOfTabPageInFinderTabPageView:(id)arg1;
- (id)headerViewInFinderTabPageView:(id)arg1;
- (double)heightForHeaderViewInFinderTabPageView:(id)arg1;
- (id)finderTabPageView:(id)arg1 tabViewAtIndex:(unsigned long long)arg2;
- (id)finderTabPageView:(id)arg1 pageViewAtIndex:(unsigned long long)arg2;
- (void)finderTabPageView:(id)arg1 configureTabViewContainer:(id)arg2;
- (id)tabPageView:(id)arg1 filterNameArrayAtIndex:(unsigned long long)arg2;
- (double)topInsetOfFinderTabPageView:(id)arg1;
- (void)finderTabPageView:(id)arg1 alphaOfTabContainerChanged:(double)arg2;
- (void)finderTabPageView:(id)arg1 switchFromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (void)finderTabPageView:(id)arg1 willSelectFilterAtIndex:(unsigned long long)arg2;
- (void)finderTabPageView:(id)arg1 didSelectFilterAtIndex:(unsigned long long)arg2;
- (UIEdgeInsets)marginForTabContainerInFinderTabPageView:(id)arg1;
- (void)headerViewWillDisplayInFinderTabPageView:(id)arg1;
- (void)updateEventBackgroundImageIfNeed;
- (void)onFinderEventHeaderViewNeedRefresh;
- (void)onFinderEventClose:(BOOL)arg1 errorCode:(int)arg2;
- (void)onFinderEventTabListError;
- (void)finderInvalidTipsViewDidClickConfirmButton:(id)arg1;
- (void)reloadDataWrap;
- (void)onClickBackItem;
- (void)onClickRightItem:(id)arg1;
- (id)getItemArrayConfigWithDataItem:(id)arg1;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)scrollActionSheetDidCancel:(id)arg1;
- (void)scrollActionSheetDidTapTransparent:(id)arg1;
- (void)reportForwordWith:(id)arg1;
- (id)generTopicShareItemWithTopicTitleWithType:(int)arg1 topicTitle:(id)arg2 topicLocation:(id)arg3 topicCount:(unsigned long long)arg4;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (id)getCurMediaListObject;
- (id)genTopicTitleWithType:(int)arg1 topicTitle:(id)arg2 topicLocation:(id)arg3;
- (void)reportJoinButtonWithType:(long long)arg1 blockReason:(unsigned long long)arg2;
- (id)getEventInfoModel;
- (void)triggerShowPostAction;
- (void)triggerFinderNormalPostAction;
- (void)showMiaojianTemplatePublishViewController;
- (void)showFinderVideoTemplateSelectView;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showFinderCameraViewController;
- (void)showFinderPublishView;
- (void)onSightCameraCancel:(id)arg1;
- (void)onShortVideoTaken:(id)arg1 thumbImg:(id)arg2 editVideoAttr:(id)arg3 paramModel:(id)arg4;
- (void)presentFinderPostViewControllerWithPostSession:(id)arg1;
- (id)genPostSourceInfo;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(BOOL)arg3 editImageAttr:(id)arg4;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (id)onImagePreviewBrowserController:(id)arg1 didCreateVideoCompositionActionFlow:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithEditImageAttr:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingSightWithInfo:(id)arg2;
- (void)processWithSightDraft:(id)arg1;
- (void)processWithSightDraft:(id)arg1 finderTask:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingAssetWithPostSession:(id)arg2;
- (void)reportPostRouteExtStatsForActionType:(int)arg1;
- (void)onEventHeaderClickJoinButtonAction:(id)arg1;
- (void)onEventHeaderClickMiniAppEntranceAction:(id)arg1;
- (void)onEventHeaderClickAuthorInfoAction:(id)arg1;
- (void)onEventHeaderClickDescriptionContactAction:(id)arg1;
- (void)onEventHeaderClickDescriptionDetailAction:(id)arg1;
- (void)showDescriptionJumpInfoSheet;
- (void)showDescriptionViewSheet;
- (void)finderCreateAccountSuccess:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)finderEventFeedOrderChangedInHotTab;
- (void)finderEventChangeToNewestTab;
- (void)finderEventReceiveFirstPageWithPrefetched:(BOOL)arg1;
- (void)finderEventInvalidWithErrorCode:(int)arg1;
- (id)invalidTipsInfoWithErrorCode:(int)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)finderEventDescriptionViewController:(id)arg1 didClickUrl:(id)arg2;
- (void)finderTemplateSelectVCDidPickSightDraft:(id)arg1;
- (void)finderTemplateSelectVCDidFinishCameraTemplateTakenWithPath:(id)arg1 thumbImg:(id)arg2 editVideoAttr:(id)arg3 paramModel:(id)arg4;
- (void)processWithVideoPath:(id)arg1 thumbImg:(id)arg2 editVideoAttr:(id)arg3 paramModel:(id)arg4;
- (void)registerYReportSdk;
- (id)baseNewLifeReportParams;
- (void)shootComposingViewController:(id)arg1 didSavedAIGCAsyncDraft:(id)arg2;
- (void)shootComposingViewController:(id)arg1 didTakenSightPicture:(id)arg2 imageData:(id)arg3 frontCamera:(BOOL)arg4 editImageAttr:(id)arg5;
- (void)shootComposingViewController:(id)arg1 didTakenShortVideo:(id)arg2 thumbImg:(id)arg3 editVideoAttr:(id)arg4 paramModel:(id)arg5;
- (void)realStartLive;
- (BOOL)showLive;
- (id)mjPublisher;
- (void)setMjPublisher:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)createLiveVM;
- (void)setCreateLiveVM:(id)arg1;
- (void)setLoadingView:(id)arg1;
- (void)setTabPageView:(id)arg1;
- (id)eventInfo;
- (void)setEventInfo:(id)arg1;
- (void)setPageViewManagerDict:(id)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (int)topicType;
- (void)setTopicType:(int)arg1;
- (unsigned long long)eventTopicId;
- (void)setEventTopicId:(unsigned long long)arg1;
- (id)topicTitle;
- (void)setTopicTitle:(id)arg1;
- (id)topicLocation;
- (void)setTopicLocation:(id)arg1;
- (id)latitude;
- (void)setLatitude:(id)arg1;
- (id)longitude;
- (void)setLongitude:(id)arg1;
- (id)navigationBarTitle;
- (void)setNavigationBarTitle:(id)arg1;
- (id)refObjectid;
- (void)setRefObjectid:(id)arg1;
- (int)refCommentScene;
- (void)setRefCommentScene:(int)arg1;
- (unsigned long long)eventEnterScene;
- (void)setEventEnterScene:(unsigned long long)arg1;
- (id)visitId;
- (void)setVisitId:(id)arg1;
- (id)traceId;
- (void)setTraceId:(id)arg1;
- (unsigned long long)sourceType;
- (void)setSourceType:(unsigned long long)arg1;
- (id)sourceExtInfo;
- (void)setSourceExtInfo:(id)arg1;
- (BOOL)showTotalTags;
- (void)setShowTotalTags:(BOOL)arg1;
- (id)cacheResponse;
- (void)setCacheResponse:(id)arg1;
- (id)cacheDataItems;
- (void)setCacheDataItems:(id)arg1;
- (id)sectionInfo;
- (void)setSectionInfo:(id)arg1;
- (int)tabType;
- (void)setTabType:(int)arg1;
- (int)fromType;
- (void)setFromType:(int)arg1;
- (id)tagHeaderView;
- (void)setTagHeaderView:(id)arg1;
- (unsigned long long)exportMark;
- (void)setExportMark:(unsigned long long)arg1;
- (void)setSelectedArray:(id)arg1;
- (id)exposeTimeDict;
- (void)setExposeTimeDict:(id)arg1;
- (id)publishActionSheet;
- (void)setPublishActionSheet:(id)arg1;
- (id)eventActionSheet;
- (void)setEventActionSheet:(id)arg1;
- (id)musicInfo;
- (void)setMusicInfo:(id)arg1;
- (id)createCoordinator;
- (void)setCreateCoordinator:(id)arg1;
- (id)refUsername;
- (void)setRefUsername:(id)arg1;
- (id)moreRightButtonItem;
- (void)setMoreRightButtonItem:(id)arg1;
- (id)postRightButtonItem;
- (void)setPostRightButtonItem:(id)arg1;
- (BOOL)enablePostFeed;
- (void)setEnablePostFeed:(BOOL)arg1;
- (id)encryptedTopicId;
- (void)setEncryptedTopicId:(id)arg1;
- (void)setEventBackgroundContainer:(id)arg1;
- (void)setBackgroundImageView:(id)arg1;
- (BOOL)showTransparentNaviBar;
- (void)setShowTransparentNaviBar:(BOOL)arg1;
- (id)eventFirstAppearForegroundView;
- (void)setEventFirstAppearForegroundView:(id)arg1;
- (id)gradientView;
- (void)setGradientView:(id)arg1;
- (void)setStatementView:(id)arg1;
- (id)moreActionSheet;
- (void)setMoreActionSheet:(id)arg1;
- (unsigned long long)enterTime;
- (void)setEnterTime:(unsigned long long)arg1;
- (id)byPassInfo;
- (void)setByPassInfo:(id)arg1;
- (unsigned int)preSelectFilterType;
- (void)setPreSelectFilterType:(unsigned int)arg1;
- (void).cxx_destruct;
@end
