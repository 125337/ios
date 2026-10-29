@interface MMMusicFlexEditBarTransitionPanelCollectionViewCell : UICollectionViewCell
{
    MMUILabel * _titleLabel; // +0x8
    UIImageView * _imageView; // +0x10
    CAShapeLayer * _selectedBorderLayer; // +0x18
}
+ (id)reuseIdentifier;
- (id)initWithFrame:(CGRect)arg1;
- (void)internalInit;
- (void)layoutSubviews;
- (void)updateModel:(id)arg1;
- (void)setSelected:(BOOL)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (id)selectedBorderLayer;
- (void)setSelectedBorderLayer:(id)arg1;
- (void).cxx_destruct;
@end

