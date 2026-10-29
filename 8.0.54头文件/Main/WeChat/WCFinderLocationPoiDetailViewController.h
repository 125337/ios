@interface WCFinderLocationPoiDetailViewController : MMUIViewController <WCFinderTabPageViewDelegate, WCFinderTabPageViewDataSource, WCFinderFeedFlowViewDelegate, WCFinderPOIRelatedUICollectionReusableViewDelegate, MMLocationPoiHeadViewDelegate, MMLocationPoiDetailViewDelegate, ForwardMessageLogicDelegate, ILocationMgrExt, WCFinderPoiHeadViewDelegate, WCFinderStreamProfileDragBarViewDelegate, WCFinderHalfScreenProtocol, IFinderPOIDetailViewController>
{
    MMLocationPoiDetailModel * _poiDetailModel; // +0x68
    WCFinderPOIParamsModel * _paramsModel; // +0x70
    WCFinderPOIRelatedStreamViewModel * _poiStreamModel; // +0x78
    WCFinderLocationPoiDetailDelegateObj * _delegateObj; // +0x80
    NSMutableDictionary * _pageViewManagerDict; // +0x88
    WCFinderFeedFlowView * _defaultFlowView; // +0x90
    BOOL _isExpand; // +0x98
    BOOL _isFeedFlowEmpty; // +0x99
    BOOL _isDragging; // +0x9a
    BOOL _enableFollowScroll; // +0x9b
    unsigned long long _enterTime; // +0xa0
    unsigned long long _halfScreenStartTime; // +0xa8
    unsigned long long _halfScreenStayTime; // +0xb0
    unsigned long long _halfScreenExpCnt; // +0xb8
    BOOL _needBkgDragAnimation; // +0xc0
    BOOL _showTakeCarBtn; // +0xc1
    BOOL _showPoiDetail; // +0xc2
    BOOL _shouldPrefetchStream; // +0xc3
    BOOL _isHoldHalfScreen; // +0xc4
    BOOL _isFinderHalfScreen; // +0xc5
    BOOL _usePoiBasicInfoCgi; // +0xc6
    BOOL _canForward; // +0xc7
    unsigned int _reportScene; // +0xc8
    int _enterScene; // +0xcc
    int _commentScene; // +0xd0
    id <WCFinderLocationPoiDetailViewDelegate> _delegate; // +0xd8
    unsigned long long _tabPageScene; // +0xe0
    NSString * _groupBuyBypassData; // +0xe8
    MMLocationPoiHeadView * _headView; // +0xf0
    WCFinderTabPageView * _tabPageView; // +0xf8
    CALayer * _tabPageViewContentLayer; // +0x100
    MMLocatingPoiDataLogic * _dataLogic; // +0x108
    UIView * _contentContainer; // +0x110
    UIView * _halfScreenBkgBtn; // +0x118
    WCFinderPoiHeadView * _finderPoiheadView; // +0x120
    POIInfo * _poiInfo; // +0x128
    WCFinderPoiBasicInfo * _poiBasicInfo; // +0x130
    WCFinderStreamProfileDragBarView * _dragBarView; // +0x138
    FavoritesItem * _favItem; // +0x140
    ForwardMessageLogicController * _forwardLogicController; // +0x148
    TakeCarServiceDataLogic * _takeCarDataLogic; // +0x150
    UIScreenEdgePanGestureRecognizer * _edgeRecognizer; // +0x158
    unsigned long long _flowLoadingTime; // +0x160
    CGPoint _originalContentOffset; // +0x168
}
- (id)initWith:(id)arg1;
- (id)initWithParams:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillBePushOrPresent:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)initData;
- (void)initView;
- (BOOL)useTransparentNavibar;
- (BOOL)shouldNavigationBarAccessibilityHidden;
- (void)viewDidLayoutSubviews;
- (id)headView;
- (id)tabPageView;
- (id)dragBarView;
- (id)poiBasicInfo;
- (id)takeCarDataLogic;
- (id)halfScreenBkgBtn;
- (void)handlePanGesture:(id)arg1;
- (void)handleFinderPanGesture:(id)arg1;
- (void)handleFinderEdgeGesture:(id)arg1;
- (BOOL)isDragging;
- (BOOL)isExpand;
- (BOOL)isFromNearbyLife;
- (void)shrinkPOIView;
- (void)expandPOIView;
- (void)holdHalfScreenPOIView;
- (void)updateFavSelected:(BOOL)arg1;
- (void)setIsExpand:(BOOL)arg1;
- (id)view;
- (void)setWcOrigin:(CGPoint)arg1;
- (void)updateDragProgress:(BOOL)arg1;
- (void)updateContentAreaAlpha:(double)arg1;
- (void)closeHalfScreen;
- (void)setEnableFollowScroll:(BOOL)arg1;
- (id)feedFlowViewAtPage:(unsigned long long)arg1;
- (void)copyAddressString;
- (double)topValueOnExpand;
- (double)topValueOnShrink;
- (double)shrinkContentHeight;
- (double)bottomGradientLayerHeight;
- (double)dragBarViewExpandMaxHeight:(id)arg1;
- (double)dragBarViewExpandMinHeight:(id)arg1;
- (void)finderTabPageView:(id)arg1 switchFromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (id)finderFeedFlowViewCurrentViewController:(id)arg1;
- (unsigned long long)finderFeedFlowViewState:(id)arg1;
- (void)finderFeedFlowViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(CGPoint *)arg3;
- (double)heightForHeaderViewInFinderTabPageView:(id)arg1;
- (double)heightForHeaderViewChangeAlphaInFinderTabPageView:(id)arg1;
- (id)headerViewInFinderTabPageView:(id)arg1;
- (long long)numberOfTabPageInFinderTabPageView:(id)arg1;
- (id)finderTabPageView:(id)arg1 tabNameAtIndex:(unsigned long long)arg2;
- (void)finderTabPageView:(id)arg1 alphaOfTabContainerChanged:(double)arg2;
- (id)finderTabPageView:(id)arg1 tabViewAtIndex:(unsigned long long)arg2;
- (UIEdgeInsets)marginForTabContainerInFinderTabPageView:(id)arg1;
- (id)finderTabPageView:(id)arg1 pageViewAtIndex:(unsigned long long)arg2;
- (void)finderTabPageView:(id)arg1 willSelectFilterAtIndex:(unsigned long long)arg2;
- (id)currentFeedFlowView;
- (double)finderTabPageView:(id)arg1 heightForTabViewAtIndex:(unsigned long long)arg2;
- (void)updateDefaultEmptyTipsOffset;
- (void)setIsHoldHalfScreen:(BOOL)arg1;
- (id)tabPageView:(id)arg1 filterNameArrayAtIndex:(unsigned long long)arg2;
- (id)dataLogic;
- (void)prefetchPoiStream;
- (void)requestPoiStream;
- (void)requestPoiDetail;
- (void)refreshPOIView;
- (CGSize)contentContainerSize;
- (unsigned long long)scaleLevelToFit;
- (void)onNavigateToPOI:(id)arg1;
- (void)onTapTakeCarBtn;
- (void)onTapSwitchBtn:(id)arg1;
- (void)onTapPhoneNumberLink:(id)arg1;
- (void)onUpdateFavSelected:(BOOL)arg1;
- (void)changeFavSelected:(BOOL)arg1;
- (BOOL)isCurrentPOIFavorite;
- (id)favItem;
- (void)onTapForwardBtn:(id)arg1;
- (void)forwardLocationMsg:(id)arg1;
- (void)reportCustomActionSheetClickWithIndex:(unsigned long long)arg1;
- (unsigned long long)reportType;
- (id)getCurrentViewController;
- (void)onTapPoiHeadView:(id)arg1 descViewExpandButton:(id)arg2;
- (void)onTapAddressEntrance;
- (void)onTapRecommendDishes;
- (void)onTapGroupBuyView:(id)arg1;
- (void)onTapGroupBuyButton:(id)arg1;
- (void)onTapMoreGroupBuyEnrance;
- (id)dataReportParamDict;
- (void)updateUserLocation;
- (void)onLocationAuthorizationStatusUpdatedWithAccuracyAuthorization:(long long)arg1;
- (void)onGPSLocationChanged:(id)arg1 withTag:(unsigned long long)arg2;
- (void)OnAddNewFavoritesItems:(id)arg1;
- (void)OnDelFavoritesItems:(id)arg1;
- (id)getHalfContainerView;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (int)fromViewControllerScene;
- (id)getCurMediaListObject;
- (void)reportCustomPageEventWithId:(id)arg1;
- (void)registerYReportSdk;
- (id)pageEventReportDictWithEventId:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)tabPageScene;
- (void)setTabPageScene:(unsigned long long)arg1;
- (BOOL)needBkgDragAnimation;
- (BOOL)showTakeCarBtn;
- (void)setShowTakeCarBtn:(BOOL)arg1;
- (BOOL)showPoiDetail;
- (void)setShowPoiDetail:(BOOL)arg1;
- (BOOL)shouldPrefetchStream;
- (void)setShouldPrefetchStream:(BOOL)arg1;
- (BOOL)isHoldHalfScreen;
- (BOOL)isFinderHalfScreen;
- (void)setIsFinderHalfScreen:(BOOL)arg1;
- (unsigned int)reportScene;
- (void)setReportScene:(unsigned int)arg1;
- (int)enterScene;
- (void)setEnterScene:(int)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (id)paramsModel;
- (void)setParamsModel:(id)arg1;
- (id)groupBuyBypassData;
- (void)setGroupBuyBypassData:(id)arg1;
- (void)setHeadView:(id)arg1;
- (void)setTabPageView:(id)arg1;
- (id)tabPageViewContentLayer;
- (void)setTabPageViewContentLayer:(id)arg1;
- (void)setDataLogic:(id)arg1;
- (id)contentContainer;
- (void)setContentContainer:(id)arg1;
- (void)setHalfScreenBkgBtn:(id)arg1;
- (BOOL)usePoiBasicInfoCgi;
- (void)setUsePoiBasicInfoCgi:(BOOL)arg1;
- (id)finderPoiheadView;
- (void)setFinderPoiheadView:(id)arg1;
- (CGPoint)originalContentOffset;
- (void)setOriginalContentOffset:(CGPoint)arg1;
- (id)poiInfo;
- (void)setPoiInfo:(id)arg1;
- (void)setPoiBasicInfo:(id)arg1;
- (void)setDragBarView:(id)arg1;
- (void)setFavItem:(id)arg1;
- (BOOL)canForward;
- (void)setCanForward:(BOOL)arg1;
- (id)forwardLogicController;
- (void)setForwardLogicController:(id)arg1;
- (void)setTakeCarDataLogic:(id)arg1;
- (id)edgeRecognizer;
- (void)setEdgeRecognizer:(id)arg1;
- (unsigned long long)flowLoadingTime;
- (void)setFlowLoadingTime:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

