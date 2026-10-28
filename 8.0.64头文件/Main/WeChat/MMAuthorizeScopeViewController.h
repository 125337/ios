@interface MMAuthorizeScopeViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource>
{
    unsigned int _fromScene; // +0x70
    NSString * _appName; // +0x78
    NSString * _iconUrl; // +0x80
    OauthScopeInfo * _scopeInfo; // +0x88
    id <MMAuthorizeViewControllerDelegate> _delegate; // +0x90
    NSMutableArray * _scopeInfoList; // +0x98
    MMTableView * _tableView; // +0xa0
    MMAuthorizeScopeTopView * _tableHeaderView; // +0xa8
    UIView * _tableFooterView; // +0xb0
    UIButton * _comfirmBtn; // +0xb8
    UIButton * _denyBtn; // +0xc0
    NSMutableArray * _arrSelect; // +0xc8
    NSString * _cloudGameScopeWording; // +0xd0
}
- (id)initWithAppName:(id)arg1 iconUrl:(id)arg2 scopeInfoList:(id)arg3 cloudGameScopeWording:(id)arg4;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (id)navigationBarBackgroundColor;
- (void)initNavigationBar;
- (void)onReturn;
- (BOOL)shouldInteractivePop;
- (void)initData;
- (id)comfirmScopeInfoList;
- (void)initSubViews;
- (void)initTableHeaderView;
- (void)layoutTableHeaderView;
- (void)initTableFooterView;
- (void)layoutTableFooterView;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)onComfirmBtnClick;
- (void)onDenyBtnClick;
- (id)appName;
- (void)setAppName:(id)arg1;
- (id)iconUrl;
- (void)setIconUrl:(id)arg1;
- (id)scopeInfo;
- (void)setScopeInfo:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)scopeInfoList;
- (void)setScopeInfoList:(id)arg1;
- (unsigned int)fromScene;
- (void)setFromScene:(unsigned int)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)tableHeaderView;
- (void)setTableHeaderView:(id)arg1;
- (id)tableFooterView;
- (void)setTableFooterView:(id)arg1;
- (id)comfirmBtn;
- (void)setComfirmBtn:(id)arg1;
- (id)denyBtn;
- (void)setDenyBtn:(id)arg1;
- (id)arrSelect;
- (void)setArrSelect:(id)arg1;
- (id)cloudGameScopeWording;
- (void)setCloudGameScopeWording:(id)arg1;
- (void).cxx_destruct;
@end
