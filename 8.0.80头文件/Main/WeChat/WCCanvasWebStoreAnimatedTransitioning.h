@interface WCCanvasWebStoreAnimatedTransitioning : NSObject <UIViewControllerAnimatedTransitioning>
{
    CGRect _destFrame; // +0x8
}
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (CGRect)destFrame;
- (void)setDestFrame:(CGRect)arg1;
@end
