@interface MJPublisherButton : MMUIButton
{
    UILabel * _customTitleLabel; // +0x8
    UIImageView * _customImageView; // +0x10
    UIStackView * _stackView; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setTintColor:(id)arg1;
- (id)customTitle;
- (void)setCustomTitle:(id)arg1;
- (id)customImage;
- (void)setCustomImage:(id)arg1;
- (double)spacing;
- (void)setSpacing:(double)arg1;
- (long long)axis;
- (void)setAxis:(long long)arg1;
- (void)setAlignmentCenter;
- (void)setHorizontalAlignmentLeftWithInset:(double)arg1;
- (id)customTitleLabel;
- (id)customImageView;
- (id)stackView;
- (void)setStackView:(id)arg1;
- (void).cxx_destruct;
@end

