@interface MMTextRestrictRule : MMObject <UITextFieldDelegate>
{
    unsigned long long _maxLength; // +0x8
    long long _restricyType; // +0x10
    id <UITextFieldDelegate> _m_delegate; // +0x18
    long long _restrictType; // +0x20
}
+ (_NSRange)markedTextRangeToNSRange:(id)arg1;
+ (id)textRestrictRuleWithType:(long long)arg1;
- (void)textDidChange:(id)arg1;
- (id)restrictMaxLength:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(_NSRange)arg2 replacementString:(id)arg3;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (BOOL)textFieldShouldEndEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (BOOL)textFieldShouldClear:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (unsigned long long)maxLength;
- (void)setMaxLength:(unsigned long long)arg1;
- (long long)restricyType;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (long long)restrictType;
- (void)setRestrictType:(long long)arg1;
- (void).cxx_destruct;
@end
