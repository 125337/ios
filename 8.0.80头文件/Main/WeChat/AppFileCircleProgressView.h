@interface AppFileCircleProgressView : UIView
{
    BOOL _isUpload; // +0x8
    BOOL _showsControlButton; // +0x9
    id <AppFileCircleProgressViewDelegate> _delegate; // +0x10
    UIView * _progressView; // +0x18
    CAShapeLayer * _bgLayer; // +0x20
    CAShapeLayer * _progressLayer; // +0x28
    MMUIButton * _pauseBtn; // +0x30
    MMUIButton * _playButton; // +0x38
    UIColor * _bgColor; // +0x40
    UIColor * _fgColor; // +0x48
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initProgressCricle;
- (void)initPlayButton;
- (void)setIsUpload:(BOOL)arg1;
- (void)onPlayButtonClick;
- (void)initPauseButton;
- (void)setShowsControlButton:(BOOL)arg1;
- (void)onPauseButtonClick;
- (void)setProgressValue:(double)arg1;
- (void)updateProgressViewPauseState:(BOOL)arg1;
- (void)updateBgColor:(id)arg1 progressColor:(id)arg2;
- (BOOL)isUpload;
- (BOOL)showsControlButton;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)progressView;
- (void)setProgressView:(id)arg1;
- (id)bgLayer;
- (void)setBgLayer:(id)arg1;
- (id)progressLayer;
- (void)setProgressLayer:(id)arg1;
- (id)pauseBtn;
- (void)setPauseBtn:(id)arg1;
- (id)playButton;
- (void)setPlayButton:(id)arg1;
- (id)bgColor;
- (void)setBgColor:(id)arg1;
- (id)fgColor;
- (void)setFgColor:(id)arg1;
- (void).cxx_destruct;
@end
