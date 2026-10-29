@interface WCFinderTrailingAnimatorTrasitioning : NSObject <UIViewControllerAnimatedTransitioning>
{
    WCFinderTransitionAnimatorList * _transitioningAnimationProvider; // +0x8
    WCFinderTransitionUserInfo * _provderUserInfo; // +0x10
    long long _type; // +0x18
    id <WCFinderTrailingAnimatorDelegate> _delegate; // +0x20
    NSMutableArray * _completions; // +0x28
    UIView * _cellMaskView; // +0x30
    UIView * _copyedTabBar; // +0x38
}
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (void)addCompletionBlock:(id /* block */)arg1;
- (id)transitioningAnimationProvider;
- (void)setTransitioningAnimationProvider:(id)arg1;
- (id)provderUserInfo;
- (void)setProvderUserInfo:(id)arg1;
- (long long)type;
- (void)setType:(long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)completions;
- (void)setCompletions:(id)arg1;
- (id)cellMaskView;
- (void)setCellMaskView:(id)arg1;
- (id)copyedTabBar;
- (void)setCopyedTabBar:(id)arg1;
- (void).cxx_destruct;
@end

