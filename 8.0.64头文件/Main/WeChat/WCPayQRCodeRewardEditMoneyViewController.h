@interface WCPayQRCodeRewardEditMoneyViewController : WCPayBaseViewController <UITextFieldDelegate, UITextViewDelegate>
{
    BOOL _bIsCheckBoxSelected; // +0x98
    id <WCPayQRCodeRewardEditMoneyViewControllerDelegate> _delegate; // +0xa0
    UITextField * _moneyTextField; // +0xa8
    MMTextView * _commentTextView; // +0xb0
    UIButton * _confirmBtn; // +0xb8
    MMUIView * _keyboardInputToolBar; // +0xc0
    UIButton * _checkBoxButton; // +0xc8
    WCPayParamInvalidTipView * _invalidTipsView; // +0xd0
    unsigned long long _maxAmount; // +0xd8
    WCPayNoticeItemView * _noticeItemView; // +0xe0
}
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)setupData;
- (void)setupContentView;
- (id)genKeyboardInputToolBar;
- (void)leftBarButtonClick;
- (long long)getInputAmount;
- (void)confirmBtnClick;
- (void)resignTextField;
- (void)textFieldDidChange:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(_NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (void)updateConfirmBtnAndTipsViewStatusWithCurrentAmount:(long long)arg1;
- (id)invalidTipsView;
- (void)checkBoxBtnClick;
- (id)delegate;
- (id)moneyTextField;
- (void)setMoneyTextField:(id)arg1;
- (id)commentTextView;
- (void)setCommentTextView:(id)arg1;
- (id)confirmBtn;
- (void)setConfirmBtn:(id)arg1;
- (id)keyboardInputToolBar;
- (void)setKeyboardInputToolBar:(id)arg1;
- (id)checkBoxButton;
- (void)setCheckBoxButton:(id)arg1;
- (BOOL)bIsCheckBoxSelected;
- (void)setBIsCheckBoxSelected:(BOOL)arg1;
- (void)setInvalidTipsView:(id)arg1;
- (unsigned long long)maxAmount;
- (void)setMaxAmount:(unsigned long long)arg1;
- (id)noticeItemView;
- (void)setNoticeItemView:(id)arg1;
- (void).cxx_destruct;
@end
