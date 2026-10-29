@interface WCPaySelectVerifyTypeViewController : WCPayBaseViewController <WCPaySelectVerifyTypeViewV2Delegate>
{
    id <WCPaySelectVerifyTypeViewControllerDelegate> m_delegate; // +0x98
    NSString * bindCardTitle; // +0xa0
    NSString * bindCardSubTitle; // +0xa8
    NSString * bindIdTitle; // +0xb0
    NSString * bindIdSubTitle; // +0xb8
    NSString * extralWording; // +0xc0
    BOOL questionAnswerSwitch; // +0xc8
    NSString * questionAnswerUrl; // +0xd0
    BOOL isShowBindCard; // +0xd8
    BOOL isShowRealnameVerify; // +0xd9
    BOOL isShowBindCardVerify; // +0xda
    NSString * bindCardVerifyTitle; // +0xe0
    NSString * bindCardVerifySubTitle; // +0xe8
    BOOL isNeedShowBindCardVerifyAlertView; // +0xf0
    NSString * bindCardVeifyAlertViewRightButtonText; // +0xf8
    NSString * bindCardVeifyAlertViewContent; // +0x100
    GetRealnameWordingRsp * _wording; // +0x108
    InternalTask * _m_internalTask; // +0x110
    WCPayJumpRemindInfo * _jumpRemindInfo; // +0x118
    WCPayJumpRemindControlLogic * _jumpRemindControlLogic; // +0x120
    UIImageView * _m_iconForSafeTips; // +0x128
    UIButton * _m_buttonForSafeTips; // +0x130
    UIImageView * _m_arrowForSafeTips; // +0x138
    UIView * _m_safeTipsBase; // +0x140
    UILabel * _m_titleLabel; // +0x148
    WCPaySelectVerifyTypeViewV2 * _layoutV2; // +0x150
}
- (id)init;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLayoutSubviews;
- (void)viewWillBePushed:(BOOL)arg1;
- (void)viewWillBePresented:(BOOL)arg1;
- (void)reloadTableView;
- (void)OnBack;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (id)headerView;
- (id)createDotLabel;
- (void)realSelectBindCard;
- (void)selectRealnameVerify;
- (void)onContinueSelectRealnameVerify;
- (void)realSelectRealnameVerify:(id)arg1;
- (void)realSelectBindCardVerify;
- (void)getWording;
- (void)populateData:(id)arg1;
- (void)onRightBarButtonClick;
- (void)onWCPayPrivacyViewControllerClickAgree:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)updateIconForSafeTips;
- (void)updateArrowForSafeTips;
- (void)adjustBottomTips;
- (void)clickSafeTips;
- (id)navigationBarBackgroundColor;
- (void)onWCPaySelectVerifyTypeViewV2ClickSafeTips;
- (void)onWCPaySelectVerifyTypeViewV2ClickRealName;
- (id)onWCPaySelectVerifyTypeViewV2TableViewInfo;
- (id)wording;
- (void)setWording:(id)arg1;
- (id)m_internalTask;
- (void)setM_internalTask:(id)arg1;
- (id)jumpRemindInfo;
- (void)setJumpRemindInfo:(id)arg1;
- (id)jumpRemindControlLogic;
- (void)setJumpRemindControlLogic:(id)arg1;
- (id)m_iconForSafeTips;
- (void)setM_iconForSafeTips:(id)arg1;
- (id)m_buttonForSafeTips;
- (void)setM_buttonForSafeTips:(id)arg1;
- (id)m_arrowForSafeTips;
- (void)setM_arrowForSafeTips:(id)arg1;
- (id)m_safeTipsBase;
- (void)setM_safeTipsBase:(id)arg1;
- (id)m_titleLabel;
- (void)setM_titleLabel:(id)arg1;
- (id)layoutV2;
- (void)setLayoutV2:(id)arg1;
- (void).cxx_destruct;
@end
