@interface MMLiveMakeupDetailItemCollectionCell : UICollectionViewCell <MMLiveBeautyBadgeItemExt>
{
    BOOL _isSelected; // +0x8
    MMLiveMakeupDetailDataItem * _dataItem; // +0x10
    UIView * _imageBackgroundView; // +0x18
    UIButton * _coverImageButton; // +0x20
    UILabel * _titleLabel; // +0x28
    CAGradientLayer * _gradientLayer; // +0x30
    CAShapeLayer * _shapeLayer; // +0x38
    UIView * _adjustLogo; // +0x40
    MMBadgeView * _badgeView; // +0x48
}
+ (id)identifier;
+ (CGSize)getCellSize;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setIsSelected:(BOOL)arg1;
- (void)setDataItem:(id)arg1;
- (void)fitTitleLabel;
- (void)onBeautyBadgeDismissed:(id)arg1;
- (id)dataItem;
- (BOOL)isSelected;
- (id)imageBackgroundView;
- (void)setImageBackgroundView:(id)arg1;
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

