@interface BrandAndServiceAuthListViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource>
{
    BOOL _loading; // +0x70
    unsigned int _state; // +0x74
    unsigned int _initialUpdatedTimeStamp; // +0x78
    unsigned int _lastUpdateTimeCursor; // +0x7c
    MMTableView * _tableView; // +0x80
    UIView * _headerView; // +0x88
    MMUILabel * _headerLabel; // +0x90
    UIView * _topSeperatorLineView; // +0x98
    MMUILabel * _emptyContentLabel; // +0xa0
    NSMutableArray * _scopeItemList; // +0xa8
    unsigned long long _firstLoadingContinueCount; // +0xb0
}
- (void)viewDidLoad;
- (id)navigationBarBackgroundColor;
- (void)initHeaderView;
- (void)initTableView;
- (void)initEmptyLabel;
- (void)initRefreshControl;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)loadMoreData;
- (void)continueLoadingIfNeeded;
- (void)setState:(unsigned int)arg1;
- (unsigned int)state;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)headerView;
- (void)setHeaderView:(id)arg1;
- (id)headerLabel;
- (void)setHeaderLabel:(id)arg1;
- (id)topSeperatorLineView;
- (void)setTopSeperatorLineView:(id)arg1;
- (id)emptyContentLabel;
- (void)setEmptyContentLabel:(id)arg1;
- (id)scopeItemList;
- (void)setScopeItemList:(id)arg1;
- (unsigned int)initialUpdatedTimeStamp;
- (void)setInitialUpdatedTimeStamp:(unsigned int)arg1;
- (unsigned int)lastUpdateTimeCursor;
- (void)setLastUpdateTimeCursor:(unsigned int)arg1;
- (BOOL)loading;
- (void)setLoading:(BOOL)arg1;
- (unsigned long long)firstLoadingContinueCount;
- (void)setFirstLoadingContinueCount:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
