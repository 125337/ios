@interface KindaPhoneEditText : KindaEditText <WCBaseInfoItemDelegate, MMKPhoneEditText>
{
    TPIDKeyboardView * keyboardView; // +0xa8
    MMKEditTextOnTextChangedCallback * m_callback; // +0xb0
    WCPayPhoneTextItem * _m_textFieldPhoneItem; // +0xb8
}
- (id)init;
- (void)dealloc;
- (void)showTip:(id)arg1 tips:(id)arg2;
- (id)m_textFieldPhoneItem;
- (void)setM_textFieldPhoneItem:(id)arg1;
- (void).cxx_destruct;
@end
