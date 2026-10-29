@interface PasswordViewController :  <UITextFieldDelegate>
{
    BOOL _keyboardIsShowing; // +0x8
    id /* block */ _completionHandler; // +0x10
    id /* block */ _cancelHandler; // +0x18
    UIView * _popupView; // +0x20
    UILabel * _titleLabel; // +0x28
    UITextField * _passwordField; // +0x30
    double _originalPopupY; // +0x38
    NSLayoutConstraint * _popupCenterYConstraint; // +0x40
    double _keyboardHeight; // +0x48
}
- (id)initWithFrame:(CGRect)arg1 completion:(id /* block */)arg2 cancel:(id /* block */)arg3;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)setupUI;
- (void)registerForKeyboardNotifications;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardWillChangeFrame:(id)arg1;
- (void)adjustPopupPositionForKeyboardHeight:(double)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)showPasswordError;
- (void)cancelAction;
- (void)confirmAction;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)dealloc;
- (id /* block */)completionHandler;
- (void)setCompletionHandler:(id /* block */)arg1;
- (id /* block */)cancelHandler;
- (void)setCancelHandler:(id /* block */)arg1;
- (id)popupView;
- (void)setPopupView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)passwordField;
- (void)setPasswordField:(id)arg1;
- (double)originalPopupY;
- (void)setOriginalPopupY:(double)arg1;
- (id)popupCenterYConstraint;
- (void)setPopupCenterYConstraint:(id)arg1;
- (BOOL)keyboardIsShowing;
- (void)setKeyboardIsShowing:(BOOL)arg1;
- (double)keyboardHeight;
- (void)setKeyboardHeight:(double)arg1;
- (void).cxx_destruct;
@end
