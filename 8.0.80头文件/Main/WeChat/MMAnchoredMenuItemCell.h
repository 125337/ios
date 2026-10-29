@interface MMAnchoredMenuItemCell : UICollectionViewCell
{
    UIView * _highlightBackdropView; // +0x8
    UIImageView * _leadingImageView; // +0x10
    UILabel * _titleLabel; // +0x18
    UIImageView * _arrowView; // +0x20
    UIView * _dividerView; // +0x28
    double _leftMargin; // +0x30
    double _rightMargin; // +0x38
    double _dividerLeftMargin; // +0x40
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)configureWithItem:(id)arg1 leftMargin:(double)arg2 rightMargin:(double)arg3 reservesLeadingImageSpace:(BOOL)arg4 showsDivider:(BOOL)arg5;
- (void)setHighlighted:(BOOL)arg1;
- (id)highlightBackdropView;
- (void)setHighlightBackdropView:(id)arg1;
- (id)leadingImageView;
- (void)setLeadingImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)arrowView;
- (void)setArrowView:(id)arg1;
- (id)dividerView;
- (void)setDividerView:(id)arg1;
- (double)leftMargin;
- (void)setLeftMargin:(double)arg1;
- (double)rightMargin;
- (void)setRightMargin:(double)arg1;
- (double)dividerLeftMargin;
- (void)setDividerLeftMargin:(double)arg1;
- (void).cxx_destruct;
@end
