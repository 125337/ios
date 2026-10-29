@interface WCAccountPasswordInputViewController : WCAccountBaseViewController <WCBaseInfoItemDelegate>
{
    id <WCAccountPasswordInputViewControllerDelegate> _delegate; // +0x78
    WCRedesignTextItem * _passwordTextItem; // +0x80
    UIButton * _nextButton; // +0x88
}
- (BOOL)autoHandleKeyboardEvent;
- (BOOL)useSheetView;
- (BOOL)useRedesignStyle;
- (void)viewDidLoad;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)initView;
- (void)checkNextBtnEnable;
- (void)onLogin;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)WCBaseInfoItemPressReturnKey:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)passwordTextItem;
- (void)setPasswordTextItem:(id)arg1;
- (id)nextButton;
- (void)setNextButton:(id)arg1;
- (void).cxx_destruct;
@end

