@interface WCAccountNewPhoneVerifyViewController : WCAccountBaseViewController <IAutoVerifySMSExt, UITextFieldDelegate, WCBaseInfoItemDelegate>
{
    long long _iCount; // +0x78
    id <WCAccountNewPhoneVerifyViewControllerDelegate> _delegate; // +0x80
    unsigned long long _page; // +0x88
    MMUILabel * _titleLabel; // +0x90
    WCRedesignButtonItem * _phoneNumberButtonItem; // +0x98
    WCAccountNewPhoneVerifyPageView * _pageView; // +0xa0
    MMUIButton * _changePageButton; // +0xa8
    UIButton * _nextButton; // +0xb0
}
- (id)init;
- (BOOL)autoHandleKeyboardEvent;
- (BOOL)useSheetView;
- (BOOL)useRedesignStyle;
- (void)setupWithData:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)initNavigationBar;
- (void)initView;
- (id)titleForChangePageButton;
- (void)onNext;
- (void)onSwitch;
- (void)setPage:(unsigned long long)arg1;
- (void)switchToPwdLogin;
- (void)switchToVerifyLogin;
- (void)userDidClickBack;
- (void)userDidClickMore;
- (id)checkNext;
- (void)startTimer;
- (void)onResendClicked;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)WCBaseInfoItemPressReturnKey:(id)arg1;
- (long long)iCount;
- (void)setICount:(long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)page;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)phoneNumberButtonItem;
- (void)setPhoneNumberButtonItem:(id)arg1;
- (id)pageView;
- (void)setPageView:(id)arg1;
- (id)changePageButton;
- (void)setChangePageButton:(id)arg1;
- (id)nextButton;
- (void)setNextButton:(id)arg1;
- (void).cxx_destruct;
@end

