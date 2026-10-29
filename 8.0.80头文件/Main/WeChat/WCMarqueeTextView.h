@interface WCMarqueeTextView : UIView
{
    NSString * _textContent; // +0x8
    UIFont * _textFont; // +0x10
    UIColor * _textColor; // +0x18
    double _flowSpeed; // +0x20
    double _flowDuration; // +0x28
    double _gradientWidth; // +0x30
    UILabel * _textLabel; // +0x38
}
- (id)init;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)layoutSubviews;
- (void)setTextContent:(id)arg1;
- (void)startPlaying;
- (void)stopPlaying;
- (void)reset;
- (void)resizeView;
- (void)initView;
- (id)textContent;
- (id)textFont;
- (void)setTextFont:(id)arg1;
- (id)textColor;
- (void)setTextColor:(id)arg1;
- (double)flowSpeed;
- (void)setFlowSpeed:(double)arg1;
- (double)flowDuration;
- (void)setFlowDuration:(double)arg1;
- (double)gradientWidth;
- (void)setGradientWidth:(double)arg1;
- (id)textLabel;
- (void)setTextLabel:(id)arg1;
- (void).cxx_destruct;
@end
