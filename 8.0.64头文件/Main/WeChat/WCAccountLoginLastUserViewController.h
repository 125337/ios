@interface WCAccountLoginLastUserViewController : WCAccountBaseViewController <WCBaseInfoItemDelegate>
{
    id <WCAccountLoginLastUserViewControllerDelegate> m_delegate; // +0x80
    BOOL _noPasswordLoginError; // +0x88
    long long _m_iCount; // +0x90
    NSString * _name; // +0x98
    NSMutableArray * _supportLoginTypes; // +0xa0
    unsigned long long _currentLoginType; // +0xa8
    NSMutableArray * _moreButtonTypes; // +0xb0
    NSMutableArray * _switchLoginTypeWordings; // +0xb8
    UIImageView * _headImageView; // +0xc0
    MMUILabel * _titleLabel; // +0xc8
    MMUIButton * _switchButton; // +0xd0
    UIButton * _doneButton; // +0xd8
    UIButton * _bothDeviceButton; // +0xe0
    UIButton * _voicePrintButton; // +0xe8
    UIButton * _voicePrintSwitchButton; // +0xf0
    WCRedesignTextItem * _passwordTextItem; // +0xf8
    WCButtonListView * _bottomButtonView; // +0x100
    WCRedesignVerifyCodeTextItem * _verifyCodeTextItem; // +0x108
}
- (id)init;
- (void)dealloc;
- (void)initData;
- (void)initView;
- (void)initCommonView;
- (void)initHeaderView;
- (void)initVoicePrintView;
- (void)initPasswordView;
- (void)initVerifyCodeView;
- (void)initBottomButtonView;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidBePushOrPresent:(BOOL)arg1;
- (BOOL)autoHandleKeyboardEvent;
- (BOOL)useSheetView;
- (BOOL)useRedesignStyle;
- (BOOL)isUsingPhoneNumberVerifyCodeLoginType;
- (void)onNoPasswordLoginError;
- (void)onSwitchPasswordInput;
- (void)setDelegate:(id)arg1;
- (void)onMore;
- (BOOL)checkDebugCommand;
- (void)onNext;
- (void)onBothDeviceClicked;
- (void)onResendClicked;
- (void)startTimer;
- (void)refreshView;
- (id)checkDone;
- (void)setCurrentLoginType:(unsigned long long)arg1;
- (BOOL)isLastLoginAccountTypePhone;
- (BOOL)isLastQQLogin;
- (id)getDisplayLoginName;
- (id)getDisplayPhoneNumber;
- (id)getSwitchButtonTitleForLoginType:(unsigned long long)arg1;
- (id)getSwitchButtonTitleWithCurrentLoginType:(unsigned long long)arg1;
- (void)onSwitch;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)WCBaseInfoItemPressReturnKey:(id)arg1;
- (long long)m_iCount;
- (void)setM_iCount:(long long)arg1;
- (BOOL)noPasswordLoginError;
- (void)setNoPasswordLoginError:(BOOL)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)supportLoginTypes;
- (void)setSupportLoginTypes:(id)arg1;
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
- (void).cxx_destruct;
@end
