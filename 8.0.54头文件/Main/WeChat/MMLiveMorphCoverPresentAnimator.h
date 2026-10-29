@interface MMLiveMorphCoverPresentAnimator : NSObject <UIViewControllerAnimatedTransitioning>
{
    UIView * _coverView; // +0x8
    CGSize _coverSize; // +0x10
    CGRect _sourceFrame; // +0x20
}
- (id)initWithTransitionParameters:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (CGRect)sourceFrame;
- (void)setSourceFrame:(CGRect)arg1;
- (id)coverView;
- (void)setCoverView:(id)arg1;
- (CGSize)coverSize;
- (void)setCoverSize:(CGSize)arg1;
- (void).cxx_destruct;
@end

