@interface TXLivePlayJSAdapter : NSObject <V2TXLivePlayerJSAdapterDelegate, WCAudioModuleDelegate, WMPFLivePlayerAPIProtocol, WMPFAudioAPIProtocol, WAMediaCastingRoutePickerControllerDelegate, WAMediaCastingRoutePickerControllerDataSource, TXLivePlayJSAdapterProtocol>
{
    BOOL _isVoip; // +0x8
    BOOL _autoPauseIfNavigate; // +0x9
    BOOL _autoPauseIfOpenNative; // +0xa
    BOOL _userNeedPlay; // +0xb
    BOOL _autoPlay; // +0xc
    BOOL _autoRotate; // +0xd
    BOOL _isBackgroundPlaybackActive; // +0xe
    BOOL _preferredBackgroundPlayback; // +0xf
    BOOL _isFullScreen; // +0x10
    BOOL _isDebug; // +0x11
    BOOL _needEvent; // +0x12
    BOOL _needNetStatus; // +0x13
    BOOL _needVolumeNotify; // +0x14
    BOOL _bIsBackgroundInterrupted; // +0x15
    BOOL _underNativeLive; // +0x16
    BOOL _enableCasting; // +0x17
    unsigned int _playerId; // +0x18
    id <TXLivePlayJSAdapterDelegate> _delegate; // +0x20
    long long _playStateID; // +0x28
    NSString * _playUrl; // +0x30
    NSString * _title; // +0x38
    V2TXLivePlayerJSAdapter * _v2LivePlayer; // +0x40
    TXLiveContainerView * _containerView; // +0x48
    NSString * _appId; // +0x50
    long long _direction; // +0x58
    NSString * _objectFit; // +0x60
    long long _mode; // +0x68
    long long _audioRoute; // +0x70
    unsigned long long _pauseType; // +0x78
    WAMediaCastingRoutePickerController * _mediaCastingRoutePickerController; // +0x80
    double _currOutputVolume; // +0x88
    CGRect _rect; // +0x90
}
- (void)dealloc;
- (id)initLivePlayerWithId:(unsigned int)arg1 configs:(id)arg2 containerView:(id)arg3 appId:(id)arg4 delegate:(id)arg5;
- (void)updateContainerViewRect:(CGRect)arg1;
- (void)updateLivePlayerWithConfigs:(id)arg1;
- (void)operateLivePlayerWithType:(id)arg1 data:(id)arg2;
- (id)getCurrentSnapshot;
- (void)snapshotLivePlayer:(BOOL)arg1 isSnapshotStream:(BOOL)arg2 snapshotCompletionBlock:(id /* block */)arg3;
- (id)containerView;
- (void)handlePlayUrl:(BOOL)arg1;
- (void)parseConfigs:(id)arg1;
- (void)setAudioRoute;
- (void)play;
- (void)stop;
- (void)pauseByManual;
- (void)pause:(unsigned long long)arg1;
- (void)resume;
- (void)enableFull;
- (void)relayoutForRotationWhileFullScreen;
- (CGRect)fullScreenFrame;
- (void)delaySetVideoFrameInIpadWhenQuitFullScreen:(CGRect)arg1;
- (void)disbaleFull;
- (void)enterBackground;
- (void)enterForeground;
- (void)snapshotVideoBegin;
- (void)snapshotVideoEnd;
- (long long)getDirection;
- (void)activeAudioSession;
- (BOOL)isPlaying;
- (BOOL)isPause;
- (BOOL)isRealPlaying;
- (BOOL)setAudioActive:(BOOL)arg1;
- (void)onAppDidEnterBackground:(id)arg1;
- (void)onAppWillEnterForeground:(id)arg1;
- (void)addNotification;
- (void)removeNotification;
- (void)onConfigApplied:(BOOL)arg1;
- (void)onPlayEvent:(long long)arg1 withParam:(id)arg2;
- (void)onNetStatus:(id)arg1;
- (void)onAudioVolumeEvaluation:(long long)arg1;
- (void)onSetLivePlaying;
- (void)pauseLivePlay;
- (void)resumeLivePlay;
- (void)pauseForAudioConflict;
- (void)resumePlayingIfNeededAfterAudioConflict;
- (void)resumeOrPlay;
- (void)innerAppAudioInterruptionBegan;
- (void)innerAppAudioInterruptionEnd;
- (void)audioSessionInterruptionEnd;
- (void)audioSessionInterruptionBegan;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
- (void)audioModuleInterruptionEnd:(id)arg1 param:(id)arg2;
- (id)mixListForAudioModule:(id)arg1;
- (id)getIdentifier;
- (void)sendVideoJsEvent:(id)arg1 param:(id)arg2;
- (id)mediaCastingRoutePickerController;
- (BOOL)isCasting;
- (BOOL)isDLNACasting;
- (BOOL)isAirPlaying;
- (void)startCasting:(id)arg1;
- (void)switchCasting;
- (void)reconnectCasting;
- (void)exitCasting;
- (void)upnp_play;
- (void)upnp_pause;
- (void)updateCastingUrlIfNeeded:(id)arg1;
- (void)onMediaCastingRoutePickerController:(id)arg1 upnpVideoPlayerStateChanged:(unsigned long long)arg2;
- (id)navigationControllerToShowGuideWebViewWithMediaCastingRoutePickerController:(id)arg1;
- (void)onMediaCastingRoutePickerController:(id)arg1 upnpVideoPlayerPositionInfoChanged:(double)arg2 duration:(double)arg3;
- (void)onMediaCastingRoutePickerController:(id)arg1 userSelected:(id)arg2;
- (void)onMediaCastingRoutePickerController:(id)arg1 upnpVideoDidCast:(BOOL)arg2;
- (BOOL)isVideoPlayerInFullScreenModeWithMediaCastingRoutePickerController:(id)arg1;
- (void)startObserveOutputVolume;
- (void)stopObserveOutputVolume;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (BOOL)isVoip;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)autoPauseIfNavigate;
- (BOOL)autoPauseIfOpenNative;
- (long long)playStateID;
- (void)setPlayStateID:(long long)arg1;
- (id)playUrl;
- (void)setPlayUrl:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (BOOL)userNeedPlay;
- (void)setUserNeedPlay:(BOOL)arg1;
- (BOOL)autoPlay;
- (void)setAutoPlay:(BOOL)arg1;
- (BOOL)autoRotate;
- (void)setAutoRotate:(BOOL)arg1;
- (BOOL)isBackgroundPlaybackActive;
- (void)setIsBackgroundPlaybackActive:(BOOL)arg1;
- (BOOL)preferredBackgroundPlayback;
- (void)setPreferredBackgroundPlayback:(BOOL)arg1;
- (unsigned int)playerId;
- (id)v2LivePlayer;
- (void)setV2LivePlayer:(id)arg1;
- (void)setContainerView:(id)arg1;
- (BOOL)isFullScreen;
- (void)setIsFullScreen:(BOOL)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (long long)direction;
- (void)setDirection:(long long)arg1;
- (id)objectFit;
- (void)setObjectFit:(id)arg1;
- (long long)mode;
- (void)setMode:(long long)arg1;
- (long long)audioRoute;
- (void)setAudioRoute:(long long)arg1;
- (BOOL)isDebug;
- (void)setIsDebug:(BOOL)arg1;
- (BOOL)needEvent;
- (void)setNeedEvent:(BOOL)arg1;
- (BOOL)needNetStatus;
- (void)setNeedNetStatus:(BOOL)arg1;
- (BOOL)needVolumeNotify;
- (void)setNeedVolumeNotify:(BOOL)arg1;
- (BOOL)bIsBackgroundInterrupted;
- (void)setBIsBackgroundInterrupted:(BOOL)arg1;
- (CGRect)rect;
- (void)setRect:(CGRect)arg1;
- (BOOL)underNativeLive;
- (void)setUnderNativeLive:(BOOL)arg1;
- (BOOL)enableCasting;
- (void)setEnableCasting:(BOOL)arg1;
- (unsigned long long)pauseType;
- (void)setPauseType:(unsigned long long)arg1;
- (void)setMediaCastingRoutePickerController:(id)arg1;
- (double)currOutputVolume;
- (void)setCurrOutputVolume:(double)arg1;
- (void).cxx_destruct;
@end
