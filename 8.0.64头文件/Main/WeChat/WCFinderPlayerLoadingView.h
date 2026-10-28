@interface WCFinderPlayerLoadingView : UIView
{
    BOOL _stopAnimatingFlag; // +0x8
    MMGradientView * _lineView; // +0x10
}
- (id)init;
- (id)initWithFrame:(CGRect)arg1;
- (void)setFrame:(CGRect)arg1;
- (void)setUpUI;
- (void)startAnimation;
- (void)_startAnimation;
- (void)stopAnimation;
- (BOOL)isAnimating;
- (id)lineView;
- (void)setLineView:(id)arg1;
- (BOOL)stopAnimatingFlag;
- (void)setStopAnimatingFlag:(BOOL)arg1;
- (void).cxx_destruct;
@end
