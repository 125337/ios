@interface WAStarListViewModel : MMObject
{
    id <WAStarListViewModelDelegate> _delegate; // +0x8
    unsigned long long _scene; // +0x10
}
- (long long)count;
- (BOOL)hasData;
- (BOOL)hasNoMore;
- (BOOL)isReachLimit;
- (long long)getStarNumberLimitation;
- (id)dataForIndex:(long long)arg1;
- (BOOL)canMove;
- (void)moveItemFrom:(long long)arg1 toIndex:(long long)arg2;
- (BOOL)deleteItem:(long long)arg1;
- (BOOL)starItem:(long long)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)refreshData;
- (void)notifyEditMode:(BOOL)arg1;
- (void)reportItemDeleted:(id)arg1 index:(long long)arg2;
- (void)reportItemStared:(id)arg1 index:(long long)arg2;
- (void)reportItemMoveFrom:(id)arg1 fromIndex:(long long)arg2 to:(long long)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

