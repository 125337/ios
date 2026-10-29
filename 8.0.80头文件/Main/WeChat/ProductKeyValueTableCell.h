@interface ProductKeyValueTableCell : MMUIView
{
    NSString * _key; // +0x8
    NSString * _value; // +0x10
    BOOL _isExpanded; // +0x18
    id <ProductKeyValueTableCellDelegate> _delegate; // +0x20
    UILabel * _keyLabel; // +0x28
    UILabel * _valueLabel; // +0x30
    UIButton * _expandButton; // +0x38
    UIView * _marginView; // +0x40
    BOOL _shouldExpand; // +0x48
}
- (id)init;
- (void)sizeToFit;
- (CGSize)updateSizeForCell;
- (void)onViewMore;
- (id)key;
- (void)setKey:(id)arg1;
- (id)value;
- (void)setValue:(id)arg1;
- (BOOL)isExpanded;
- (void)setIsExpanded:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
