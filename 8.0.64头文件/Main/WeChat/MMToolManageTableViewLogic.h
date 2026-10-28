@interface MMToolManageTableViewLogic : NSObject <MMTableViewReorderDelegate, UITableViewDelegate, UITableViewDataSource, MMToolManageTableViewCellDelegate>
{
    BOOL _isEdited; // +0x8
    NSMutableArray * _addedArray; // +0x10
    MMTableView * _tableView; // +0x18
    NSString * _sectionStr0; // +0x20
    NSString * _sectionStr1; // +0x28
    unsigned long long _maxAddedArrayCount; // +0x30
    id /* block */ _onCannotAddedBlock; // +0x38
    NSMutableArray * _moreArray; // +0x40
    NSIndexPath * _lastMovedToIndex; // +0x48
}
- (id)init;
- (void)initLogic;
- (void)loadData:(id)arg1 moreArray:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (BOOL)tableView:(id)arg1 reorderFromIndex:(id)arg2 toIndex:(id)arg3;
- (BOOL)tableView:(id)arg1 shouldStartResortAtPos:(CGPoint)arg2 inCell:(id)arg3 atIndexPath:(id)arg4;
- (id)tableView:(id)arg1 draggingViewForIndexPath:(id)arg2;
- (void)onReorderEnd;
- (void)onClickEditButtonForCell:(id)arg1 isAdded:(BOOL)arg2;
- (void)onAccessibilityMoveForCell:(id)arg1 isUp:(BOOL)arg2;
- (void)setOpocityOfCellsInSection1:(double)arg1;
- (BOOL)isAllCellinSection1;
- (id)addedArray;
- (void)setAddedArray:(id)arg1;
- (BOOL)isEdited;
- (void)setIsEdited:(BOOL)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)sectionStr0;
- (void)setSectionStr0:(id)arg1;
- (id)sectionStr1;
- (void)setSectionStr1:(id)arg1;
- (unsigned long long)maxAddedArrayCount;
- (void)setMaxAddedArrayCount:(unsigned long long)arg1;
- (id /* block */)onCannotAddedBlock;
- (void)setOnCannotAddedBlock:(id /* block */)arg1;
- (id)moreArray;
- (void)setMoreArray:(id)arg1;
- (id)lastMovedToIndex;
- (void)setLastMovedToIndex:(id)arg1;
- (void).cxx_destruct;
@end
