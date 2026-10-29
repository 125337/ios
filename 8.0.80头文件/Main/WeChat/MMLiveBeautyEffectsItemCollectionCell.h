@interface MMLiveBeautyEffectsItemCollectionCell : UICollectionViewCell
{
    BOOL _isSelected; // +0x8
    MMLiveEffectsBaseDataItem * _dataItem; // +0x10
    UIView * _imageBackgroundView; // +0x18
    UIView * _bgBlurView; // +0x20
    MMWebImageView * _coverImageView; // +0x28
    UILabel * _titleLabel; // +0x30
    UILabel * _disableLabel; // +0x38
    CALayer * _borderLayer; // +0x40
    CAShapeLayer * _shapeLayer; // +0x48
    SightIconView * _stateView; // +0x50
}
+ (id)identifier;
+ (CGSize)getCellSize;
- (id)initWithFrame:(CGRect)arg1;
- (void)initViews;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setIsSelected:(BOOL)arg1;
- (void)setDataItem:(id)arg1;
- (void)setIconType:(int)arg1;
- (id)imageBackgroundView;
- (id)titleLabel;
- (id)disableLabel;
- (id)coverImageView;
- (id)bgBlurView;
- (id)borderLayer;
- (id)shapeLayer;
- (id)stateView;
- (id)dataItem;
- (BOOL)isSelected;
- (void)setImageBackgroundView:(id)arg1;
- (void)setBgBlurView:(id)arg1;
- (void)setCoverImageView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setDisableLabel:(id)arg1;
- (void)setBorderLayer:(id)arg1;
- (void)setShapeLayer:(id)arg1;
- (void)setStateView:(id)arg1;
- (void).cxx_destruct;
@end
