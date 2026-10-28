@interface TextFloatReferButton : MMUIButton
{
    UIImageView * _rightImageView; // +0x8
    UILabel * _centerLabel; // +0x10
    UIView * _hightLightMaskView; // +0x18
}
- (id)init;
- (void)updateToShortTitle;
- (void)initView;
- (void)layoutSubviews;
- (void)setupShadow;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)hightLightMaskView;
- (void)setHighlighted:(BOOL)arg1;
- (id)rightImageView;
- (void)setRightImageView:(id)arg1;
- (id)centerLabel;
- (void)setCenterLabel:(id)arg1;
- (void)setHightLightMaskView:(id)arg1;
- (void).cxx_destruct;
@end
