@interface WCNormalVideoPlayerView : MMUIView <WCNetworkMediaCoreDelegate, VideoProgressBarDelegate, IVOIPUILogicMgrExt>
{
    BOOL _isPlaying; // +0x8
    BOOL _hasStarted; // +0x9
    id <WCNormalVideoPlayerViewDelegate> _playerDelegate; // +0x10
    NSString * _videoUrl; // +0x18
    MMUIView * _controlView; // +0x20
    WCNetworkMediaCore * _mediaCore; // +0x28
    ImageBrowseButton * _closeButton; // +0x30
    SightIconView * _playIconView; // +0x38
    WCPlayerProgressBar * _progressBar; // +0x40
}
- (id)initWithFrame:(CGRect)arg1 videoUrl:(id)arg2;
- (void)initMediaCore;
- (void)initView;
- (void)onSceenClicked;
- (void)onSightIconClick;
- (void)onCloseBtnClick;
- (void)layoutSubviews;
- (void)startPlay;
- (void)stopPlay;
- (void)pause;
- (void)dealloc;
- (void)onMediaCore:(id)arg1 StateChange:(int)arg2;
- (void)onMediaCore:(id)arg1 CacheDarutionChange:(double)arg2;
- (void)onMediaCore:(id)arg1 DarutionUpdate:(double)arg2;
- (void)onMediaCore:(id)arg1 VideoSizeUpdate:(CGSize)arg2;
- (void)onProgressBarHidden;
- (void)onSliderPauseVideo;
- (void)onSliderPlayVideo;
- (void)onSliderChangeTo:(float)arg1;
- (void)onSliderScrubbBegin;
- (void)onSliderSeekToTime:(float)arg1;
- (struct)getCurrentPlaybackTime;
- (void)onVideoVoipViewDidAppear:(id)arg1;
- (id)playerDelegate;
- (void)setPlayerDelegate:(id)arg1;
- (id)videoUrl;
- (void)setVideoUrl:(id)arg1;
- (id)controlView;
- (void)setControlView:(id)arg1;
- (id)mediaCore;
- (void)setMediaCore:(id)arg1;
- (id)closeButton;
- (void)setCloseButton:(id)arg1;
- (id)playIconView;
- (void)setPlayIconView:(id)arg1;
- (id)progressBar;
- (void)setProgressBar:(id)arg1;
- (BOOL)isPlaying;
- (void)setIsPlaying:(BOOL)arg1;
- (BOOL)hasStarted;
- (void)setHasStarted:(BOOL)arg1;
- (void).cxx_destruct;
@end
