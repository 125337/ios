@interface MMLiveBeautyItemCollectionCell : UICollectionViewCell <MMLiveBeautyBadgeItemExt>
{
    BOOL _isSelected; // +0x8
    BOOL _hasAdjust; // +0x9
    MMLiveBeautyItem * _beautyItem; // +0x10
    UIView * _imageBackgroundView; // +0x18
    UIImageView * _coverImageView; // +0x20
    UIButton * _coverImageButton; // +0x28
    UILabel * _titleLabel; // +0x30
    CAGradientLayer * _gradientLayer; // +0x38
    CAShapeLayer * _shapeLayer; // +0x40
    UIView * _adjustLogo; // +0x48
    MMBadgeView * _badgeView; // +0x50
}
+ (id)identifier;
+ (CGSize)getCellSize;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setIsSelected:(BOOL)arg1;
- (void)setHasAdjust:(BOOL)arg1;
- (void)setBeautyItem:(id)arg1;
- (void)fitTitleLabel;
- (void)onBeautyBadgeDismissed:(id)arg1;
- (id)beautyItem;
- (BOOL)isSelected;
- (BOOL)hasAdjust;
- (id)imageBackgroundView;
- (void)setImageBackgroundView:(id)arg1;
- (id)coverImageView;
- (void)setCoverImageView:(id)arg1;
- (id)coverImageButton;
- (void)setCoverImageButton:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)gradientLayer;
- (void)setGradientLayer:(id)arg1;
- (id)shapeLayer;
- (void)setShapeLayer:(id)arg1;
- (id)adjustLogo;
- (void)setAdjustLogo:(id)arg1;
- (id)badgeView;
- (void)setBadgeView:(id)arg1;
- (void).cxx_destruct;
@end

