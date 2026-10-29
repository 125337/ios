@interface WCPayGPMoneyInputViewController : WCPayBaseViewController <ILinkEventExt, WCPayDecimalKeyboardViewDelegate, WCPayRemarkPageSheetDelegate>
{
    id <WCPayGPMoneyInputViewControllerDelegate> _delegate; // +0x90
    WCPayTextField * _moneyTextField; // +0x98
    RichTextView * _remarkTextView; // +0xa0
    WCPayDecimalKeyboardView * _keyboardView; // +0xa8
    NSString * _remarkContent; // +0xb0
    WCPayRemarkPageSheet * _remarkPageSheet; // +0xb8
}
- (void)setDelegate:(id)arg1;
- (id)navigationBarBackgroundColor;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLoad;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)leftBarButtonClick;
- (void)setupContentView;
- (void)setupHeaderView:(id)arg1;
- (void)setupInputView:(id)arg1;
- (void)genKeyboardView;
- (id)getLauncherDisplayName;
- (void)textFieldDidChang:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)activeTextField;
- (id)keyboardHostViewController;
- (void)keyboardViewConfirmBtnClick:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)pageSheetCancel;
- (void)pageSheetConfirmWithRemark:(id)arg1;
- (id)delegate;
- (id)moneyTextField;
- (void)setMoneyTextField:(id)arg1;
- (id)remarkTextView;
- (void)setRemarkTextView:(id)arg1;
- (id)keyboardView;
- (void)setKeyboardView:(id)arg1;
- (id)remarkContent;
- (void)setRemarkContent:(id)arg1;
- (id)remarkPageSheet;
- (void)setRemarkPageSheet:(id)arg1;
- (void).cxx_destruct;
@end

