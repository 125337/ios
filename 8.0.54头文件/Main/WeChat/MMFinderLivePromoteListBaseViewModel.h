@interface MMFinderLivePromoteListBaseViewModel : NSObject <UITableViewDelegate, UITableViewDataSource>
{
    BOOL _hasMore; // +0x8
    BOOL _isLoading; // +0x9
    unsigned int _type; // +0xc
    id <MMFinderLivePromoteListViewModelDelegate> _delegate; // +0x10
    id /* block */ _fetchCompleteBlock; // +0x18
    NSString * _titleText; // +0x20
    long long _titleCount; // +0x28
    MMTableView * _mainTableView; // +0x30
    WCFinderRefreshTableFooterView * _footerView; // +0x38
    MMFinderLiveAnchorPromoteInfo * _currentShowPromoteInfo; // +0x40
    MMFinderLiveTaskId * _taskId; // +0x48
    NSString * _anchorFinderUsername; // +0x50
    NSMutableArray * _dataArray; // +0x58
    NSData * _lastBuffer; // +0x60
}
- (id)initWithTaskId:(id)arg1 anchorFinderUsername:(id)arg2 type:(unsigned int)arg3 delegate:(id)arg4;
- (void)refreshDataWithType:(long long)arg1 completeBlock:(id /* block */)arg2;
- (void)refreshWithWithRefreshType:(long long)arg1 completeBlock:(id /* block */)arg2;
- (void)refreshWithWithTaskId:(id)arg1 anchorFinderUsername:(id)arg2 type:(unsigned int)arg3 refreshType:(long long)arg4 lastBuffer:(id)arg5 completeBlock:(id /* block */)arg6;
- (void)fetchData;
- (void)refreshData:(id)arg1 type:(unsigned int)arg2 refreshType:(long long)arg3;
- (void)realRefreshTableView;
- (void)getBussinessModelFromData:(id)arg1 type:(unsigned int)arg2 refreshType:(long long)arg3;
- (void)addModlWithDataArray:(id)arg1 data:(id)arg2 type:(unsigned int)arg3;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (BOOL)isContainItem:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)categoryItem:(id)arg1 onCategoryChangeEvent:(unsigned long long)arg2;
- (void)addButtonClicked;
- (id)dataArray;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)hasMore;
- (void)setHasMore:(BOOL)arg1;
- (id /* block */)fetchCompleteBlock;
- (void)setFetchCompleteBlock:(id /* block */)arg1;
- (id)titleText;
- (void)setTitleText:(id)arg1;
- (long long)titleCount;
- (void)setTitleCount:(long long)arg1;
- (id)mainTableView;
- (void)setMainTableView:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;
- (id)currentShowPromoteInfo;
- (void)setCurrentShowPromoteInfo:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)anchorFinderUsername;
- (void)setAnchorFinderUsername:(id)arg1;
- (void)setDataArray:(id)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (BOOL)isLoading;
- (void)setIsLoading:(BOOL)arg1;
- (void).cxx_destruct;
@end

