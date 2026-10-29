@interface MassSendHighlightedView : UIView
{
    NSSet * m_touches; // +0x8
    UIColor * _defaultBackgroundColor; // +0x10
    UIColor * _highlightBackgroundColor; // +0x18
    id /* block */ _handleTouchUpInside; // +0x20
}
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)setDefaultBackgroundColor:(id)arg1;
- (void)onTouchDown;
- (void)onTouchUpInside;
- (id)defaultBackgroundColor;
- (id)highlightBackgroundColor;
- (void)setHighlightBackgroundColor:(id)arg1;
- (id /* block */)handleTouchUpInside;
- (void)setHandleTouchUpInside:(id /* block */)arg1;
- (void).cxx_destruct;
@end

