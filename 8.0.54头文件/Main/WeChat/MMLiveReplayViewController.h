@interface MMLiveReplayViewController : MMCPUIViewController <FullScreenGestureDelegate, WCPlayerConfigDelegate, VideoProgressBarDelegate>
{
    BOOL _toolViewHidden; // +0x68
    MMLiveTaskId * _liveTaskId; // +0x70
    MMUIButton * _closeButton; // +0x78
    MMUILabel * _titleLabel; // +0x80
    MMLivePlayerProgressBar * _progressBar; // +0x88
    WCPlayerView * _hlsPlayer; // +0x90
    WCPlayerPlayArgs * _playerInfo; // +0x98
    WCPlayerConfigControlView * _controlView; // +0xa0
    LiveInfo * _liveInfo; // +0xa8
    double _currentProgress; // +0xb0
    WXFullScreenGestureRecognizer * _fullScreenGesture; // +0xb8
}
- (id)initWithLiveTask:(id)arg1;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)useBlackStatusbar;
- (long long)preferredStatusBarStyle;
- (void)viewDidLoad;
- (BOOL)shouldInteractivePop;
- (void)setupHLSPlayer;
- (id)createHLSPlayerConfig;
- (id)createPlayerInfo;
- (void)layoutHeader;
- (void)startPlay;
- (void)stopPlay;
- (void)pause;
- (void)onCloseButtonClicked;
- (void)onProgressBarHidden;
- (void)onSliderPauseVideo;
- (void)onSliderPlayVideo;
- (struct)getCurrentPlaybackTime;
- (void)onSliderChangeTo:(float)arg1;
- (void)onSliderScrubbBegin;
- (void)onSliderSeekToTime:(float)arg1;
- (void)onSightIconProgressEnd;
- (void)onTapSightIconView;
- (void)onTapCloseButton:(id)arg1;
- (void)onTapAttachButton:(id)arg1;
- (void)onVideoPlay;
- (void)onToolViewAutoClose;
- (void)onVideoPause;
- (void)onPlayToEnd;
- (void)onLoopPlayToEnd;
- (void)onGetVideoSize:(CGSize)arg1;
- (void)onShowBufferingView;
- (void)onHiddenBufferingView;
- (void)onFullScreenSingleTap;
- (void)setToolViewHidden:(BOOL)arg1;
- (id)liveTaskId;
- (id)closeButton;
- (void)setCloseButton:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)progressBar;
- (void)setProgressBar:(id)arg1;
- (id)hlsPlayer;
- (void)setHlsPlayer:(id)arg1;
- (id)playerInfo;
- (void)setPlayerInfo:(id)arg1;
- (id)controlView;
- (void)setControlView:(id)arg1;
- (id)liveInfo;
- (void)setLiveInfo:(id)arg1;
- (double)currentProgress;
- (void)setCurrentProgress:(double)arg1;
- (id)fullScreenGesture;
- (void)setFullScreenGesture:(id)arg1;
- (BOOL)toolViewHidden;
- (void).cxx_destruct;
@end

