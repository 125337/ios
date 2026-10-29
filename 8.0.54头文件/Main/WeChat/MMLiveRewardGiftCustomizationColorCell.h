@interface MMLiveRewardGiftCustomizationColorCell : UICollectionViewCell
{
    UIView * _containerView; // +0x8
    UIView * _colorView; // +0x10
    MMLiveGradientLayerView * _shadingView; // +0x18
}
+ (id)reuseId;
- (id)initWithFrame:(CGRect)arg1;
- (id)color;
- (void)setColor:(id)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)layoutSubviews;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)colorView;
- (void)setColorView:(id)arg1;
- (id)shadingView;
- (void)setShadingView:(id)arg1;
- (void).cxx_destruct;
@end

