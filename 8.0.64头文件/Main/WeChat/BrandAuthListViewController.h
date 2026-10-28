@interface BrandAuthListViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource>
{
    unsigned int _state; // +0x70
    int _initialUpdatedTimeStamp; // +0x74
    unsigned long long _brandContactType; // +0x78
    MMTableView * _tableView; // +0x80
    UIView * _headerView; // +0x88
    MMUILabel * _headerLabel; // +0x90
    UIView * _topSeperatorLineView; // +0x98
    unsigned long long _requestCount; // +0xa0
    MMUILabel * _emptyContentLabel; // +0xa8
    NSMutableArray * _scopeItemList; // +0xb0
}
- (void)viewDidLoad;
- (id)navigationBarBackgroundColor;
- (void)initHeaderView;
- (void)initTableView;
- (void)initEmptyLabel;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)initRefreshControl;
- (void)loadMoreData;
- (void)setState:(unsigned int)arg1;
- (unsigned long long)brandContactType;
- (void)setBrandContactType:(unsigned long long)arg1;
- (unsigned int)state;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)headerView;
- (void)setHeaderView:(id)arg1;
- (id)headerLabel;
- (void)setHeaderLabel:(id)arg1;
- (id)topSeperatorLineView;
- (void)setTopSeperatorLineView:(id)arg1;
- (unsigned long long)requestCount;
- (void)setRequestCount:(unsigned long long)arg1;
- (id)emptyContentLabel;
- (void)setEmptyContentLabel:(id)arg1;
- (id)scopeItemList;
- (void)setScopeItemList:(id)arg1;
- (int)initialUpdatedTimeStamp;
- (void)setInitialUpdatedTimeStamp:(int)arg1;
- (void).cxx_destruct;
@end
