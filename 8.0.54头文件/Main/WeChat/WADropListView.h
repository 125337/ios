@interface WADropListView : UIView <UITableViewDelegate, UITableViewDataSource, WADropItemTableViewCellDelegate>
{
    UITableView * _tableView; // +0x8
    NSMutableArray * _searchList; // +0x10
    NSMutableArray * _dropList; // +0x18
    id <WADropListViewDelegate> _delegate; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)onSelect:(id)arg1 value:(id)arg2;
- (void)onDelete:(id)arg1;
- (void)setDropList:(id)arg1;
- (void)filterUpdate:(id)arg1;
- (long long)getCurrentItemCount;
- (id)dropList;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

