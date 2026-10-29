@interface CBTMomentInteractionListView : UIView <UITableViewDelegate, UITableViewDataSource>
{
    BOOL _hasMoreData; // +0x8
    unsigned int _listType; // +0xc
    id <CBTMomentInteractionListViewDelegate> _delegate; // +0x10
    UITableView * _tableView; // +0x18
    NSMutableArray * _interactionMsgList; // +0x20
    unsigned long long _curSmallestTime; // +0x28
}
- (id)initWithFrame:(CGRect)arg1 listType:(unsigned int)arg2 delegate:(id)arg3;
- (unsigned int)getListType;
- (id)getLastInteractionInfo;
- (void)setupTableView;
- (void)initTableFooterView;
- (id)getInteractionTypeList;
- (void)addInteractionWithList:(id)arg1;
- (void)onLoadMoreData;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)makeCell:(id)arg1 cell:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned int)listType;
- (void)setListType:(unsigned int)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)interactionMsgList;
- (void)setInteractionMsgList:(id)arg1;
- (unsigned long long)curSmallestTime;
- (void)setCurSmallestTime:(unsigned long long)arg1;
- (BOOL)hasMoreData;
- (void)setHasMoreData:(BOOL)arg1;
- (void).cxx_destruct;
@end
