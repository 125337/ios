@interface WCPlayerProgressBar : UIView
{
    BOOL _isPlaying; // +0x8
    BOOL _isMinimized; // +0x9
    BOOL _isSliderScrubbing; // +0xa
    id <VideoProgressBarDelegate> _m_delegate; // +0x10
    UIView * _containerView; // +0x18
    UIButton * _operateButton; // +0x20
    MMUILabel * _currentTimeLabel; // +0x28
    MMUILabel * _totalTimeLabel; // +0x30
    WXVideoSlider * _videoSlider; // +0x38
    MMTimer * _progressUpdateTimer; // +0x40
    double _totalTime; // +0x48
    unsigned long long _updateTimerCount; // +0x50
}
- (id)initWithSuper:(id)arg1 totalTime:(double)arg2;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)setHidden:(BOOL)arg1;
- (void)onClickAtBackgroud;
- (void)onFocused:(BOOL)arg1;
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
- (void)setLabelColor:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
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
