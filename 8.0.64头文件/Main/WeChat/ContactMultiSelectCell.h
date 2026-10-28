@interface ContactMultiSelectCell : MMTableViewCell
{
    BOOL _isEditing; // +0x8
    BOOL _isSelected; // +0x9
    BOOL _isDisabled; // +0xa
    BOOL _isSelectedInRoomContact; // +0xb
    BOOL _isCheckBoxHiddenInEditing; // +0xc
    UIImageView * _selectedImageView; // +0x10
    UIColor * _selectedColor; // +0x18
}
+ (void)makeEditingCell:(id)arg1 selected:(BOOL)arg2 itemView:(id)arg3;
- (void)prepareForReuse;
- (void)setFrame:(CGRect)arg1;
- (double)contentLeftMargin;
- (void)changeSelectdStatus:(BOOL)arg1;
- (void)changeRoomContactSelectedStatus:(BOOL)arg1;
- (void)changeDisableStatus:(BOOL)arg1;
- (void)updateImageView;
- (void)changeEditingStatus:(BOOL)arg1;
- (void)changeHideCheckBoxInEditing:(BOOL)arg1;
- (void)setBackgroundColor:(id)arg1;
- (unsigned long long)accessibilityTraits;
- (void)changeSelectImageViewY:(double)arg1;
- (id)selectedImageView;
- (void)setSelectedImageView:(id)arg1;
- (id)selectedColor;
- (void)setSelectedColor:(id)arg1;
- (BOOL)isEditing;
- (void)setIsEditing:(BOOL)arg1;
- (BOOL)isSelected;
- (void)setIsSelected:(BOOL)arg1;
- (BOOL)isDisabled;
- (void)setIsDisabled:(BOOL)arg1;
- (BOOL)isSelectedInRoomContact;
- (void)setIsSelectedInRoomContact:(BOOL)arg1;
- (BOOL)isCheckBoxHiddenInEditing;
- (void)setIsCheckBoxHiddenInEditing:(BOOL)arg1;
- (void).cxx_destruct;
@end
