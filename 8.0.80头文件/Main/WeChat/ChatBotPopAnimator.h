@interface ChatBotPopAnimator : NSObject <UIViewControllerAnimatedTransitioning, MMUIViewControllerTransitionInfo>
{
    BOOL _isInteracting; // +0x8
    UIViewController * animatedTransitionRespondViewController; // +0x10
    id <ChatBotTransitionAnimatorDelegate> _delegate; // +0x18
    UIView * _backgroundView; // +0x20
    UIImageView * _fakeSnapshot; // +0x28
    UIView * _fakeSnapshotMask; // +0x30
    UIView * _fakeSnapshotShadowView; // +0x38
    double _fakeSnapshotWidth; // +0x40
}
- (id)initWithViewController:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (void)performSecondaryPageTransition:(id)arg1;
- (id)animatedTransitionRespondViewController;
- (void)setAnimatedTransitionRespondViewController:(id)arg1;
- (BOOL)isInteracting;
- (void)setIsInteracting:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)fakeSnapshot;
- (void)setFakeSnapshot:(id)arg1;
- (id)fakeSnapshotMask;
- (void)setFakeSnapshotMask:(id)arg1;
- (id)fakeSnapshotShadowView;
- (void)setFakeSnapshotShadowView:(id)arg1;
- (double)fakeSnapshotWidth;
- (void)setFakeSnapshotWidth:(double)arg1;
- (void).cxx_destruct;
@end
