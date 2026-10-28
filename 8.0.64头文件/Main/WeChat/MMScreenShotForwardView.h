@interface MMScreenShotForwardView : UIView
{
    id /* block */ _onClickForwardButton; // +0x8
    id /* block */ _onClickOtherArea; // +0x10
    UIView * _bottomBkgView; // +0x18
    CAGradientLayer * _bottomGradientLayer; // +0x20
    MMScreenShotForwardButton * _forwardButton; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initViews;
- (void)layoutSubviews;
- (void)startLoading;
- (void)stopLoading;
- (BOOL)isLandScape;
- (id)bottomBkgView;
- (id)forwardButton;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (id /* block */)onClickForwardButton;
- (void)setOnClickForwardButton:(id /* block */)arg1;
- (id /* block */)onClickOtherArea;
- (void)setOnClickOtherArea:(id /* block */)arg1;
- (void)setBottomBkgView:(id)arg1;
- (id)bottomGradientLayer;
- (void)setBottomGradientLayer:(id)arg1;
- (void)setForwardButton:(id)arg1;
- (void).cxx_destruct;
@end
