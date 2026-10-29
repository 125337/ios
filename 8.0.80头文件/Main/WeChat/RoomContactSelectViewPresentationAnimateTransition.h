@interface RoomContactSelectViewPresentationAnimateTransition : NSObject <UIViewControllerAnimatedTransitioning, UIViewControllerTransitioningDelegate>
{
    BOOL _m_isPush; // +0x8
}
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (void)animationForPushView:(id)arg1;
- (void)executeAnimationForPushView:(id)arg1 fromVC:(id)arg2 fromView:(id)arg3 searcherBar:(id)arg4 searchBarBoxStackView:(id)arg5 tableView:(id)arg6 origiSearchBarBoxStackViewWidth:(double)arg7 tableViewTop:(double)arg8;
- (void)executeAnimationForPushViewFinish:(id)arg1 fromVC:(id)arg2 fromView:(id)arg3;
- (void)animationForPopView:(id)arg1;
- (void)executeAnimationForPopView:(id)arg1 toVC:(id)arg2 toView:(id)arg3 backgroundView:(id)arg4 searcherBar:(id)arg5 searchBarBoxStackView:(id)arg6 tableView:(id)arg7 origiSearchBarBoxStackViewWidth:(double)arg8 tableViewTop:(double)arg9 finalFrame:(CGRect)arg10;
- (void)executeAnimationForPopViewFinish:(id)arg1 toView:(id)arg2 fromView:(id)arg3 finalFrame:(CGRect)arg4 cancelled:(BOOL)arg5;
- (BOOL)m_isPush;
- (void)setM_isPush:(BOOL)arg1;
@end
