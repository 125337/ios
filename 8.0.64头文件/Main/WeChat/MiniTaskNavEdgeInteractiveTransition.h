@interface MiniTaskNavEdgeInteractiveTransition : UIPercentDrivenInteractiveTransition
{
    BOOL _useDefaultTransition; // +0x8
    BOOL _disableAnimation; // +0x9
    id <MiniTaskNavEdgeInteractiveTransitionDelegate> _delegate; // +0x10
    MiniTaskTransitionContext * _miniTaskContext; // +0x18
    id <UIViewControllerContextTransitioning> _transitionContext; // +0x20
    UIView * _bgMaskView; // +0x28
    UIView * _snapshotView; // +0x30
    CGPoint _snapshotBeginCenter; // +0x38
    CGSize _snapshotBeginSize; // +0x48
}
- (void)updateInteractiveTransition:(double)arg1 translation:(CGPoint)arg2;
- (void)clearTranstiionView;
- (void)startInteractiveTransition:(id)arg1;
- (void)cancelInteractiveTransition;
- (void)finishInteractiveTransition;
- (CGRect)cellRectToSnapshotRect:(CGRect)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)useDefaultTransition;
- (void)setUseDefaultTransition:(BOOL)arg1;
- (BOOL)disableAnimation;
- (void)setDisableAnimation:(BOOL)arg1;
- (id)miniTaskContext;
- (void)setMiniTaskContext:(id)arg1;
- (id)transitionContext;
- (void)setTransitionContext:(id)arg1;
- (id)bgMaskView;
- (void)setBgMaskView:(id)arg1;
- (id)snapshotView;
- (void)setSnapshotView:(id)arg1;
- (CGPoint)snapshotBeginCenter;
- (void)setSnapshotBeginCenter:(CGPoint)arg1;
- (CGSize)snapshotBeginSize;
- (void)setSnapshotBeginSize:(CGSize)arg1;
- (void).cxx_destruct;
@end
