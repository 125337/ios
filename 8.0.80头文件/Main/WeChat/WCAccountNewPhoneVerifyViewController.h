@interface WCAccountNewPhoneVerifyViewController : WCAccountBaseViewController <IAutoVerifySMSExt, UITextFieldDelegate, WCBaseInfoItemDelegate>
{
    BOOL _isFromLogin; // +0x80
    long long _iCount; // +0x88
    id <WCAccountNewPhoneVerifyViewControllerDelegate> _delegate; // +0x90
    unsigned long long _page; // +0x98
    MMUILabel * _titleLabel; // +0xa0
    WCRedesignButtonItem * _phoneNumberButtonItem; // +0xa8
    WCAccountNewPhoneVerifyPageView * _pageView; // +0xb0
    MMUIButton * _changePageButton; // +0xb8
    UIButton * _nextButton; // +0xc0
    WCButtonListView * _bottomButtonView; // +0xc8
    WCAgreementCheckBox * _agreeSyncMsgCheckBox; // +0xd0
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
- (void)viewWillAppear:(BOOL)arg1;
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
- (void)initDataReportData;
- (void)changeButtonLoadingStatus:(id)arg1 title:(id)arg2 showLoading:(BOOL)arg3;
- (void)startLoadingBlocked;
- (void)stopLoading;
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
- (BOOL)isFromLogin;
- (void)setIsFromLogin:(BOOL)arg1;
- (id)agreeSyncMsgCheckBox;
- (void)setAgreeSyncMsgCheckBox:(id)arg1;
- (void).cxx_destruct;
@end
