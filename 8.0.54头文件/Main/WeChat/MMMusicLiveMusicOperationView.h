@interface MMMusicLiveMusicOperationView : UIView <IMusicPlayerExt, UIGestureRecognizerDelegate>
{
    BOOL _isSliding; // +0x8
    BOOL _isSeekNotSuccRefreshUIFlag; // +0x9
    BOOL _isSeekNotSuccPlayAuto; // +0xa
    id <MMMusicLiveMusicOperationViewDelegate> _delegate; // +0x10
    MMMusicInfo * _musicInfo; // +0x18
    MMMVSafeSlider * _slider; // +0x20
    MMTimer * _sliderTimer; // +0x28
    MMUILabel * _playedTimeLabel; // +0x30
    MMUILabel * _dividerLabel; // +0x38
    MMUILabel * _totalTimeLabel; // +0x40
    double _musicTimeInSecondPerPx; // +0x48
    double _lastSeekTime; // +0x50
}
- (id)initWithMusicInfo:(id)arg1 andFrame:(CGRect)arg2 delegate:(id)arg3;
- (void)initViews;
- (BOOL)progressHidden;
- (void)setProgressHidden:(BOOL)arg1;
- (void)layoutSubviews;
- (void)onPlayMusicBtnClicked;
- (void)updateCurrentPlayTimeInSeconds:(double)arg1 totalDuration:(double)arg2;
- (void)setProgress:(double)arg1;
- (unsigned int)setProgressEnd;
- (double)getMusicTimeInSecondPerPx;
- (void)onMusicPlayStatusChanged;
- (void)onMusicPlayInnerStatusChanged:(unsigned long long)arg1 musicInfo:(id)arg2 errInfo:(id)arg3;
- (void)updateProgress;
- (void)onNeedUpdatePlayedTime;
- (void)onNeedUpdatePlayedTimeWhenSetProgressEnd;
- (void)onSliderChange;
- (void)onSliderScrubbBegin;
- (void)onSliderScrubbEnd;
- (void)actionTapSlider:(id)arg1;
- (void)updateSliderThumbImage;
- (void)trySeekMusic:(double)arg1 playAuto:(BOOL)arg2;
- (BOOL)canSeek:(unsigned long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isSliding;
- (void)setIsSliding:(BOOL)arg1;
- (id)musicInfo;
- (void)setMusicInfo:(id)arg1;
- (id)slider;
- (void)setSlider:(id)arg1;
- (id)sliderTimer;
- (void)setSliderTimer:(id)arg1;
- (id)playedTimeLabel;
- (void)setPlayedTimeLabel:(id)arg1;
- (id)dividerLabel;
- (void)setDividerLabel:(id)arg1;
- (id)totalTimeLabel;
- (void)setTotalTimeLabel:(id)arg1;
- (double)musicTimeInSecondPerPx;
- (void)setMusicTimeInSecondPerPx:(double)arg1;
- (double)lastSeekTime;
- (void)setLastSeekTime:(double)arg1;
- (BOOL)isSeekNotSuccRefreshUIFlag;
- (void)setIsSeekNotSuccRefreshUIFlag:(BOOL)arg1;
- (BOOL)isSeekNotSuccPlayAuto;
- (void)setIsSeekNotSuccPlayAuto:(BOOL)arg1;
- (void).cxx_destruct;
@end

