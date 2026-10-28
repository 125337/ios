@interface VideoDetailControlView : WCPlayerControlView <WCC2CPlayerProgressBarDelegate>
{
    BOOL _isSyncSaveingData; // +0x8
    unsigned int _scrubbBeginProgress; // +0xc
    NSString * _mediaId; // +0x10
    id <VideoDetailControlViewDelegate> _delegate; // +0x18
    WCC2CPlayerProgressBar * _progressBar; // +0x20
    UIView * _bottomBkgView; // +0x28
    CAGradientLayer * _gradientLayer; // +0x30
    UIView * _operateContentView; // +0x38
    SightIconView * _loadingIconView; // +0x40
    MMMediaBrowserReporter * _mediaBrowserReporter; // +0x48
}
- (id)initWithFrame:(CGRect)arg1;
- (id)loadingIconView;
- (id)progressBar;
- (id)bottomBkgView;
- (void)layoutSubviews;
- (void)didMoveToSuperview;
- (BOOL)isHDRVideo;
- (void)updateProgressBarColor:(BOOL)arg1;
- (void)changeToShowDownloadPercent;
- (void)hiddenDownloadPercent;
- (void)setOperateToolView:(BOOL)arg1;
- (void)setProgress:(double)arg1;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)onProgressBarHidden;
- (void)onProgressBarChangePlayRate:(float)arg1 currentPlayRate:(float)arg2;
- (void)onSliderScrubbBegin;
- (void)onSliderChangeTo:(float)arg1;
- (void)onSliderSeekToTime:(float)arg1;
- (struct)getCurrentPlaybackTime;
- (id)onPlayButtonExpose;
- (void)onPlayButtonClicked;
- (id)onPlayRateExpose;
- (void)onVideoPause;
- (void)onVideoPlay;
- (void)onVideoDidPlayToEndTime;
- (void)onVideoPrepareToPlay:(id)arg1;
- (void)updateVideoCurrentTime:(double)arg1;
- (void)showBufferingView;
- (void)hiddenBufferingView;
- (void)onDownloadProgressChange:(id)arg1 finishLength:(unsigned long long)arg2 total:(unsigned long long)arg3;
- (void)onReceiveAllVideoData:(id)arg1;
- (void)onVideoPlayFail:(unsigned long long)arg1 errorCode:(int)arg2 LocalizedErrorDes:(id)arg3;
- (id)mediaId;
- (void)setMediaId:(id)arg1;
- (BOOL)isSyncSaveingData;
- (void)setIsSyncSaveingData:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setProgressBar:(id)arg1;
- (void)setBottomBkgView:(id)arg1;
- (id)gradientLayer;
- (void)setGradientLayer:(id)arg1;
- (id)operateContentView;
- (void)setOperateContentView:(id)arg1;
- (void)setLoadingIconView:(id)arg1;
- (unsigned int)scrubbBeginProgress;
- (void)setScrubbBeginProgress:(unsigned int)arg1;
- (id)mediaBrowserReporter;
- (void)setMediaBrowserReporter:(id)arg1;
- (void).cxx_destruct;
@end
