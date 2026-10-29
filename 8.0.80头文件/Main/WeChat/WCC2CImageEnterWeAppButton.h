@interface WCC2CImageEnterWeAppButton : MMUIButton
{
    UIImageView * _leftImageView; // +0x8
    UIImageView * _rightImageView; // +0x10
    UILabel * _centerLabel; // +0x18
    UIView * _hightLightMaskView; // +0x20
}
- (id)init;
- (void)updateToShortTitle;
- (void)initView;
- (void)layoutSubviews;
- (void)setupShadow;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)hightLightMaskView;
- (void)setHighlighted:(BOOL)arg1;
- (id)leftImageView;
- (void)setLeftImageView:(id)arg1;
- (id)rightImageView;
- (void)setRightImageView:(id)arg1;
- (id)centerLabel;
- (void)setCenterLabel:(id)arg1;
- (void)setHightLightMaskView:(id)arg1;
- (void).cxx_destruct;
@end
