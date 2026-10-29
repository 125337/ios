@interface MMLiveCircleProgressView : UIView
{
    UIColor * _finishedColor; // +0x8
    UIColor * _unfinishedColor; // +0x10
    CAShapeLayer * _backGroundLayer; // +0x18
    CAShapeLayer * _frontFillLayer; // +0x20
    UIBezierPath * _backGroundBezierPath; // +0x28
    UIBezierPath * _frontFillBezierPath; // +0x30
    double _lineWidth; // +0x38
    double _progressValue; // +0x40
    id <MMLiveCircleProgressViewDelegate> _delegate; // +0x48
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initView;
- (void)layoutSubviews;
- (void)setLineWidth:(double)arg1;
- (void)setFinishedColor:(id)arg1;
- (void)setUnfinishedColor:(id)arg1;
- (void)setProgressValue:(double)arg1;
- (id)finishedColor;
- (id)unfinishedColor;
- (id)backGroundLayer;
- (void)setBackGroundLayer:(id)arg1;
- (id)frontFillLayer;
- (void)setFrontFillLayer:(id)arg1;
- (id)backGroundBezierPath;
- (void)setBackGroundBezierPath:(id)arg1;
- (id)frontFillBezierPath;
- (void)setFrontFillBezierPath:(id)arg1;
- (double)lineWidth;
- (double)progressValue;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

