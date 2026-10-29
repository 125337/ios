@interface WCPayLQTDepositDetailViewController : WCPayBaseViewController <WCActionSheetDelegate, MMRefreshTableFooterDelegate, UITableViewDelegate, UITableViewDataSource>
{
    id <WCPayLQTDepositDetailViewControllerDelegate> _m_delegate; // +0x90
    MMTableView * _m_tableView; // +0x98
    WCPayCss * _css; // +0xa0
    MMRefreshTableFooterView * _footerView; // +0xa8
    UILabel * _loadingLabel; // +0xb0
    MMUIActivityIndicatorView * _indicatorView; // +0xb8
    UIView * _containerView; // +0xc0
    UIView * _headerView; // +0xc8
    UIView * _moneyPanel; // +0xd0
    UILabel * _moneyTitle; // +0xd8
    UILabel * _moneyLabel; // +0xe0
    UIView * _moneyLine; // +0xe8
    UIView * _detailPanel; // +0xf0
    UIView * _statusRowView; // +0xf8
    UILabel * _statusTitle; // +0x100
    UILabel * _statusDetail; // +0x108
    UIView * _timeRowView; // +0x110
    UILabel * _timeTitle; // +0x118
    UILabel * _timeDetail; // +0x120
    UIView * _cardRowView; // +0x128
    UILabel * _cardTitle; // +0x130
    UIView * _cardLogoView; // +0x138
    WCPayWebImageView * _cardLogo; // +0x140
    UILabel * _cardDetail; // +0x148
    UIView * _noRecordView; // +0x150
    UILabel * _noRecordLabel; // +0x158
    unsigned long long _loadingState; // +0x160
    QryAutoPlanOrderListResp * _detailResp; // +0x168
    PlanIndexResp_PlanItem * _planItem; // +0x170
}
- (void)resetLoadingView;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewDidBeDismissed:(BOOL)arg1;
- (id)navigationBarBackgroundColor;
- (void)setDelegate:(id)arg1;
- (void)refreshViewWithData:(id)arg1;
- (void)viewDidLoad;
- (void)onOperate:(id)arg1;
- (void)reloadTableView;
- (void)updateHeaderView;
- (void)updateMoneyPanel;
- (void)updateMoneyTitle;
- (void)updateMoneyLabel;
- (void)updateMoneyLine;
- (void)updateDetailPanel;
- (void)updateStatusRowView;
- (void)updateStatusTitle;
- (void)updateStatusDetail;
- (void)updateTimeRowView;
- (void)updateTimeTitle;
- (void)updateTimeDetail;
- (void)updateCardRowView;
- (void)updateCardTitle;
- (void)updateCardLogo;
- (void)updateCardDetail;
- (void)updateNoRecordView;
- (void)updateNoRecordLabel;
- (void)updateFooterView;
- (void)updateLoadingLabel;
- (void)updateIndicator;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (int)nextMonth;
- (int)yearOfNextMonth;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_tableView;
- (void)setM_tableView:(id)arg1;
- (id)css;
- (void)setCss:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (id)loadingLabel;
- (void)setLoadingLabel:(id)arg1;
- (id)indicatorView;
- (void)setIndicatorView:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)headerView;
- (void)setHeaderView:(id)arg1;
- (id)moneyPanel;
- (void)setMoneyPanel:(id)arg1;
- (id)moneyTitle;
- (void)setMoneyTitle:(id)arg1;
- (id)moneyLabel;
- (void)setMoneyLabel:(id)arg1;
- (id)moneyLine;
- (void)setMoneyLine:(id)arg1;
- (id)detailPanel;
- (void)setDetailPanel:(id)arg1;
- (id)statusRowView;
- (void)setStatusRowView:(id)arg1;
- (id)statusTitle;
- (void)setStatusTitle:(id)arg1;
- (id)statusDetail;
- (void)setStatusDetail:(id)arg1;
- (id)timeRowView;
- (void)setTimeRowView:(id)arg1;
- (id)timeTitle;
- (void)setTimeTitle:(id)arg1;
- (id)timeDetail;
- (void)setTimeDetail:(id)arg1;
- (id)cardRowView;
- (void)setCardRowView:(id)arg1;
- (id)cardTitle;
- (void)setCardTitle:(id)arg1;
- (id)cardLogoView;
- (void)setCardLogoView:(id)arg1;
- (id)cardLogo;
- (void)setCardLogo:(id)arg1;
- (id)cardDetail;
- (void)setCardDetail:(id)arg1;
- (id)noRecordView;
- (void)setNoRecordView:(id)arg1;
- (id)noRecordLabel;
- (void)setNoRecordLabel:(id)arg1;
- (unsigned long long)loadingState;
- (void)setLoadingState:(unsigned long long)arg1;
- (id)detailResp;
- (void)setDetailResp:(id)arg1;
- (id)planItem;
- (void)setPlanItem:(id)arg1;
- (void).cxx_destruct;
@end

