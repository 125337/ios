@interface POIFlutterViewController : MMUIViewController <ILocationMgrExt, WCFinderHalfScreenProtocol, FinderPOIPluginDelegate, NavigateLogicControllerDelegate, IFavoritesExt, POIMoreActionSheetUseCaseDelegate, ForwardMessageLogicDelegate, WCFinderFeedBaseViewControllerProtocol, IFinderPOIDetailViewController>
{
    WCFinderPOIParamsModel * _paramsModel; // +0x70
    WCFinderPOIRelatedStreamViewModel * _poiStreamModel; // +0x78
    BOOL _isExpand; // +0x80
    BOOL _isFeedFlowEmpty; // +0x81
    NavigateLogicController * _navigateLogicController; // +0x88
    POIMoreActionSheetUseCase * _moreActionSheetUseCase; // +0x90
    BOOL _isDragging; // +0x98
    BOOL _needBkgDragAnimation; // +0x99
    BOOL _showTakeCarBtn; // +0x9a
    BOOL _showPoiDetail; // +0x9b
    BOOL _shouldPrefetchStream; // +0x9c
    BOOL _isHoldHalfScreen; // +0x9d
    BOOL _isFinderHalfScreen; // +0x9e
    BOOL _showHalfBgMask; // +0x9f
    BOOL _canForward; // +0xa0
    BOOL _showPoiShareMp; // +0xa1
    unsigned int _reportScene; // +0xa4
    int _enterScene; // +0xa8
    int _commentScene; // +0xac
    unsigned int _poiFromChatUserType; // +0xb0
    unsigned int _poiFromChatType; // +0xb4
    id <WCFinderLocationPoiDetailViewDelegate> _delegate; // +0xb8
    unsigned long long _tabPageScene; // +0xc0
    NSString * _groupBuyBypassData; // +0xc8
    UINavigationController * _paramsNavigationVC; // +0xd0
    unsigned long long _authScene; // +0xd8
    MMFlutterViewController * _flutterVC; // +0xe0
    FinderPOIPlugin * _poiPlugin; // +0xe8
    UIView * _contentContainer; // +0xf0
    UIButton * _halfScreenBkgBtn; // +0xf8
    WCFinderStreamProfileDragBarView * _dragBarView; // +0x100
    POIInfo * _poiInfo; // +0x108
    WCFinderPoiBasicInfo * _poiBasicInfo; // +0x110
    PoiServiceInfo * _poiServiceInfo; // +0x118
    FavoritesItem * _favItem; // +0x120
    ForwardMessageLogicController * _forwardLogicController; // +0x128
    TakeCarServiceDataLogic * _takeCarDataLogic; // +0x130
    NavigationPOIServiceDataLogic * _navigationPOIServiceDataLogic; // +0x138
    MMLocatingPoiDataLogic * _dataLogic; // +0x140
    UIScreenEdgePanGestureRecognizer * _edgeRecognizer; // +0x148
    UIPanGestureRecognizer * _panGesture; // +0x150
    unsigned long long _flowLoadingTime; // +0x158
    double _shrinkHeightInFlutter; // +0x160
    double _expandHeightInFlutterWithNoStream; // +0x168
    NSString * _reportSessionId; // +0x170
    NSString * _fromChatName; // +0x178
    double _poiDistance; // +0x180
    CGPoint _originalContentOffset; // +0x188
}
- (id)initWith:(id)arg1;
- (id)initWithParams:(id)arg1;
- (void)dealloc;
- (void)setupFlutter;
- (void)viewDidLoad;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)initData;
- (id)layoutRootView;
- (CGSize)contentContainerSize;
- (void)initView;
- (BOOL)useTransparentNavibar;
- (BOOL)shouldNavigationBarAccessibilityHidden;
- (id)serializedDataFromPOIBasicInfo:(id)arg1;
- (id)serializedDataFromPoiServiceInfo:(id)arg1;
- (id)serializedDataForPOIDetailPageReportModel;
- (id)serializedDataForPOIETAReportModel;
- (id)getNavigateLogicControllerInstance;
- (id)getPOIMoreActionSheetUseCaseInstance;
- (BOOL)isDuoFinderHalfScreen;
- (void)reloadDuoHalfScreenLayout;
- (void)updateContentContainerTop:(double)arg1;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLayoutSubviews;
- (void)viewWillBePushOrPresent:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (id)poiBasicInfo;
- (id)poiServiceInfo;
- (id)takeCarDataLogic;
- (id)navigationPOIServiceDataLogic;
- (id)halfScreenBkgBtn;
- (id)dragBarView;
- (void)copyAddressString;
- (void)handleFinderEdgeGesture:(id)arg1;
- (BOOL)isExpand;
- (void)setIsExpand:(BOOL)arg1;
- (id)dataReportParamDictIsPageEvent:(BOOL)arg1;
- (void)fillReportChatParam:(id)arg1 chatUserType:(unsigned int)arg2 chatType:(unsigned int)arg3;
- (id)dataLogic;
- (void)prefetchPoiStream;
- (void)requestPoiStream;
- (void)refreshPOIView;
- (void)holdHalfScreenPOIView;
- (BOOL)isFromNearbyLife;
- (void)requestPoiDetail;
- (void)requestPoiServiceInfo;
- (void)setWcOrigin:(CGPoint)arg1;
- (void)reportPOIDetailCustomEvent:(id)arg1 eventData:(id)arg2;
- (void)reportClickEventForPOIDetail:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)handlePanGesture:(id)arg1;
- (double)containerPositioningHeight;
- (double)topValueOnExpand;
- (double)topValueOnShrink;
- (double)shrinkContentHeight;
- (double)expandContentHeight;
- (double)expandContentHeightWithDisableStream;
- (double)bottomGradientLayerHeight;
- (void)shrinkPOIView;
- (void)expandPOIView;
- (void)updateFavSelected:(BOOL)arg1;
- (void)updateDragProgress:(BOOL)arg1;
- (void)closeHalfScreen;
- (void)closeHalfScreenWithAnimCompleteCallback:(id /* block */)arg1;
- (void)setIsHoldHalfScreen:(BOOL)arg1;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (int)fromViewControllerScene;
- (id)getCurMediaListObject;
- (unsigned long long)scaleLevelToFit;
- (void)onLocationAuthorizationStatusUpdatedWithAccuracyAuthorization:(long long)arg1;
- (void)onGPSLocationChanged:(id)arg1 withTag:(unsigned long long)arg2;
- (void)updateUserLocation;
- (id)getCurTargetRatioValue;
- (id)getHalfContainerView;
- (void)listenHalfScreenIsShow:(BOOL)arg1 eventType:(unsigned long long)arg2;
- (void)onNavigateButtonTap;
- (void)onTakeCarButtonTap;
- (void)onMoreActionButtonTap;
- (void)onChangeFavoriteSelected:(BOOL)arg1;
- (void)onTapETA:(id)arg1 weAppUrl:(id)arg2;
- (void)onTapWaService:(id)arg1 weAppUrl:(id)arg2;
- (void)onFlutterUIParamUpdateWithKeyIndex:(long long)arg1 value:(double)arg2;
- (void)checkFlutterShrinkContentHeightUpdate:(double)arg1;
- (void)checkFlutterExpandContentNoStreamHeightUpdate:(double)arg1;
- (void)onChangeScrollState:(BOOL)arg1;
- (void)onForwardButtonTap;
- (void)forwardLocationMsg:(id)arg1;
- (void)reportCustomActionSheetClickWithIndex:(unsigned long long)arg1;
- (void)onAddressEntranceTap;
- (void)jumpLocationPage:(id)arg1;
- (id)getUserLocationFromNativeMap;
- (id)getPluginTopViewController;
- (id)getLocationText:(CLLocationCoordinate2D)arg1;
- (void)OnAddNewFavoritesItems:(id)arg1;
- (void)OnDelFavoritesItems:(id)arg1;
- (id)favItem;
- (BOOL)isCurrentPOIFavorite;
- (id)getCurrentViewController;
- (void)onStartLoading;
- (void)onStopLoading;
- (void)onPresentViewControlelr:(id)arg1 Animated:(BOOL)arg2;
- (void)onPushViewController:(id)arg1 Animated:(BOOL)arg2;
- (void)onOpenWeAppWithPara:(id)arg1;
- (id)sceneNoteForSrcType;
- (BOOL)canShowShareLocationMsgToDevice;
- (void)onShareLocationMsgToDevice;
- (id)getMoreActionSheetAttachViewController;
- (void)reportPOIDetailMoreActionEvent:(id)arg1 eventData:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isDragging;
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
- (BOOL)showHalfBgMask;
- (void)setShowHalfBgMask:(BOOL)arg1;
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
- (id)paramsNavigationVC;
- (void)setParamsNavigationVC:(id)arg1;
- (unsigned long long)authScene;
- (void)setAuthScene:(unsigned long long)arg1;
- (id)flutterVC;
- (void)setFlutterVC:(id)arg1;
- (id)poiPlugin;
- (void)setPoiPlugin:(id)arg1;
- (id)contentContainer;
- (void)setContentContainer:(id)arg1;
- (void)setHalfScreenBkgBtn:(id)arg1;
- (void)setDragBarView:(id)arg1;
- (id)poiInfo;
- (void)setPoiInfo:(id)arg1;
- (void)setPoiBasicInfo:(id)arg1;
- (void)setPoiServiceInfo:(id)arg1;
- (void)setFavItem:(id)arg1;
- (BOOL)canForward;
- (void)setCanForward:(BOOL)arg1;
- (CGPoint)originalContentOffset;
- (void)setOriginalContentOffset:(CGPoint)arg1;
- (id)forwardLogicController;
- (void)setForwardLogicController:(id)arg1;
- (void)setTakeCarDataLogic:(id)arg1;
- (void)setNavigationPOIServiceDataLogic:(id)arg1;
- (void)setDataLogic:(id)arg1;
- (id)edgeRecognizer;
- (void)setEdgeRecognizer:(id)arg1;
- (id)panGesture;
- (void)setPanGesture:(id)arg1;
- (unsigned long long)flowLoadingTime;
- (void)setFlowLoadingTime:(unsigned long long)arg1;
- (double)shrinkHeightInFlutter;
- (void)setShrinkHeightInFlutter:(double)arg1;
- (double)expandHeightInFlutterWithNoStream;
- (void)setExpandHeightInFlutterWithNoStream:(double)arg1;
- (id)reportSessionId;
- (void)setReportSessionId:(id)arg1;
- (id)fromChatName;
- (void)setFromChatName:(id)arg1;
- (unsigned int)poiFromChatUserType;
- (void)setPoiFromChatUserType:(unsigned int)arg1;
- (unsigned int)poiFromChatType;
- (void)setPoiFromChatType:(unsigned int)arg1;
- (double)poiDistance;
- (void)setPoiDistance:(double)arg1;
- (BOOL)showPoiShareMp;
- (void)setShowPoiShareMp:(BOOL)arg1;
- (void).cxx_destruct;
@end
