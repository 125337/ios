@interface WCPayVerifyCardNumberViewController : WCPayBaseViewController <WCPayInputViewDelegate>
{
    id <WCPayVerifyCardNumberViewControllerDelegate> _delegate; // +0x98
    WCPayInputView * _payInputView; // +0xa0
    UILabel * _tips; // +0xa8
}
- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (void)viewDidLayoutSubviews;
- (void)dealloc;
- (void)viewDidLoad;
- (void)realodView;
- (void)keyboardDidShow:(id)arg1;
- (void)keyboardDidHide:(id)arg1;
- (void)inputView:(id)arg1 didChangeText:(id)arg2;
- (id)payInputView;
- (id)tips;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setPayInputView:(id)arg1;
- (void)setTips:(id)arg1;
- (void).cxx_destruct;
@end
