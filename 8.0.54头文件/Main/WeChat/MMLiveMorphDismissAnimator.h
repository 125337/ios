@interface MMLiveMorphDismissAnimator : NSObject <UIViewControllerAnimatedTransitioning>
{
    UIView * _videoView; // +0x8
    UIView * _maskView; // +0x10
    UIView * _customSnapView; // +0x18
    id <MMLiveMorphDismissSource> _sourceContext; // +0x20
    CGSize _videoSize; // +0x28
    CGRect _sourceFrame; // +0x38
    CGRect _targetFrame; // +0x58
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
- (id)maskView;
- (void)setMaskView:(id)arg1;
- (id)customSnapView;
- (void)setCustomSnapView:(id)arg1;
- (id)sourceContext;
- (void)setSourceContext:(id)arg1;
- (void).cxx_destruct;
@end

