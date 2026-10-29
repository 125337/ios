@interface WCMediaEcsInfoButton : MMUIButton
{
    UIImageView * _leftImageView; // +0x8
    UIImageView * _rightImageView; // +0x10
    UILabel * _centerLabel; // +0x18
    UIView * _hightLightMaskView; // +0x20
    NSString * _wording; // +0x28
}
- (id)init;
- (void)initView;
- (void)layoutSubviews;
- (void)updateWording:(id)arg1;
- (void)updateFont:(id)arg1;
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
- (id)wording;
- (void)setWording:(id)arg1;
- (void).cxx_destruct;
@end
