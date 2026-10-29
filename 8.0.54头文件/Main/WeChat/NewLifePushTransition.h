@interface NewLifePushTransition : NSObject <UIViewControllerAnimatedTransitioning>
{
    double _duration; // +0x8
    UIImage * _fromImage; // +0x10
    UIColor * _backgroundColor; // +0x18
    double _startTime; // +0x20
    id /* block */ _startCallback; // +0x28
    id /* block */ _endCallback; // +0x30
    CGRect _fromFrame; // +0x38
    CGRect _fromContentFrame; // +0x58
}
- (void)animateTransition:(id)arg1;
- (void)startAnimation:(id)arg1 backgroundView:(id)arg2 toViewMask:(id)arg3 fromViewMask:(id)arg4 fromViewContainer:(id)arg5 transitionContext:(id)arg6 fromImageView:(id)arg7 fromViewMaskTargetFrame:(CGRect)arg8 toViewMaskTargetFrame:(CGRect)arg9;
- (double)transitionDuration:(id)arg1;
- (double)duration;
- (void)setDuration:(double)arg1;
- (CGRect)fromFrame;
- (void)setFromFrame:(CGRect)arg1;
- (CGRect)fromContentFrame;
- (void)setFromContentFrame:(CGRect)arg1;
- (id)fromImage;
- (void)setFromImage:(id)arg1;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (double)startTime;
- (void)setStartTime:(double)arg1;
- (id /* block */)startCallback;
- (void)setStartCallback:(id /* block */)arg1;
- (id /* block */)endCallback;
- (void)setEndCallback:(id /* block */)arg1;
- (void).cxx_destruct;
@end

