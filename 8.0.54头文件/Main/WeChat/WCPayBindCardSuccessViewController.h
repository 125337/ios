@interface WCPayBindCardSuccessViewController : WCPayBaseViewController <WCPaySendBindCardAwardCgiDelegate, WCPayQueryBindCardAwardCgiDelegate>
{
    BOOL _m_disableAwardButton; // +0x90
    BOOL _m_needQuery; // +0x91
    UIView * _m_headerView; // +0x98
    UIImageView * _m_iconView; // +0xa0
    UILabel * _m_titleLabel; // +0xa8
    UILabel * _m_descLabel; // +0xb0
    UIView * _m_topLineView; // +0xb8
    WCPayWebImageView * _m_bankIconView; // +0xc0
    UIImageView * _m_tinyAppIconView; // +0xc8
    UILabel * _m_bankTitleLabel; // +0xd0
    UILabel * _m_bankDescLabel; // +0xd8
    UIButton * _m_bankButton; // +0xe0
    UIView * _m_bottomLineView; // +0xe8
    UIButton * _m_doneButton; // +0xf0
    id <WCPayBindCardSuccessViewControllerDelegate> _m_delegate; // +0xf8
    WCPayBindCardSuccessResponse * _m_response; // +0x100
    WCPaySendBindCardAwardCgi * _m_sendAwardCgi; // +0x108
    WCPayQueryBindCardAwardCgi * _m_queryAwardCgi; // +0x110
}
+ (void)reportShowViewWithActivityId:(id)arg1 bindSerial:(id)arg2 bankType:(id)arg3;
+ (void)reportClickDiscountWithActivityId:(id)arg1 bindSerial:(id)arg2 bankType:(id)arg3;
+ (void)report14877WithActivityId:(id)arg1 bindSerial:(id)arg2 reportType:(int)arg3 bankType:(id)arg4;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)arg1;
- (void)startSendBindCardAwardCgi;
- (void)viewDidLoad;
- (void)reloadView;
- (void)updateIconView;
- (void)updateTitleLabel;
- (id)titleLabelText;
- (void)updateDescLabel;
- (void)updateTopLineView;
- (void)updateBankIconView;
- (void)updateTinyAppIconView;
- (void)updateBankTitleLabel;
- (void)updateBankDescLabel;
- (void)updateBankButton;
- (void)updateBottomLineLabel;
- (void)updateDoneButton;
- (void)onClickDone;
- (void)onClickBankButton;
- (void)didReceiveMemoryWarning;
- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (void)setDelegate:(id)arg1;
- (id)awardButtonTitle;
- (id)awardIconUrl;
- (id)awardTitle;
- (id)awardDesc;
- (BOOL)awardButtonEnable;
- (BOOL)showActivity;
- (void)onWCPaySendBindCardAwardCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)onWCPaySendBindCardAwardCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)onWCPayQueryBindCardAwardCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)onWCPayQueryBindCardAwardCgi:(id)arg1 didFailWithError:(id)arg2;
- (BOOL)isiPadLandscape;
- (id)m_headerView;
- (void)setM_headerView:(id)arg1;
- (id)m_iconView;
- (void)setM_iconView:(id)arg1;
- (id)m_titleLabel;
- (void)setM_titleLabel:(id)arg1;
- (id)m_descLabel;
- (void)setM_descLabel:(id)arg1;
- (id)m_topLineView;
- (void)setM_topLineView:(id)arg1;
- (id)m_bankIconView;
- (void)setM_bankIconView:(id)arg1;
- (id)m_tinyAppIconView;
- (void)setM_tinyAppIconView:(id)arg1;
- (id)m_bankTitleLabel;
- (void)setM_bankTitleLabel:(id)arg1;
- (id)m_bankDescLabel;
- (void)setM_bankDescLabel:(id)arg1;
- (id)m_bankButton;
- (void)setM_bankButton:(id)arg1;
- (id)m_bottomLineView;
- (void)setM_bottomLineView:(id)arg1;
- (id)m_doneButton;
- (void)setM_doneButton:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_response;
- (void)setM_response:(id)arg1;
- (id)m_sendAwardCgi;
- (void)setM_sendAwardCgi:(id)arg1;
- (id)m_queryAwardCgi;
- (void)setM_queryAwardCgi:(id)arg1;
- (BOOL)m_disableAwardButton;
- (void)setM_disableAwardButton:(BOOL)arg1;
- (BOOL)m_needQuery;
- (void)setM_needQuery:(BOOL)arg1;
- (void).cxx_destruct;
@end

