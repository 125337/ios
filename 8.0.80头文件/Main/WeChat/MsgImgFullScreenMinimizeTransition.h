@interface MsgImgFullScreenMinimizeTransition : NSObject <UIViewControllerAnimatedTransitioning>
{
    unsigned long long _transitionStyle; // +0x8
    NSString * _taskBizName; // +0x10
    NSString * _taskBizKey; // +0x18
    double _maskAlpha; // +0x20
    UIView * _animateContentView; // +0x28
    CGRect _animationTargetRect; // +0x30
}
- (void)setupWithMaskAlpha:(double)arg1 animateContentView:(id)arg2;
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (unsigned long long)transitionStyle;
- (void)setTransitionStyle:(unsigned long long)arg1;
- (CGRect)animationTargetRect;
- (void)setAnimationTargetRect:(CGRect)arg1;
- (id)taskBizName;
- (void)setTaskBizName:(id)arg1;
- (id)taskBizKey;
- (void)setTaskBizKey:(id)arg1;
- (double)maskAlpha;
- (void)setMaskAlpha:(double)arg1;
- (id)animateContentView;
- (void)setAnimateContentView:(id)arg1;
- (void).cxx_destruct;
@end
