@interface WCCanvasAdVideoProgressBar : UIView
{
    BOOL _isPlaying; // +0x8
    BOOL _isMinimized; // +0x9
    BOOL _isSliderScrubbing; // +0xa
    id <WCCanvasAdVideoProgressBarDelegate> _m_delegate; // +0x10
    UIView * _bgView; // +0x18
    UIView * _containerView; // +0x20
    UIButton * _operateButton; // +0x28
    MMUILabel * _currentTimeLabel; // +0x30
    MMUILabel * _totalTimeLabel; // +0x38
    WXVideoSlider * _videoSlider; // +0x40
    UIButton * _voiceBtn; // +0x48
    UIButton * _fullScreenBtn; // +0x50
    MMTimer * _progressUpdateTimer; // +0x58
    double _totalTime; // +0x60
    unsigned long long _playerMode; // +0x68
}
- (id)initWithFrame:(CGRect)arg1 andPlayerMode:(unsigned long long)arg2;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)onPlayStart;
- (void)onPlayStop;
- (void)updateTotalTime:(double)arg1;
- (void)setAudioBtnState:(BOOL)arg1;
- (void)setFullScreenBtnState:(BOOL)arg1;
- (void)setFullScreenBtnVisible:(BOOL)arg1;
- (BOOL)isAudioOn;
- (BOOL)isFullScreen;
- (BOOL)isPlayBtnOn;
- (id)containerView;
- (id)bgView;
- (id)voiceBtn;
- (id)fullScreenBtn;
- (id)operateButton;
- (id)currentTimeLabel;
- (id)totalTimeLabel;
- (id)videoSlider;
- (void)setAudioBtn:(BOOL)arg1;
- (void)updateCurrentTimeLabel:(double)arg1;
- (void)onSliderChange;
- (void)onSliderScrubbBegin;
- (void)onSliderScrubbEnd;
- (void)onVoiceIconBtnClick;
- (void)onFullscreenButtonClick;
- (void)onOperationBtnClick;
- (void)updateProgress;
- (BOOL)isBtnValid;
- (BOOL)isVideoExist;
- (BOOL)ignoreEdgeInset;
- (BOOL)canSlider;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void)setBgView:(id)arg1;
- (void)setContainerView:(id)arg1;
- (void)setOperateButton:(id)arg1;
- (void)setCurrentTimeLabel:(id)arg1;
- (void)setTotalTimeLabel:(id)arg1;
- (void)setVideoSlider:(id)arg1;
- (void)setVoiceBtn:(id)arg1;
- (void)setFullScreenBtn:(id)arg1;
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
- (unsigned long long)playerMode;
- (void)setPlayerMode:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
