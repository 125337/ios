@interface WABrandBindWeAppListViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource>
{
    UIView * _contentHeaderView; // +0x68
    UILabel * _contentLabel; // +0x70
    UITableView * _listTableView; // +0x78
    NSArray * _arrBindWeAppInfo; // +0x80
    NSString * _fromBrandUserName; // +0x88
    NSString * _fromBrandAppid; // +0x90
}
- (void)viewDidLoad;
- (void)initView;
- (void)initContentLabel;
- (void)initTableView;
- (void)viewDidLayoutSubviews;
- (void)layoutMySubViews;
- (void)onBackButtonClicked:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)navigationBarBackgroundColor;
- (id)arrBindWeAppInfo;
- (void)setArrBindWeAppInfo:(id)arg1;
- (id)fromBrandUserName;
- (void)setFromBrandUserName:(id)arg1;
- (id)fromBrandAppid;
- (void)setFromBrandAppid:(id)arg1;
- (void).cxx_destruct;
@end

