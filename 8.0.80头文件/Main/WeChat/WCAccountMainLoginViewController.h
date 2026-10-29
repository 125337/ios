@interface WCAccountMainLoginViewController : WCAccountBaseViewController <WCAccountSignMethodSwitchViewControllerDelegate>
{
    id <WCAccountMainLoginViewControllerDelegate> _delegate; // +0x80
    BOOL _isFromLogin; // +0x88
    unsigned long long _signMethod; // +0x90
    unsigned long long _currentSignMethod; // +0x98
    unsigned long long _page; // +0xa0
    WCAccountLoginMainPageView * _mainPageView; // +0xa8
    MMUIButton * _changePageButton; // +0xb0
    MMUILabel * _privacyLabel; // +0xb8
    UIButton * _nextButton; // +0xc0
    UIButton * _bothDeviceButton; // +0xc8
    NSMutableArray * _moreButtonTypes; // +0xd0
    WCAgreementCheckBox * _agreeSyncMsgCheckBox; // +0xd8
}
- (id)init;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (void)setupWithData:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidBePushOrPresent:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)didReceiveMemoryWarning;
- (BOOL)autoHandleKeyboardEvent;
- (BOOL)useSheetView;
- (BOOL)useRedesignStyle;
- (void)initView;
- (void)viewWillAppear:(BOOL)arg1;
- (void)setPage:(unsigned long long)arg1;
- (id)titleForNextButton;
- (id)titleForChangePageButton;
- (id)privacy;
- (void)onNext;
- (void)onBothDeviceClicked;
- (void)onSwitch;
- (void)showOtherMethodActionSheet;
- (void)showOtherMethodPageSheet;
- (void)switchToUserLogin;
- (void)switchToPhoneLogin;
- (void)userDidClickBack;
- (void)userDidClickMore;
- (unsigned long long)getSignMethod;
- (void)onSignMethodSwitch:(unsigned long long)arg1;
- (void)initDataReportData;
- (void)initViewReport:(id)arg1 viewID:(id)arg2;
- (void)reportLoginAccountClk;
- (void)reportPageOut;
- (void)reportPasskeyPageOut;
- (void)changeButtonLoadingStatus:(id)arg1 title:(id)arg2 showLoading:(BOOL)arg3;
- (BOOL)isBtnLoading;
- (void)startLoadingBlocked;
- (void)stopLoading;
- (unsigned long long)signMethod;
- (void)setSignMethod:(unsigned long long)arg1;
- (unsigned long long)currentSignMethod;
- (void)setCurrentSignMethod:(unsigned long long)arg1;
- (unsigned long long)page;
- (id)mainPageView;
- (void)setMainPageView:(id)arg1;
- (id)changePageButton;
- (void)setChangePageButton:(id)arg1;
- (id)privacyLabel;
- (void)setPrivacyLabel:(id)arg1;
- (id)nextButton;
- (void)setNextButton:(id)arg1;
- (id)bothDeviceButton;
- (void)setBothDeviceButton:(id)arg1;
- (id)moreButtonTypes;
- (void)setMoreButtonTypes:(id)arg1;
- (BOOL)isFromLogin;
- (void)setIsFromLogin:(BOOL)arg1;
- (id)agreeSyncMsgCheckBox;
- (void)setAgreeSyncMsgCheckBox:(id)arg1;
- (void).cxx_destruct;
@end
