@interface CBTMomentSettingViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource>
{
    MMUIButton * _backBtn; // +0x70
    MMUILabel * _titleLabel; // +0x78
    UITableView * _tableView; // +0x80
}
- (void)viewDidLoad;
- (void)layoutContentViews;
- (void)layoutBackBtn;
- (void)close;
- (void)layoutTitleLabel;
- (void)layoutTableView;
- (long long)getCurSelectIndex;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)makeCellWithIndex:(long long)arg1 cell:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)backBtn;
- (void)setBackBtn:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (void).cxx_destruct;
@end
