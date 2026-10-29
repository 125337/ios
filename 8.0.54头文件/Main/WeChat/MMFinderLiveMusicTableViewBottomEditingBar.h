@interface MMFinderLiveMusicTableViewBottomEditingBar : UIView
{
    BOOL _isAllSelected; // +0x8
    id <MMFinderLiveMusicTableViewBottomEditingDelegate> _editingDelegate; // +0x10
    UIImageView * _selectedImageView; // +0x18
    MMUILabel * _allSelectedTipLabel; // +0x20
    MMUIButton * _deleteButton; // +0x28
    CAGradientLayer * _gradientLayer; // +0x30
}
+ (double)preferHeight;
+ (double)gradientMaskHeight;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutSelectedImageView;
- (void)layoutAllSelectedTipLabel;
- (void)layoutDeleteButton;
- (void)layoutGradientLayer;
- (void)onSelectedImgTapGesture:(id)arg1;
- (void)deleteButtonAction;
- (void)toggleSelectState;
- (void)toggleSelectAllState:(BOOL)arg1;
- (void)clearAllSelectedState;
- (void)updateDeleteButtonEnabled:(BOOL)arg1;
- (id)editingDelegate;
- (void)setEditingDelegate:(id)arg1;
- (id)selectedImageView;
- (void)setSelectedImageView:(id)arg1;
- (id)allSelectedTipLabel;
- (void)setAllSelectedTipLabel:(id)arg1;
- (id)deleteButton;
- (void)setDeleteButton:(id)arg1;
- (id)gradientLayer;
- (void)setGradientLayer:(id)arg1;
- (BOOL)isAllSelected;
- (void)setIsAllSelected:(BOOL)arg1;
- (void).cxx_destruct;
@end

