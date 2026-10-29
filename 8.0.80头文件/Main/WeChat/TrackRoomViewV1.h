@interface TrackRoomViewV1 : MMUIWindow <ITrackRoomMgrV1Ext, TrackRoomTopBarViewV1Delegate, QMapViewDelegate, QMapViewIndoorDelegate, WCActionSheetDelegate, ILocationMgrExt, IWXTalkieExt, WCActionSheetDelegate, IAUAudioDeviceExt, UIGestureRecognizerDelegate, NavigateLogicControllerDelegate, IShortCutExt, IRecordPermissionCheckExt>
{
    id <TrackRoomViewV1Delegate> _trackRoomViewDelegate; // +0x8
    BOOL _isInit; // +0x10
    BOOL _getMicSucc; // +0x11
    BOOL _showAllHead; // +0x12
    BOOL _isMapRegionChanging; // +0x13
    BOOL _shouldIgnoreAccuracy; // +0x14
    BOOL _intermediateAnimation; // +0x15
    BOOL _shouldHideAllAnnotation; // +0x16
    BOOL _shouldZoomToSeeAll; // +0x17
    BOOL _isLoadFinish; // +0x18
    BOOL _drivingMode; // +0x19
    BOOL _refreshOK; // +0x1a
    BOOL _hasReportLocateError; // +0x1b
    BOOL _enterBackground; // +0x1c
    unsigned long long _gpsTag; // +0x20
    UIView * _micMeterCircleView; // +0x28
    POIInfo * _poiInfo; // +0x30
    unsigned int _scene; // +0x38
    UIButton * _micButton; // +0x40
    UIButton * _myLocationButton; // +0x48
    NSString * _chatname; // +0x50
    MMMapView * _mapView; // +0x58
    MMFloorPickView * _floorPickView; // +0x60
    NSString * _trackRoomID; // +0x68
    NSString * _trackErrorAlertMessage; // +0x70
    CAShapeLayer * _micMeterCircle; // +0x78
    MMTimer * _updateUserLocationTimer; // +0x80
    MMLoadingView * _loadingView; // +0x88
    struct _destinationRegion; // +0x90
    TrackRoomTopBarViewV1 * _topbarView; // +0xb0
    NavigateLogicController * _navigateLogicController; // +0xb8
    AnnotationLogicController * _annotationLogicController; // +0xc0
    WCUIAlertView * _currAlertView; // +0xc8
    BOOL _isRequestForAccuracyAuthorization; // +0xd0
    BOOL _hasInternalInit; // +0xd1
    BOOL _isWaitingForFirstAuthResult; // +0xd2
    unsigned long long _enterTimestamp; // +0xd8
    unsigned long long _exitTimestamp; // +0xe0
    unsigned long long _startLocatingTimestamp; // +0xe8
    unsigned long long _micButtonTotalTime; // +0xf0
    unsigned long long _micButtonPressedTimestamp; // +0xf8
    long long _micButtonTapCount; // +0x100
    BOOL _isClosing; // +0x108
    int _currentAuthLogType; // +0x10c
    TrackRoomReporter * _reporter; // +0x110
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (id)init;
- (void)internalInit;
- (void)goToSettingLocationAuthorization;
- (void)quitFromTrack;
- (void)dealloc;
- (void)initView;
- (void)initMapView;
- (BOOL)startTrackWithChatname:(id)arg1 POIInfo:(id)arg2 Scene:(unsigned int)arg3;
- (void)doStartTrack;
- (void)exitTracking:(unsigned int)arg1 reason:(unsigned int)arg2;
- (void)showTrackRoomView;
- (void)hideTrackRoomView;
- (void)willResignActive;
- (void)didBecomeActive;
- (id)getLocationText:(CLLocationCoordinate2D)arg1;
- (void)startLoadingNonBlock;
- (void)stopLoading;
- (void)closeTrackRoom:(unsigned int)arg1 reason:(unsigned int)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onCloseButtonClick:(id)arg1;
- (void)onMinimizeButtonClick;
- (void)onMyLocationButtonClick;
- (void)onMicButtonPressed;
- (void)onMicButtonReleased;
- (void)onMapTapped:(id)arg1;
- (void)OnRecordPermissioned;
- (void)OnRecordDenied;
- (void)OnRecordDeniedByWeChat;
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
- (void)OnHeadingChanged:(double)arg1;
- (BOOL)openTalk:(id)arg1;
- (void)closeTalk;
- (void)doMeterAnimationOnMainThread:(id)arg1;
- (void)audioDeviceInputMeterLevel:(id)arg1 Peak:(float)arg2;
- (void)OnOpenWXTalkModeOK:(id)arg1;
- (void)OnGetMicrophoneResult:(int)arg1;
- (void)OnSomeoneTalking:(id)arg1;
- (void)OnError:(id)arg1 ErrNo:(int)arg2;
- (void)OnForceStopRecord;
- (void)OnNobodyTalking;
- (void)onKickOutFromWXTalkRoom:(id)arg1;
- (void)OnReConnecting;
- (void)OnPause;
- (void)OnRestart;
- (void)onRemoteControlCheckShouldPlay;
- (void)onRemoteControlCheckShouldStop;
- (void)updateHeadAnnotation:(id)arg1;
- (void)setAnnotation:(id)arg1 Coordinate:(CLLocationCoordinate2D)arg2 Animated:(BOOL)arg3 Duration:(float)arg4;
- (id)getDisplayNameByUsername:(id)arg1;
- (void)navigateTo:(id)arg1 Name:(id)arg2 Sender:(id)arg3;
- (void)onCenterMapAt:(id)arg1;
- (BOOL)canShowShareLocationMsgToDevice;
- (void)onStartLoading;
- (void)onStopLoading;
- (void)onPresentViewControlelr:(id)arg1 Animated:(BOOL)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateMapStyle;
- (void)applicationDidEnterBackground;
- (void)applicationWillEnterForeground;
- (void)showAlertForLocationAuthorization;
- (void)setCurrentAuthLogType:(int)arg1;
- (void)onPerformShortCut:(id)arg1;
- (id)reporter;
- (void)reportLog26734;
- (id)trackRoomViewDelegate;
- (void)setTrackRoomViewDelegate:(id)arg1;
- (int)currentAuthLogType;
- (void)setReporter:(id)arg1;
- (void).cxx_destruct;
@end
