@interface WCPayLQTDepositPlanListViewController : WCPayBaseViewController <UITableViewDelegate, UITableViewDataSource, WCActionSheetDelegate>
{
    MMTableView * m_tableView; // +0x90
    id <WCPayLQTDepositPlanListViewControllerDelegate> m_delegate; // +0x98
    NSArray * _planList; // +0xa0
    UIView * _navBackground; // +0xa8
    UIImageView * _iconImageView; // +0xb0
    UILabel * _titleLabel; // +0xb8
    UILabel * _descLabel; // +0xc0
    UIView * _contentView; // +0xc8
    UIButton * _confirmButton; // +0xd0
    WCPayCss * _css; // +0xd8
    UIView * _containerView; // +0xe0
    UIView * _headerView; // +0xe8
    UIImageView * _emptyIcon; // +0xf0
    UILabel * _emptyLabel; // +0xf8
    UIView * _emptyFooterView; // +0x100
    UIView * _addView; // +0x108
    UIImageView * _addIcon; // +0x110
    UILabel * _addLabel; // +0x118
}
- (void)updateContainerView;
- (void)updateHeaderView;
- (void)updateEmptyIcon;
- (void)updateEmptyLabel;
- (void)updateEmptyFooterView;
- (void)updateAddView;
- (void)onClickAddView;
- (void)updateAddIcon;
- (void)updateAddLabel;
- (void)setDelegate:(id)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)initNavigationBar;
- (void)onBack;
- (void)viewDidLoad;
- (id)navigationBarBackgroundColor;
- (void)viewDidLayoutSubviews;
- (void)refreshViewWithData:(id)arg1;
- (void)addNavigationBarBackground:(id)arg1;
- (id)navBackground;
- (void)onNewDepositPlanBtnClick:(id)arg1;
- (void)updateTableView;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)bannerBtnClick;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)makePlanItemCellView:(id)arg1 cell:(id)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)makeAddNewPlanCell:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)planList;
- (void)setPlanList:(id)arg1;
- (void)setNavBackground:(id)arg1;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg1;
- (id)css;
- (void)setCss:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)headerView;
- (void)setHeaderView:(id)arg1;
- (id)emptyIcon;
- (void)setEmptyIcon:(id)arg1;
- (id)emptyLabel;
- (void)setEmptyLabel:(id)arg1;
- (id)emptyFooterView;
- (void)setEmptyFooterView:(id)arg1;
- (id)addView;
- (void)setAddView:(id)arg1;
- (id)addIcon;
- (void)setAddIcon:(id)arg1;
- (id)addLabel;
- (void)setAddLabel:(id)arg1;
- (void).cxx_destruct;
@end

