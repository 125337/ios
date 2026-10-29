@interface MMMassSendContactListViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource>
{
    UITableView * _tableView; // +0x70
    NSArray * _contacts; // +0x78
}
- (id)initWithContacts:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)contacts;
- (void)setContacts:(id)arg1;
- (void).cxx_destruct;
@end
