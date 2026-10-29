@interface HoneyPayPrepareCardViewController : HoneyPayBaseViewController <HoneyPayPrepareCardViewDelegate, ILinkEventExt, UITextFieldDelegate>
{
    id <HoneyPayPrepareCardViewControllerDelegate> _delegate; // +0x90
    UIButton * _confirmButton; // +0x98
    NSString * _amount; // +0xa0
    RichTextView * _inputWishing; // +0xa8
    WCPayNavigationBarBottomBanner * _alertBanner; // +0xb0
    HoneyPayPrepareCardView * _prepareCardView; // +0xb8
    UITextField * _textFiled; // +0xc0
    WCPayNoticeItemView * _noticeItemView; // +0xc8
}
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (void)viewDidAppear:(BOOL)arg1;
- (void)relaodTableView;
- (id)createStatusHeaderView;
- (void)checkAmount;
- (void)done;
- (void)keyboardDidShow:(id)arg1;
- (void)honeyPaykeyboardDidHide:(id)arg1;
- (void)honeyPayPrepareCardView:(id)arg1 didchangeAmount:(id)arg2;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)textFieldDidEndEditing:(id)arg1;
- (id)prepareCardView;
- (id)confirmButton;
- (double)max;
- (id)alertBanner;
- (id)inputWishing;
- (id)textFiled;
- (id)navigationBarBackgroundColor;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setConfirmButton:(id)arg1;
- (id)amount;
- (void)setAmount:(id)arg1;
- (void)setInputWishing:(id)arg1;
- (void)setAlertBanner:(id)arg1;
- (void)setPrepareCardView:(id)arg1;
- (void)setTextFiled:(id)arg1;
- (id)noticeItemView;
- (void)setNoticeItemView:(id)arg1;
- (void).cxx_destruct;
@end

