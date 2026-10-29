@interface MMFinderLivePromoteTableViewModel : NSObject <UITableViewDelegate, UITableViewDataSource>
{
    BOOL _enablePushPromote; // +0x8
    BOOL _isLiving; // +0x9
    MMTableView * _tableView; // +0x10
    id <MMFinderLivePromoteTableViewDelegate> _operationDelegate; // +0x18
    NSMutableArray * _promoteList; // +0x20
    MMFinderLiveAnchorPromoteInfo * _lastSendedPromoteInfo; // +0x28
    NSString * _errorStr; // +0x30
}
- (void)updatePromoteInfoList:(id)arg1;
- (unsigned long long)getPromoteItemCount;
- (BOOL)isContainPromoteItem:(id)arg1;
- (BOOL)isContainPromoteItemWithType:(unsigned int)arg1;
- (void)addPrmoteItem:(id)arg1;
- (void)insertPrmoteItem:(id)arg1;
- (void)updatePromoteItem:(id)arg1;
- (void)deletePromoteItem:(id)arg1;
- (BOOL)isPromoting;
- (id)promoteInfoItemsOfType:(unsigned int)arg1;
- (id)promoteInfoItemsOfPromoteId:(unsigned long long)arg1;
- (void)registerReusableCellTypesForTableView:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (BOOL)canShowTipFooterInSection:(long long)arg1;
- (id)getLiveAnchorPromoteInfo:(id)arg1;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)promoteList;
- (void)setEnablePushPromote:(BOOL)arg1;
- (void)updateSendedPromoteInfo;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)operationDelegate;
- (void)setOperationDelegate:(id)arg1;
- (BOOL)enablePushPromote;
- (void)setPromoteList:(id)arg1;
- (BOOL)isLiving;
- (void)setIsLiving:(BOOL)arg1;
- (id)lastSendedPromoteInfo;
- (void)setLastSendedPromoteInfo:(id)arg1;
- (id)errorStr;
- (void)setErrorStr:(id)arg1;
- (void).cxx_destruct;
@end

