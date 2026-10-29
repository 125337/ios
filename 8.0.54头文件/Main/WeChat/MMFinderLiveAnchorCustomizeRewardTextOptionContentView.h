@interface MMFinderLiveAnchorCustomizeRewardTextOptionContentView : MMFinderLiveAnchorCustomizeRewardOptionContentViewBase <UITextFieldDelegate>
{
    BOOL _keyboardShowing; // +0x8
    id /* block */ _isInputTextInvalid; // +0x10
    id /* block */ _onInputTextChanged; // +0x18
    id /* block */ _onInputTextConfirm; // +0x20
    id /* block */ _onInputTextCancel; // +0x28
    UIView * _textFieldContainer; // +0x30
    UITextField * _textField; // +0x38
    MMUIButton * _textFieldConfirmButton; // +0x40
    MMUILabel * _alertMessageLabel; // +0x48
    long long _maxTextLength; // +0x50
}
- (id)initWithMaxTextLength:(long long)arg1;
- (void)initTextFieldContainer;
- (void)initTextField;
- (void)initTextFieldConfirmButton;
- (void)initAlertMessageLabel;
- (void)setupNotifications;
- (void)layoutSubviews;
- (void)setTextFeildInputText:(id)arg1;
- (void)setAlertMessageWithString:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)onConfirmButtonClicked;
- (void)onKeyboardShowing:(id)arg1;
- (void)onKeyboardHiding:(id)arg1;
- (void)textFieldDidChangeContent:(id)arg1;
- (id)clipString:(id)arg1 byAsciiLengthLimit:(long long)arg2;
- (double)contentPerferHeight;
- (id /* block */)isInputTextInvalid;
- (void)setIsInputTextInvalid:(id /* block */)arg1;
- (id /* block */)onInputTextChanged;
- (void)setOnInputTextChanged:(id /* block */)arg1;
- (id /* block */)onInputTextConfirm;
- (void)setOnInputTextConfirm:(id /* block */)arg1;
- (id /* block */)onInputTextCancel;
- (void)setOnInputTextCancel:(id /* block */)arg1;
- (id)textFieldContainer;
- (void)setTextFieldContainer:(id)arg1;
- (id)textField;
- (void)setTextField:(id)arg1;
- (id)textFieldConfirmButton;
- (void)setTextFieldConfirmButton:(id)arg1;
- (id)alertMessageLabel;
- (void)setAlertMessageLabel:(id)arg1;
- (long long)maxTextLength;
- (void)setMaxTextLength:(long long)arg1;
- (BOOL)keyboardShowing;
- (void)setKeyboardShowing:(BOOL)arg1;
- (void).cxx_destruct;
@end

