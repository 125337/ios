@interface MMLiveBubbleECShowBoxItemsView : UIView
{
    double _itemsHeight; // +0x8
    NSArray * _tuples; // +0x10
}
- (id)initWithGroup:(id)arg1 height:(double)arg2;
- (void)layoutSubviews;
- (id)visibleItems;
- (double)itemsHeight;
- (void)setItemsHeight:(double)arg1;
- (id)tuples;
- (void)setTuples:(id)arg1;
- (void).cxx_destruct;
@end
