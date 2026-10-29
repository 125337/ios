@interface WCListenLyricAnimationLoadingView : MMUIView
{
    int _repeatCount; // +0x8
    UIView * _p1; // +0x10
    UIView * _p2; // +0x18
    UIView * _p3; // +0x20
    double _remainDuration; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)startAnimationWithDuration:(double)arg1 completion:(id /* block */)arg2;
- (void)pauseAnimation;
- (void)resumeAnimation;
- (void)stopAnimation;
- (void)pauseLayer:(id)arg1;
- (void)resumeLayer:(id)arg1;
- (void)runLoadingAnimation:(id /* block */)arg1;
- (void)runCountDownAnimationWithDuraion:(double)arg1 completion:(id /* block */)arg2;
- (void)reset;
- (id)p1;
- (id)p2;
- (id)p3;
- (id)genPoint;
- (void)setP1:(id)arg1;
- (void)setP2:(id)arg1;
- (void)setP3:(id)arg1;
- (int)repeatCount;
- (void)setRepeatCount:(int)arg1;
- (double)remainDuration;
- (void)setRemainDuration:(double)arg1;
- (void).cxx_destruct;
@end

