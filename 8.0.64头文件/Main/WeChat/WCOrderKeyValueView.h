@interface WCOrderKeyValueView : MMUIView
{
    NSArray * _items; // +0x8
    id _target; // +0x10
}
- (void)dealloc;
- (id)init;
- (void)setItems:(id)arg1;
- (void)setupViews;
- (id)lineView;
- (id)nameLabel;
- (id)detailLabel;
- (id)copyableTextView;
- (id)items;
- (id)target;
- (void)setTarget:(id)arg1;
- (void).cxx_destruct;
@end
