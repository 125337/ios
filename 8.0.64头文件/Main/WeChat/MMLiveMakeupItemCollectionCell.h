@interface MMLiveMakeupItemCollectionCell : UICollectionViewCell <MMLiveBeautyBadgeItemExt, MMLiveBeautyBadgeCollectionExt>
{
    BOOL _isSelected; // +0x8
    MMLiveMakeupDataItem * _dataItem; // +0x10
    id <MMLiveMakeupItemCollectionCellDelegate> _cellDelegate; // +0x18
    UIView * _baseView; // +0x20
    UIView * _imageBackgroundView; // +0x28
    UIButton * _coverImageButton; // +0x30
    UILabel * _titleLabel; // +0x38
    CAGradientLayer * _gradientLayer; // +0x40
    CAShapeLayer * _shapeLayer; // +0x48
    UIView * _adjustLogo; // +0x50
    UIView * _changeDetailContainer; // +0x58
    MMUILabel * _changeDetailLabel; // +0x60
    UIImageView * _changeDetailImage; // +0x68
    MMBadgeView * _badgeView; // +0x70
    MMBadgeView * _detailsBadgeView; // +0x78
}
+ (id)identifier;
+ (CGSize)getCellSize;
- (id)initWithFrame:(CGRect)arg1;
- (void)initViews;
- (void)initBaseView;
- (void)initChangeDetailContainerView;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setIsSelected:(BOOL)arg1;
- (void)setDataItem:(id)arg1;
- (void)fitTitleLabel;
- (void)onTappedChangeDetailLabel;
- (void)onBeautyBadgeDismissed:(id)arg1;
- (void)onActiveBeautyBadgesChangedInCollection:(id)arg1;
- (id)dataItem;
- (BOOL)isSelected;
- (id)cellDelegate;
- (void)setCellDelegate:(id)arg1;
- (id)baseView;
- (void)setBaseView:(id)arg1;
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
- (id)changeDetailContainer;
- (void)setChangeDetailContainer:(id)arg1;
- (id)changeDetailLabel;
- (void)setChangeDetailLabel:(id)arg1;
- (id)changeDetailImage;
- (void)setChangeDetailImage:(id)arg1;
- (id)badgeView;
- (void)setBadgeView:(id)arg1;
- (id)detailsBadgeView;
- (void)setDetailsBadgeView:(id)arg1;
- (void).cxx_destruct;
@end
