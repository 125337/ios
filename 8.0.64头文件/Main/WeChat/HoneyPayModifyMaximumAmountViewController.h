@interface HoneyPayModifyMaximumAmountViewController : HoneyPayBaseViewController <WCPayInputMoneyViewDelegate>
{
    BOOL _isHide; // +0x98
    id <HoneyPayModifyMaximumAmountViewControllerDelegate> _delegate; // +0xa0
    UIButton * _confirmButton; // +0xa8
    NSString * _amount; // +0xb0
    WCPayNavigationBarBottomBanner * _alertBanner; // +0xb8
    WCPayInputMoneyView * _inputMoneyView; // +0xc0
    UILabel * _bottomTipsLabel; // +0xc8
    double _keyboardHeight; // +0xd0
}
- (void)viewDidLoad;
- (void)refreshViewWithData:(id)arg1;
- (id)navigationBarBackgroundColor;
- (void)viewDidTransitionToNewSize;
- (void)viewDidAppear:(BOOL)arg1;
- (void)relaodTableView;
- (void)updateBottomTipsView;
- (id)normalStatusHeaderView;
- (void)checkAmount;
- (void)done;
- (void)keyboardDidShow:(id)arg1;
- (void)honeyPaykeyboardDidHide:(id)arg1;
- (void)wcpayInputMoneyView:(id)arg1 didChangeAmount:(id)arg2;
- (id)inputMoneyView;
- (id)bottomTipsLabel;
- (id)confirmButton;
- (double)max;
- (id)alertBanner;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setConfirmButton:(id)arg1;
- (id)amount;
- (void)setAmount:(id)arg1;
- (void)setAlertBanner:(id)arg1;
- (void)setInputMoneyView:(id)arg1;
- (void)setBottomTipsLabel:(id)arg1;
- (double)keyboardHeight;
- (void)setKeyboardHeight:(double)arg1;
- (BOOL)isHide;
- (void)setIsHide:(BOOL)arg1;
- (void).cxx_destruct;
@end
