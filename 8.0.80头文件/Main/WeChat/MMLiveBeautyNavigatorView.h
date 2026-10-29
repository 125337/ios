@interface MMLiveBeautyNavigatorView : UIView
{
    NSArray * _items; // +0x8
    id _selectedItem; // +0x10
    id <MMLiveBeautyNavigatorViewDelegate> _delegate; // +0x18
    id /* block */ _labelSelector; // +0x20
    UIScrollView * _itemsScrollView; // +0x28
    NSArray * _itemViews; // +0x30
    MMLiveBeautyNavigatorItemView * _selectedItemView; // +0x38
}
- (id)initWithItems:(id)arg1 labelSelector:(id /* block */)arg2;
- (void)setSelectedItem:(id)arg1;
- (void)setSelectedItem:(id)arg1 animated:(BOOL)arg2;
- (void)layoutSubviews;
- (void)onItemViewTapped:(id)arg1;
- (void)initializeComponents;
- (id)items;
- (void)setItems:(id)arg1;
- (id)selectedItem;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id /* block */)labelSelector;
- (void)setLabelSelector:(id /* block */)arg1;
- (id)itemsScrollView;
- (void)setItemsScrollView:(id)arg1;
- (id)itemViews;
- (void)setItemViews:(id)arg1;
- (id)selectedItemView;
- (void)setSelectedItemView:(id)arg1;
- (void).cxx_destruct;
@end
