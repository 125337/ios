@interface KindaCardNumberEditView : KindaView <UITextFieldDelegate, WCBaseInfoItemDelegate, MMKCardNumberEditView>
{
    MMKCardNumberEditViewOnTextChangedCallback * m_callback; // +0xa8
    MMKCardNumberEditViewOnTextEndEditingCallback * m_endEditingCallback; // +0xb0
    BOOL _m_bFocus; // +0xb8
    WCPayTenpaySecureCtrlItem * _m_textFieldItem; // +0xc0
    MMDynamicColor * _m_hintColor; // +0xc8
    MMDynamicColor * _m_textColor; // +0xd0
}
- (id)init;
- (void)dealloc;
- (id)getView;
- (id)getValue;
- (void)setFocus:(BOOL)arg1;
- (BOOL)getFocus;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)setOnTextChangedCallback:(id)arg1;
- (void)setOnTextEndEditingCallback:(id)arg1;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)WCBaseInfoItemEndEdit:(id)arg1;
- (BOOL)isBankCardNumber;
- (id)getHint;
- (void)setHint:(id)arg1;
- (void)setHintColor:(id)arg1;
- (id)getHintColor;
- (void)setTextColor:(id)arg1;
- (id)getTextColor;
- (int)getInputTextLength;
- (void)setText:(id)arg1;
- (BOOL)getSupportDynamicSize;
- (id)m_textFieldItem;
- (void)setM_textFieldItem:(id)arg1;
- (BOOL)m_bFocus;
- (void)setM_bFocus:(BOOL)arg1;
- (id)m_hintColor;
- (void)setM_hintColor:(id)arg1;
- (id)m_textColor;
- (void)setM_textColor:(id)arg1;
- (void).cxx_destruct;
@end
