@interface WAAppPresentAnimateTransition : NSObject <UIViewControllerAnimatedTransitioning>
{
    BOOL _maskEnable; // +0x8
    BOOL _needZoom; // +0x9
}
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (BOOL)isZoomPresentAnimationUseNewImplementation;
- (BOOL)isNormalPresentAnimationUseNewImplementation;
- (id)makeForVCViewAnimation:(double)arg1 zoomFactor:(double)arg2;
- (id)makeMaskViewAnimationGroup:(double)arg1 zoomFactor:(double)arg2;
- (BOOL)maskEnable;
- (void)setMaskEnable:(BOOL)arg1;
- (BOOL)needZoom;
- (void)setNeedZoom:(BOOL)arg1;
@end
