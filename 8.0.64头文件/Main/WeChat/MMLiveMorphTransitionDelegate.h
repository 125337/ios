@interface MMLiveMorphTransitionDelegate : NSObject <UIViewControllerTransitioningDelegate>
- (BOOL)isCurrentContextValidForPresenting;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)presentParametersForCurrentContext;
- (id)videoPresentParametersForCurrentContext;
- (id)videoSnapshotPresentParametersForCurrentContext;
- (id)coverPresentParametersForCurrentContext;
- (id)dismissParametersForCurrentContext;
@end
