@interface WCBizBaseViewController : MMUIViewController <MMTableViewInfoDelegate, WCBaseInfoItemDelegate>
{
    MMTableViewInfo * m_tableViewInfo; // +0x68
    UILabel * m_powerByTenpay; // +0x70
    id <WCBizBaseViewControllerDelegate> m_oBizBaseViewControllerDelegate; // +0x78
    BOOL _hasReportedShown; // +0x80
    BOOL _hasReportedDismiss; // +0x81
    long long _tableViewStyle; // +0x88
}
- (id)init;
- (void)viewDidBePushOrPresent:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)initData;
- (void)OnBack;
- (void)initNavigationBar;
- (void)callViewDidLoad;
- (void)initView;
- (void)viewDidLayoutSubviews;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)stopLoading;
- (void)addPowerByTenpayTip;
- (void)viewDidLoad;
- (void)setWCBizAuthTitle:(id)arg1 TextColor:(id)arg2;
- (void)setWCBizAuthTitle:(id)arg1;
- (void)setTitle:(id)arg1 subTitle:(id)arg2;
- (void)setNormalTitle:(id)arg1;
- (void)dealloc;
- (void)suppressInherentTableView;
- (void)OnDataChange;
- (void)makeInfoCell:(id)arg1 cellInfo:(id)arg2;
- (void)clickInfoCell:(id)arg1;
- (id)makeFooter:(id)arg1;
- (id)getSectionFromGroup:(id)arg1;
- (void)OnComfireEnsureAlert;
- (void)showEnsureAlert:(id)arg1 Title:(id)arg2;
- (void)onEnsureAlertConfirm;
- (void)footerTipAction:(id)arg1;
- (void)setBizBaseViewControllerDelegate:(id)arg1;
- (long long)tableViewStyle;
- (void)setTableViewStyle:(long long)arg1;
- (BOOL)hasReportedShown;
- (void)setHasReportedShown:(BOOL)arg1;
- (BOOL)hasReportedDismiss;
- (void)setHasReportedDismiss:(BOOL)arg1;
- (void).cxx_destruct;
@end

