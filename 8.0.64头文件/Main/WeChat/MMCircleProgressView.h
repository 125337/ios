@interface MMCircleProgressView : UIView
{
    id <MMCircleProgressViewDelegate> _delegate; // +0x8
    UIColor * _finishedColor; // +0x10
    UIColor * _unfinishedColor; // +0x18
    CAShapeLayer * _unfinishedShapeLayer; // +0x20
    CAShapeLayer * _finishedShapeLayer; // +0x28
    CAShapeLayer * _leftShapeLayer; // +0x30
    CAShapeLayer * _rightShapeLayer; // +0x38
    double _lineWidth; // +0x40
    double _progress; // +0x48
}
- (id)initWithFrame:(CGRect)arg1;
- (void)commonInit;
- (void)updateBgColor:(id)arg1 progressColor:(id)arg2;
- (void)setProgress:(double)arg1 animated:(BOOL)arg2;
- (double)getCurrentProgress;
- (void)viewDidTapped:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)finishedColor;
- (void)setFinishedColor:(id)arg1;
- (id)unfinishedColor;
- (void)setUnfinishedColor:(id)arg1;
- (id)unfinishedShapeLayer;
- (void)setUnfinishedShapeLayer:(id)arg1;
- (id)finishedShapeLayer;
- (void)setFinishedShapeLayer:(id)arg1;
- (id)leftShapeLayer;
- (void)setLeftShapeLayer:(id)arg1;
- (id)rightShapeLayer;
- (void)setRightShapeLayer:(id)arg1;
- (double)lineWidth;
- (void)setLineWidth:(double)arg1;
- (double)progress;
- (void)setProgress:(double)arg1;
- (void).cxx_destruct;
@end
