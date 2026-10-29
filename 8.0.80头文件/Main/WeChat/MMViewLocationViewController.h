@interface MMViewLocationViewController : MMUIViewController <QMapViewDelegate, QMapViewIndoorDelegate, WCActionSheetDelegate, ILocationMgrExt, IFavoritesExt, INavigateLogicControllerExt, FavTagViewDelegate, MMScrollActionSheetDelegate, RecentForwardScrollViewDelegate, ForwardMessageLogicDelegate, POIMoreActionSheetViewLocationDelegate, WCFinderLocationPoiDetailViewDelegate, POICorrectionGuideViewDelegate>
{
    BOOL _canAddToFav; // +0x70
    BOOL _canSendToFriend; // +0x71
    BOOL _directShowDirection; // +0x72
    BOOL _isLoadFinish; // +0x73
    BOOL _isMapRegionChanging; // +0x74
    BOOL _hasReportLocateError; // +0x75
    unsigned long long _mapInitTime; // +0x78
    BOOL _trackMapRenderResultReported; // +0x80
    unsigned long long _trackLocateStartTime; // +0x88
    BOOL _trackLocateResultReported; // +0x90
    unsigned long long _headingTag; // +0x98
    unsigned int _reportNavTapCount; // +0xa0
    double _trueHeading; // +0xa8
    POIInfo * _poiInfo; // +0xb0
    UIButton * _myLocationButton; // +0xb8
    MMMapView * _mapView; // +0xc0
    MMFloorPickView * _floorPickView; // +0xc8
    MMTimer * _updateUserLocationTimer; // +0xd0
    UnderLineLabel * _infoLabel; // +0xd8
    NavigateLogicController * _navigateLogicController; // +0xe0
    AnnotationLogicController * _annotationLogicController; // +0xe8
    ForwardMessageLogicController * _forwardLogicController; // +0xf0
    id <ViewLocationDelegate> _delegate; // +0xf8
    int _locationUpdateCount; // +0x100
    BOOL _enterBackground; // +0x104
    BOOL _isCoordinateError; // +0x105
    BOOL _hiddenMoreButtonItem; // +0x106
    unsigned int _srcType; // +0x108
    NSString * fromUsername; // +0x110
    NSString * _messageSvrID; // +0x118
    id <IFinderPOIDetailViewController> _poiDetailVc; // +0x120
    FavDataItemWrap * _favDataWrap; // +0x128
    FavoritesItem * _favItem; // +0x130
    unsigned long long _assignAuthScene; // +0x138
    UIButton * _backBtn; // +0x140
    UIView * _topMaskView; // +0x148
    CAGradientLayer * _topGradientLayer; // +0x150
    UIView * _bottomMaskView; // +0x158
    CAGradientLayer * _bottomGradientLayer; // +0x160
    UIButton * _addressDetailBtn; // +0x168
    UIButton * _addressNavigationBtn; // +0x170
    CLLocation * _userLocation; // +0x178
    unsigned long long _authScene; // +0x180
    PickLocationAnnotationView * _annotationView; // +0x188
    NSString * _buildingId; // +0x190
    NSString * _floorName; // +0x198
    MMScrollActionSheet * _scrollActionSheet; // +0x1a0
    NSString * _reportSessionID; // +0x1a8
}
- (id)initWithPOIInfo:(id)arg1 FromSrc:(unsigned int)arg2;
- (void)dealloc;
- (unsigned long long)getAuthSceneFrom:(unsigned int)arg1;
- (BOOL)useTransparentNavibar;
- (void)viewDidLoad;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (id)poiDetailContainerView;
- (void)layoutScaleViewBesideLocationButtonForMapView:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)initView;
- (double)calculateMyLocationButtonOriginY:(double)arg1;
- (CGRect)calculateMapViewFrame:(double)arg1;
- (void)initAddressDetailView;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)shouldNavigationBarAccessibilityHidden;
- (void)checkAuthorization;
- (void)checkAuthorizationFromUserTap;
- (void)checkAuthorizationAlwaysAlertForSystemDenied:(BOOL)arg1;
- (BOOL)useBlackStatusbar;
- (id)getLocationText:(CLLocationCoordinate2D)arg1;
- (void)startViewingLocation;
- (void)stopViewingLocation;
- (void)onClickInfo:(id)arg1;
- (void)setIsCoordinateError:(BOOL)arg1;
- (void)setPOICalloutShow:(BOOL)arg1;
- (void)onMyLocationButtonClick;
- (void)onReturn;
- (void)onTapMoreBtn:(id)arg1;
- (id)genMenuItemArray;
- (void)reportCustomActionSheetClickWithIndex:(unsigned long long)arg1;
- (id)dataReportParamDict;
- (void)onAction:(id)arg1;
- (void)registerFavReport:(id)arg1;
- (id)getMenuItemArray;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)clickRFItemCallBack:(id)arg1;
- (void)relayoutScrollSheet;
- (void)forwardLocationMsg:(id)arg1;
- (void)updateZoomLevelToDefault;
- (void)updateZoomLevelToMyLocation;
- (id)getCurrentViewController;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onNavigateToPOI:(id)arg1;
- (BOOL)canPoiForwardOrFavorite;
- (id)favItem;
- (void)startUpdateTrueHeading;
- (void)stopUpdateTrueHeading;
- (void)onHeadingChanged:(id)arg1 withTag:(unsigned long long)arg2;
- (void)onHeadingError:(int)arg1 withTag:(unsigned long long)arg2;
- (id)getUserLocation;
- (void)onTimerUpdateLocation;
- (void)startTimerCheckUserLocation;
- (void)stopTimerCheckUserLocation;
- (void)startUpdateUserLocation;
- (void)stopUpdateUserLocation;
- (void)mapView:(id)arg1 didChangeActiveBuilding:(id)arg2;
- (void)mapView:(id)arg1 didChangeActiveLevel:(id)arg2;
- (BOOL)isOnUserLocation:(CLLocationCoordinate2D)arg1;
- (void)setAnnotation:(id)arg1 Coordinate:(CLLocationCoordinate2D)arg2 Animated:(BOOL)arg3 Duration:(float)arg4;
- (void)mapView:(id)arg1 regionWillChangeAnimated:(BOOL)arg2 gesture:(BOOL)arg3;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(BOOL)arg2 gesture:(BOOL)arg3;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)mapView:(id)arg1 scaleViewChanged:(double)arg2;
- (id)mapView:(id)arg1 viewForOverlay:(id)arg2;
- (void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2 fromHeading:(BOOL)arg3;
- (void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2;
- (void)mapView:(id)arg1 didDeselectAnnotationView:(id)arg2;
- (id)sanitizeTrackReportExtra:(id)arg1;
- (void)reportTrackMapRenderResult:(id)arg1 errCode:(long long)arg2 extra:(id)arg3;
- (void)onTrackMapRenderTimeout;
- (void)reportTrackLocateSuccessIfNeed;
- (void)reportTrackLocateFailIfNeed:(id)arg1;
- (void)onTrackLocateTimeout;
- (void)mapViewDidFailLoadingMap:(id)arg1 withError:(id)arg2;
- (void)mapViewAuthentication:(id)arg1 didFailWithError:(id)arg2;
- (void)mapViewFirstRenderDidComplete:(id)arg1;
- (void)mapView:(id)arg1 didFailToLocateUserWithError:(id)arg2;
- (void)showDirection;
- (id)getDisplayNameByUsername:(id)arg1;
- (void)navigateTo:(id)arg1 Name:(id)arg2 Sender:(id)arg3 WeAppList:(id)arg4;
- (id)sceneNoteForSrcType;
- (BOOL)canShowShareLocationMsgToDevice;
- (void)onShareLocationMsgToDevice;
- (void)OnDelFavoritesItems:(id)arg1;
- (void)OnUpdateItems:(id)arg1;
- (void)silentPopSelf;
- (void)onFavTagEditBegin:(int)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateMapStyle;
- (void)applicationDidEnterBackground;
- (void)applicationWillEnterForeground;
- (void)onMapItemClickOrCancel:(BOOL)arg1;
- (id)reportSessionID;
- (void)reportLog26733;
- (unsigned int)reportType;
- (unsigned long long)forwardMessageScene;
- (void)updateFinderContextId;
- (void)reportCustomMoreViewClickEvent:(id)arg1;
- (void)reportCustomMoreViewClickEvent:(id)arg1 dicParam:(id)arg2;
- (void)reportViewClickEventForPOIDetail:(id)arg1;
- (void)OnOpenLocationWAApp;
- (void)onLocatingPoiCoordinate:(CLLocationCoordinate2D)arg1;
- (void)onDragProgressChanged:(double)arg1 topValueOnShrink:(double)arg2 topValueOnExpand:(double)arg3;
- (void)onShrinkPOIView;
- (void)onExpandPOIView;
- (void)onUpdateFavSelected:(BOOL)arg1;
- (void)changeFavSelected:(BOOL)arg1;
- (BOOL)isCurrentPOIFavorite;
- (void)layoutMapViewCenterIfNeeded;
- (void)onMoreButtonTapFromDetailVC;
- (void)onPOIDetailVCUpdateWithShrinkHeight:(double)arg1 expandDetailHeight:(double)arg2;
- (BOOL)onHandleMoreSheetForwardAction;
- (id)fromUsername;
- (void)setFromUsername:(id)arg1;
- (BOOL)canAddToFav;
- (void)setCanAddToFav:(BOOL)arg1;
- (BOOL)canSendToFriend;
- (void)setCanSendToFriend:(BOOL)arg1;
- (BOOL)directShowDirection;
- (void)setDirectShowDirection:(BOOL)arg1;
- (id)poiInfo;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)messageSvrID;
- (void)setMessageSvrID:(id)arg1;
- (BOOL)isCoordinateError;
- (id)poiDetailVc;
- (void)setPoiDetailVc:(id)arg1;
- (id)favDataWrap;
- (void)setFavDataWrap:(id)arg1;
- (void)setFavItem:(id)arg1;
- (BOOL)hiddenMoreButtonItem;
- (void)setHiddenMoreButtonItem:(BOOL)arg1;
- (unsigned long long)assignAuthScene;
- (void)setAssignAuthScene:(unsigned long long)arg1;
- (id)backBtn;
- (void)setBackBtn:(id)arg1;
- (id)topMaskView;
- (void)setTopMaskView:(id)arg1;
- (id)topGradientLayer;
- (void)setTopGradientLayer:(id)arg1;
- (id)bottomMaskView;
- (void)setBottomMaskView:(id)arg1;
- (id)bottomGradientLayer;
- (void)setBottomGradientLayer:(id)arg1;
- (id)addressDetailBtn;
- (void)setAddressDetailBtn:(id)arg1;
- (id)addressNavigationBtn;
- (void)setAddressNavigationBtn:(id)arg1;
- (id)userLocation;
- (void)setUserLocation:(id)arg1;
- (unsigned int)srcType;
- (void)setSrcType:(unsigned int)arg1;
- (unsigned long long)authScene;
- (void)setAuthScene:(unsigned long long)arg1;
- (id)annotationView;
- (void)setAnnotationView:(id)arg1;
- (id)buildingId;
- (void)setBuildingId:(id)arg1;
- (id)floorName;
- (void)setFloorName:(id)arg1;
- (id)scrollActionSheet;
- (void)setScrollActionSheet:(id)arg1;
- (void)setReportSessionID:(id)arg1;
- (void).cxx_destruct;
@end
