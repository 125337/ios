@interface RoomContactSelectViewPresentationAnimateTransition : NSObject <UIViewControllerAnimatedTransitioning, UIViewControllerTransitioningDelegate>
{
    BOOL _m_isPush; // +0x8
}
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (void)animationForPushView:(id)arg1;
- (void)executeAnimationForPushView:(id)arg1 fromVC:(id)arg2 searcherBar:(id)arg3 searchBarBoxStackView:(id)arg4 tableView:(id)arg5 origiSearchBarBoxStackViewWidth:(double)arg6 tableViewTop:(double)arg7;
- (void)executeAnimationForPushViewFinish:(id)arg1 fromVC:(id)arg2;
- (void)animationForPopView:(id)arg1;
- (void)executeAnimationForPopView:(id)arg1 toVC:(id)arg2 fromVC:(id)arg3 backgroundView:(id)arg4 searcherBar:(id)arg5 searchBarBoxStackView:(id)arg6 tableView:(id)arg7 origiSearchBarBoxStackViewWidth:(double)arg8 tableViewTop:(double)arg9 finalFrame:(CGRect)arg10;
- (void)executeAnimationForPopViewFinish:(id)arg1 fromVC:(id)arg2 finalFrame:(CGRect)arg3;
- (BOOL)m_isPush;
- (void)setM_isPush:(BOOL)arg1;
@end
