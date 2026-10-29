@interface MMFinderLiveMusicTingListViewModel : NSObject <UITableViewDelegate, UITableViewDataSource>
{
    BOOL _isFetchingNextPage; // +0x8
    unsigned int _tabType; // +0xc
    unsigned int _continueFlag; // +0x10
    id <MMFinderLiveMusicTingListViewModelDelegate> _delegate; // +0x18
    id <MMFinderLiveMusicSettingReportDelegate> _reportDelegate; // +0x20
    UITableView * _currentTableView; // +0x28
    MMFinderLiveTaskId * _taskId; // +0x30
    MMFinderLiveAddMusicListItem * _tingListItem; // +0x38
    NSMutableArray * _dataItems; // +0x40
    NSData * _lastBuffer; // +0x48
}
- (id)initWithTaskId:(id)arg1 tingListItem:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)fetchNextPageDataIfNeed;
- (void)fetchNextPageData;
- (void)appendMusicItem:(id)arg1;
- (id)dataItems;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)reportDelegate;
- (void)setReportDelegate:(id)arg1;
- (id)currentTableView;
- (void)setCurrentTableView:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)tingListItem;
- (void)setTingListItem:(id)arg1;
- (void)setDataItems:(id)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (unsigned int)tabType;
- (void)setTabType:(unsigned int)arg1;
- (unsigned int)continueFlag;
- (void)setContinueFlag:(unsigned int)arg1;
- (BOOL)isFetchingNextPage;
- (void)setIsFetchingNextPage:(BOOL)arg1;
- (void).cxx_destruct;
@end
