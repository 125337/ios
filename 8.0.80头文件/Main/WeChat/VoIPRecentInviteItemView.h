@interface VoIPRecentInviteItemView : UIView
{
    BOOL _isSelected; // +0x8
    BOOL _isDisabled; // +0x9
    CContact * _contact; // +0x10
    UIView * _contentView; // +0x18
    UIImageView * _selectedImageView; // +0x20
    MMUILabel * _nameLabel; // +0x28
    UIView * _tapMaskView; // +0x30
    MMUIButton * _smallDeleteButton; // +0x38
    id <VoIPRecentInviteItemViewDelegate> _itemDelegate; // +0x40
}
- (id)initWithContact:(id)arg1 iconWidth:(double)arg2;
- (void)changeSelectedStatus:(BOOL)arg1;
- (void)changeDisableStatus:(BOOL)arg1;
- (void)updateSelectedImageView;
- (void)onClickSmallDeleteButton;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (unsigned long long)accessibilityTraits;
- (id)contact;
- (void)setContact:(id)arg1;
- (BOOL)isSelected;
- (void)setIsSelected:(BOOL)arg1;
- (BOOL)isDisabled;
- (void)setIsDisabled:(BOOL)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)selectedImageView;
- (void)setSelectedImageView:(id)arg1;
- (id)nameLabel;
- (void)setNameLabel:(id)arg1;
- (id)tapMaskView;
- (void)setTapMaskView:(id)arg1;
- (id)smallDeleteButton;
- (void)setSmallDeleteButton:(id)arg1;
- (id)itemDelegate;
- (void)setItemDelegate:(id)arg1;
- (void).cxx_destruct;
@end
