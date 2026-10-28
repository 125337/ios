@interface WCFinderMultiContentAnimator : NSObject <WCFinderTrailingAnimator>
{
    WCFinderTransitionUserInfo * _userInfo; // +0x8
}
- (id)chooseAnimatorWithOther:(id /* block */)arg1 context:(id)arg2;
- (void)startAnimation:(id)arg1 withoutAnimationBlockComplete:(id /* block */)arg2;
- (void)closeDirectlyWithAnimated:(BOOL)arg1;
- (void)onAnimationPrepare:(long long)arg1 userInfo:(id)arg2;
- (void)onAnimationCleanUp;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (void).cxx_destruct;
@end
