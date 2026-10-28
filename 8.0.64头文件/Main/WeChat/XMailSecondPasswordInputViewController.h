@interface XMailSecondPasswordInputViewController : MMUIViewController <UITextFieldDelegate>
{
    UIScrollView * m_scrollView; // +0x70
    UILabel * m_errorInfoLabel; // +0x78
    WCUITextField * m_pwdTextField; // +0x80
    UIButton * m_confirmBtn; // +0x88
    NSString * _mailAddr; // +0x90
    id /* block */ _onClickConfirmBlock; // +0x98
    id /* block */ _onViewControllerQuitBlock; // +0xa0
}
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)onShowPasswordError;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(_NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidChange:(id)arg1;
- (void)onReturn;
- (void)onClickConfirmBtn:(id)arg1;
- (id)mailAddr;
- (void)setMailAddr:(id)arg1;
- (id /* block */)onClickConfirmBlock;
- (void)setOnClickConfirmBlock:(id /* block */)arg1;
- (id /* block */)onViewControllerQuitBlock;
- (void)setOnViewControllerQuitBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
