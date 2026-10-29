@interface WCPayWalletViewController : WCPayBaseViewController <WCPayLogicMgrExt, WCPayTableCellViewNumberExt, UITableViewDelegate, UITableViewDataSource, WCPayWalletUpdateExt, WCPaySecuritySettingViewControllerDelegate, MMWebViewDelegate, WCPayCustomModalViewDelegate, WCPayVoidCallbackDelegate, HoneyPayHomeControlLogicDelegate, WCPayQueryWeChatWalletCgiDelegate, MMUseCaseCallback, WCPayLQTOnClickRedDotCgiDelegate>
{
    BOOL _m_hasShowModalView; // +0x90
    BOOL _hasConfigNumber; // +0x91
    id <WCPayWalletViewControllerDelegate> _m_delegate; // +0x98
    WCPayControlData * _m_oPayData; // +0xa0
    WCPayQueryWeChatWalletCgi * _m_walletCgi; // +0xa8
    QueryWeChatWalletResponse * _m_walletCgiResp; // +0xb0
    WCPayLQTOnClickRedDotCgi * _m_lqtOnClickRedDotCgi; // +0xb8
    NSMutableArray * _m_bottomTextArray; // +0xc0
    WCPayCustomModalView * _m_modalView; // +0xc8
    UITableView * _m_tableView; // +0xd0
    TimeoutNumber * _balanceNumber; // +0xd8
    TimeoutNumber * _lqtNumber; // +0xe0
    NSDictionary * _bannerDict; // +0xe8
    double _timeout; // +0xf0
    NSMutableDictionary * _redDotReportStateDict; // +0xf8
}
- (void)dealloc;
- (id)init;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)updateWalletData;
- (void)onLqtRedDotClicked:(id)arg1;
- (void)mayDelayUpdateWalletData;
- (void)updateView;
- (void)updateBalanceNumber;
- (void)updateLqtNumber;
- (void)viewDidLayoutSubviews;
- (void)initNavigationBar;
- (void)updateNavigationBar;
- (id)getNoticeBanner;
- (void)onRightBarButtonClick;
- (void)reloadTableView;
- (void)updateBottomView;
- (void)clickH5Cell:(id)arg1;
- (void)clickTinyAppCell:(id)arg1;
- (void)clickBankCard;
- (void)clickBalance;
- (void)clickLqt;
- (void)clickLqtWithTraceInfo:(id)arg1;
- (void)clickHoneyPay;
- (void)clickPaySecurity;
- (void)clickRealname;
- (void)clickPaySettings;
- (void)onRealnameVerfitySuccessNotification:(id)arg1;
- (void)onWCPayQueryWeChatWalletCgiResp:(id)arg1 fromServer:(BOOL)arg2;
- (void)update:(id)arg1 number:(id)arg2 fontAndColorFrom:(id)arg3;
- (void)onWCPayQueryWeChatWalletCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)honeyPayHomeLogicDidStop:(id)arg1;
- (void)onWCPayVoidCallbackWithUserInfo:(id)arg1;
- (void)onWCPayCustomModalViewToWeb:(id)arg1 fromButton:(BOOL)arg2;
- (void)onWCPayCustomModalViewDidCancel:(id)arg1;
- (void)onWCPayCustomModalViewDidConfirm:(id)arg1;
- (void)webViewDidReturn:(id)arg1;
- (void)onWCPayWalletUpdateDidCall;
- (void)onWCPayWalletLQTBalanceChange;
- (void)reportWithAction:(unsigned long long)arg1 CellId:(id)arg2 CellType:(unsigned long long)arg3;
- (void)onWCPaySecuritySettingViewControllerBack;
- (void)onWCPaySecuritySettingViewControllerDidCallUpdate;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)updateCellAccessibilitylabel:(id)arg1 viewData:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)getNumberView:(id)arg1 font:(id)arg2 color:(id)arg3;
- (id)getAccessibilityLabelStringForView:(id)arg1;
- (void)OnGetBindQueryInfo:(id)arg1 Error:(id)arg2;
- (void)onGetLQTOnClickRedDotResp:(id)arg1;
- (void)call:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_oPayData;
- (void)setM_oPayData:(id)arg1;
- (id)m_walletCgi;
- (void)setM_walletCgi:(id)arg1;
- (id)m_walletCgiResp;
- (void)setM_walletCgiResp:(id)arg1;
- (id)m_lqtOnClickRedDotCgi;
- (void)setM_lqtOnClickRedDotCgi:(id)arg1;
- (id)m_bottomTextArray;
- (void)setM_bottomTextArray:(id)arg1;
- (id)m_modalView;
- (void)setM_modalView:(id)arg1;
- (BOOL)m_hasShowModalView;
- (void)setM_hasShowModalView:(BOOL)arg1;
- (id)m_tableView;
- (void)setM_tableView:(id)arg1;
- (id)balanceNumber;
- (void)setBalanceNumber:(id)arg1;
- (id)lqtNumber;
- (void)setLqtNumber:(id)arg1;
- (BOOL)hasConfigNumber;
- (void)setHasConfigNumber:(BOOL)arg1;
- (id)bannerDict;
- (void)setBannerDict:(id)arg1;
- (double)timeout;
- (void)setTimeout:(double)arg1;
- (id)redDotReportStateDict;
- (void)setRedDotReportStateDict:(id)arg1;
- (void).cxx_destruct;
@end

