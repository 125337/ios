@interface FTSVerticalSearchHistoryCell : MMTableViewCell <UITableViewDataSource, UITableViewDelegate, FTSVerticalSearchHistoryItemCellDelegate>
{
    id <FTSVerticalSearchHistoryCellDelegate> _delegate; // +0x8
    UITableView * _resultTableView; // +0x10
    NSMutableSet * _exposeSet; // +0x18
    WSNativeVerticalHistoryData * _historyData; // +0x20
}
+ (double)heightForData:(id)arg1 width:(double)arg2;
- (void)configureWithData:(id)arg1;
- (double)horizonalMargin;
- (void)deleteRowAtIndex:(id)arg1;
- (long long)historyItemCount;
- (void)onClickDeleteHistoryItemCell:(id)arg1;
- (void)onClickClickHistoryItemCell:(id)arg1;
- (void)onClickClickHistoryClearCell:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)updateVisibleYInSelfCoordinate:(double)arg1;
- (void)resetExposeSet;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)resultTableView;
- (void)setResultTableView:(id)arg1;
- (id)exposeSet;
- (void)setExposeSet:(id)arg1;
- (id)historyData;
- (void)setHistoryData:(id)arg1;
- (void).cxx_destruct;
@end
