@interface WCTimelinePOICategoryViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate, MMPackageDownloadMgrExt>
{
    id <POICategoryDelegate> _delegate; // +0x68
    MMTableView * m_tableView; // +0x70
    NSMutableArray * m_categoryArray; // +0x78
}
- (id)init;
- (void)viewDidLoad;
- (void)initData;
- (void)initView;
- (void)initTableView;
- (void)initTableHeaderView;
- (void)didReceiveMemoryWarning;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)onPackageListUpdated:(id)arg1;
- (void)handleCategoriesConfig:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)m_tableView;
- (void)setM_tableView:(id)arg1;
- (id)m_categoryArray;
- (void)setM_categoryArray:(id)arg1;
- (void).cxx_destruct;
@end

