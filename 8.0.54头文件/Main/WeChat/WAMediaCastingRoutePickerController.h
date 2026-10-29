@interface WAMediaCastingRoutePickerController : NSObject <WAMediaCastingUpnpServiceDelegate, WAMediaCastingRoutePickerViewDelegate, WAMediaCastingAirPlayServiceDelegate, WAMediaCastingPageSheetDelegate>
{
    BOOL _isLive; // +0x8
    id <WAMediaCastingRoutePickerControllerDataSource> _dataSource; // +0x10
    id <WAMediaCastingRoutePickerControllerDelegate> _delegate; // +0x18
    WAMediaCastingUpnpService * _upnpService; // +0x20
    WAMediaCastingAirPlayService * _airPlayService; // +0x28
    WAMediaCastingRoutePickerViewModel * _viewModel; // +0x30
    WAMediaCastingDataReporter * _reporter; // +0x38
    NSString * _uri; // +0x40
    double _startPosition; // +0x48
    NSString * _appID; // +0x50
    unsigned long long _routePickerViewEnterScene; // +0x58
}
- (id)initWithAppID:(id)arg1 pagePath:(id)arg2 appServiceType:(unsigned int)arg3 component:(unsigned int)arg4;
- (void)startCasting:(id)arg1 startPosition:(double)arg2 isLive:(BOOL)arg3;
- (void)switchCasting;
- (void)reconnectCasting;
- (void)exitCasting;
- (void)continueCasting:(id)arg1 startPosition:(double)arg2 isLive:(BOOL)arg3;
- (void)upnp_play;
- (void)upnp_pause;
- (void)upnp_setVolume:(double)arg1;
- (void)upnp_seek:(double)arg1;
- (void)upnp_videoAppear;
- (void)upnp_videoDisappear;
- (void)reportClickWithEventType:(unsigned long long)arg1;
- (void)handlePageSheetDismissDataReport;
- (void)handleUserSelectedAirPlayDeviceDataReport;
- (void)reportCastingEventType:(unsigned long long)arg1 success:(BOOL)arg2;
- (void)reportCastingEventType:(unsigned long long)arg1 uri:(id)arg2 success:(BOOL)arg3;
- (unsigned long long)protocolTypeForDataReport;
- (unsigned long long)currentVideoModeState;
- (void)onMediaCastingPageSheetWillDismiss:(id)arg1;
- (void)onMediaCastingPageSheetDidDismiss:(id)arg1;
- (BOOL)isVideoPlayerInFullScreenModeWithPageSheet:(id)arg1;
- (void)didSelectDeviceItem:(id)arg1 pickerView:(id)arg2;
- (void)didSelectGuideButtonPickerView:(id)arg1;
- (void)onMediaCastingUpnpServiceDidStartSearch:(id)arg1;
- (void)onMediaCastingUpnpServiceDidFinishSearch:(id)arg1 devicesList:(id)arg2;
- (void)onMediaCastingUpnpService:(id)arg1 devicesListDidUpdate:(id)arg2;
- (void)onMediaCastingUpnpService:(id)arg1 videoPlayerStateDidChange:(unsigned long long)arg2;
- (void)onMediaCastingUpnpService:(id)arg1 positionInfoDidChange:(double)arg2 duration:(double)arg3;
- (void)onMediaCastingAirPlayService:(id)arg1 wirelessRouteActiveDidChange:(BOOL)arg2;
- (void)showRoutePickerViewWithEnterScene:(unsigned long long)arg1;
- (id)upnpService;
- (id)airPlayService;
- (id)viewModel;
- (BOOL)isAirPlaying;
- (BOOL)isDLNACasting;
- (unsigned long long)wirelessType;
- (unsigned long long)upnpVideoPlayerState;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setUpnpService:(id)arg1;
- (void)setAirPlayService:(id)arg1;
- (void)setViewModel:(id)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (id)uri;
- (void)setUri:(id)arg1;
- (double)startPosition;
- (void)setStartPosition:(double)arg1;
- (BOOL)isLive;
- (void)setIsLive:(BOOL)arg1;
- (id)appID;
- (void)setAppID:(id)arg1;
- (unsigned long long)routePickerViewEnterScene;
- (void)setRoutePickerViewEnterScene:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

