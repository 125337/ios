@interface SightBeautyItemCollectionCell : UICollectionViewCell
{
    BOOL _isSelected; // +0x8
    NSString * _beautyTitle; // +0x10
    UIView * _textContainerView; // +0x18
    UILabel * _titleLabel; // +0x20
    UIView * _textContainerBlurView; // +0x28
}
+ (id)identifier;
+ (CGSize)getCellSize;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setIsSelected:(BOOL)arg1;
- (void)setBeautyTitle:(id)arg1;
- (id)beautyTitle;
- (id)textContainerView;
- (void)setTextContainerView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (BOOL)isSelected;
- (id)textContainerBlurView;
- (void)setTextContainerBlurView:(id)arg1;
- (void).cxx_destruct;
@end
