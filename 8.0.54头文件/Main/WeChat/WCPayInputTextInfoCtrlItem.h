@interface WCPayInputTextInfoCtrlItem : WCBaseTextFieldItem
{
    TPIDKeyboardView * keyboardView; // +0x50
}
- (id)initWithTitle:(id)arg1 tip:(id)arg2 key:(id)arg3;
- (void)dealloc;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(_NSRange)arg2 replacementString:(id)arg3;
- (void)autoRemarkKeyBoradType;
- (void).cxx_destruct;
@end

