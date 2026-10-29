@interface WCPayQRCodeRewardSetupViewController : WCPayBaseViewController <UITableViewDelegate, UITextFieldDelegate, UITextViewDelegate>
{
    id <WCPayQRCodeRewardSetupViewControllerDelegate> _delegate; // +0x90
    MMTableView * _tableView; // +0x98
    MMTextView * _rewardDescTextView; // +0xa0
    MMUIView * _keyboardInputToolBar; // +0xa8
    UIButton * _confirmGenCodeBtn; // +0xb0
    UITextField * _currentEdittingTextField; // +0xb8
    WCPayParamInvalidTipView * _invalidTipsView; // +0xc0
    NSMutableArray * _defaultAmountList; // +0xc8
    NSMutableArray * _editAmountList; // +0xd0
    unsigned long long _maxAmount; // +0xd8
    WCPayNoticeItemView * _noticeItemView; // +0xe0
}
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)setupData;
- (void)setupNavigationBar;
- (void)setupContentView;
- (void)setupTableHeaderView;
- (id)genKeyboardInputToolBar;
- (void)leftBarButtonClick;
- (void)confirmToExitEdit;
- (void)confirmGenCodeBtnClick;
- (void)resignTextField;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(_NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (void)updateConfirmBtnAndTipsViewStatusWithCurrentAmount:(long long)arg1 amountIndex:(unsigned long long)arg2;
- (id)invalidTipsView;
- (id)delegate;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)rewardDescTextView;
- (void)setRewardDescTextView:(id)arg1;
- (id)keyboardInputToolBar;
- (void)setKeyboardInputToolBar:(id)arg1;
- (id)confirmGenCodeBtn;
- (void)setConfirmGenCodeBtn:(id)arg1;
- (id)currentEdittingTextField;
- (void)setCurrentEdittingTextField:(id)arg1;
- (void)setInvalidTipsView:(id)arg1;
- (id)defaultAmountList;
- (void)setDefaultAmountList:(id)arg1;
- (id)editAmountList;
- (void)setEditAmountList:(id)arg1;
- (unsigned long long)maxAmount;
- (void)setMaxAmount:(unsigned long long)arg1;
- (id)noticeItemView;
- (void)setNoticeItemView:(id)arg1;
- (void).cxx_destruct;
@end

