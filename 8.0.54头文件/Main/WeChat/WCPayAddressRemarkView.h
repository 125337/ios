@interface WCPayAddressRemarkView : UIView <RichTextLayoutDelegate>
{
    double _addressMaxLine; // +0x8
    id <WCPayAddressRemarkViewDelegate> _m_delegate; // +0x10
    WCPayAddressInfo * _address; // +0x18
    double _fontSize; // +0x20
    UIColor * _fontColor; // +0x28
    UIView * _m_highlightView; // +0x30
    RichTextView * _m_textView; // +0x38
    UIButton * _m_button; // +0x40
}
- (void)dealloc;
- (id)initWithAddress:(id)arg1 fontSize:(double)arg2 fontColor:(id)arg3;
- (void)updateAddress:(id)arg1;
- (void)layoutSubviews;
- (void)updateView;
- (void)updateHighlightView;
- (void)updateTextView;
- (void)updateButton;
- (void)onClickButton;
- (double)lineWidthAtY:(double)arg1 lineIndex:(long long)arg2 richTextView:(id)arg3;
- (void)handleLongPressGestureRecognizer:(id)arg1;
- (void)handleMenuControllerWillHideMenuNotification:(id)arg1;
- (void)onCopy:(id)arg1;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (double)addressMaxLine;
- (void)setAddressMaxLine:(double)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)address;
- (void)setAddress:(id)arg1;
- (double)fontSize;
- (void)setFontSize:(double)arg1;
- (id)fontColor;
- (void)setFontColor:(id)arg1;
- (id)m_highlightView;
- (void)setM_highlightView:(id)arg1;
- (id)m_textView;
- (void)setM_textView:(id)arg1;
- (id)m_button;
- (void)setM_button:(id)arg1;
- (void).cxx_destruct;
@end

