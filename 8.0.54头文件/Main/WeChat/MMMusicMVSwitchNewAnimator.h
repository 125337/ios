@interface MMMusicMVSwitchNewAnimator : NSObject <CAAnimationDelegate>
{
    BOOL _bInAnim; // +0x8
    BOOL _bInFinish; // +0x9
    unsigned long long _sideType; // +0x10
    double _percent; // +0x18
    UIView * _cubeView; // +0x20
    UIView * _fromView; // +0x28
    UIView * _toView; // +0x30
    CGRect _fromViewOriginFrame; // +0x38
    CGRect _toViewOriginFrame; // +0x58
    UIView * _fromViewParentView; // +0x78
    UIView * _toViewParentView; // +0x80
    UIView * _backgroundView; // +0x88
    id /* block */ _finishBlock; // +0x90
    NSDictionary * _extDict; // +0x98
    unsigned long long _animType; // +0xa0
    id <MMMusicMVSwitchNewAnimatorDelegate> _delegate; // +0xa8
}
- (void)startAnimWithFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3 extDict:(id)arg4;
- (void)startEdgeAnimFromView:(id)arg1 containerView:(id)arg2 extDict:(id)arg3;
- (void)startNoInteractiveAnimWithFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3 bToNextOrPre:(BOOL)arg4 completion:(id /* block */)arg5;
- (void)updateAnimPercent:(double)arg1;
- (void)finishWithCompletion:(id /* block */)arg1;
- (BOOL)isAniming;
- (void)startAnimWithFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3 extDict:(id)arg4 animType:(unsigned long long)arg5;
- (void)resetOnFinish;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (CATransform3D)transformForSideViewIsLeft:(BOOL)arg1 cubeWidth:(double)arg2;
- (CATransform3D)transformForCubeWithPercent:(double)arg1 cubeWidth:(double)arg2;
- (double)cubeWidth;
- (unsigned long long)sideTypeWithPercent:(double)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

