@interface WCFinderPlayBar : UIView <WCPlayerControlProtocol>
{
    BOOL _isPlaying; // +0x8
    WCPlayerView * playerView; // +0x10
    id <WCFinderPlayBarDelegate> _playerDelegate; // +0x18
    UIButton * _playButton; // +0x20
    WXVideoSlider * _playSlider; // +0x28
    UILabel * _countTimeLabel; // +0x30
    UILabel * _timeLabel; // +0x38
    double _moveBeginProgress; // +0x40
}
+ (id)playBarWithMakeView:(id /* block */)arg1;
- (void)setupUIWithMakeView:(id /* block */)arg1;
- (void)reMake:(id /* block */)arg1;
- (void)layoutSubviews;
- (void)play;
- (void)pause;
- (void)startLoading;
- (void)stopLoading;
- (void)stop;
- (double)playPosition;
- (void)setPlayPosition:(double)arg1 andLength:(double)arg2;
- (void)onPlayToggle;
- (void)onPause;
- (void)onPlay;
- (void)onSliderScrubbBegin;
- (void)onSliderChange:(id)arg1;
- (void)onSliderScrubbEnd:(id)arg1;
- (void)movePositionBegin;
- (void)movePositionChange:(double)arg1;
- (void)movePositionEnd;
- (void)updateTimeLabelAt:(double)arg1;
- (double)getPlayVideoTotalTime;
- (void)onVideoPrepareToPlay:(id)arg1;
- (void)onVideoPlayFail:(unsigned long long)arg1 errorCode:(int)arg2 LocalizedErrorDes:(id)arg3;
- (void)onVideoDidPlayToEndTime;
- (void)onCreateThumbImage:(id)arg1;
- (void)showBufferingView;
- (void)hiddenBufferingView;
- (void)showPercentView;
- (void)hiddenPercentView;
- (void)showThumbImageView;
- (void)hiddenThumbImageView;
- (void)onPlaybackCurTimeUpdate:(double)arg1;
- (void)startObserveVolume;
- (void)stopObserveVolume;
- (void)updateVideoBufferPercent:(double)arg1;
- (void)onPlayerVideoFrameOut:(id)arg1;
- (void)onVideoPlay;
- (void)onVideoPause;
- (void)onVideoPlayFinish;
- (void)updateVideoCurrentTime:(double)arg1;
- (id)playerView;
- (void)setPlayerView:(id)arg1;
- (id)playerDelegate;
- (void)setPlayerDelegate:(id)arg1;
- (id)playButton;
- (void)setPlayButton:(id)arg1;
- (BOOL)isPlaying;
- (void)setIsPlaying:(BOOL)arg1;
- (id)playSlider;
- (void)setPlaySlider:(id)arg1;
- (id)countTimeLabel;
- (void)setCountTimeLabel:(id)arg1;
- (id)timeLabel;
- (void)setTimeLabel:(id)arg1;
- (double)moveBeginProgress;
- (void)setMoveBeginProgress:(double)arg1;
- (void).cxx_destruct;
@end
