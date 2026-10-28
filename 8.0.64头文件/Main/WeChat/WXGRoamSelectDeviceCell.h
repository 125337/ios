@interface WXGRoamSelectDeviceCell : UITableViewCell
{
    BOOL _isSelected; // +0x8
    BOOL _isPortable; // +0x9
    BOOL _isAddCell; // +0xa
    UIImageView * _iconView; // +0x10
    UILabel * _titleLabel; // +0x18
    UIView * _blockView; // +0x20
    double _cellHeight; // +0x28
    NSString * _iconName; // +0x30
    NSString * _title; // +0x38
    UILabel * _portablePathLabel; // +0x40
    UIButton * _removeBtn; // +0x48
    id /* block */ _reloadBlock; // +0x50
    NSString * _portablePath; // +0x58
}
- (void)setupViews;
- (void)onDeletePortablePath;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)blockView;
- (void)setBlockView:(id)arg1;
- (double)cellHeight;
- (void)setCellHeight:(double)arg1;
- (id)iconName;
- (void)setIconName:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (BOOL)isSelected;
- (void)setIsSelected:(BOOL)arg1;
- (BOOL)isPortable;
- (void)setIsPortable:(BOOL)arg1;
- (BOOL)isAddCell;
- (void)setIsAddCell:(BOOL)arg1;
- (id)portablePathLabel;
- (void)setPortablePathLabel:(id)arg1;
- (id)removeBtn;
- (void)setRemoveBtn:(id)arg1;
- (id /* block */)reloadBlock;
- (void)setReloadBlock:(id /* block */)arg1;
- (id)portablePath;
- (void)setPortablePath:(id)arg1;
- (void).cxx_destruct;
@end
