@interface MinimizationTransitionContext : NSObject
{
    BOOL _snapshotSync; // +0x8
    UIView * _floatSnapshotView; // +0x10
    UIView * _taskSnapshotView; // +0x18
    double _transitionDuration; // +0x20
    UIView * _fakeFromView; // +0x28
    UIView * _realFromView; // +0x30
    UIView * _backgroundShadowView; // +0x38
    CGSize _floatContentSize; // +0x40
    CGRect _floatFrame; // +0x50
    CGRect _taskSnapshotViewInitFrame; // +0x70
    CGRect _fromViewInitFrame; // +0x90
}
- (id)init;
- (void)clearAnimationContext;
- (id)floatSnapshotView;
- (void)setFloatSnapshotView:(id)arg1;
- (CGRect)floatFrame;
- (void)setFloatFrame:(CGRect)arg1;
- (CGSize)floatContentSize;
- (void)setFloatContentSize:(CGSize)arg1;
- (BOOL)snapshotSync;
- (void)setSnapshotSync:(BOOL)arg1;
- (id)taskSnapshotView;
- (void)setTaskSnapshotView:(id)arg1;
- (CGRect)taskSnapshotViewInitFrame;
- (void)setTaskSnapshotViewInitFrame:(CGRect)arg1;
- (double)transitionDuration;
- (void)setTransitionDuration:(double)arg1;
- (id)fakeFromView;
- (void)setFakeFromView:(id)arg1;
- (id)realFromView;
- (void)setRealFromView:(id)arg1;
- (id)backgroundShadowView;
- (void)setBackgroundShadowView:(id)arg1;
- (CGRect)fromViewInitFrame;
- (void)setFromViewInitFrame:(CGRect)arg1;
- (void).cxx_destruct;
@end

