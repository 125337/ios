@interface ZoomFactorCursorButtonItem : NSObject <ZoomFactorControlUtilsDelegate>
{
    UIButton * _cursorButton; // +0x8
    UIView * _blurShadowView; // +0x10
    double _fontSize; // +0x18
    CGSize _size; // +0x20
}
- (id)initWithSize:(CGSize)arg1 fontSize:(double)arg2;
- (void)initCursorButton;
- (void)initBlurShadowView;
- (void)addSelfToView:(id)arg1;
- (void)removeSelfFromSuperView;
- (CGRect)frame;
- (void)setLeft:(double)arg1;
- (void)setBottom:(double)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setFrame:(CGRect)arg1;
- (void)setCenter:(CGPoint)arg1;
- (void)setTransForm:(CGAffineTransform)arg1;
- (void)updateOrientation:(long long)arg1;
- (void)updateZoomVideoFactor:(double)arg1;
- (id)cursorButton;
- (void)setCursorButton:(id)arg1;
- (id)blurShadowView;
- (void)setBlurShadowView:(id)arg1;
- (CGSize)size;
- (void)setSize:(CGSize)arg1;
- (double)fontSize;
- (void)setFontSize:(double)arg1;
- (void).cxx_destruct;
@end
