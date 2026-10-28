@interface MMFinderGameLiveWelfareTaskDegreeCompletionView : UIView
{
    double _progress; // +0x8
    CAShapeLayer * _backGroundLayer; // +0x10
    CAShapeLayer * _frontFillLayer; // +0x18
    UIBezierPath * _backGroundBezierPath; // +0x20
    UIBezierPath * _frontFillBezierPath; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setup;
- (void)layoutSubviews;
- (void)setProgress:(double)arg1;
- (double)progress;
- (id)backGroundLayer;
- (void)setBackGroundLayer:(id)arg1;
- (id)frontFillLayer;
- (void)setFrontFillLayer:(id)arg1;
- (id)backGroundBezierPath;
- (void)setBackGroundBezierPath:(id)arg1;
- (id)frontFillBezierPath;
- (void)setFrontFillBezierPath:(id)arg1;
- (void).cxx_destruct;
@end
