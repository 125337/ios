@interface MMLiveMorphInteractiveDismissTransitionAnimator : NSObject <UIViewControllerAnimatedTransitioning>
{
    BOOL _finishBeforeAnimation; // +0x8
    BOOL _animationRunning; // +0x9
    id <MMLiveMorphInteractiveDismissTransitionAnimatorDelegate> _delegate; // +0x10
    UIPercentDrivenInteractiveTransition * _interactive; // +0x18
    UIView * _videoView; // +0x20
    MMLiveMorphDismissTargetExtraConfig * _extraConfig; // +0x28
    UIView * _videoMaskView; // +0x30
    UIView * _customSnapView; // +0x38
    UIView * _backgroundBlurView; // +0x40
    id <MMLiveMorphDismissSource> _sourceContext; // +0x48
    unsigned long long _lockDirection; // +0x50
    id <UIViewControllerContextTransitioning> _context; // +0x58
    UIView * _fromView; // +0x60
    UIViewController * _fromVC; // +0x68
    UIView * _toView; // +0x70
    UIView * _fromBarView; // +0x78
    UIView * _toBarView; // +0x80
    UIView * _maskView; // +0x88
    long long _animCnt; // +0x90
    NSMutableArray * _completions; // +0x98
    CGSize _videoSize; // +0xa0
    CGRect _targetFrame; // +0xb0
    CGRect _fromViewInitialFrame; // +0xd0
}
- (id)initWithGesture:(id)arg1 transitionParameters:(id)arg2 direction:(unsigned long long)arg3;
- (void)dealloc;
- (BOOL)isHorizontalTransition;
- (void)handleGesture:(id)arg1;
- (double)interpolationValue:(double)arg1 end:(double)arg2 progress:(double)arg3;
- (void)dragWithProgress:(double)arg1 translation:(CGPoint)arg2;
- (void)_endCardDragging:(CGPoint)arg1 velocity:(CGPoint)arg2 isFast:(BOOL)arg3 progress:(double)arg4;
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (void)onAnimationEnd:(BOOL)arg1;
- (void)_endDragAnimation:(BOOL)arg1 progress:(double)arg2;
- (void)_cancelAnimation:(double)arg1;
- (void)_finishAnimation:(double)arg1;
- (CGRect)calculateCurrentSourceVideoFrame;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)interactive;
- (void)setInteractive:(id)arg1;
- (id)videoView;
- (void)setVideoView:(id)arg1;
- (CGSize)videoSize;
- (void)setVideoSize:(CGSize)arg1;
- (CGRect)targetFrame;
- (void)setTargetFrame:(CGRect)arg1;
- (id)extraConfig;
- (void)setExtraConfig:(id)arg1;
- (id)videoMaskView;
- (void)setVideoMaskView:(id)arg1;
- (id)customSnapView;
- (void)setCustomSnapView:(id)arg1;
- (id)backgroundBlurView;
- (void)setBackgroundBlurView:(id)arg1;
- (id)sourceContext;
- (void)setSourceContext:(id)arg1;
- (unsigned long long)lockDirection;
- (void)setLockDirection:(unsigned long long)arg1;
- (id)context;
- (void)setContext:(id)arg1;
- (id)fromView;
- (void)setFromView:(id)arg1;
- (id)fromVC;
- (void)setFromVC:(id)arg1;
- (id)toView;
- (void)setToView:(id)arg1;
- (id)fromBarView;
- (void)setFromBarView:(id)arg1;
- (id)toBarView;
- (void)setToBarView:(id)arg1;
- (CGRect)fromViewInitialFrame;
- (void)setFromViewInitialFrame:(CGRect)arg1;
- (id)maskView;
- (void)setMaskView:(id)arg1;
- (BOOL)finishBeforeAnimation;
- (void)setFinishBeforeAnimation:(BOOL)arg1;
- (BOOL)animationRunning;
- (void)setAnimationRunning:(BOOL)arg1;
- (long long)animCnt;
- (void)setAnimCnt:(long long)arg1;
- (id)completions;
- (void)setCompletions:(id)arg1;
- (void).cxx_destruct;
@end
