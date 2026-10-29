@interface WCFinderMJSetViewController : MMUIViewController <WCFinderTabPageViewDelegate, WCFinderTabPageViewDataSource, WCFinderMJSetTemplateViewModelDelegate, MMNavBarInteractiveDelegate, WCFinderTemplatePublishDataDelegate, MMScrollActionSheetDelegate, WCFinderScrollActionSheetDelegate, WCFinderFeedBaseViewControllerProtocol>
{
    WCFinderMJSetTemplateViewModel * _viewModel; // +0x70
    WCFinderTabPageView * _tabPageView; // +0x78
    NSMutableDictionary * _feedFlowViewMap; // +0x80
    NSMapTable * _feedFlowViewDataMap; // +0x88
    WCFinderAnimationLoadingView * _loadingView; // +0x90
    UILabel * _statusLabel; // +0x98
    UIBarButtonItem * _rightButtonItem; // +0xa0
    NSNumber * _needReportEnterTimeRecard; // +0xa8
    WCFinderMJSetInitParams * _params; // +0xb0
    WCFinderMJSetBriefCardView * _cardBriefView; // +0xb8
    WCFinderScrollActionSheet * _moreActionSheet; // +0xc0
}
- (id)initWithParams:(id)arg1;
- (unsigned long long)resolvedChildEnterScene;
- (id)resolvedPostId;
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
- (id)authorViewerItemArrayConfig;
- (void)forwardTemplateToChat;
- (void)shareTemplateToMoment;
- (void)pushTemplateFeedbackMiniApp;
- (void)showOffShelfConfirmActionSheet;
- (void)onConfirmOffShelf;
- (void)_pushBecomeCreatorView;
- (void)_appendEnterChildSceneToJumpInfo:(id)arg1;
- (void)adjustIpadScrollViewLayout;
- (void)onMJSetTempVM:(id)arg1 fetchHeaderInfoFinish:(BOOL)arg2 error:(id)arg3;
- (void)onMJSetTempVM:(id)arg1 fetchDataFinish:(BOOL)arg2 error:(id)arg3;
- (void)setupNavItem:(BOOL)arg1;
- (id)getRightNaviBarStackViewWithShowBecomeCreatorEntry:(BOOL)arg1;
- (id)_getCreatorConfig;
- (id)_getCreatorConfigWording;
- (id)_getCreatorConfigIconUrl;
- (id)_getCreatorConfigWebUrl;
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
- (void)onClickFavorite;
- (void)updateFavoriteButtonUIWithCameraTemplateItem:(id)arg1;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (int)fromViewControllerScene;
- (id)getCurMediaListObject;
- (unsigned long long)finderScrollActionSheet:(id)arg1 customConfigItemEnableWithItemFlag:(unsigned long long)arg2;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (id)generTopicShareItemWithTopicTitleWithType:(int)arg1;
- (int)topicType;
- (id)sourceFeedContentVMForReport;
- (id)templateRecommendReasonForReport;
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
