@interface MMLiveMorphVideoSnapshotPresentAnimator : NSObject <UIViewControllerAnimatedTransitioning>
{
    BOOL _isVideoSceneMode; // +0x8
    BOOL _targetHasBottomView; // +0x9
    UIImage * _snapshotImg; // +0x10
    CGSize _videoSize; // +0x18
    CGRect _sourceFrame; // +0x28
    CGRect _sourceContentFrameInScreen; // +0x48
}
- (id)initWithTransitionParameters:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (void)innerExtendForMaximizeToPartOfScreen:(id)arg1 fromView:(id)arg2 toView:(id)arg3 maximizeRect:(CGRect)arg4 finalRect:(CGRect)arg5;
- (void)innerExtendForMaximizeToAllOfScreen:(id)arg1 fromView:(id)arg2 toView:(id)arg3 finalRect:(CGRect)arg4;
- (CGRect)getToViewFinalRect;
- (CGRect)getMaximizeToRect:(id)arg1;
- (id)snapshotImg;
- (void)setSnapshotImg:(id)arg1;
- (CGRect)sourceFrame;
- (void)setSourceFrame:(CGRect)arg1;
- (CGRect)sourceContentFrameInScreen;
- (void)setSourceContentFrameInScreen:(CGRect)arg1;
- (CGSize)videoSize;
- (void)setVideoSize:(CGSize)arg1;
- (BOOL)isVideoSceneMode;
- (void)setIsVideoSceneMode:(BOOL)arg1;
- (BOOL)targetHasBottomView;
- (void)setTargetHasBottomView:(BOOL)arg1;
- (void).cxx_destruct;
@end
