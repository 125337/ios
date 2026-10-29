@interface MiniTaskListVCPopAnimatedTransitioning : NSObject <UIViewControllerAnimatedTransitioning, MMUIViewControllerTransitionInfo>
{
    BOOL _isInteracting; // +0x8
    BOOL _isDismiss; // +0x9
    UIViewController * animatedTransitionRespondViewController; // +0x10
    UIView * _backgroundView; // +0x18
    UIImageView * _fakeSnapshot; // +0x20
    UIView * _fakeSnapshotMask; // +0x28
    MinimizeTaskData * _launchTaskData; // +0x30
    id <MiniTaskTransitionAnimationDelegate> _delegate; // +0x38
    UIView * _fakeSnapshotShadowView; // +0x40
}
- (id)initWithViewController:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (id)animatedTransitionRespondViewController;
- (void)setAnimatedTransitionRespondViewController:(id)arg1;
- (BOOL)isInteracting;
- (void)setIsInteracting:(BOOL)arg1;
- (BOOL)isDismiss;
- (void)setIsDismiss:(BOOL)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)fakeSnapshot;
- (void)setFakeSnapshot:(id)arg1;
- (id)fakeSnapshotMask;
- (void)setFakeSnapshotMask:(id)arg1;
- (id)launchTaskData;
- (void)setLaunchTaskData:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)fakeSnapshotShadowView;
- (void)setFakeSnapshotShadowView:(id)arg1;
- (void).cxx_destruct;
@end

