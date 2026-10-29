@interface WCPayWalletEntranceStateViewController : WCPayBaseViewController <WCPaySetWalletEntranceBalanceSwitchStateCgiDelegate, WCPayQueryWalletEntranceBalanceSwitchStateCgiDelegate>
{
    id <WCPayWalletEntranceStateViewControllerDelegate> _m_delegate; // +0x90
    WCPayQueryWalletEntranceBalanceSwitchStateCgi * _m_getStateCgi; // +0x98
    WCPaySetWalletEntranceBalanceSwitchStateCgi * _m_setStateCgi; // +0xa0
    QueryWalletEntranceBalanceSwitchResp * _m_getStateResponse; // +0xa8
    UIView * _m_headerView; // +0xb0
    UIImageView * _m_icon; // +0xb8
    UILabel * _m_titleLabel; // +0xc0
    WCPayLineSeparatorView * _m_panelView; // +0xc8
    UISwitch * _m_itemSwtich; // +0xd0
}
- (BOOL)hasClickSwitch;
- (void)setHasClickSwitch:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)navigationBarBackgroundColor;
- (void)updateData;
- (void)updateView;
- (void)updateIcon;
- (void)updateTitleLabel;
- (void)updatePanelView;
- (void)onClickSwitch;
- (void)onWCPaySetWalletEntranceBalanceSwitchStateCgiResp:(id)arg1;
- (void)onWCPaySetWalletEntranceBalanceSwitchStateCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPayQueryWalletEntranceBalanceSwitchStateCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPayQueryWalletEntranceBalanceSwitchStateCgiResp:(id)arg1 fromServer:(BOOL)arg2;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_getStateCgi;
- (void)setM_getStateCgi:(id)arg1;
- (id)m_setStateCgi;
- (void)setM_setStateCgi:(id)arg1;
- (id)m_getStateResponse;
- (void)setM_getStateResponse:(id)arg1;
- (id)m_headerView;
- (void)setM_headerView:(id)arg1;
- (id)m_icon;
- (void)setM_icon:(id)arg1;
- (id)m_titleLabel;
- (void)setM_titleLabel:(id)arg1;
- (id)m_panelView;
- (void)setM_panelView:(id)arg1;
- (id)m_itemSwtich;
- (void)setM_itemSwtich:(id)arg1;
- (void).cxx_destruct;
@end

