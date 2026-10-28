@interface WAVideoPlayerView : WCPlayerControlView <UIGestureRecognizerDelegate, WMPFVideoAPIProtocol, WAMediaCastingRoutePickerControllerDelegate, WAMediaCastingRoutePickerControllerDataSource, WCAudioModuleDelegate, WAStreamPlayerInterface, WANativeViewTextureInterface>
{
    WCPlayerView * _playerView; // +0x8
    BOOL _disableScroll; // +0x10
    unsigned int _controlsMask; // +0x14
    unsigned long long _subIndex; // +0x18
    BOOL _lockSlider; // +0x20
    BOOL _touchesProgressMoved; // +0x21
    BOOL _useCustomDuration; // +0x22
    double _currentPlay; // +0x28
    double _currentBuffer; // +0x30
    double _totalDuration; // +0x38
    float _playSpeedRate; // +0x40
    long long _panDirection; // +0x48
    BOOL _adjustVolume; // +0x50
    CGPoint _panGestureStartPoint; // +0x58
    double _panGestureStartValue; // +0x68
    BOOL _systemMuted; // +0x70
    BOOL _customCache; // +0x71
    BOOL _showDanmu; // +0x72
    BOOL _autoPlay; // +0x73
    BOOL _needUpdateEvent; // +0x74
    BOOL _enablePageGesture; // +0x75
    BOOL _enablePageGestureFull; // +0x76
    BOOL _loop; // +0x77
    BOOL _obeyMuteSwitch; // +0x78
    BOOL _autoPauseIfOpenNative; // +0x79
    BOOL _autoPauseIfNavigate; // +0x7a
    BOOL _thumbFitWidth; // +0x7b
    BOOL _autoRotation; // +0x7c
    BOOL _disableTapGesture; // +0x7d
    BOOL _isDrm; // +0x7e
    BOOL _enableCasting; // +0x7f
    BOOL _keepBackgroundPlaybackAfterEnd; // +0x80
    BOOL _nativeViewUseTexture; // +0x81
    BOOL _preferredBackgroundPlayback; // +0x82
    BOOL _isBackgroundPlaybackActive; // +0x83
    BOOL _liveVideo; // +0x84
    BOOL _videoPlayerValid; // +0x85
    BOOL _videoDurationValid; // +0x86
    BOOL _videoSizeValid; // +0x87
    BOOL _videoHidden; // +0x88
    BOOL _isAppBackground; // +0x89
    BOOL _userNeedPlay; // +0x8a
    BOOL _temporaryPause; // +0x8b
    BOOL _isMakeSnapshot; // +0x8c
    BOOL _downloadingThumb; // +0x8d
    BOOL _firstPlayed; // +0x8e
    BOOL _underVoIP; // +0x8f
    BOOL _haveNewFrameBuffer; // +0x90
    BOOL _pauseBecauseAudioSessionRouteChange; // +0x91
    unsigned int _videoId; // +0x94
    unsigned int _appService; // +0x98
    unsigned int _videoTaskTimeout; // +0x9c
    long long _orientation; // +0xa0
    id <WAVideoPlayerViewDelegate> _videoDelagate; // +0xa8
    WCPlayerPlayArgs * _playerInfo; // +0xb0
    NSString * _userData; // +0xb8
    NSString * _scene; // +0xc0
    long long _videoState; // +0xc8
    NSString * _referrer; // +0xd0
    long long _blockSize; // +0xd8
    NSString * _videoPath; // +0xe0
    WANativeViewTexture * _nativeViewTexture; // +0xe8
    NSString * _title; // +0xf0
    WAScreenBrightnessStateView * _bvstatusView; // +0xf8
    long long _controlState; // +0x100
    WAPlayerHttpMediaWrap * _mediaWrap; // +0x108
    UITopTouchView * _holdPlayerView; // +0x110
    UITopTouchView * _holdDanmuView; // +0x118
    UITopTouchView * _gestureView; // +0x120
    UITapGestureRecognizer * _playGes; // +0x128
    UITapGestureRecognizer * _tabGes; // +0x130
    UIPanGestureRecognizer * _panGes; // +0x138
    NSString * _thumbUrl; // +0x140
    UIImageView * _thumbImageView; // +0x148
    UIImageView * _snapImageView; // +0x150
    double _initialTime; // +0x158
    UITopTouchView * _bottomView; // +0x160
    UIImageView * _bottomBG; // +0x168
    UIImage * _bottomBGFull; // +0x170
    UIImage * _bottomBGNotFull; // +0x178
    MMUILabel * _currentLabel; // +0x180
    WCNetworkMediaSlider * _progressSlider; // +0x188
    WCNetworkMediaSlider * _edgeProgressSlider; // +0x190
    MMUILabel * _durationLabel; // +0x198
    MMUIButton * _playBtn; // +0x1a0
    MMUIButton * _muteBtn; // +0x1a8
    MMUIButton * _fullBtn; // +0x1b0
    MMUIButton * _danmuBtn; // +0x1b8
    MMUILabel * _liveLabel; // +0x1c0
    UITopTouchView * _coverView; // +0x1c8
    MMUILabel * _centerTime; // +0x1d0
    UIImageView * _centerScrubTimeBG; // +0x1d8
    MMUILabel * _centerScrubTime; // +0x1e0
    MMUIButton * _centerPlayBtn; // +0x1e8
    MMUIImageView * _fullBackBG; // +0x1f0
    MMUIButton * _fullBackBtn; // +0x1f8
    MMUILabel * _fullBackTitle; // +0x200
    WAVideoLayer * _danmuLayer; // +0x208
    long long _fitMode; // +0x210
    long long _isHLS; // +0x218
    NSURLConnection * _urlConnection; // +0x220
    double _currOutputVolume; // +0x228
    TPVideoFrameBuffer * _curFrameBuffer; // +0x230
    WAMediaCastingRoutePickerController * _mediaCastingRoutePickerController; // +0x238
    CGSize _videoSize; // +0x240
    CGRect _displayRect; // +0x250
}
- (id)initWithThumb:(id)arg1 frame:(CGRect)arg2 referrer:(id)arg3;
- (void)destroyPlayer;
- (void)dealloc;
- (void)setPreloadSecTime:(float)arg1;
- (void)setIsDrm:(BOOL)arg1;
- (void)updateCertificateUrl:(id)arg1;
- (void)updateContentKeyUrl:(id)arg1;
- (void)updateDrmCompatible:(BOOL)arg1;
- (void)setVideoThumb:(id)arg1;
- (void)hideVideoThumb;
- (void)downloadDataWithRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)setVideoThumbImage:(id)arg1;
- (void)setVideoPath:(id)arg1 initialTime:(double)arg2 isHLS:(long long)arg3;
- (void)sendPreloadMetaData;
- (void)startPlayVideo;
- (void)checkContentTypeWithUrlPath:(id)arg1;
- (BOOL)checkControl:(unsigned int)arg1;
- (void)setControls:(unsigned int)arg1;
- (unsigned int)getControlsMask;
- (void)setHidden:(BOOL)arg1;
- (void)setVideoState:(long long)arg1;
- (void)didMoveToWindow;
- (void)routeChange:(id)arg1;
- (void)appDidEnterBackground:(id)arg1;
- (void)appWillEnterForeground:(id)arg1;
- (int)updatePlayPause;
- (void)sendVideoJsEvent:(id)arg1 param:(id)arg2;
- (BOOL)activeAudioModule:(BOOL)arg1;
- (void)updateSnapshotImage;
- (id)getFloatingThumbImage;
- (id)getCurrentSnapshot;
- (void)snapshotVideoBegin;
- (void)snapshotVideoEnd;
- (void)updateSnapshotHidden;
- (id)getAVPlayerItemVideoOutput;
- (void)onClickPlay;
- (void)onClickMuteVoice;
- (void)onClickFull;
- (void)onClickDanmu;
- (void)onSliderTouchDown;
- (void)onSliderTouchMove;
- (void)onSliderTouchUp;
- (void)touchesBeganBottom:(id)arg1 withEvent:(id)arg2;
- (void)touchesEndedBottom:(id)arg1 withEvent:(id)arg2;
- (void)reportVideoAction:(unsigned int)arg1 eventNote:(id)arg2 eventNote1:(id)arg3;
- (void)updateTransGesture;
- (void)touchesBeganGesture:(id)arg1 withEvent:(id)arg2;
- (void)touchesMovedGesture:(id)arg1 withEvent:(id)arg2;
- (void)touchesEndedGesture:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelledGesture:(id)arg1 withEvent:(id)arg2;
- (void)onGestureTap:(id)arg1;
- (void)onGesture2Tap:(id)arg1;
- (void)onGesturePan:(id)arg1;
- (void)verticalMoved:(double)arg1;
- (void)hideBrightnessStatusView;
- (void)updateCenterScrubTime;
- (void)horizontalMoveStart:(CGPoint)arg1;
- (void)horizontalMoved:(CGPoint)arg1;
- (void)horizontalMoveEnd:(CGPoint)arg1;
- (void)cancelDelayControlFadeOnMain:(id)arg1;
- (void)delayControlFadeOnMain:(id)arg1;
- (void)delayControlFade;
- (void)showControl;
- (void)stopControlFadeOnMain:(id)arg1;
- (void)stopControlFade;
- (void)fadeControl;
- (void)fadeControlNow;
- (void)refreshControl;
- (void)setThumbViewHidden:(BOOL)arg1;
- (void)setEnableCasting:(BOOL)arg1;
- (void)updateSubviews:(CGSize)arg1;
- (void)layoutControlView:(CGSize)arg1;
- (id)timeFormat:(int)arg1;
- (void)play:(BOOL)arg1;
- (void)layoutSubviews;
- (void)setAccurateSeek:(BOOL)arg1;
- (BOOL)accurateSeek;
- (void)seek:(double)arg1;
- (void)seek:(double)arg1 accurate:(BOOL)arg2;
- (BOOL)isPlaying;
- (BOOL)isLoading;
- (void)pause;
- (void)stop;
- (void)setTitle:(id)arg1;
- (void)setOrientation:(long long)arg1;
- (long long)fullscreenOrientation;
- (void)enableFullScreen:(BOOL)arg1;
- (void)relayoutForRotationWhileFullScreen;
- (CGRect)videoFrame;
- (void)setLoop:(BOOL)arg1;
- (void)setAutoPlay:(BOOL)arg1;
- (void)setObeyMuteSwitch:(BOOL)arg1;
- (void)setDuration:(double)arg1;
- (void)disableScroll:(BOOL)arg1;
- (void)setEnablePageGesture:(BOOL)arg1;
- (void)setEnablePageGestureFull:(BOOL)arg1;
- (BOOL)isFullScreen;
- (void)updateVideoHidden;
- (void)setVideoFrame:(CGRect)arg1;
- (void)resetVideoFrame;
- (void)delaySetVideoFrameInIpadWhenQuitFullScreen:(CGRect)arg1;
- (id)danmuLayer;
- (void)sendDanmu:(id)arg1 color:(id)arg2;
- (void)setDanmuList:(id)arg1;
- (void)setShowDanmu:(BOOL)arg1;
- (void)setThumbFitWidth:(BOOL)arg1;
- (void)setObjectFit:(long long)arg1;
- (void)pausePlayAndLoading;
- (void)pauseTemp:(BOOL)arg1;
- (long long)pauseCount;
- (void)setPlayBackRate:(float)arg1;
- (void)setMuted:(BOOL)arg1;
- (void)setSystemMuted:(BOOL)arg1;
- (void)updateSoundMuted;
- (BOOL)isForground;
- (void)setPreferredForwardBufferDuration:(double)arg1;
- (void)setPreferredPeakBitRate:(double)arg1;
- (void)startCasting:(id)arg1;
- (void)switchCasting;
- (void)reconnectCasting;
- (void)exitCasting;
- (void)handleVideoAppear;
- (void)handleVideoDisappear;
- (void)upnp_play;
- (void)upnp_pause;
- (void)upnp_seek:(double)arg1;
- (void)setBufferDuration:(float)arg1;
- (void)checkVideoReady;
- (void)onVideoPrepareToPlay:(id)arg1;
- (void)updateVideoCurrentTime:(double)arg1;
- (double)showCurPlayTime:(double)arg1;
- (void)onVideoPlay;
- (void)onVideoPause;
- (void)onPlayerSeekCompelete:(double)arg1;
- (void)onVideoPlayFail:(unsigned long long)arg1 errorCode:(int)arg2 LocalizedErrorDes:(id)arg3;
- (void)onVideoPlayFinish;
- (void)onVideoDidPlayToEndTime;
- (void)showBufferingView;
- (void)hiddenBufferingView;
- (void)onPlayerVideoFrameOut:(id)arg1;
- (id)getNextOutputFrameBufferIfAvailable;
- (void)updateVideoBufferPercent:(double)arg1;
- (void)onCreateThumbImage:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)pauseVideo;
- (void)resumeVideo;
- (void)muteVideo:(BOOL)arg1;
- (id)mediaCastingRoutePickerController;
- (BOOL)isDLNACasting;
- (BOOL)isAirPlaying;
- (void)setHideCoverMask:(BOOL)arg1;
- (BOOL)hideCoverMask;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
- (void)audioModuleInterruptionEnd:(id)arg1 param:(id)arg2;
- (id)mixListForAudioModule:(id)arg1;
- (void)onMediaCastingRoutePickerController:(id)arg1 upnpVideoPlayerStateChanged:(unsigned long long)arg2;
- (id)navigationControllerToShowGuideWebViewWithMediaCastingRoutePickerController:(id)arg1;
- (void)onMediaCastingRoutePickerController:(id)arg1 upnpVideoPlayerPositionInfoChanged:(double)arg2 duration:(double)arg3;
- (void)onMediaCastingRoutePickerController:(id)arg1 userSelected:(id)arg2;
- (void)onMediaCastingRoutePickerController:(id)arg1 upnpVideoDidCast:(BOOL)arg2;
- (BOOL)isVideoPlayerInFullScreenModeWithMediaCastingRoutePickerController:(id)arg1;
- (void)startObserveOutputVolume;
- (void)stopObserveOutputVolume;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (BOOL)isDisplayedInScreen;
- (void)setPreferredBackgroundPlayback:(BOOL)arg1;
- (id)playerView;
- (long long)orientation;
- (id)videoDelagate;
- (void)setVideoDelagate:(id)arg1;
- (id)playerInfo;
- (void)setPlayerInfo:(id)arg1;
- (BOOL)customCache;
- (void)setCustomCache:(BOOL)arg1;
- (unsigned int)videoId;
- (void)setVideoId:(unsigned int)arg1;
- (BOOL)showDanmu;
- (BOOL)autoPlay;
- (id)userData;
- (void)setUserData:(id)arg1;
- (BOOL)needUpdateEvent;
- (void)setNeedUpdateEvent:(BOOL)arg1;
- (BOOL)enablePageGesture;
- (BOOL)enablePageGestureFull;
- (BOOL)loop;
- (unsigned int)appService;
- (void)setAppService:(unsigned int)arg1;
- (id)scene;
- (void)setScene:(id)arg1;
- (BOOL)obeyMuteSwitch;
- (BOOL)autoPauseIfOpenNative;
- (void)setAutoPauseIfOpenNative:(BOOL)arg1;
- (BOOL)autoPauseIfNavigate;
- (void)setAutoPauseIfNavigate:(BOOL)arg1;
- (unsigned int)videoTaskTimeout;
- (void)setVideoTaskTimeout:(unsigned int)arg1;
- (BOOL)thumbFitWidth;
- (BOOL)autoRotation;
- (void)setAutoRotation:(BOOL)arg1;
- (long long)videoState;
- (id)referrer;
- (void)setReferrer:(id)arg1;
- (long long)blockSize;
- (void)setBlockSize:(long long)arg1;
- (BOOL)disableTapGesture;
- (void)setDisableTapGesture:(BOOL)arg1;
- (BOOL)isDrm;
- (BOOL)enableCasting;
- (BOOL)keepBackgroundPlaybackAfterEnd;
- (void)setKeepBackgroundPlaybackAfterEnd:(BOOL)arg1;
- (id)videoPath;
- (void)setVideoPath:(id)arg1;
- (BOOL)nativeViewUseTexture;
- (void)setNativeViewUseTexture:(BOOL)arg1;
- (id)nativeViewTexture;
- (void)setNativeViewTexture:(id)arg1;
- (id)title;
- (BOOL)preferredBackgroundPlayback;
- (BOOL)isBackgroundPlaybackActive;
- (void)setIsBackgroundPlaybackActive:(BOOL)arg1;
- (id)bvstatusView;
- (void)setBvstatusView:(id)arg1;
- (long long)controlState;
- (void)setControlState:(long long)arg1;
- (id)mediaWrap;
- (void)setMediaWrap:(id)arg1;
- (id)holdPlayerView;
- (void)setHoldPlayerView:(id)arg1;
- (id)holdDanmuView;
- (void)setHoldDanmuView:(id)arg1;
- (id)gestureView;
- (void)setGestureView:(id)arg1;
- (id)playGes;
- (void)setPlayGes:(id)arg1;
- (id)tabGes;
- (void)setTabGes:(id)arg1;
- (id)panGes;
- (void)setPanGes:(id)arg1;
- (id)thumbUrl;
- (void)setThumbUrl:(id)arg1;
- (id)thumbImageView;
- (void)setThumbImageView:(id)arg1;
- (id)snapImageView;
- (void)setSnapImageView:(id)arg1;
- (double)initialTime;
- (void)setInitialTime:(double)arg1;
- (BOOL)liveVideo;
- (void)setLiveVideo:(BOOL)arg1;
- (BOOL)videoPlayerValid;
- (void)setVideoPlayerValid:(BOOL)arg1;
- (BOOL)videoDurationValid;
- (void)setVideoDurationValid:(BOOL)arg1;
- (BOOL)videoSizeValid;
- (void)setVideoSizeValid:(BOOL)arg1;
- (BOOL)videoHidden;
- (void)setVideoHidden:(BOOL)arg1;
- (CGSize)videoSize;
- (void)setVideoSize:(CGSize)arg1;
- (CGRect)displayRect;
- (void)setDisplayRect:(CGRect)arg1;
- (id)bottomView;
- (void)setBottomView:(id)arg1;
- (id)bottomBG;
- (void)setBottomBG:(id)arg1;
- (id)bottomBGFull;
- (void)setBottomBGFull:(id)arg1;
- (id)bottomBGNotFull;
- (void)setBottomBGNotFull:(id)arg1;
- (id)currentLabel;
- (void)setCurrentLabel:(id)arg1;
- (id)progressSlider;
- (void)setProgressSlider:(id)arg1;
- (id)edgeProgressSlider;
- (void)setEdgeProgressSlider:(id)arg1;
- (id)durationLabel;
- (void)setDurationLabel:(id)arg1;
- (id)playBtn;
- (void)setPlayBtn:(id)arg1;
- (id)muteBtn;
- (void)setMuteBtn:(id)arg1;
- (id)fullBtn;
- (void)setFullBtn:(id)arg1;
- (id)danmuBtn;
- (void)setDanmuBtn:(id)arg1;
- (id)liveLabel;
- (void)setLiveLabel:(id)arg1;
- (id)coverView;
- (void)setCoverView:(id)arg1;
- (id)centerTime;
- (void)setCenterTime:(id)arg1;
- (id)centerScrubTimeBG;
- (void)setCenterScrubTimeBG:(id)arg1;
- (id)centerScrubTime;
- (void)setCenterScrubTime:(id)arg1;
- (id)centerPlayBtn;
- (void)setCenterPlayBtn:(id)arg1;
- (id)fullBackBG;
- (void)setFullBackBG:(id)arg1;
- (id)fullBackBtn;
- (void)setFullBackBtn:(id)arg1;
- (id)fullBackTitle;
- (void)setFullBackTitle:(id)arg1;
- (void)setDanmuLayer:(id)arg1;
- (BOOL)isAppBackground;
- (void)setIsAppBackground:(BOOL)arg1;
- (BOOL)userNeedPlay;
- (void)setUserNeedPlay:(BOOL)arg1;
- (BOOL)temporaryPause;
- (void)setTemporaryPause:(BOOL)arg1;
- (BOOL)isMakeSnapshot;
- (void)setIsMakeSnapshot:(BOOL)arg1;
- (long long)fitMode;
- (void)setFitMode:(long long)arg1;
- (BOOL)downloadingThumb;
- (void)setDownloadingThumb:(BOOL)arg1;
- (BOOL)firstPlayed;
- (void)setFirstPlayed:(BOOL)arg1;
- (long long)isHLS;
- (void)setIsHLS:(long long)arg1;
- (id)urlConnection;
- (void)setUrlConnection:(id)arg1;
- (BOOL)underVoIP;
- (void)setUnderVoIP:(BOOL)arg1;
- (double)currOutputVolume;
- (void)setCurrOutputVolume:(double)arg1;
- (BOOL)haveNewFrameBuffer;
- (void)setHaveNewFrameBuffer:(BOOL)arg1;
- (id)curFrameBuffer;
- (void)setCurFrameBuffer:(id)arg1;
- (void)setMediaCastingRoutePickerController:(id)arg1;
- (BOOL)pauseBecauseAudioSessionRouteChange;
- (void)setPauseBecauseAudioSessionRouteChange:(BOOL)arg1;
- (void).cxx_destruct;
@end
