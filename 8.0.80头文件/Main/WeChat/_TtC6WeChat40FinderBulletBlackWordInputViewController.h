@interface _TtC6WeChat40FinderBulletBlackWordInputViewController : MMUIHalfScreenViewController <UITextFieldDelegate>
{
     submitAction; // +0x8
     reportContext; // +0x18
     inputState; // +0x30
     didFocusInput; // +0x49
     hasAppeared; // +0x4a
     isClosing; // +0x4b
     keyboardHeight; // +0x50
     formView; // +0x58
     titleLabel; // +0x60
     inputContainer; // +0x68
     inputSeparator; // +0x70
     textField; // +0x78
     clearButton; // +0x80
     errorLabel; // +0x88
     cancelButton; // +0x90
     addButton; // +0x98
}
- (BOOL)textFieldShouldReturn:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)onKeyboardFrameWillChange:(id)arg1;
- (void)onKeyboardWillHide:(id)arg1;
- (void)onTextChanged;
- (void)clearInput;
- (void)cancelInput;
- (void)submitInput;
- (void).cxx_destruct;
@end
