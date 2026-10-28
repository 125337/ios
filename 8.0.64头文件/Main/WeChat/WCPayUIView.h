@interface WCPayUIView : MMUIView
{
    BOOL _enableHighlight; // +0x8
    NSMutableArray * _bizAccessElems; // +0x10
    double _cornerRadius; // +0x18
    id /* block */ _tapAction; // +0x20
    UIView * _hightLightMask; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (id)accessibilityElements;
- (void)layoutSubviews;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (id)hightLightMask;
- (id)bizAccessElems;
- (void)setBizAccessElems:(id)arg1;
- (BOOL)enableHighlight;
- (void)setEnableHighlight:(BOOL)arg1;
- (double)cornerRadius;
- (void)setCornerRadius:(double)arg1;
- (id /* block */)tapAction;
- (void)setTapAction:(id /* block */)arg1;
- (void)setHightLightMask:(id)arg1;
- (void).cxx_destruct;
@end
