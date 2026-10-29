@interface WADropItemTableViewCell : UITableViewCell
{
    UIButton * _closeBtn; // +0x8
    UIButton * _backBtn; // +0x10
    UILabel * _titleView; // +0x18
    UILabel * _contentView; // +0x20
    UIView * _splitLine; // +0x28
    BOOL _showSplit; // +0x30
    id <WADropItemTableViewCellDelegate> _delegate; // +0x38
    NSString * _userData; // +0x40
    NSString * _value; // +0x48
}
- (void)setContent:(id)arg1 withTitle:(id)arg2;
- (void)layoutSubviews;
- (void)onClose:(id)arg1;
- (void)onSelect:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)userData;
- (void)setUserData:(id)arg1;
- (id)value;
- (void)setValue:(id)arg1;
- (BOOL)showSplit;
- (void)setShowSplit:(BOOL)arg1;
- (void).cxx_destruct;
@end

