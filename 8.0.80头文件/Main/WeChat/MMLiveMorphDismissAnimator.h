@interface MMLiveMorphDismissAnimator : NSObject <UIViewControllerAnimatedTransitioning>
{
    UIView * _videoView; // +0x8
    MMLiveMorphDismissTargetExtraConfig * _extraConfig; // +0x10
    UIView * _maskView; // +0x18
    UIView * _customSnapView; // +0x20
    UIView * _backgroundBlurView; // +0x28
    id <MMLiveMorphDismissSource> _sourceContext; // +0x30
    CGSize _videoSize; // +0x38
    CGRect _sourceFrame; // +0x48
    CGRect _targetFrame; // +0x68
}
- (id)initWithTransitionParameters:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (void)animateNoopTransition:(id)arg1;
- (id)videoView;
- (void)setVideoView:(id)arg1;
- (CGSize)videoSize;
- (void)setVideoSize:(CGSize)arg1;
- (CGRect)sourceFrame;
- (void)setSourceFrame:(CGRect)arg1;
- (CGRect)targetFrame;
- (void)setTargetFrame:(CGRect)arg1;
- (id)extraConfig;
- (void)setExtraConfig:(id)arg1;
- (id)maskView;
- (void)setMaskView:(id)arg1;
- (id)customSnapView;
- (void)setCustomSnapView:(id)arg1;
- (id)backgroundBlurView;
- (void)setBackgroundBlurView:(id)arg1;
- (id)sourceContext;
- (void)setSourceContext:(id)arg1;
- (void).cxx_destruct;
@end
