@interface WXGRoamPackageNameChangeHalfView : MMPageSheetBaseView <UITextFieldDelegate>
{
    UITextField * _textField; // +0x8
    UIButton * _completeBtn; // +0x10
}
- (id)init;
- (void)setupDetailView;
- (void)onComplete;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(_NSRange)arg2 replacementString:(id)arg3;
- (id)textField;
- (void)setTextField:(id)arg1;
- (id)completeBtn;
- (void)setCompleteBtn:(id)arg1;
- (void).cxx_destruct;
@end

