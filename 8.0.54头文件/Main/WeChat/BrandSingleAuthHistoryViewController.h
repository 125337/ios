@interface BrandSingleAuthHistoryViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource>
{
    unsigned int _state; // +0x68
    int _initialUpdatedTimeStamp; // +0x6c
    MMTableView * _tableView; // +0x70
    MMUILabel * _emptyContentLabel; // +0x78
    NSString * _userName; // +0x80
    NSMutableArray * _recordsList; // +0x88
}
- (id)initWithUserName:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)initEmptyLabel;
- (id)navigationBarBackgroundColor;
- (void)initTableView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (void)loadMoreData;
- (void)initRefreshControl;
- (void)setState:(unsigned int)arg1;
- (unsigned int)state;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)emptyContentLabel;
- (void)setEmptyContentLabel:(id)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)recordsList;
- (void)setRecordsList:(id)arg1;
- (int)initialUpdatedTimeStamp;
- (void)setInitialUpdatedTimeStamp:(int)arg1;
- (void).cxx_destruct;
@end

