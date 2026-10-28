@interface WCPayEcardModelView : UIView <WCPayVoidCallbackDelegate>
{
    BOOL _hasBeenEdited; // +0x8
    id <WCPayEcardModelViewDelegate> _m_delegate; // +0x10
    InputMobileItem * _item; // +0x18
    UITextField * _textField; // +0x20
    UIView * _line; // +0x28
    KindaRichLabelViewV2 * _tipsLabel; // +0x30
    NSString * _mobileInputed; // +0x38
}
- (void)updateMobile:(id)arg1;
- (id)text;
- (id)initWithFrame:(CGRect)arg1;
- (void)onKeyboardDidShow:(id)arg1;
- (void)onKeyboardWillHide:(id)arg1;
- (void)updateWithInputItem:(id)arg1;
- (void)layoutSubviews;
- (void)updateTextField;
- (void)updateLine;
- (void)updateTipsLabel;
- (unsigned long long)colorFromString:(id)arg1;
- (void)onWCPayVoidCallbackWithUserInfo:(id)arg1;
- (void)textFieldDidChange;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)item;
- (void)setItem:(id)arg1;
- (id)textField;
- (void)setTextField:(id)arg1;
- (id)line;
- (void)setLine:(id)arg1;
- (id)tipsLabel;
- (void)setTipsLabel:(id)arg1;
- (id)mobileInputed;
- (void)setMobileInputed:(id)arg1;
- (BOOL)hasBeenEdited;
- (void)setHasBeenEdited:(BOOL)arg1;
- (void).cxx_destruct;
@end
