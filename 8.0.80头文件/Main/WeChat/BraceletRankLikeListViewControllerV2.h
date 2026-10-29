@interface BraceletRankLikeListViewControllerV2 : MMUIViewController <UITableViewDelegate, UITableViewDataSource>
{
    MMTableView * _tableView; // +0x70
    NSArray * _aryLikeUserList; // +0x78
    BOOL _bFromMsg; // +0x80
    long long _timestamp; // +0x88
    UILabel * _emptyLabel; // +0x90
}
- (id)initWithRankLikeList:(id)arg1 FromMsg:(BOOL)arg2;
- (void)viewDidLoad;
- (void)p_showEmptyView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)p_makeCell:(id)arg1 atIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)timestamp;
- (void)setTimestamp:(long long)arg1;
- (id)emptyLabel;
- (void)setEmptyLabel:(id)arg1;
- (void).cxx_destruct;
@end
