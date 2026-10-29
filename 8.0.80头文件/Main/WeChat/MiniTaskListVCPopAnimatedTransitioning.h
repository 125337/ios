@interface MiniTaskListVCPopAnimatedTransitioning : NSObject <UIViewControllerAnimatedTransitioning, MMUIViewControllerTransitionInfo>
{
    BOOL _isInteracting; // +0x8
    BOOL _isDismiss; // +0x9
    UIViewController * animatedTransitionRespondViewController; // +0x10
    UIView * _backgroundView; // +0x18
    UIImageView * _fakeSnapshot; // +0x20
    UIView * _fakeSnapshotMask; // +0x28
    double _fakeSnapshotWidth; // +0x30
    MinimizeTaskData * _launchTaskData; // +0x38
    id <MiniTaskTransitionAnimationDelegate> _delegate; // +0x40
    UIView * _fakeSnapshotShadowView; // +0x48
    double _pageRegionCornerRadius; // +0x50
    UIView * _pageRegionCoverView; // +0x58
    UIEdgeInsets _pageRegionInsets; // +0x60
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
- (double)fakeSnapshotWidth;
- (void)setFakeSnapshotWidth:(double)arg1;
- (id)launchTaskData;
- (void)setLaunchTaskData:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)fakeSnapshotShadowView;
- (void)setFakeSnapshotShadowView:(id)arg1;
- (UIEdgeInsets)pageRegionInsets;
- (void)setPageRegionInsets:(UIEdgeInsets)arg1;
- (double)pageRegionCornerRadius;
- (void)setPageRegionCornerRadius:(double)arg1;
- (id)pageRegionCoverView;
- (void)setPageRegionCoverView:(id)arg1;
- (void).cxx_destruct;
@end
