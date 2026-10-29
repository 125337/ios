@interface WADesktopStarListViewModel : WAMyStarListViewModel
{
    long long _moveStartIndex; // +0x8
    long long _moveEndIndex; // +0x10
    WAAppItemData * _itemData; // +0x18
    id <WADesktopStarListDelegate> _listDelegate; // +0x20
}
- (void)notifyEditMode:(BOOL)arg1;
- (void)onItemDeleted:(id)arg1 index:(long long)arg2;
- (void)onItemStared:(id)arg1 index:(long long)arg2;
- (void)onItemMoveFrom:(id)arg1 fromIndex:(long long)arg2 to:(long long)arg3;
- (void)reportOnViewDidAppear;
- (id)listDelegate;
- (void)setListDelegate:(id)arg1;
- (void).cxx_destruct;
@end
