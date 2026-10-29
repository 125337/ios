@interface MMFinderLiveConnectMicPkDesignatedGiftSelectionPageSheet : MMPageSheetBaseView <UITableViewDelegate, UITableViewDataSource>
{
    id <MMFinderLiveConnectMicPkDesignatedGiftSelectionPageSheetDelegate> _delegate; // +0x8
    MMFinderLiveTaskId * _taskId; // +0x10
    NSString * _micVirtualRoomId; // +0x18
    unsigned long long _opponentScenario; // +0x20
    MMLoadingIndicatorView * _loadingIndicatorView; // +0x28
    UILabel * _emptyLabel; // +0x30
    UITableView * _tableView; // +0x38
    NSArray * _giftItems; // +0x40
}
- (id)initWithTaskId:(id)arg1 micVirtualRoomId:(id)arg2 opponentScenario:(unsigned long long)arg3;
- (void)layoutSubviews;
- (void)pageSheetWillAppear;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)initializeComponents;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)micVirtualRoomId;
- (void)setMicVirtualRoomId:(id)arg1;
- (unsigned long long)opponentScenario;
- (void)setOpponentScenario:(unsigned long long)arg1;
- (id)loadingIndicatorView;
- (void)setLoadingIndicatorView:(id)arg1;
- (id)emptyLabel;
- (void)setEmptyLabel:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)giftItems;
- (void)setGiftItems:(id)arg1;
- (void).cxx_destruct;
@end
