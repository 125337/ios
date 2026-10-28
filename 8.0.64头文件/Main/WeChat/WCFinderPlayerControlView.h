@interface WCFinderPlayerControlView : UIView <WCPlayerVolumeObserverDelegate, WCPlayerControlProtocol>
{
    BOOL _isBufferingViewLoading; // +0x8
    WCPlayerView * playerView; // +0x10
    id <WCFinderPlayerControlViewDelegate> _delegate; // +0x18
    UIView * _coverMask; // +0x20
    WCFinderAnimationLoadingView * _loadingView; // +0x28
    double _progress; // +0x30
    unsigned long long _loadingLocation; // +0x38
    double _maxPlayVideoTime; // +0x40
    WCPlayerVolumeObserver * _volumeObserver; // +0x48
    WXVideoSlider * _volumeSlider; // +0x50
    UIView * _volumePanel; // +0x58
    UIView * _volumeBgView; // +0x60
    UIImageView * _volumeIconView; // +0x68
}
- (id)initWithFrame:(CGRect)arg1;
- (void)prepareForReuse;
- (void)addWCPlayerSubview;
- (void)layoutSubviews;
- (id)coverMask;
- (id)loadingView;
- (id)volumeSlider;
- (id)volumeBgView;
- (id)getVolumeIconName;
- (id)volumeIconView;
- (id)volumePanel;
- (void)onPlayerRestoreUserInterfaceForPictureInPictureStop:(id)arg1;
- (void)onPlayerView:(id)arg1 pictureInPictureStateDidChange:(long long)arg2;
- (void)onPlayerView:(id)arg1 pipSeekFromTime:(double)arg2 toTime:(double)arg3;
- (void)onPipStatePlayWithPlayerView:(id)arg1;
- (void)onPipStatePauseWithPlayerView:(id)arg1;
- (void)onPipStateRePlayWithPlayerView:(id)arg1;
- (void)onPlayerView:(id)arg1 startDisplayOnPipWindow:(long long)arg2;
- (void)onPlayerView:(id)arg1 stopDisplayOnPipWindow:(long long)arg2;
- (void)onPlayerStateChanged:(unsigned long long)arg1;
- (void)onPlayerProxyIsUnAvaiable;
- (void)onVideoPrepareToPlay:(id)arg1;
- (void)startObserveVolume;
- (void)stopObserveVolume;
- (void)onVideoPlay;
- (void)onVideoPause;
- (void)onVideoPlayFinish;
- (void)onVideoPlayFail:(unsigned long long)arg1 errorCode:(int)arg2 LocalizedErrorDes:(id)arg3;
- (void)onVideoDidPlayToEndTime;
- (void)onCreateThumbImage:(id)arg1;
- (void)showBufferingView;
- (void)hiddenBufferingView;
- (void)showPercentView;
- (void)hiddenPercentView;
- (void)showThumbImageView;
- (void)hiddenThumbImageView;
- (double)getPlayVideoTotalTime;
- (void)updateVideoCurrentTime:(double)arg1;
- (void)reset;
- (void)updateVideoTotalTime:(double)arg1;
- (void)updateVideoBufferPercent:(double)arg1;
- (void)onPlayerVideoFrameOut:(id)arg1;
- (void)onDataSourceChangeStart:(id)arg1;
- (void)onDataSourceChangeSucc:(id)arg1;
- (void)onPlayerMuteByAudioModuleInterruptionBegin:(id)arg1;
- (void)onPlayerUnMuteByAudioModuleInterruptionEnd:(id)arg1;
- (id)progressBarStatus;
- (void)setProgressBarStatus:(id)arg1;
- (BOOL)hasPlayToAppearTime;
- (void)onVolumeDidChange:(double)arg1;
- (void)hiddenVolumePanel;
- (id)playerView;
- (void)setPlayerView:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setCoverMask:(id)arg1;
- (void)setLoadingView:(id)arg1;
- (double)progress;
- (void)setProgress:(double)arg1;
- (BOOL)isBufferingViewLoading;
- (void)setIsBufferingViewLoading:(BOOL)arg1;
- (unsigned long long)loadingLocation;
- (void)setLoadingLocation:(unsigned long long)arg1;
- (double)maxPlayVideoTime;
- (void)setMaxPlayVideoTime:(double)arg1;
- (id)volumeObserver;
- (void)setVolumeObserver:(id)arg1;
- (void)setVolumeSlider:(id)arg1;
- (void)setVolumePanel:(id)arg1;
- (void)setVolumeBgView:(id)arg1;
- (void)setVolumeIconView:(id)arg1;
- (void).cxx_destruct;
@end
