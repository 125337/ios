@interface CBTSelectableMenuView : UIView
{
    id /* block */ _selection; // +0x8
    double _itemCornerRadius; // +0x10
    NSArray * _items; // +0x18
    unsigned long long _selectedIndex; // +0x20
    NSArray * _itemViews; // +0x28
    double _itemViewHeight; // +0x30
    double _contentWidth; // +0x38
}
- (id)initWithItems:(id)arg1 selectedIndex:(unsigned long long)arg2;
- (void)makeView;
- (void)setItemCornerRadius:(double)arg1;
- (void)setFrame:(CGRect)arg1;
- (void)batchUpdateItemWidth;
- (double)calculatedHeight;
- (id)selectedItemView;
- (void)onTapItemView:(id)arg1;
- (CGSize)size;
- (id /* block */)selection;
- (void)setSelection:(id /* block */)arg1;
- (double)itemCornerRadius;
- (id)items;
- (void)setItems:(id)arg1;
- (unsigned long long)selectedIndex;
- (void)setSelectedIndex:(unsigned long long)arg1;
- (id)itemViews;
- (void)setItemViews:(id)arg1;
- (double)itemViewHeight;
- (void)setItemViewHeight:(double)arg1;
- (double)contentWidth;
- (void)setContentWidth:(double)arg1;
- (void).cxx_destruct;
@end
