@interface MMPickLocationViewController : MMUIViewController <MMTableViewDelegate, IGetPOIListMgrExt, ILocationMgrExt, UIGestureRecognizerDelegate, MMLocationAttributeBannerDelegate, MMAutoSearchLogicDelegate, MMPickLocationActionDelegate, MMPickLocationDataActionDelegate, QMapViewDelegate, QMapViewIndoorDelegate, MMLocationPinViewDelegate, WCActionSheetDelegate>
{
    id <MMPickLocationViewControllerDelegate> _delegate; // +0x70
    NSString * _openID; // +0x78
    MMLocationPinView * _pinView; // +0x80
    MMMapView * _mapView; // +0x88
    MMLocationAttributeBanner * _attributeBanner; // +0x90
    MMFloorPickView * _floorPickView; // +0x98
    UIView * _attributeFooterView; // +0xa0
    BOOL _isLoadFinish; // +0xa8
    BOOL _isLocationFirstUpdated; // +0xa9
    BOOL _shouldUpdateList; // +0xaa
    BOOL _isOnlyUseUserLocation; // +0xab
    BOOL _isMapAnimating; // +0xac
    BOOL _isGestureMapAnimating; // +0xad
    BOOL _isShowUp; // +0xae
    BOOL _isPoiIndoor; // +0xaf
    unsigned int _scene; // +0xb0
    unsigned int _sceneType; // +0xb4
    unsigned int _selectType; // +0xb8
    unsigned int _lastSelectType; // +0xbc
    CLLocationCoordinate2D _lastSelectedLocation; // +0xc0
    CLLocationCoordinate2D _lastSelectedPoiLocation; // +0xd0
    CLLocationCoordinate2D _firstGetNearLocation; // +0xe0
    CLLocationCoordinate2D _lastDragLocation; // +0xf0
    CLLocationCoordinate2D _moveToLocation; // +0x100
    CLLocationCoordinate2D _lastCenterLocation; // +0x110
    UIButton * _showMyLocationButton; // +0x120
    unsigned long long _selectedPoiIndex; // +0x128
    unsigned long long _startLocateTime; // +0x130
    CGSize _beginTouchDeltaRatio; // +0x138
    CLLocationCoordinate2D _beginTouchRegion; // +0x148
    UIPinchGestureRecognizer * _pinchGestureRecognizer; // +0x158
    NSMutableArray * _sysGestureRecognizers; // +0x160
    CLLocation * _userCurrentLocation; // +0x168
    MMAutoSearchLogic * _autoSearchLogic; // +0x170
    double _keyboardHeight; // +0x178
    unsigned long long _entryTime; // +0x180
    unsigned long long _startGetListTime; // +0x188
    unsigned long long _endGetListTime; // +0x190
    unsigned long long _firstGetTime; // +0x198
    unsigned int _getPageCount; // +0x1a0
    unsigned long long _startSearchListTime; // +0x1a8
    unsigned long long _endSearchListTime; // +0x1b0
    unsigned long long _firstSearchTime; // +0x1b8
    unsigned long long _searchPageCount; // +0x1c0
    NSString * _currentSearchId; // +0x1c8
    BOOL _lastSelectFromSearch; // +0x1d0
    unsigned long long _lastSelectRow; // +0x1d8
    unsigned long long _lastSelectTime; // +0x1e0
    NSString * _lastSelectPOIId; // +0x1e8
    BOOL _dismissWithCancel; // +0x1f0
    BOOL _selectFromSearchTable; // +0x1f1
    BOOL _selectShowMyUserLocation; // +0x1f2
    BOOL _requestFourAddress; // +0x1f3
    NSString * _requestId; // +0x1f8
    POIItem * _myPoiItem; // +0x200
    CLLocationCoordinate2D _coordForGetAddressReqeust; // +0x208
    BOOL _enterBackground; // +0x218
    BOOL _isSubViewAnimating; // +0x219
    BOOL _searchAnimateEnd; // +0x21a
    BOOL _searchAreaFold; // +0x21b
    BOOL _didShowLocationCloseAlert; // +0x21c
    BOOL _isRequestingUserAddress; // +0x21d
    BOOL _hasRequestLocation; // +0x21e
    BOOL _requestUserLocationTime; // +0x21f
    BOOL _needUpdateLocation; // +0x220
    BOOL _showAccuracyAuthorizationTip; // +0x221
    int _currentAuthLogType; // +0x224
    MMPickLocationReporter * _reporter; // +0x228
    POIItem * _locationItem; // +0x230
    CLLocation * _currLocation; // +0x238
    CLLocation * _userLocation; // +0x240
    QPoiInfo * _lastSelectPoiInfo; // +0x248
    UIBarButtonItem * _rightBarButtonItem; // +0x250
    double _mapViewCurrentDisplayBottom; // +0x258
    PickLocationManager * _pickLocationManager; // +0x260
    MMPickLocationSearchView * _pickLocationSearchView; // +0x268
    UIImageView * _navigaBarMaskImgView; // +0x270
    WCUIAlertView * _currAlertView; // +0x278
    CGPoint _mapViewCurrentCenter; // +0x280
    CLLocationCoordinate2D _requestingAddressLocation; // +0x290
}
+ (void)safeMapView:(id)arg1 setRegion:(struct)arg2;
- (id)initWithSceneType:(unsigned int)arg1 OnlyUseUserLocation:(BOOL)arg2;
- (id)reporter;
- (int)getSceneFromSceneType;
- (unsigned long long)getSystemAuthSceneFrom:(unsigned int)arg1;
- (void)dealloc;
- (void)reportOnDone;
- (void)reportLog17993:(BOOL)arg1;
- (void)initShowMyLocationButton;
- (void)initSearchView;
- (void)setShowAccuracyAuthorizationTip:(BOOL)arg1;
- (id)pickLocationManager;
- (void)updateSearchBarTips;
- (void)initMapPinView:(BOOL)arg1;
- (void)initHeaderView;
- (double)searchViewAdjustYForCornerRadius;
- (double)mapLogoAdjustBottomForCornerRadius;
- (CGPoint)mapViewExpandCenter;
- (CGPoint)mapViewFoldCenter;
- (double)mapViewLimitHeight;
- (void)showAttributeBannerTitle:(id)arg1 LogoUrl:(id)arg2 Link:(id)arg3;
- (void)adjustMapLogosPosition;
- (void)initView;
- (void)setMapViewFrame:(CGRect)arg1;
- (void)setRequestFourAddress:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (BOOL)useTransparentNavibar;
- (void)setRightBarButtonItemEnabled:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillBePushed:(BOOL)arg1;
- (void)viewWillBePresented:(BOOL)arg1;
- (void)viewDidBePushed:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewDidBePresented:(BOOL)arg1;
- (void)viewDidBeDismissed:(BOOL)arg1;
- (void)willDisshow;
- (void)adjustSubviewRects;
- (void)checkSystemAuthorization;
- (void)initGesture;
- (void)initMapViewGestureRecognizer:(id)arg1;
- (void)enableSysGestureRecognizers:(BOOL)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (void)onPinGestureUpdated:(id)arg1;
- (void)showMapViewUserLocation;
- (void)stopPicking;
- (id)getCurrentPOIInfo;
- (id)getCurrentPOIItem;
- (id)getLocationPOIItem;
- (id)getUserLocation;
- (BOOL)isOnUserLocation:(CLLocationCoordinate2D)arg1;
- (void)onShowMyLocation;
- (void)pinUserLocation:(id)arg1;
- (void)moveToLocation:(CLLocationCoordinate2D)arg1;
- (void)onTimeOut;
- (void)onTimerCheckUserLocation;
- (void)onLoadMapError:(id)arg1;
- (void)onCancelSelectLocation;
- (void)adjustOtherViewsFrameAfterMapViewChange;
- (void)foldMapViewAnimatedWithDuration:(double)arg1 completion:(id /* block */)arg2;
- (void)foldMapView;
- (void)foldMapView:(double)arg1;
- (void)unFoldMapViewAnimatedWithDuration:(double)arg1 completion:(id /* block */)arg2;
- (void)unFoldMapViewAnimatedWithDuration:(double)arg1 completion:(id /* block */)arg2 ScrollToSelectItemWhenComplete:(BOOL)arg3;
- (void)scrollSelectItemVisible;
- (void)unFoldMapView;
- (void)unFoldMapView:(double)arg1;
- (void)setSearchAreaFold:(BOOL)arg1;
- (void)displaySearchAnnotation:(id)arg1;
- (void)onClickAttributeBanner;
- (void)mapView:(id)arg1 didChangeActiveBuilding:(id)arg2;
- (void)mapView:(id)arg1 didChangeActiveLevel:(id)arg2;
- (void)mapView:(id)arg1 regionWillChangeAnimated:(BOOL)arg2 gesture:(BOOL)arg3;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(BOOL)arg2 gesture:(BOOL)arg3;
- (void)updateAllLocationInfo:(BOOL)arg1 gesture:(BOOL)arg2 forceUpdate:(BOOL)arg3;
- (void)updateUserLocationAndPoiList;
- (void)mapView:(id)arg1 scaleViewChanged:(double)arg2;
- (void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2 fromHeading:(BOOL)arg3;
- (void)cancelSelectors;
- (void)mapView:(id)arg1 didFailToLocateUserWithError:(id)arg2;
- (void)mapViewDidFinishLoadingMap:(id)arg1;
- (void)mapViewDidFailLoadingMap:(id)arg1 withError:(id)arg2;
- (id)pickLocAnnotationViewForAnnotationInMap:(id)arg1;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2;
- (void)mapView:(id)arg1 didTapAtCoordinate:(CLLocationCoordinate2D)arg2;
- (void)mapView:(id)arg1 didTapPoi:(id)arg2;
- (void)addUserLocationAnnotation;
- (void)showPinViewCallout;
- (void)addPOIItem:(id)arg1 UpdateTable:(BOOL)arg2 Animated:(BOOL)arg3 SearchID:(id)arg4;
- (void)resetPOIList;
- (void)selectPOIAtIndex:(unsigned long long)arg1 Animated:(BOOL)arg2;
- (void)checkLastSelectedAnnotationState;
- (void)checkCurrSelectedAnnotationState;
- (void)setupSelectedAnnotationState;
- (void)updateSearchPOIAnnotation:(unsigned long long)arg1 SearchState:(long long)arg2;
- (void)adjustDisplayAreaAfterSelectSeachPOIAnnotation;
- (void)didClearSearchAnnotations:(id)arg1;
- (void)searchResultSelectStateChange:(BOOL)arg1;
- (void)didPickLocationSearchViewFolded;
- (double)getPickLocationSearchViewExpandHeight;
- (double)getPickLocationSearchViewFoldHeight;
- (void)nearbyPOIItemDidSelect:(unsigned long long)arg1;
- (void)selectSearchResultPOIItem:(unsigned long long)arg1;
- (void)searchResultPOIItemDidSelect:(unsigned long long)arg1;
- (void)didAnnotationDidSelect:(unsigned long long)arg1;
- (void)searchBarTextDidBeginEditing;
- (void)searchBarTextDidChange:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBarBecomeActive;
- (void)searchBarWillBeginSearch;
- (void)searchBarWillEndSearch;
- (void)nearTableFooterDidTriggerRefresh;
- (void)searchTableFooterDidTriggerRefresh;
- (void)handleTableView:(id)arg1 PanGesture:(id)arg2;
- (BOOL)isSearchViewExpanded;
- (void)autoSearchShouldBeginWithKey:(id)arg1 StartFromFirst:(BOOL)arg2;
- (void)updatePOIListWithCoordinate:(CLLocationCoordinate2D)arg1 StartFromFirst:(BOOL)arg2;
- (void)updataSearchListWithCoordinate:(CLLocationCoordinate2D)arg1 Keyword:(id)arg2 StartFromFirst:(BOOL)arg3;
- (void)OnGetNearPOIList:(id)arg1 Error:(int)arg2;
- (void)OnGetSearchPOIList:(id)arg1 Error:(int)arg2;
- (void)OnGetAutoSearchPOIList:(id)arg1 Error:(int)arg2;
- (void)keyboardDidShow:(id)arg1;
- (void)setCoordinationForGetAddressRequest:(id)arg1;
- (id)currentIndoorInfo;
- (CLLocationCoordinate2D)getSearchPoiListCoordination:(BOOL)arg1;
- (id)getDisplayAnnotations:(id)arg1;
- (void)adjustDisplayRectForSearchAnnotations:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateMapStyle;
- (void)applicationDidEnterBackground;
- (void)applicationWillEnterForeground;
- (void)showAlertForLocationAuthorization;
- (void)goToSettingLocationAuthorization;
- (void)onLocationAuthorizationStatusUpdatedWithAccuracyAuthorization:(long long)arg1;
- (void)setCurrentAuthLogType:(int)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setReporter:(id)arg1;
- (id)pinView;
- (void)setPinView:(id)arg1;
- (id)locationItem;
- (void)setLocationItem:(id)arg1;
- (id)currLocation;
- (void)setCurrLocation:(id)arg1;
- (id)userLocation;
- (void)setUserLocation:(id)arg1;
- (id)lastSelectPoiInfo;
- (void)setLastSelectPoiInfo:(id)arg1;
- (id)rightBarButtonItem;
- (void)setRightBarButtonItem:(id)arg1;
- (double)mapViewCurrentDisplayBottom;
- (void)setMapViewCurrentDisplayBottom:(double)arg1;
- (CGPoint)mapViewCurrentCenter;
- (void)setMapViewCurrentCenter:(CGPoint)arg1;
- (BOOL)isSubViewAnimating;
- (void)setIsSubViewAnimating:(BOOL)arg1;
- (BOOL)searchAnimateEnd;
- (void)setSearchAnimateEnd:(BOOL)arg1;
- (BOOL)searchAreaFold;
- (BOOL)didShowLocationCloseAlert;
- (void)setDidShowLocationCloseAlert:(BOOL)arg1;
- (void)setPickLocationManager:(id)arg1;
- (id)pickLocationSearchView;
- (void)setPickLocationSearchView:(id)arg1;
- (id)navigaBarMaskImgView;
- (void)setNavigaBarMaskImgView:(id)arg1;
- (CLLocationCoordinate2D)requestingAddressLocation;
- (void)setRequestingAddressLocation:(CLLocationCoordinate2D)arg1;
- (BOOL)isRequestingUserAddress;
- (void)setIsRequestingUserAddress:(BOOL)arg1;
- (BOOL)hasRequestLocation;
- (void)setHasRequestLocation:(BOOL)arg1;
- (BOOL)requestUserLocationTime;
- (void)setRequestUserLocationTime:(BOOL)arg1;
- (BOOL)needUpdateLocation;
- (void)setNeedUpdateLocation:(BOOL)arg1;
- (id)currAlertView;
- (void)setCurrAlertView:(id)arg1;
- (BOOL)showAccuracyAuthorizationTip;
- (int)currentAuthLogType;
- (void).cxx_destruct;
@end
