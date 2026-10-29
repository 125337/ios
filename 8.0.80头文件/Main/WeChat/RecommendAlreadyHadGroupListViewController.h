@interface RecommendAlreadyHadGroupListViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource>
{
    unsigned int _appearType; // +0x70
    id <RecommendAlreadyHadGroupListViewControllerDelegate> _delegate; // +0x78
    NSArray * _arrRecommendAlreadyHadGroup; // +0x80
    SearchMatchTip * _defaultSearchMatchTip; // +0x88
    NSDictionary * _allSearchMatchTip; // +0x90
    MMTableView * _tableView; // +0x98
}
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)initView;
- (void)initTableView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)makeCell:(id)arg1 tableCell:(id)arg2 section:(unsigned long long)arg3 row:(unsigned long long)arg4;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)arrRecommendAlreadyHadGroup;
- (void)setArrRecommendAlreadyHadGroup:(id)arg1;
- (id)defaultSearchMatchTip;
- (void)setDefaultSearchMatchTip:(id)arg1;
- (id)allSearchMatchTip;
- (void)setAllSearchMatchTip:(id)arg1;
- (unsigned int)appearType;
- (void)setAppearType:(unsigned int)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (void).cxx_destruct;
@end
