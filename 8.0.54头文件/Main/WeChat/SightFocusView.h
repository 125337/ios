@interface SightFocusView : UIView
{
    BOOL _showLightingBar; // +0x8
    BOOL _isLightingBarShowing; // +0x9
    double _currentPercent; // +0x10
    double _increasePercent; // +0x18
    UIColor * _strokeColor; // +0x20
    UIColor * _shadowColor; // +0x28
    StrokeView * _focusRectView; // +0x30
    UIImageView * _lightIconView; // +0x38
    UIView * _topProgressLine; // +0x40
    UIView * _bottomProgressLine; // +0x48
}
- (id)initWithFrame:(CGRect)arg1 showLightingBar:(BOOL)arg2;
- (void)initViews;
- (CGSize)preferredSize;
- (void)setFrame:(CGRect)arg1;
- (void)setStrokeColor:(id)arg1;
- (void)setShadowColor:(id)arg1;
- (void)showAtFocusCenter:(CGPoint)arg1 showCompletion:(id /* block */)arg2 hideCompletion:(id /* block */)arg3;
- (void)shine;
- (void)hide:(double)arg1 completion:(id /* block */)arg2;
- (id)getShineAnim:(double)arg1 count:(unsigned int)arg2;
- (BOOL)showLightingBar;
- (void)disableLightingBarMoving;
- (void)setLightingBarInRight:(BOOL)arg1;
- (void)setLightingBarPercent:(double)arg1;
- (double)increaseLightingBarPercent:(double)arg1;
- (id)strokeColor;
- (id)shadowColor;
- (id)focusRectView;
- (void)setFocusRectView:(id)arg1;
- (id)lightIconView;
- (void)setLightIconView:(id)arg1;
- (id)topProgressLine;
- (void)setTopProgressLine:(id)arg1;
- (id)bottomProgressLine;
- (void)setBottomProgressLine:(id)arg1;
- (void).cxx_destruct;
@end

