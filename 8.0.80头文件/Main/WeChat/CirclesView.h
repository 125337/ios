@interface CirclesView : UIView <IMusicSearchExt>
{
    NSMutableArray * m_peakPowerArray; // +0x8
    BOOL _animating; // +0x10
    BOOL _circleAnimating; // +0x11
    CircleView * _circleView; // +0x18
    CircleView * _circleView2; // +0x20
    CircleView * _circleView3; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)startAnimate;
- (void)stopAnimate;
- (void)animateCircle3;
- (void)OnPeakPowerChange:(float)arg1;
- (void)startPeakPowerAnimate;
- (BOOL)animating;
- (void)setAnimating:(BOOL)arg1;
- (BOOL)circleAnimating;
- (void)setCircleAnimating:(BOOL)arg1;
- (id)circleView;
- (void)setCircleView:(id)arg1;
- (id)circleView2;
- (void)setCircleView2:(id)arg1;
- (id)circleView3;
- (void)setCircleView3:(id)arg1;
- (void).cxx_destruct;
@end
