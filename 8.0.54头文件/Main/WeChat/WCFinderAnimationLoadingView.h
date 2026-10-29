@interface WCFinderAnimationLoadingView : UIView
{
    BOOL _animationReady; // +0x8
    BOOL _isLoadingState; // +0x9
    UIImageView * _animationImageView; // +0x10
    double _duration; // +0x18
}
+ (id)loadingView;
+ (id)loadingViewWithWidth:(double)arg1;
- (void)configWithImageName:(id)arg1 perRoundDuraion:(double)arg2;
- (void)configWithImage:(id)arg1 perRoundDuraion:(double)arg2;
- (void)startLoading;
- (void)stopLoading;
- (BOOL)isAnimating;
- (void)willMoveToWindow:(id)arg1;
- (void)willMoveToSuperview:(id)arg1;
- (void)layoutSubviews;
- (id)animationImageView;
- (void)setAnimationImageView:(id)arg1;
- (double)duration;
- (void)setDuration:(double)arg1;
- (BOOL)animationReady;
- (void)setAnimationReady:(BOOL)arg1;
- (BOOL)isLoadingState;
- (void)setIsLoadingState:(BOOL)arg1;
- (void).cxx_destruct;
@end

