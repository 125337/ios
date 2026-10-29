@interface WADesktopStarListViewModel : WAMyStarListViewModel
{
    long long _moveStartIndex; // +0x8
    long long _moveEndIndex; // +0x10
    WAAppItemData * _itemData; // +0x18
    id <WADesktopStarListReportDelegate> _reportDelegate; // +0x20
}
- (void)notifyEditMode:(BOOL)arg1;
- (void)reportItemDeleted:(id)arg1 index:(long long)arg2;
- (void)reportItemStared:(id)arg1 index:(long long)arg2;
- (void)reportItemMoveFrom:(id)arg1 fromIndex:(long long)arg2 to:(long long)arg3;
- (void)reportOnViewDidAppear;
- (id)reportDelegate;
- (void)setReportDelegate:(id)arg1;
- (void).cxx_destruct;
@end

