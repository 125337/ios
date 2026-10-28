@interface WCFinderKeepHoldAnimator : NSObject <WCFinderTrailingAnimator>
{
    BTMinimizeAnimationView * _animationView; // +0x8
    WCFinderTransitionUserInfo * _userInfo; // +0x10
}
- (BOOL)shouldForceNotStartAnimation;
- (void)startAnimation:(id)arg1 withoutAnimationBlockComplete:(id /* block */)arg2;
- (void)startAnimation:(id)arg1;
- (void)onAnimationComplete:(BOOL)arg1 context:(id)arg2;
- (void)closeDirectlyWithAnimated:(BOOL)arg1;
- (void)onAnimationPrepare:(long long)arg1 userInfo:(id)arg2;
- (void)onAnimationCleanUp;
- (id)chooseAnimatorWithOther:(id /* block */)arg1 context:(id)arg2;
- (id)animationView;
- (void)setAnimationView:(id)arg1;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (void).cxx_destruct;
@end
