@interface WCAccountLoginLastUserViewController : WCAccountBaseViewController <WCBaseInfoItemDelegate>
{
    id <WCAccountLoginLastUserViewControllerDelegate> m_delegate; // +0x80
    BOOL _noPasswordLoginError; // +0x88
    BOOL _showPasskeyView; // +0x89
    BOOL _isNeedToGotoMain; // +0x8a
    BOOL _isFromLogin; // +0x8b
    BOOL _isButtonLoading; // +0x8c
    BOOL _fastSwitchButtonNeedReport; // +0x8d
    long long _m_iCount; // +0x90
    NSString * _name; // +0x98
    NSMutableArray * _supportLoginTypes; // +0xa0
    NSMutableArray * _switchBlackListLoginTypes; // +0xa8
    unsigned long long _currentLoginType; // +0xb0
    NSMutableArray * _moreButtonTypes; // +0xb8
    NSMutableArray * _switchLoginTypeWordings; // +0xc0
    UIImageView * _headImageView; // +0xc8
    MMUILabel * _titleLabel; // +0xd0
    MMUIButton * _switchButton; // +0xd8
    UIButton * _doneButton; // +0xe0
    UIButton * _bothDeviceButton; // +0xe8
    UIButton * _noPwdButton; // +0xf0
    UIButton * _passkeyButton; // +0xf8
    UIButton * _gatewayButton; // +0x100
    UIButton * _loginSwitchButton; // +0x108
    UIButton * _voicePrintButton; // +0x110
    UIButton * _voicePrintSwitchButton; // +0x118
    WCRedesignTextItem * _passwordTextItem; // +0x120
    WCButtonListView * _bottomButtonView; // +0x128
    WCRedesignVerifyCodeTextItem * _verifyCodeTextItem; // +0x130
    WCAgreementCheckBox * _agreeSyncMsgCheckBox; // +0x138
    UIButton * _fastSwitchButton; // +0x140
    double _fastSwitchCheckTimestamp; // +0x148
    WCAccountFastSwitchLogic * _fastSwitchLogic; // +0x150
}
- (id)init;
- (BOOL)isFastSwitchLoginAllow;
- (void)checkMainDeviceOnline;
- (void)initSwitchBlackList;
- (void)dealloc;
- (void)initData;
- (void)initView;
- (void)initFastSwitchView;
- (void)blockFastSwitchLogin;
- (void)onFastSwitchLoginFailAndReDispatch;
- (void)onFastSwitchLoginCancelByMyself;
- (BOOL)isLoginTypeAllowed:(unsigned long long)arg1;
- (void)showFastSwitchLogin;
- (void)onFastSwitchLoginClickAndReport;
- (void)onFastSwitchLoginMoreClick;
- (void)initCommonView;
- (void)initHeaderView;
- (void)initNoPwdView;
- (void)initPasskeyView;
- (void)initGatewayView;
- (void)initVoicePrintView;
- (void)initPasswordView;
- (void)initVerifyCodeView;
- (void)initBottomButtonView;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidBePushOrPresent:(BOOL)arg1;
- (BOOL)autoHandleKeyboardEvent;
- (BOOL)useSheetView;
- (BOOL)useRedesignStyle;
- (BOOL)isUsingPhoneNumberVerifyCodeLoginType;
- (void)onNoPasswordLoginError;
- (void)clearNoPwdTicket;
- (void)onGatewayLoginError;
- (void)onVoiceLoginOverLimit;
- (void)setDelegate:(id)arg1;
- (void)onMore;
- (BOOL)checkDebugCommand;
- (void)onNext;
- (void)onBothDeviceClicked;
- (void)onResendClicked;
- (void)startTimer;
- (void)addAgreesyncMsgCheckBox;
- (void)refreshSwitchButton;
- (void)refreshView;
- (id)checkDone;
- (void)setCurrentLoginType:(unsigned long long)arg1;
- (void)setOnlyCurrentLoginType:(unsigned long long)arg1;
- (BOOL)isBakDeviceOrPad;
- (BOOL)isSurportNoPwdLogin;
- (BOOL)isLastLoginAccountTypePhone;
- (BOOL)isLastQQLogin;
- (id)getDisplayLoginName;
- (id)getDisplayPhoneNumber;
- (id)getSwitchButtonTitleForLoginType:(unsigned long long)arg1;
- (id)getSwitchButtonTitleWithCurrentLoginType:(unsigned long long)arg1 singleButton:(BOOL)arg2;
- (void)onSingleButtonSwitch;
- (void)onFastSwitch;
- (void)onSwitch:(BOOL)arg1;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)WCBaseInfoItemPressReturnKey:(id)arg1;
- (void)initDataReportData;
- (unsigned long long)getLoginMethod:(unsigned long long)arg1;
- (void)tryDispatchLoginType;
- (void)tryDispatchLoginTypeWithBlackList:(id)arg1;
- (long long)getSupportLoginTypeCount;
- (void)changeButtonLoadingStatus:(id)arg1 title:(id)arg2 showLoading:(BOOL)arg3;
- (BOOL)isBtnLoading;
- (void)enableLoginButtonChange;
- (void)startLoadingBlocked;
- (void)stopLoading;
- (unsigned char)isEnableChange;
- (long long)m_iCount;
- (void)setM_iCount:(long long)arg1;
- (BOOL)noPasswordLoginError;
- (void)setNoPasswordLoginError:(BOOL)arg1;
- (BOOL)showPasskeyView;
- (void)setShowPasskeyView:(BOOL)arg1;
- (BOOL)isNeedToGotoMain;
- (void)setIsNeedToGotoMain:(BOOL)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)supportLoginTypes;
- (void)setSupportLoginTypes:(id)arg1;
- (id)switchBlackListLoginTypes;
- (void)setSwitchBlackListLoginTypes:(id)arg1;
- (unsigned long long)currentLoginType;
- (id)moreButtonTypes;
- (void)setMoreButtonTypes:(id)arg1;
- (id)switchLoginTypeWordings;
- (void)setSwitchLoginTypeWordings:(id)arg1;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)switchButton;
- (void)setSwitchButton:(id)arg1;
- (id)doneButton;
- (void)setDoneButton:(id)arg1;
- (id)bothDeviceButton;
- (void)setBothDeviceButton:(id)arg1;
- (id)noPwdButton;
- (void)setNoPwdButton:(id)arg1;
- (id)passkeyButton;
- (void)setPasskeyButton:(id)arg1;
- (id)gatewayButton;
- (void)setGatewayButton:(id)arg1;
- (id)loginSwitchButton;
- (void)setLoginSwitchButton:(id)arg1;
- (id)voicePrintButton;
- (void)setVoicePrintButton:(id)arg1;
- (id)voicePrintSwitchButton;
- (void)setVoicePrintSwitchButton:(id)arg1;
- (id)passwordTextItem;
- (void)setPasswordTextItem:(id)arg1;
- (id)bottomButtonView;
- (void)setBottomButtonView:(id)arg1;
- (id)verifyCodeTextItem;
- (void)setVerifyCodeTextItem:(id)arg1;
- (BOOL)isFromLogin;
- (void)setIsFromLogin:(BOOL)arg1;
- (BOOL)isButtonLoading;
- (void)setIsButtonLoading:(BOOL)arg1;
- (id)agreeSyncMsgCheckBox;
- (void)setAgreeSyncMsgCheckBox:(id)arg1;
- (id)fastSwitchButton;
- (void)setFastSwitchButton:(id)arg1;
- (double)fastSwitchCheckTimestamp;
- (void)setFastSwitchCheckTimestamp:(double)arg1;
- (id)fastSwitchLogic;
- (void)setFastSwitchLogic:(id)arg1;
- (BOOL)fastSwitchButtonNeedReport;
- (void)setFastSwitchButtonNeedReport:(BOOL)arg1;
- (void).cxx_destruct;
@end
