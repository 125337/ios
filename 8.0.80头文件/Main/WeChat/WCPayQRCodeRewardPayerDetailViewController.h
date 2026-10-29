@interface WCPayQRCodeRewardPayerDetailViewController : WCPayBaseViewController
{
    id <WCPayQRCodeRewardPayerDetailViewControllerDelegate> _delegate; // +0x98
    MMTableView * _tableView; // +0xa0
    WCPayNoticeItemView * _noticeItemView; // +0xa8
}
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)navigationBarBackgroundColor;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)setupContentView;
- (void)setupTableHeaderView;
- (void)setupTableFooterView;
- (void)leftBarButtonClick;
- (void)amountBtnClick:(id)arg1;
- (void)editMoneyBtnClick;
- (id)delegate;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)noticeItemView;
- (void)setNoticeItemView:(id)arg1;
- (void).cxx_destruct;
@end
