@interface POIFlutterViewController : MMUIViewController <ILocationMgrExt, WCFinderHalfScreenProtocol, FinderPOIPluginDelegate, IFavoritesExt, ForwardMessageLogicDelegate, WCFinderFeedBaseViewControllerProtocol, IFinderPOIDetailViewController>
{
    WCFinderPOIParamsModel * _paramsModel; // +0x68
    WCFinderPOIRelatedStreamViewModel * _poiStreamModel; // +0x70
    BOOL _isExpand; // +0x78
    BOOL _isFeedFlowEmpty; // +0x79
    BOOL _isDragging; // +0x7a
    BOOL _needBkgDragAnimation; // +0x7b
    BOOL _showTakeCarBtn; // +0x7c
    BOOL _showPoiDetail; // +0x7d
    BOOL _shouldPrefetchStream; // +0x7e
    BOOL _isHoldHalfScreen; // +0x7f
    BOOL _isFinderHalfScreen; // +0x80
    BOOL _canForward; // +0x81
    unsigned int _reportScene; // +0x84
    int _enterScene; // +0x88
    int _commentScene; // +0x8c
    id <WCFinderLocationPoiDetailViewDelegate> _delegate; // +0x90
    unsigned long long _tabPageScene; // +0x98
    NSString * _groupBuyBypassData; // +0xa0
    MMFlutterViewController * _flutterVC; // +0xa8
    FinderPOIPlugin * _poiPlugin; // +0xb0
    UIView * _contentContainer; // +0xb8
    UIView * _halfScreenBkgBtn; // +0xc0
    WCFinderStreamProfileDragBarView * _dragBarView; // +0xc8
    POIInfo * _poiInfo; // +0xd0
    WCFinderPoiBasicInfo * _poiBasicInfo; // +0xd8
    FavoritesItem * _favItem; // +0xe0
    ForwardMessageLogicController * _forwardLogicController; // +0xe8
    TakeCarServiceDataLogic * _takeCarDataLogic; // +0xf0
    MMLocatingPoiDataLogic * _dataLogic; // +0xf8
    UIScreenEdgePanGestureRecognizer * _edgeRecognizer; // +0x100
    UIPanGestureRecognizer * _panGesture; // +0x108
    unsigned long long _flowLoadingTime; // +0x110
    CGPoint _originalContentOffset; // +0x118
}
- (id)initWith:(id)arg1;
- (id)initWithParams:(id)arg1;
- (void)dealloc;
- (void)setupFlutter;
- (void)viewDidLoad;
- (void)initData;
- (CGSize)contentContainerSize;
- (void)initView;
- (BOOL)useTransparentNavibar;
- (BOOL)shouldNavigationBarAccessibilityHidden;
- (void)viewDidLayoutSubviews;
- (void)viewWillBePushOrPresent:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (id)poiBasicInfo;
- (id)takeCarDataLogic;
- (id)halfScreenBkgBtn;
- (id)dragBarView;
- (void)copyAddressString;
- (void)handleFinderEdgeGesture:(id)arg1;
- (BOOL)isExpand;
- (void)setIsExpand:(BOOL)arg1;
- (id)dataReportParamDictIsPageEvent:(BOOL)arg1;
- (id)view;
- (id)dataLogic;
- (void)prefetchPoiStream;
- (void)requestPoiStream;
- (void)refreshPOIView;
- (void)holdHalfScreenPOIView;
- (BOOL)isFromNearbyLife;
- (void)requestPoiDetail;
- (void)setWcOrigin:(CGPoint)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)handlePanGesture:(id)arg1;
- (double)topValueOnExpand;
- (double)topValueOnShrink;
- (double)heightWhenShrinkingWith:(id)arg1;
- (double)shrinkContentHeight;
- (double)bottomGradientLayerHeight;
- (void)shrinkPOIView;
- (void)expandPOIView;
- (void)updateFavSelected:(BOOL)arg1;
- (void)updateDragProgress:(BOOL)arg1;
- (void)closeHalfScreen;
- (void)setIsHoldHalfScreen:(BOOL)arg1;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (int)fromViewControllerScene;
- (id)getCurMediaListObject;
- (unsigned long long)scaleLevelToFit;
- (void)onLocationAuthorizationStatusUpdatedWithAccuracyAuthorization:(long long)arg1;
- (void)onGPSLocationChanged:(id)arg1 withTag:(unsigned long long)arg2;
- (void)updateUserLocation;
- (id)getHalfContainerView;
- (void)listenHalfScreenIsShow:(BOOL)arg1 eventType:(unsigned long long)arg2;
- (void)onNavigateButtonTap;
- (void)onTakeCarButtonTap;
- (void)onChangeFavoriteSelected:(BOOL)arg1;
- (void)onChangeScrollState:(BOOL)arg1;
- (void)onForwardButtonTap;
- (void)forwardLocationMsg:(id)arg1;
- (void)reportCustomActionSheetClickWithIndex:(unsigned long long)arg1;
- (void)onAddressEntranceTap;
- (id)getPluginTopViewController;
- (void)OnAddNewFavoritesItems:(id)arg1;
- (void)OnDelFavoritesItems:(id)arg1;
- (id)favItem;
- (BOOL)isCurrentPOIFavorite;
- (id)getCurrentViewController;
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
- (void)setFavItem:(id)arg1;
- (BOOL)canForward;
- (void)setCanForward:(BOOL)arg1;
- (CGPoint)originalContentOffset;
- (void)setOriginalContentOffset:(CGPoint)arg1;
- (id)forwardLogicController;
- (void)setForwardLogicController:(id)arg1;
- (void)setTakeCarDataLogic:(id)arg1;
- (void)setDataLogic:(id)arg1;
- (id)edgeRecognizer;
- (void)setEdgeRecognizer:(id)arg1;
- (id)panGesture;
- (void)setPanGesture:(id)arg1;
- (unsigned long long)flowLoadingTime;
- (void)setFlowLoadingTime:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

