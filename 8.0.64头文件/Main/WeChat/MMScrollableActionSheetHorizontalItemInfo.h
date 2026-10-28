@interface MMScrollableActionSheetHorizontalItemInfo : MMObject
{
    unsigned int _itemType; // +0x8
    UIImage * _iconImage; // +0x10
    UIImage * _cornerImage; // +0x18
    NSString * _iconUrl; // +0x20
    NSString * _title; // +0x28
    id _userInfo; // +0x30
    MMScrollableActionSheetHorizontalItemView * _itemView; // +0x38
    UIEdgeInsets _titleEdgeInsets; // +0x40
    UIEdgeInsets _imageEdgeInsets; // +0x60
}
- (unsigned int)itemType;
- (void)setItemType:(unsigned int)arg1;
- (id)iconImage;
- (void)setIconImage:(id)arg1;
- (id)cornerImage;
- (void)setCornerImage:(id)arg1;
- (id)iconUrl;
- (void)setIconUrl:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (UIEdgeInsets)titleEdgeInsets;
- (void)setTitleEdgeInsets:(UIEdgeInsets)arg1;
- (UIEdgeInsets)imageEdgeInsets;
- (void)setImageEdgeInsets:(UIEdgeInsets)arg1;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (id)itemView;
- (void)setItemView:(id)arg1;
- (void).cxx_destruct;
@end
