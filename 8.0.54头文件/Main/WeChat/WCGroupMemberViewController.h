@interface WCGroupMemberViewController : MMUIViewController <MMTableViewDelegate, UITableViewDelegate, UITableViewDataSource, WCFacadeExt>
{
    MMTableView * m_tableView; // +0x68
    WCDataItem * m_dataItem; // +0x70
    NSMutableArray * m_arrUserName; // +0x78
}
- (void)initData;
- (void)initTableView;
- (void)updateTitle;
- (void)initView;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (id)initWithDataItem:(id)arg1;
- (id)getContact:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)onDataChangedWithAdded:(id)arg1 andChanged:(id)arg2 andDeleted:(id)arg3;
- (void).cxx_destruct;
@end

