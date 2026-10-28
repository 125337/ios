@interface WCFinderPOIRelatedStreamViewController : MMUIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, WCGeneralMonitorDelegate, WCFinderStreamLayoutDelegate, WCFinderFeedStaticCoverCollectionViewCellDelegate, WCFinderStreamFooterViewActionDelegate, WCFinderPOIRelatedStreamViewModelDelegate, WCFinderPOIRelatedUICollectionReusableViewDelegate, MMNavBarInteractiveDelegate, WCActionSheetDelegate, ForwardMessageLogicDelegate, WCFinderNearbyFlowViewControllerDelegate, WCFinderFeedFlowLiveCellDelegate, WCFinderTabPageViewDataSource, WCFinderTabPageViewDelegate, WCFinderFeedBaseViewControllerProtocol>
{
    int _entryScene; // +0x70
    WCFinderPOIRelatedStreamViewModel * _viewModel; // +0x78
    WCFinderAnimationLoadingView * _loadingView; // +0x80
    WCFinderTabPageView * _tabPageView; // +0x88
    NSMutableDictionary * _pageViewManagerDict; // +0x90
    unsigned long long _appearTime; // +0x98
    NSMutableDictionary * _exposeTimeDict; // +0xa0
    ForwardMessageLogicController * _forwardLogic; // +0xa8
    unsigned long long _enterTime; // +0xb0
    NSString * _traceId; // +0xb8
}
- (id)initWithPOIParamsModel:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillBePushOrPresent:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (double)contentDisplayWidth;
- (double)contentLeftMargin;
- (void)startLoadingAnimation;
- (void)stopLoadingAnimation;
- (id)loadingView;
- (id)tabPageView;
- (id)pageViewManagerDict;
- (id)exposeTimeDict;
- (void)setupNavigationItem;
- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (BOOL)isSetNormalToBlackStyle;
- (id)normalTintColor;
- (id)fadeTintColor;
- (void)onReturn:(id)arg1;
- (void)onAction:(id)arg1;
- (void)sharePOIToFriend;
- (void)sharePOIToMoment;
- (void)reportTab:(id)arg1 withEventType:(long long)arg2;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)onFinderPoiHeaderViewNeedRefresh;
- (void)onFinderPoiTabListError;
- (long long)numberOfTabPageInFinderTabPageView:(id)arg1;
- (id)headerViewInFinderTabPageView:(id)arg1;
- (double)heightForHeaderViewInFinderTabPageView:(id)arg1;
- (id)finderTabPageView:(id)arg1 tabNameAtIndex:(unsigned long long)arg2;
- (UIEdgeInsets)marginForTabContainerInFinderTabPageView:(id)arg1;
- (id)finderTabPageView:(id)arg1 pageViewAtIndex:(unsigned long long)arg2;
- (double)topInsetOfFinderTabPageView:(id)arg1;
- (void)finderTabPageView:(id)arg1 alphaOfTabContainerChanged:(double)arg2;
- (void)finderTabPageView:(id)arg1 switchFromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (void)onHeaderViewClickNaviAction;
- (void)onHeaderViewClickGoProfileAction;
- (void)onHeaderViewClickPhoneCallAction:(id)arg1;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (int)fromViewControllerScene;
- (id)getCurMediaListObject;
- (void)registerYReportSdk;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (int)entryScene;
- (void)setEntryScene:(int)arg1;
- (void)setLoadingView:(id)arg1;
- (void)setTabPageView:(id)arg1;
- (void)setPageViewManagerDict:(id)arg1;
- (unsigned long long)appearTime;
- (void)setAppearTime:(unsigned long long)arg1;
- (void)setExposeTimeDict:(id)arg1;
- (id)forwardLogic;
- (void)setForwardLogic:(id)arg1;
- (unsigned long long)enterTime;
- (void)setEnterTime:(unsigned long long)arg1;
- (id)traceId;
- (void)setTraceId:(id)arg1;
- (void).cxx_destruct;
@end
