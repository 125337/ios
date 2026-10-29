@interface VideoProgressBar : UIView
{
    BOOL _bForbidAutoHidden; // +0x8
    BOOL _isPlaying; // +0x9
    BOOL _isMinimized; // +0xa
    BOOL _isSliderScrubbing; // +0xb
    id <VideoProgressBarDelegate> _m_delegate; // +0x10
    UIView * _blurView; // +0x18
    UIView * _containerView; // +0x20
    UIButton * _operateButton; // +0x28
    MMUILabel * _currentTimeLabel; // +0x30
    MMUILabel * _totalTimeLabel; // +0x38
    WXVideoSlider * _videoSlider; // +0x40
    MMTimer * _progressUpdateTimer; // +0x48
    double _totalTime; // +0x50
    unsigned long long _updateTimerCount; // +0x58
}
- (id)initWithSuper:(id)arg1 totalTime:(double)arg2;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)setHidden:(BOOL)arg1;
- (void)onClickAtBackgroud;
- (void)onFocused:(BOOL)arg1;
- (BOOL)isDenyHiddenProgressBar;
- (void)updateCurrentTimeLabel:(double)arg1;
- (void)updateTotalTime:(double)arg1;
- (void)onPlayStart;
- (void)onPlayStop;
- (void)onStopButtonClick;
- (void)onPlayButtonClick;
- (void)onSliderChange;
- (void)onSliderScrubbBegin;
- (void)onSliderScrubbEnd;
- (void)updateProgress;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (BOOL)bForbidAutoHidden;
- (void)setBForbidAutoHidden:(BOOL)arg1;
- (id)blurView;
- (void)setBlurView:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)operateButton;
- (void)setOperateButton:(id)arg1;
- (id)currentTimeLabel;
- (void)setCurrentTimeLabel:(id)arg1;
- (id)totalTimeLabel;
- (void)setTotalTimeLabel:(id)arg1;
- (id)videoSlider;
- (void)setVideoSlider:(id)arg1;
- (id)progressUpdateTimer;
- (void)setProgressUpdateTimer:(id)arg1;
- (BOOL)isPlaying;
- (void)setIsPlaying:(BOOL)arg1;
- (BOOL)isMinimized;
- (void)setIsMinimized:(BOOL)arg1;
- (BOOL)isSliderScrubbing;
- (void)setIsSliderScrubbing:(BOOL)arg1;
- (double)totalTime;
- (void)setTotalTime:(double)arg1;
- (unsigned long long)updateTimerCount;
- (void)setUpdateTimerCount:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

