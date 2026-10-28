@interface WCAccountNewPhoneVerifyViewController : WCAccountBaseViewController <IAutoVerifySMSExt, UITextFieldDelegate, WCBaseInfoItemDelegate>
{
    long long _iCount; // +0x80
    id <WCAccountNewPhoneVerifyViewControllerDelegate> _delegate; // +0x88
    unsigned long long _page; // +0x90
    MMUILabel * _titleLabel; // +0x98
    WCRedesignButtonItem * _phoneNumberButtonItem; // +0xa0
    WCAccountNewPhoneVerifyPageView * _pageView; // +0xa8
    MMUIButton * _changePageButton; // +0xb0
    UIButton * _nextButton; // +0xb8
    WCButtonListView * _bottomButtonView; // +0xc0
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
- (void)initBottomButtonView;
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
- (id)bottomButtonView;
- (void)setBottomButtonView:(id)arg1;
- (void).cxx_destruct;
@end
