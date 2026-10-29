@interface WCPayResetDelayTransferDurationViewController : WCPayBaseViewController <WCPayResetDelayTipsNewModalDelegate>
{
    GetTransferWordingResponse * _wordingResponse; // +0x90
    unsigned long long _entryScene; // +0x98
    NSString * _selectedTitle; // +0xa0
    DelaySwitchSettingLogic * _delaySetting; // +0xa8
    UIButton * _footerBtn; // +0xb0
    NSString * _originSelectedTitle; // +0xb8
    WCPayResetDelayTipsNewModal * _resetDelayTipsModal; // +0xc0
    id <WCPayResetDelayTransferDurationViewControllerDelegate> _delegate; // +0xc8
}
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)setupWithData:(id)arg1;
- (void)refreshViewWithData:(id)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setupModel;
- (id)defaultSelectedTitle;
- (unsigned long long)switchType;
- (id)navigationBarBackgroundColor;
- (void)setupNavigationBar;
- (void)reloadTableView;
- (id)setupTableHeaderView;
- (void)setupTableFooterView;
- (void)makeCell:(id)arg1 cellInfo:(id)arg2;
- (void)selcetCell:(id)arg1;
- (void)footerBtnClick;
- (void)onWCPayResetDelayTipsNewModalTapConfirm;
- (void)onWCPayResetDelayTipsNewModalTapCancel;
- (void)onOpenQA;
- (void)reportAction:(id)arg1 withSelectedSwitchState:(id)arg2;
- (id)wordingResponse;
- (void)setWordingResponse:(id)arg1;
- (unsigned long long)entryScene;
- (void)setEntryScene:(unsigned long long)arg1;
- (id)selectedTitle;
- (void)setSelectedTitle:(id)arg1;
- (id)delaySetting;
- (void)setDelaySetting:(id)arg1;
- (id)footerBtn;
- (void)setFooterBtn:(id)arg1;
- (id)originSelectedTitle;
- (void)setOriginSelectedTitle:(id)arg1;
- (id)resetDelayTipsModal;
- (void)setResetDelayTipsModal:(id)arg1;
- (id)delegate;
- (void).cxx_destruct;
@end

