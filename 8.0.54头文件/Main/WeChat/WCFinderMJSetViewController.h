@interface WCFinderMJSetViewController : MMUIViewController <WCFinderTabPageViewDelegate, WCFinderTabPageViewDataSource, WCFinderMJSetTemplateViewModelDelegate, MMNavBarInteractiveDelegate, WCFinderTemplatePublishDataDelegate, MMScrollActionSheetDelegate, WCFinderScrollActionSheetDelegate, WCFinderFeedBaseViewControllerProtocol>
{
    WCFinderMJSetTemplateViewModel * _viewModel; // +0x68
    WCFinderTabPageView * _tabPageView; // +0x70
    NSMutableDictionary * _feedFlowViewMap; // +0x78
    NSMapTable * _feedFlowViewDataMap; // +0x80
    WCFinderAnimationLoadingView * _loadingView; // +0x88
    UILabel * _statusLabel; // +0x90
    UIBarButtonItem * _rightButtonItem; // +0x98
    NSNumber * _needReportEnterTimeRecard; // +0xa0
    WCFinderMJSetInitParams * _params; // +0xa8
    WCFinderMJSetBriefCardView * _cardBriefView; // +0xb0
    WCFinderScrollActionSheet * _moreActionSheet; // +0xb8
}
- (id)initWithParams:(id)arg1;
- (void)viewDidLoad;
- (id)navigationBarBackgroundColor;
- (BOOL)useBlackStatusbar;
- (void)viewDidTransitionToNewSize;
- (id)postMgrSourceInfo;
- (id)cardBriefView;
- (void)viewDidBePushOrPresent:(BOOL)arg1;
- (void)reportEnter;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (id)enter21874UDFKV;
- (void)viewWillLayoutSubviews;
- (void)setupFadeNav;
- (void)startLoadingData;
- (void)onClickMenuBtn;
- (void)onClickBecomeCreatorBtn;
- (void)onClickMoreButton:(id)arg1;
- (id)getItemArrayConfig;
- (void)_pushBecomeCreatorView;
- (void)adjustIpadScrollViewLayout;
- (void)onMJSetTempVM:(id)arg1 fetchHeaderInfoFinish:(BOOL)arg2 error:(id)arg3;
- (void)onMJSetTempVM:(id)arg1 fetchDataFinish:(BOOL)arg2 error:(id)arg3;
- (void)setupNavItem:(BOOL)arg1;
- (id)getRightNaviBarStackView;
- (void)displayStatusView:(id)arg1 action:(SEL)arg2;
- (id)fadeTintColor;
- (id)normalTintColor;
- (BOOL)isSetNormalToBlackStyle;
- (id)fadeRightButton;
- (id)normalRightButton;
- (long long)numberOfTabPageInFinderTabPageView:(id)arg1;
- (void)finderTabPageView:(id)arg1 alphaOfTabContainerChanged:(double)arg2;
- (id)finderTabPageView:(id)arg1 pageViewAtIndex:(unsigned long long)arg2;
- (id)finderTabPageView:(id)arg1 tabNameAtIndex:(unsigned long long)arg2;
- (id)headerViewInFinderTabPageView:(id)arg1;
- (double)heightForHeaderViewInFinderTabPageView:(id)arg1;
- (UIEdgeInsets)marginForTabContainerInFinderTabPageView:(id)arg1;
- (id)customTabContainerBackgroundColorForFinderTabPageView:(id)arg1;
- (BOOL)finderTabPageHeaderAddBlurView;
- (double)topInsetOfFinderTabPageView:(id)arg1;
- (void)finderTabPageView:(id)arg1 switchFromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (void)onClickContact;
- (void)onClickPost;
- (void)onClickDesigner;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (int)fromViewControllerScene;
- (id)getCurMediaListObject;
- (unsigned long long)finderScrollActionSheet:(id)arg1 customConfigItemEnableWithItemFlag:(unsigned long long)arg2;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (id)generTopicShareItemWithTopicTitleWithType:(int)arg1;
- (int)topicType;
- (void)registerYReportSdk;
- (id)genSessionReportDict;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)tabPageView;
- (void)setTabPageView:(id)arg1;
- (id)feedFlowViewMap;
- (void)setFeedFlowViewMap:(id)arg1;
- (id)feedFlowViewDataMap;
- (void)setFeedFlowViewDataMap:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (id)statusLabel;
- (void)setStatusLabel:(id)arg1;
- (id)rightButtonItem;
- (void)setRightButtonItem:(id)arg1;
- (id)needReportEnterTimeRecard;
- (void)setNeedReportEnterTimeRecard:(id)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (void)setCardBriefView:(id)arg1;
- (id)moreActionSheet;
- (void)setMoreActionSheet:(id)arg1;
- (void).cxx_destruct;
@end

