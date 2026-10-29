@interface ChatBotBrandHeadImageView : UIView <CAAnimationDelegate>
{
    BOOL _isAnimating; // +0x8
    BOOL _shouldStopAfterCurrentCycle; // +0x9
    BOOL _isInScaleDownPhase; // +0xa
    MMWebImageView * _headImageView; // +0x10
    CABasicAnimation * _pulseAnimation; // +0x18
    ChatBotBrandCircularProgressBar * _progressBar; // +0x20
    ChatBotAnimatedWaveView * _waveView; // +0x28
    CAShapeLayer * _maskRingLayer; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setupUI;
- (void)layoutSubviews;
- (void)setupRing;
- (void)startProgressBarAnimation;
- (void)stopProgressBarAnimation;
- (void)drawProgressWithContext:(CGContext *)arg1 Radius:(double)arg2 Progress:(double)arg3;
- (void)setImageWithUrlStr:(id)arg1;
- (void)startPulseAnimation;
- (void)stopPulseAnimation;
- (void)startWaveAnimation;
- (void)stopWaveAnimation;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (BOOL)isAnimating;
- (void)setIsAnimating:(BOOL)arg1;
- (id)pulseAnimation;
- (void)setPulseAnimation:(id)arg1;
- (BOOL)shouldStopAfterCurrentCycle;
- (void)setShouldStopAfterCurrentCycle:(BOOL)arg1;
- (BOOL)isInScaleDownPhase;
- (void)setIsInScaleDownPhase:(BOOL)arg1;
- (id)progressBar;
- (void)setProgressBar:(id)arg1;
- (id)waveView;
- (void)setWaveView:(id)arg1;
- (id)maskRingLayer;
- (void)setMaskRingLayer:(id)arg1;
- (void).cxx_destruct;
@end
