@interface EmoticonBoardDynamicTabBarCollectionCell : UICollectionViewCell
{
    BOOL _wxSelected; // +0x8
    BOOL _allowManage; // +0x9
    EmoticonTabItemView * _itemView; // +0x10
    UIView * _wxSelectedBGView; // +0x18
    UIColor * _selectedBackgroundColor; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setSelectedBackgroundColor:(id)arg1;
- (void)setWxSelected:(BOOL)arg1;
- (void)prepareForReuse;
- (id)itemView;
- (void)setItemView:(id)arg1;
- (BOOL)wxSelected;
- (id)wxSelectedBGView;
- (void)setWxSelectedBGView:(id)arg1;
- (id)selectedBackgroundColor;
- (BOOL)allowManage;
- (void)setAllowManage:(BOOL)arg1;
- (void).cxx_destruct;
@end
