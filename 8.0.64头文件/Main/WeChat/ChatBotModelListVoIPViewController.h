@interface ChatBotModelListVoIPViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource>
{
    UITableView * _tableView; // +0x70
    NSArray * _models; // +0x78
}
- (id)initWithModels:(id)arg1;
- (void)viewDidLoad;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)models;
- (void)setModels:(id)arg1;
- (void).cxx_destruct;
@end
