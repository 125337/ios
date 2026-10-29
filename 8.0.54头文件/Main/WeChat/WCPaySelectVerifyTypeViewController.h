@interface WCPaySelectVerifyTypeViewController : WCPayBaseViewController <WCPaySelectVerifyTypeViewV2Delegate>
{
    id <WCPaySelectVerifyTypeViewControllerDelegate> m_delegate; // +0x90
    NSString * bindCardTitle; // +0x98
    NSString * bindCardSubTitle; // +0xa0
    NSString * bindIdTitle; // +0xa8
    NSString * bindIdSubTitle; // +0xb0
    NSString * extralWording; // +0xb8
    BOOL questionAnswerSwitch; // +0xc0
    NSString * questionAnswerUrl; // +0xc8
    BOOL isShowBindCard; // +0xd0
    BOOL isShowRealnameVerify; // +0xd1
    BOOL isShowBindCardVerify; // +0xd2
    NSString * bindCardVerifyTitle; // +0xd8
    NSString * bindCardVerifySubTitle; // +0xe0
    BOOL isNeedShowBindCardVerifyAlertView; // +0xe8
    NSString * bindCardVeifyAlertViewRightButtonText; // +0xf0
    NSString * bindCardVeifyAlertViewContent; // +0xf8
    GetRealnameWordingRsp * _wording; // +0x100
    InternalTask * _m_internalTask; // +0x108
    WCPayJumpRemindInfo * _jumpRemindInfo; // +0x110
    WCPayJumpRemindControlLogic * _jumpRemindControlLogic; // +0x118
    UIImageView * _m_iconForSafeTips; // +0x120
    UIButton * _m_buttonForSafeTips; // +0x128
    UIImageView * _m_arrowForSafeTips; // +0x130
    UIView * _m_safeTipsBase; // +0x138
    UILabel * _m_titleLabel; // +0x140
    WCPaySelectVerifyTypeViewV2 * _layoutV2; // +0x148
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

