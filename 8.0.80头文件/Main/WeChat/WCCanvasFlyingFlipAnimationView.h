@interface WCCanvasFlyingFlipAnimationView : MMUIView <CAAnimationDelegate>
{
    int _impactStyleIndex; // +0x8
    int _impactTimingIndex; // +0xc
    id <WCCanvasFlyingFlipAnimationViewDelegate> _delegate; // +0x10
    WCADCanvasEggAnimationFlyingFlip * _flyingFlipInfo; // +0x18
    UIImageView * _flipBackView; // +0x20
    UIView * _containerView; // +0x28
    WCAdURLImageView * _transitionImageView; // +0x30
    UIView * _mirroringView; // +0x38
    UIView * _transitionZView; // +0x40
    UIView * _yRotationView; // +0x48
    UIView * _scaleView; // +0x50
    WCCanvasFlyingFlipSpecialAnimationView * _specialAnimationView; // +0x58
    NSMutableArray * _impactFeedbacks; // +0x60
    NSArray * _impactStyles; // +0x68
    NSArray * _impactTimings; // +0x70
    CGSize _transitionImageSize; // +0x78
}
- (id)initWithFrame:(CGRect)arg1 flyingFlipInfo:(id)arg2 flipBackView:(id)arg3 containerView:(id)arg4 transitionImageSize:(CGSize)arg5;
- (void)dealloc;
- (void)generateSubviews;
- (id)transitionImageView;
- (id)mirroringView;
- (id)transitionZView;
- (id)yRotationView;
- (id)scaleView;
- (id)specialAnimationView;
- (id)fetchDefaultImageWithColorString:(id)arg1;
- (void)updateFlipBackViewWithImage:(id)arg1;
- (void)startFlipAnimation;
- (void)startZRotationAnimation;
- (void)startYRotationAnimation;
- (CATransform3D)fetchYTransformWithDegree:(double)arg1;
- (void)startScaleAnimation;
- (void)startXPositionAnimation;
- (void)startOpacityAnimation;
- (void)startFinalAnimationWithNewCollection:(BOOL)arg1 finalCenter:(CGPoint)arg2;
- (void)startFinalYRotationAnimationWithNewCollection:(BOOL)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)startToImpact;
- (id)generateImpactTimings;
- (void)triggerImpactOnce;
- (void)triggerImpactOnceAtIndex:(int)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)flyingFlipInfo;
- (void)setFlyingFlipInfo:(id)arg1;
- (id)flipBackView;
- (void)setFlipBackView:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (CGSize)transitionImageSize;
- (void)setTransitionImageSize:(CGSize)arg1;
- (void)setTransitionImageView:(id)arg1;
- (void)setMirroringView:(id)arg1;
- (void)setTransitionZView:(id)arg1;
- (void)setYRotationView:(id)arg1;
- (void)setScaleView:(id)arg1;
- (void)setSpecialAnimationView:(id)arg1;
- (id)impactFeedbacks;
- (void)setImpactFeedbacks:(id)arg1;
- (id)impactStyles;
- (void)setImpactStyles:(id)arg1;
- (int)impactStyleIndex;
- (void)setImpactStyleIndex:(int)arg1;
- (id)impactTimings;
- (void)setImpactTimings:(id)arg1;
- (int)impactTimingIndex;
- (void)setImpactTimingIndex:(int)arg1;
- (void).cxx_destruct;
@end
