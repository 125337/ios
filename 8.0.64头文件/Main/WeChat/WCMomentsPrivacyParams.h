@interface WCMomentsPrivacyParams : NSObject
{
    BOOL _expandSelection; // +0x8
    NSArray * _table; // +0x10
    UIView * _footerView; // +0x18
    id /* block */ _onReload; // +0x20
    NSIndexPath * _selectedIndexPath; // +0x28
    NSIndexPath * _originSelectedIndexPath; // +0x30
    long long _itemCount; // +0x38
    NSIndexSet * _lastItemIndexSet; // +0x40
    NSDictionary * _indexToIndexPath; // +0x48
    NSDictionary * _indexPathToIndex; // +0x50
    UIEdgeInsets _footerViewInsets; // +0x58
}
- (id)initWithTable:(id)arg1 originSelectedIndexPath:(id)arg2;
- (void)initViewState;
- (void)initLookUpTable;
- (void)selectItemAtIndexPath:(id)arg1;
- (id)selectedItem;
- (id)itemAtIndexPath:(id)arg1;
- (id)indexPathFromIndex:(long long)arg1;
- (long long)indexFromIndexPath:(id)arg1;
- (BOOL)isIndexLastItemInSection:(long long)arg1;
- (BOOL)scopeHasChanged;
- (id)table;
- (void)setTable:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (UIEdgeInsets)footerViewInsets;
- (void)setFooterViewInsets:(UIEdgeInsets)arg1;
- (id /* block */)onReload;
- (void)setOnReload:(id /* block */)arg1;
- (id)selectedIndexPath;
- (void)setSelectedIndexPath:(id)arg1;
- (id)originSelectedIndexPath;
- (void)setOriginSelectedIndexPath:(id)arg1;
- (BOOL)expandSelection;
- (void)setExpandSelection:(BOOL)arg1;
- (long long)itemCount;
- (void)setItemCount:(long long)arg1;
- (id)lastItemIndexSet;
- (void)setLastItemIndexSet:(id)arg1;
- (id)indexToIndexPath;
- (void)setIndexToIndexPath:(id)arg1;
- (id)indexPathToIndex;
- (void)setIndexPathToIndex:(id)arg1;
- (void).cxx_destruct;
@end
