@interface MMBGMSelectedMarqueeTextView : UIView <CAAnimationDelegate>
{
    BOOL _isPlaying; // +0x8
    NSAttributedString * _attributedContent; // +0x10
    double _flowSpeed; // +0x18
    double _flowDuration; // +0x20
    double _gradientWidth; // +0x28
    UILabel * _textLabel; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setAttributedContent:(id)arg1;
- (void)startPlaying;
- (void)stopPlaying;
- (BOOL)isTextLabelExceeded;
- (void)initView;
- (void)resizeView;
- (id)gradientMaskLayer;
- (void)layoutSubviews;
- (void)animationDidStart:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (id)attributedContent;
- (double)flowSpeed;
- (void)setFlowSpeed:(double)arg1;
- (double)flowDuration;
- (void)setFlowDuration:(double)arg1;
- (double)gradientWidth;
- (void)setGradientWidth:(double)arg1;
- (id)textLabel;
- (void)setTextLabel:(id)arg1;
- (BOOL)isPlaying;
- (void)setIsPlaying:(BOOL)arg1;
- (void).cxx_destruct;
@end
