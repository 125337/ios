@interface MMLimitedModeConfigCell : MMTableViewCell
{
    BOOL _showBottomLine; // +0x8
    BOOL _showRightArrow; // +0x9
    BOOL _isSelected; // +0xa
    NSString * _title; // +0x10
    UIImageView * _backgroundImageView; // +0x18
    MMUILabel * _titleLabel; // +0x20
    UIImageView * _selectedImageView; // +0x28
    UIImageView * _arrowImageView; // +0x30
    UIView * _lineView; // +0x38
}
+ (double)cellHeight;
- (id)initWithFrame:(CGRect)arg1;
- (void)updateWithBiz:(long long)arg1 cellType:(long long)arg2;
- (void)setShowBottomLine:(BOOL)arg1;
- (void)setShowRightArrow:(BOOL)arg1;
- (void)setIsSelected:(BOOL)arg1;
- (unsigned long long)accessibilityTraits;
- (void)setTitle:(id)arg1;
- (void)initUI;
- (BOOL)showBottomLine;
- (BOOL)showRightArrow;
- (BOOL)isSelected;
- (id)title;
- (id)backgroundImageView;
- (void)setBackgroundImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)selectedImageView;
- (void)setSelectedImageView:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (id)lineView;
- (void)setLineView:(id)arg1;
- (void).cxx_destruct;
@end
