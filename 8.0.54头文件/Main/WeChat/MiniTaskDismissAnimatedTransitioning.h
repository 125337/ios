@interface MiniTaskDismissAnimatedTransitioning : NSObject <IMiniMizeUserdRecordUpdateExt, UIViewControllerAnimatedTransitioning>
{
    MiniTaskAnimiatedTransitioningConfig * _config; // +0x8
    UIImageView * _snapshotView; // +0x10
}
- (id)initWithConfig:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (void)onTaskSnapShotUpdate:(id)arg1 snapshot:(id)arg2;
- (id)config;
- (void)setConfig:(id)arg1;
- (id)snapshotView;
- (void)setSnapshotView:(id)arg1;
- (void).cxx_destruct;
@end

