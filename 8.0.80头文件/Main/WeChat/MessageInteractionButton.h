@interface MessageInteractionButton : MMUIButton
{
    BOOL _isShimmerAnimating; // +0x8
    UILabel * _shimmerLabel; // +0x10
    CAGradientLayer * _shimmerMaskLayer; // +0x18
}
- (void)dealloc;
- (void)startShimmerAnimation;
- (void)stopShimmerAnimation;
- (void)didReceiveWillEnterForegroundNotification:(id)arg1;
- (id)shimmerLabel;
- (void)setShimmerLabel:(id)arg1;
- (id)shimmerMaskLayer;
- (void)setShimmerMaskLayer:(id)arg1;
- (BOOL)isShimmerAnimating;
- (void)setIsShimmerAnimating:(BOOL)arg1;
- (void).cxx_destruct;
@end
