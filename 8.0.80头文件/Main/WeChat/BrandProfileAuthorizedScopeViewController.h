@interface BrandProfileAuthorizedScopeViewController : MMUIViewController <BrandProfileAuthorizedScopeTableCellDelegate, UITableViewDelegate, UITableViewDataSource, PBMessageObserverDelegate>
{
    BOOL _isManaging; // +0x70
    UIView * _tableHeaderView; // +0x78
    MMWebImageView * _appIconImageView; // +0x80
    MMUILabel * _appNameLabel; // +0x88
    MMUILabel * _titleLabel; // +0x90
    MMTableView * _tableView; // +0x98
    UIView * _tableFooterView; // +0xa0
    UIButton * _manageButton; // +0xa8
    UIView * _footerSeperatorLine; // +0xb0
    CContact * _brandContact; // +0xb8
    NSString * _appId; // +0xc0
    NSMutableArray * _arrTableViewModels; // +0xc8
}
- (id)initWithViewModels:(id)arg1 contact:(id)arg2 appId:(id)arg3;
- (id)appId;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)setupTableView;
- (void)initTableHeader;
- (void)initTableFooter;
- (void)layoutTableHeader;
- (void)layoutTableFooter;
- (double)tableviewContentHeight;
- (id)navigationBarBackgroundColor;
- (void)onManageButtonClicked;
- (void)onCellDeleteButtonClicked:(id)arg1;
- (BOOL)isContextMenuEnabled:(id)arg1;
- (void)onStartManage;
- (void)onEndManage;
- (void)notifyToDeleteWithViewModel:(id)arg1;
- (void)initDataWithWrap:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)openConfirmActionSheetWithViewModel:(id)arg1;
- (void)requestAuthorizedInfo;
- (void)handleModBizUseUserInfoResponse:(id)arg1;
- (void)handleGetBizAuthInfoResponse:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)tableHeaderView;
- (void)setTableHeaderView:(id)arg1;
- (id)appIconImageView;
- (void)setAppIconImageView:(id)arg1;
- (id)appNameLabel;
- (void)setAppNameLabel:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)tableFooterView;
- (void)setTableFooterView:(id)arg1;
- (id)manageButton;
- (void)setManageButton:(id)arg1;
- (id)footerSeperatorLine;
- (void)setFooterSeperatorLine:(id)arg1;
- (BOOL)isManaging;
- (void)setIsManaging:(BOOL)arg1;
- (id)brandContact;
- (void)setBrandContact:(id)arg1;
- (void)setAppId:(id)arg1;
- (id)arrTableViewModels;
- (void)setArrTableViewModels:(id)arg1;
- (void).cxx_destruct;
@end
