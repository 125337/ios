@interface MMDoodleToolbar : MMUIView
{
    id _delegate; // +0x8
    UIView * _itemBar; // +0x10
    MMDoodleToolbarItem * _penItem; // +0x18
    NSMutableArray * _items; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)penItemDidClick:(id)arg1;
- (void)addToolbarItem:(id)arg1;
- (void)removeToolbarItem:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)itemBar;
- (void)setItemBar:(id)arg1;
- (id)penItem;
- (void)setPenItem:(id)arg1;
- (id)items;
- (void)setItems:(id)arg1;
- (void).cxx_destruct;
@end

