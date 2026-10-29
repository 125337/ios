@interface WARedEnvelopesMakeViewController : MMUIViewController <UITextFieldDelegate, UITextViewDelegate, ILinkEventExt, UIPickerViewDelegate, UIPickerViewDataSource, WCBizPickerViewDelegate, PBMessageObserverDelegate, WCPayPlathbPayMoneyLogicDelegate>
{
    BOOL m_bCanHandleScrollViewDidChangedEvent; // +0x70
    BOOL m_bError; // +0x71
    BOOL m_bNomalMoney; // +0x72
    BOOL m_bScopeAll; // +0x73
    unsigned int m_uiSelectCount; // +0x74
    long long m_inputErrorType; // +0x78
    NSString * m_appID; // +0x80
    NSArray * m_arrScope; // +0x88
    NSString * m_defaultWishing; // +0x90
    NSString * m_sendID; // +0x98
    id <WARedEnvelopesMakeViewControllerDelegate> m_delegate; // +0xa0
    WCRedEnvelopesMakeRedEnvelopesViewLayout * _m_layout; // +0xa8
    UIView * _m_navigationBackgroundView; // +0xb0
    MMTableView * _tableView; // +0xb8
    UIView * _moneyView; // +0xc0
    WCUITextField * _moneyTextField; // +0xc8
    RichTextView * _richTextView; // +0xd0
    UIView * _countView; // +0xd8
    WCUITextField * _countTextField; // +0xe0
    UIView * _visibleView; // +0xe8
    MMTextView * _textView; // +0xf0
    UILabel * _amountLabel; // +0xf8
    UILabel * _unitLabel; // +0x100
    UIButton * _redEnvelopesButton; // +0x108
    UIView * _errorView; // +0x110
    UILabel * _errorLabel; // +0x118
    WCBizPickerView * _pickerView; // +0x120
    UIButton * _scopeBtn; // +0x128
}
- (id)initWithAppID:(id)arg1 arrScope:(id)arg2 defaultWishing:(id)arg3;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)dealloc;
- (void)setColorTitle:(id)arg1 TextColor:(id)arg2;
- (void)initNavigationBar;
- (void)setupUI:(double)arg1 IsInit:(BOOL)arg2;
- (void)onLeftBarButtonDone;
- (void)OnMakeWCRedEnvelopesButtonClick;
- (void)onScopeBtnClick;
- (void)startPayMoney:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)plathbPaySucc;
- (void)plathbPayFail;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (void)WCBizPickerViewDidComplete:(id)arg1;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (BOOL)textFieldShouldEndEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidChanged:(id)arg1;
- (void)resetToCanHandleScrollViewChangedEnvent;
- (BOOL)textViewShouldBeginEditing:(id)arg1;
- (BOOL)textViewShouldEndEditing:(id)arg1;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(_NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)handleTap:(id)arg1;
- (void)hidekeyboard;
- (void)keyboardWillShow:(id)arg1;
- (void)showErrorView:(id)arg1 ErrorType:(long long)arg2;
- (void)hideErrorView;
- (void)hideErrorViewWithAnimation;
- (void)adjustTableViewOffestIfHasErrorView;
- (void)checkDataError;
- (void)adjustAmountLabel:(double)arg1;
- (unsigned int)totalNum;
- (long long)perPersonMaxValue;
- (long long)perMinValue;
- (long long)totalAmount;
- (id)errorView;
- (id)errorLabel;
- (id)redEnvelopesButton;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_layout;
- (void)setM_layout:(id)arg1;
- (id)m_navigationBackgroundView;
- (void)setM_navigationBackgroundView:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)moneyView;
- (void)setMoneyView:(id)arg1;
- (id)moneyTextField;
- (void)setMoneyTextField:(id)arg1;
- (id)richTextView;
- (void)setRichTextView:(id)arg1;
- (id)countView;
- (void)setCountView:(id)arg1;
- (id)countTextField;
- (void)setCountTextField:(id)arg1;
- (id)visibleView;
- (void)setVisibleView:(id)arg1;
- (id)textView;
- (void)setTextView:(id)arg1;
- (id)amountLabel;
- (void)setAmountLabel:(id)arg1;
- (id)unitLabel;
- (void)setUnitLabel:(id)arg1;
- (void)setRedEnvelopesButton:(id)arg1;
- (void)setErrorView:(id)arg1;
- (void)setErrorLabel:(id)arg1;
- (id)pickerView;
- (void)setPickerView:(id)arg1;
- (id)scopeBtn;
- (void)setScopeBtn:(id)arg1;
- (void).cxx_destruct;
@end
