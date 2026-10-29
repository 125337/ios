@interface AppFileCircleProgressView : UIView
{
    BOOL _bSender; // +0x8
    id <AppFileCircleProgressViewDelegate> _delegate; // +0x10
    UIView * _progressView; // +0x18
    CAShapeLayer * _progressLayer; // +0x20
    MMUIButton * _pauseBtn; // +0x28
    MMUIButton * _playButton; // +0x30
}
- (id)initWithFrame:(CGRect)arg1 sender:(BOOL)arg2;
- (void)initProgressCricle;
- (void)initPlayButton;
- (void)onPlayButtonClick;
- (void)initPauseButton;
- (void)onPauseButtonClick;
- (void)setProgressValue:(double)arg1;
- (void)updateProgressViewPauseState:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)progressView;
- (void)setProgressView:(id)arg1;
- (id)progressLayer;
- (void)setProgressLayer:(id)arg1;
- (id)pauseBtn;
- (void)setPauseBtn:(id)arg1;
- (id)playButton;
- (void)setPlayButton:(id)arg1;
- (BOOL)bSender;
- (void)setBSender:(BOOL)arg1;
- (void).cxx_destruct;
@end

