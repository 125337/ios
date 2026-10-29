@interface WCAdBarSingleProductView : MMUIView <CAAnimationDelegate>
{
    WCAdBarSingleProductInfo * _singleProductInfo; // +0x8
    MMUIView * _bannerBackgroundView; // +0x10
    ColorGradientView * _brandColorGradientView; // +0x18
    WCAdURLImageView * _brandImageView; // +0x20
    WCAdBarSingleProductTitleView * _actionTitleView; // +0x28
    MMUIButton * _foregroundButton; // +0x30
    id <WCAdBarSingleProductDelegate> _delegate; // +0x38
}
- (id)initWithFrame:(CGRect)arg1 singleProductInfo:(id)arg2;
- (void)generateSubviews;
- (id)bannerBackgroundView;
- (id)brandColorGradientView;
- (id)brandImageView;
- (id)actionTitleView;
- (id)foregroundButton;
- (void)onForegroundButtonClicked:(id)arg1;
- (void)prepare;
- (void)showWithAnimation;
- (void)addVisibleAnimationToView:(id)arg1;
- (void)addVisibleAnimationToView:(id)arg1 originOffsetX:(double)arg2 callback:(id /* block */)arg3;
- (id)generateKeyframeAnimationWithKeyPath:(id)arg1 duration:(double)arg2 timingFunctions:(id)arg3 values:(id)arg4 keyTimes:(id)arg5;
- (void)addAnimation:(id)arg1 toView:(id)arg2 withInfo:(id)arg3;
- (void)onShowAnimationDone;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (id)singleProductInfo;
- (void)setSingleProductInfo:(id)arg1;
- (void)setBannerBackgroundView:(id)arg1;
- (void)setBrandColorGradientView:(id)arg1;
- (void)setBrandImageView:(id)arg1;
- (void)setActionTitleView:(id)arg1;
- (void)setForegroundButton:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
