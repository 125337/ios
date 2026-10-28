@interface WCFinderSDKAuthorViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, WCFinderCreateUserViewControllerDelegate, IAppDataExt>
{
    id <WCFinderSDKAuthorViewControllerDelegate> _delegate; // +0x70
    NSString * _appName; // +0x78
    NSString * _appIconURL; // +0x80
    NSString * _appID; // +0x88
    UILabel * _descLabel; // +0x90
    UILabel * _titleLabel; // +0x98
    UIImageView * _titleIcon; // +0xa0
    UIButton * _comfirmBtn; // +0xa8
    UIButton * _denyBtn; // +0xb0
    MMTableView * _tableView; // +0xb8
    WCFinderSDKFinderBindTopView * _tableHeaderView; // +0xc0
    UIView * _tableFooterView; // +0xc8
    WCFinderContact * _contact; // +0xd0
}
- (id)initWithAppID:(id)arg1 appName:(id)arg2 iconURL:(id)arg3;
- (void)dealloc;
- (void)viewDidLoad;
- (void)initSubViews;
- (void)reloadData;
- (void)initTableHeaderView;
- (void)layoutTableHeaderView;
- (void)initTableFooterView;
- (void)layoutTableFooterView;
- (id)navigationBarBackgroundColor;
- (void)onReturn;
- (void)onComfirmBtnClick;
- (void)onDenyBtnClick;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)createUserFinished:(id)arg1;
- (void)OnGotListAppSettingItem:(id)arg1 errType:(int)arg2;
- (void)OnAppInfoChanged:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)appName;
- (void)setAppName:(id)arg1;
- (id)appIconURL;
- (void)setAppIconURL:(id)arg1;
- (id)appID;
- (void)setAppID:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)titleIcon;
- (void)setTitleIcon:(id)arg1;
- (id)comfirmBtn;
- (void)setComfirmBtn:(id)arg1;
- (id)denyBtn;
- (void)setDenyBtn:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)tableHeaderView;
- (void)setTableHeaderView:(id)arg1;
- (id)tableFooterView;
- (void)setTableFooterView:(id)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (void).cxx_destruct;
@end
