@interface WCAccountMainLoginViewController : WCAccountBaseViewController <WCAccountSignMethodSwitchViewControllerDelegate>
{
    id <WCAccountMainLoginViewControllerDelegate> _delegate; // +0x78
    unsigned long long _signMethod; // +0x80
    unsigned long long _page; // +0x88
    WCAccountLoginMainPageView * _mainPageView; // +0x90
    MMUIButton * _changePageButton; // +0x98
    MMUILabel * _privacyLabel; // +0xa0
    UIButton * _nextButton; // +0xa8
    UIButton * _bothDeviceButton; // +0xb0
    NSMutableArray * _moreButtonTypes; // +0xb8
}
- (id)init;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (void)setupWithData:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidBePushOrPresent:(BOOL)arg1;
- (void)didReceiveMemoryWarning;
- (BOOL)autoHandleKeyboardEvent;
- (BOOL)useSheetView;
- (BOOL)useRedesignStyle;
- (void)initView;
- (void)setPage:(unsigned long long)arg1;
- (id)titleForNextButton;
- (id)titleForChangePageButton;
- (id)privacy;
- (void)onNext;
- (void)onBothDeviceClicked;
- (void)onSwitch;
- (void)showOtherMethodPageSheet;
- (void)switchToUserLogin;
- (void)switchToPhoneLogin;
- (void)userDidClickBack;
- (void)userDidClickMore;
- (unsigned long long)getSignMethod;
- (void)onSignMethodSwitch:(unsigned long long)arg1;
- (unsigned long long)signMethod;
- (void)setSignMethod:(unsigned long long)arg1;
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
- (void).cxx_destruct;
@end

