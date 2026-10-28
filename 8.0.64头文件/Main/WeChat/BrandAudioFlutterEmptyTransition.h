@interface BrandAudioFlutterEmptyTransition : NSObject <UIViewControllerAnimatedTransitioning>
{
    BOOL _isPresent; // +0x8
}
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (BOOL)isPresent;
- (void)setIsPresent:(BOOL)arg1;
@end
