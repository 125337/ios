@interface ChatBotAnimatedWaveView : UIView <CAAnimationDelegate>
{
    BOOL _canShowAnimation; // +0x8
    BOOL _isInAnimation; // +0x9
    double _waveScale; // +0x10
    double _borderWidth; // +0x18
    UIColor * _color; // +0x20
    UIView * _contentView; // +0x28
    CAShapeLayer * _firstWave; // +0x30
    CAShapeLayer * _secondWave; // +0x38
    CAAnimationGroup * _firstWaveAnimation; // +0x40
    CAAnimationGroup * _secondWaveAnimation; // +0x48
    ChatBotAnimatedWaveDelegateObj * _firstWaveAnimationDelegateObj; // +0x50
    ChatBotAnimatedWaveDelegateObj * _secondWaveAnimationDelegateObj; // +0x58
}
- (id)initWithContentView:(id)arg1;
- (void)setFrame:(CGRect)arg1;
- (id)makeWaveAnimationForWave:(id)arg1;
- (void)startFirstWaveAnimation;
- (void)stopAnimationWave:(BOOL)arg1;
- (void)removeWaveAnimationWithResetFlag:(BOOL)arg1;
- (void)startSecondWaveAnimation;
- (void)startWaveAnimation;
- (void)realStartWaveAnimation;
- (void)handleAnimationDidStopWithDelegateObj:(id)arg1 finishedFlag:(BOOL)arg2;
- (double)waveScale;
- (void)setWaveScale:(double)arg1;
- (double)borderWidth;
- (void)setBorderWidth:(double)arg1;
- (id)color;
- (void)setColor:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)firstWave;
- (void)setFirstWave:(id)arg1;
- (id)secondWave;
- (void)setSecondWave:(id)arg1;
- (id)firstWaveAnimation;
- (void)setFirstWaveAnimation:(id)arg1;
- (id)secondWaveAnimation;
- (void)setSecondWaveAnimation:(id)arg1;
- (id)firstWaveAnimationDelegateObj;
- (void)setFirstWaveAnimationDelegateObj:(id)arg1;
- (id)secondWaveAnimationDelegateObj;
- (void)setSecondWaveAnimationDelegateObj:(id)arg1;
- (BOOL)canShowAnimation;
- (void)setCanShowAnimation:(BOOL)arg1;
- (BOOL)isInAnimation;
- (void)setIsInAnimation:(BOOL)arg1;
- (void).cxx_destruct;
@end
