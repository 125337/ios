@interface WCPayF2FMiddleViewController : WCPayBaseViewController <WCActionSheetDelegate, WCPayF2FDynamicCodeCgiDelegate>
{
    unsigned int _m_amount; // +0x90
    id <WCPayF2FMiddleViewControllerDelegate> _m_delegate; // +0x98
    UIView * _m_headerView; // +0xa0
    UIView * _m_panelView; // +0xa8
    UIView * _m_headWordingBackView; // +0xb0
    UILabel * _m_headWordingView; // +0xb8
    UILabel * _m_moneyTitleView; // +0xc0
    UILabel * _m_moneyView; // +0xc8
    UIImageView * _m_qrcodeView; // +0xd0
    MMHeadImageView * _m_headImageView; // +0xd8
    WCPayWebImageView * _m_webImageView; // +0xe0
    UIImageView * _m_iconView; // +0xe8
    UIView * _m_lineView; // +0xf0
    UIView * _m_keyValueView; // +0xf8
    UIButton * _m_buttonView; // +0x100
    UIImageView * _m_footerIconView; // +0x108
    UILabel * _m_footerWordingView; // +0x110
    NSMutableArray * _m_keyListView; // +0x118
    NSMutableArray * _m_valueListView; // +0x120
    WCPayF2FDynamicCodeCgi * _m_f2fDynamicCodeCgi; // +0x128
    CgiF2FDynamicCodeResp * _m_f2fDynamicCodeResp; // +0x130
    NSString * _m_getDynamicCodeSign; // +0x138
    NSString * _m_getDynamicCodeExtend; // +0x140
    NSString * _m_dynamicCodeSpamWording; // +0x148
    MMTimer * _m_refreshTimer; // +0x150
}
- (void)dealloc;
- (void)viewDidLoad;
- (void)updateData;
- (void)viewDidLayoutSubviews;
- (void)didReceiveMemoryWarning;
- (void)updateNavigation;
- (void)refreshDynamicData;
- (void)setDelegate:(id)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)updateView;
- (void)updatePanelView;
- (void)updateHeadWordingBackView;
- (void)updateHeadWordingView;
- (void)updateMoneyTitleView;
- (void)updateMoneyView;
- (void)adjustMoney;
- (void)updateQrcodeView;
- (void)updateHeadImageView;
- (void)updateWebImageView;
- (void)updateIconView;
- (void)updateLineView;
- (void)updateKeyValueView;
- (void)updateButtonView;
- (void)updateFooterIconView;
- (void)updateFooterWordingView;
- (void)adjustFooter;
- (void)onWCPayF2FDynamicCodeCgi:(id)arg1 resp:(id)arg2;
- (void)onWCPayF2FDynamicCodeCgi:(id)arg1 netWorkError:(id)arg2;
- (void)reportWithAction:(unsigned long long)arg1;
- (void)timeToRefreshCode;
- (void)onLongPress:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)leftBarButtonItemClick;
- (void)closeView;
- (void)onClickTransfer;
- (void)callBackDelegate;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_headerView;
- (void)setM_headerView:(id)arg1;
- (id)m_panelView;
- (void)setM_panelView:(id)arg1;
- (id)m_headWordingBackView;
- (void)setM_headWordingBackView:(id)arg1;
- (id)m_headWordingView;
- (void)setM_headWordingView:(id)arg1;
- (id)m_moneyTitleView;
- (void)setM_moneyTitleView:(id)arg1;
- (id)m_moneyView;
- (void)setM_moneyView:(id)arg1;
- (id)m_qrcodeView;
- (void)setM_qrcodeView:(id)arg1;
- (id)m_headImageView;
- (void)setM_headImageView:(id)arg1;
- (id)m_webImageView;
- (void)setM_webImageView:(id)arg1;
- (id)m_iconView;
- (void)setM_iconView:(id)arg1;
- (id)m_lineView;
- (void)setM_lineView:(id)arg1;
- (id)m_keyValueView;
- (void)setM_keyValueView:(id)arg1;
- (id)m_buttonView;
- (void)setM_buttonView:(id)arg1;
- (id)m_footerIconView;
- (void)setM_footerIconView:(id)arg1;
- (id)m_footerWordingView;
- (void)setM_footerWordingView:(id)arg1;
- (id)m_keyListView;
- (void)setM_keyListView:(id)arg1;
- (id)m_valueListView;
- (void)setM_valueListView:(id)arg1;
- (id)m_f2fDynamicCodeCgi;
- (void)setM_f2fDynamicCodeCgi:(id)arg1;
- (id)m_f2fDynamicCodeResp;
- (void)setM_f2fDynamicCodeResp:(id)arg1;
- (unsigned int)m_amount;
- (void)setM_amount:(unsigned int)arg1;
- (id)m_getDynamicCodeSign;
- (void)setM_getDynamicCodeSign:(id)arg1;
- (id)m_getDynamicCodeExtend;
- (void)setM_getDynamicCodeExtend:(id)arg1;
- (id)m_dynamicCodeSpamWording;
- (void)setM_dynamicCodeSpamWording:(id)arg1;
- (id)m_refreshTimer;
- (void)setM_refreshTimer:(id)arg1;
- (void).cxx_destruct;
@end

