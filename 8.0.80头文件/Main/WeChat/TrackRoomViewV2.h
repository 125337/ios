@interface TrackRoomViewV2 : UIView <ITrackRoomMgrV2Ext, ITrackPresentExt, QMapViewDelegate, QMapViewIndoorDelegate, WCActionSheetDelegate, ILocationMgrExt, WCActionSheetDelegate, UIGestureRecognizerDelegate, NavigateLogicControllerDelegate, IShortCutExt, TrackRoomTopBarViewV2Delegate, TrackRoomBottomBarViewDelegate>
{
    id <TrackRoomViewV2Delegate> _trackRoomViewDelegate; // +0x8
    BOOL _isInit; // +0x10
    BOOL _showAllHead; // +0x11
    BOOL _isMapRegionChanging; // +0x12
    BOOL _shouldIgnoreAccuracy; // +0x13
    BOOL _intermediateAnimation; // +0x14
    BOOL _shouldHideAllAnnotation; // +0x15
    BOOL _shouldZoomToSeeAll; // +0x16
    BOOL _isLoadFinish; // +0x17
    BOOL _drivingMode; // +0x18
    BOOL _refreshOK; // +0x19
    BOOL _hasReportLocateError; // +0x1a
    BOOL _enterBackground; // +0x1b
    unsigned long long _gpsTag; // +0x20
    POIInfo * _poiInfo; // +0x28
    unsigned int _scene; // +0x30
    CBaseContact * _chatContact; // +0x38
    NSString * _chatname; // +0x40
    NSString * _trackRoomID; // +0x48
    NSString * _trackErrorAlertMessage; // +0x50
    struct _destinationRegion; // +0x58
    BOOL _isRequestForAccuracyAuthorization; // +0x78
    BOOL _hasInternalInit; // +0x79
    BOOL _isWaitingForFirstAuthResult; // +0x7a
    unsigned long long _enterTimestamp; // +0x80
    unsigned long long _exitTimestamp; // +0x88
    unsigned long long _startLocatingTimestamp; // +0x90
    unsigned long long _micButtonTotalTime; // +0x98
    unsigned long long _micButtonPressedTimestamp; // +0xa0
    long long _micButtonTapCount; // +0xa8
    TrackRoomFloatMgr * _trackRoomFloatMgr; // +0xb0
    BOOL _isPresented; // +0xb8
    BOOL _hasShowLowVersionView; // +0xb9
    NSString * _frontAnnotationUsername; // +0xc0
    int _currentAuthLogType; // +0xc8
    TrackRoomViewControllerV2 * _rootViewController; // +0xd0
    UIView * _statusbarBgView; // +0xd8
    UIView * _bottomGradientView; // +0xe0
    UIButton * _myLocationButton; // +0xe8
    MMMapView * _mapView; // +0xf0
    MMFloorPickView * _floorPickView; // +0xf8
    TrackRoomTopBarViewV2 * _topBarViewV2; // +0x100
    TrackRoomBottomBarView * _bottomBarView; // +0x108
    MMLoadingView * _loadingView; // +0x110
    NavigateLogicController * _navigateLogicController; // +0x118
    AnnotationLogicController * _annotationLogicController; // +0x120
    WCUIAlertView * _currAlertView; // +0x128
    MMTimer * _updateUserLocationTimer; // +0x130
    TrackRoomReporter * _reporter; // +0x138
}
- (id)initWithFrame:(CGRect)arg1;
- (id)init;
- (void)internalInit;
- (void)goToSettingLocationAuthorization;
- (void)quitFromTrack;
- (void)dealloc;
- (void)initView;
- (void)initLayout;
- (void)initMapView;
- (void)paintQBasicMapViewBackground:(id)arg1;
- (BOOL)startTrackWithChatname:(id)arg1 POIInfo:(id)arg2 Scene:(unsigned int)arg3;
- (void)doStartTrack;
- (void)exitTracking:(unsigned int)arg1 reason:(unsigned int)arg2;
- (void)showTrackRoomView;
- (void)presentTrackRoomWindow;
- (void)setupTrackIfNeeded;
- (void)resetForNewRoom;
- (void)hideTrackRoomView;
- (void)willResignActive;
- (void)didBecomeActive;
- (id)getLocationText:(CLLocationCoordinate2D)arg1;
- (void)startLoadingNonBlock;
- (void)stopLoading;
- (void)closeTrackRoom:(unsigned int)arg1 reason:(unsigned int)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onCloseButtonClick:(id)arg1;
- (void)minimizeTrackRoom;
- (void)onMinimizeButtonClick;
- (id)buildMinimizeTaskTitle;
- (id)buildMinimizeTaskData;
- (void)handleInteractivePopMinimize;
- (void)doMinimizeWithAnimation:(BOOL)arg1;
- (void)doMinimizeWithSlipImage:(id)arg1;
- (void)hideTrackRoomViewWithoutAnimation;
- (void)onPhoneVideoButtonClick;
- (void)onMyLocationButtonClick;
- (void)onBackButtonClick;
- (void)onBottomBarVoipButtonClick;
- (void)onBottomBarConversationClick;
- (void)onBottomBarExitButtonClick;
- (void)onMapTapped:(id)arg1;
- (void)onMapDoubleTapped:(id)arg1;
- (void)showProfileForUsername:(id)arg1;
- (void)updateLayoutElements;
- (void)showLocationCalloutViewAnimated:(BOOL)arg1;
- (void)setAllHeadAnnotationShowCallout:(BOOL)arg1 Animated:(BOOL)arg2;
- (void)onNavigateToPOI:(id)arg1;
- (void)resizeMapToShowAllHeadAnimated:(id)arg1;
- (void)onTimerUpdateLocation;
- (void)startTimerCheckUserLocation;
- (void)stopTimerCheckUserLocation;
- (void)startUpdateUserLocation;
- (void)stopUpdateUserLocation;
- (BOOL)isLocationOK:(id)arg1;
- (void)onSetIgnoreAccuracy;
- (void)setRegion:(struct)arg1 AlwaysAnimated:(BOOL)arg2;
- (id)getUserLocation;
- (void)bringMyselfToFront;
- (void)bringFriendToFront:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (void)didDragMap:(id)arg1;
- (void)mapView:(id)arg1 regionWillChangeAnimated:(BOOL)arg2 gesture:(BOOL)arg3;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(BOOL)arg2 gesture:(BOOL)arg3;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (id)mapView:(id)arg1 viewForOverlay:(id)arg2;
- (void)mapView:(id)arg1 didAddAnnotationViews:(id)arg2;
- (void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2 fromHeading:(BOOL)arg3;
- (void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2;
- (void)mapView:(id)arg1 didDeselectAnnotationView:(id)arg2;
- (void)mapViewDidFailLoadingMap:(id)arg1 withError:(id)arg2;
- (void)mapView:(id)arg1 didFailToLocateUserWithError:(id)arg2;
- (void)mapView:(id)arg1 scaleViewChanged:(double)arg2;
- (void)mapView:(id)arg1 didChangeActiveBuilding:(id)arg2;
- (void)onLocationAuthorizationStatusUpdatedWithAccuracyAuthorization:(long long)arg1;
- (void)tryRequestTemporaryFullAccuracy;
- (void)onGPSLocationChanged:(id)arg1 withTag:(unsigned long long)arg2;
- (BOOL)initTrack;
- (void)OnJoinTrackRoomOK:(id)arg1;
- (void)OnRefreshTrackRoom:(id)arg1 Type:(int)arg2;
- (void)trySeeAll;
- (void)OnTrackRoomError:(int)arg1 Message:(id)arg2;
- (void)OnTrackRoomMemberChange:(id)arg1 withNewMemberList:(id)arg2;
- (void)OnHeadingChanged:(double)arg1;
- (void)updateHeadAnnotation:(id)arg1;
- (void)setAnnotation:(id)arg1 Coordinate:(CLLocationCoordinate2D)arg2 Animated:(BOOL)arg3 Duration:(float)arg4;
- (id)getDisplayNameByUsername:(id)arg1;
- (id)getConversationDisplayName:(id)arg1;
- (void)navigateTo:(id)arg1 Name:(id)arg2 Sender:(id)arg3;
- (void)onCenterMapAt:(id)arg1;
- (void)bringAnnotatoinFront:(id)arg1;
- (void)onConversationClick;
- (BOOL)canShowShareLocationMsgToDevice;
- (void)onStartLoading;
- (void)onStopLoading;
- (void)onPresentViewControlelr:(id)arg1 Animated:(BOOL)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateMapStyle;
- (void)updateMapStyleWithDarkMode:(BOOL)arg1;
- (void)applicationDidEnterBackground;
- (void)applicationWillEnterForeground;
- (void)showAlertForLocationAuthorization;
- (void)setCurrentAuthLogType:(int)arg1;
- (void)onPerformShortCut:(id)arg1;
- (id)reporter;
- (void)reportLog26734;
- (void)setupBlackGradientBackgroundForView:(id)arg1;
- (void)setupBottomGradientBackgroundForView:(id)arg1;
- (BOOL)isPresented;
- (id)trackRoomViewDelegate;
- (void)setTrackRoomViewDelegate:(id)arg1;
- (id)chatname;
- (id)rootViewController;
- (void)setRootViewController:(id)arg1;
- (id)statusbarBgView;
- (void)setStatusbarBgView:(id)arg1;
- (id)bottomGradientView;
- (void)setBottomGradientView:(id)arg1;
- (id)myLocationButton;
- (void)setMyLocationButton:(id)arg1;
- (id)mapView;
- (void)setMapView:(id)arg1;
- (id)floorPickView;
- (void)setFloorPickView:(id)arg1;
- (id)topBarViewV2;
- (void)setTopBarViewV2:(id)arg1;
- (id)bottomBarView;
- (void)setBottomBarView:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (id)navigateLogicController;
- (void)setNavigateLogicController:(id)arg1;
- (id)annotationLogicController;
- (void)setAnnotationLogicController:(id)arg1;
- (id)currAlertView;
- (void)setCurrAlertView:(id)arg1;
- (id)updateUserLocationTimer;
- (void)setUpdateUserLocationTimer:(id)arg1;
- (int)currentAuthLogType;
- (void)setReporter:(id)arg1;
- (void).cxx_destruct;
@end
