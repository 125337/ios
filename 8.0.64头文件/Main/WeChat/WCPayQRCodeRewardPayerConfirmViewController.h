@interface WCPayQRCodeRewardPayerConfirmViewController : WCPayBaseViewController <UITextViewDelegate>
{
    BOOL _bIsCheckBoxSelected; // +0x98
    id <WCPayQRCodeRewardPayerConfirmViewControllerDelegate> _delegate; // +0xa0
    MMTextView * _payerCommentTextView; // +0xa8
    UIButton * _checkBoxButton; // +0xb0
}
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)setupContentView;
- (void)leftBarButtonClick;
- (void)confirmBtnClick;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(_NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (void)checkBoxBtnClick;
- (id)delegate;
- (id)payerCommentTextView;
- (void)setPayerCommentTextView:(id)arg1;
- (id)checkBoxButton;
- (void)setCheckBoxButton:(id)arg1;
- (BOOL)bIsCheckBoxSelected;
- (void)setBIsCheckBoxSelected:(BOOL)arg1;
- (void).cxx_destruct;
@end
