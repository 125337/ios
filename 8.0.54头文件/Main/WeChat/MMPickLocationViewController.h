@interface MMPickLocationViewController : MMUIViewController <MMTableViewDelegate, IGetPOIListMgrExt, ILocationMgrExt, UIGestureRecognizerDelegate, MMLocationAttributeBannerDelegate, MMAutoSearchLogicDelegate, MMPickLocationActionDelegate, MMPickLocationDataActionDelegate, QMapViewDelegate, QMapViewIndoorDelegate, MMLocationPinViewDelegate, WCActionSheetDelegate>
{
    id <MMPickLocationViewControllerDelegate> _delegate; // +0x68
    NSString * _openID; // +0x70
    MMLocationPinView * _pinView; // +0x78
    MMMapView * _mapView; // +0x80
    MMLocationAttributeBanner * _attributeBanner; // +0x88
    MMFloorPickView * _floorPickView; // +0x90
    UIView * _attributeFooterView; // +0x98
    BOOL _isLoadFinish; // +0xa0
    BOOL _isLocationFirstUpdated; // +0xa1
    BOOL _shouldUpdateList; // +0xa2
    BOOL _isOnlyUseUserLocation; // +0xa3
    BOOL _isMapAnimating; // +0xa4
    BOOL _isGestureMapAnimating; // +0xa5
    BOOL _isShowUp; // +0xa6
    BOOL _isPoiIndoor; // +0xa7
    unsigned int _scene; // +0xa8
    unsigned int _sceneType; // +0xac
    unsigned int _selectType; // +0xb0
    unsigned int _lastSelectType; // +0xb4
    CLLocationCoordinate2D _lastSelectedLocation; // +0xb8
    CLLocationCoordinate2D _lastSelectedPoiLocation; // +0xc8
    CLLocationCoordinate2D _firstGetNearLocation; // +0xd8
    CLLocationCoordinate2D _lastDragLocation; // +0xe8
    CLLocationCoordinate2D _moveToLocation; // +0xf8
    CLLocationCoordinate2D _lastCenterLocation; // +0x108
    UIButton * _showMyLocationButton; // +0x118
    unsigned long long _selectedPoiIndex; // +0x120
    unsigned long long _startLocateTime; // +0x128
    CGSize _beginTouchDeltaRatio; // +0x130
    CLLocationCoordinate2D _beginTouchRegion; // +0x140
    UIPinchGestureRecognizer * _pinchGestureRecognizer; // +0x150
    NSMutableArray * _sysGestureRecognizers; // +0x158
    CLLocation * _userCurrentLocation; // +0x160
    MMAutoSearchLogic * _autoSearchLogic; // +0x168
    double _keyboardHeight; // +0x170
    unsigned long long _entryTime; // +0x178
    unsigned long long _startGetListTime; // +0x180
    unsigned long long _endGetListTime; // +0x188
    unsigned long long _firstGetTime; // +0x190
    unsigned int _getPageCount; // +0x198
    unsigned long long _startSearchListTime; // +0x1a0
    unsigned long long _endSearchListTime; // +0x1a8
    unsigned long long _firstSearchTime; // +0x1b0
    unsigned long long _searchPageCount; // +0x1b8
    NSString * _currentSearchId; // +0x1c0
    BOOL _lastSelectFromSearch; // +0x1c8
    unsigned long long _lastSelectRow; // +0x1d0
    unsigned long long _lastSelectTime; // +0x1d8
    NSString * _lastSelectPOIId; // +0x1e0
    BOOL _dismissWithCancel; // +0x1e8
    BOOL _selectFromSearchTable; // +0x1e9
    BOOL _selectShowMyUserLocation; // +0x1ea
    BOOL _requestFourAddress; // +0x1eb
    NSString * _requestId; // +0x1f0
    POIItem * _myPoiItem; // +0x1f8
    CLLocationCoordinate2D _coordForGetAddressReqeust; // +0x200
    BOOL _enterBackground; // +0x210
    BOOL _isSubViewAnimating; // +0x211
    BOOL _searchAnimateEnd; // +0x212
    BOOL _searchAreaFold; // +0x213
    BOOL _didShowLocationCloseAlert; // +0x214
    BOOL _isRequestingUserAddress; // +0x215
    BOOL _hasRequestLocation; // +0x216
    BOOL _requestUserLocationTime; // +0x217
    BOOL _needUpdateLocation; // +0x218
    BOOL _showAccuracyAuthorizationTip; // +0x219
    int _currentAuthLogType; // +0x21c
    MMPickLocationReporter * _reporter; // +0x220
    POIItem * _locationItem; // +0x228
    CLLocation * _currLocation; // +0x230
    CLLocation * _userLocation; // +0x238
    QPoiInfo * _lastSelectPoiInfo; // +0x240
    UIBarButtonItem * _rightBarButtonItem; // +0x248
    double _mapViewCurrentDisplayBottom; // +0x250
    PickLocationManager * _pickLocationManager; // +0x258
    MMPickLocationSearchView * _pickLocationSearchView; // +0x260
    UIImageView * _navigaBarMaskImgView; // +0x268
    WCUIAlertView * _currAlertView; // +0x270
    CGPoint _mapViewCurrentCenter; // +0x278
    CLLocationCoordinate2D _requestingAddressLocation; // +0x288
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

