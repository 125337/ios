@interface MMLoadingIndicatorView : UIView <CAAnimationDelegate>
{
    BOOL _isLoading; // +0x8
    UIImageView * _loadingIndicator; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1 color:(id)arg2;
- (void)dealloc;
- (void)startLoading;
- (void)stopLoading;
- (BOOL)isLoading;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (void)startAnimation;
- (void)stopAnimation;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (id)loadingIndicator;
- (void)setLoadingIndicator:(id)arg1;
- (void)setIsLoading:(BOOL)arg1;
- (void).cxx_destruct;
@end
