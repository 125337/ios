@interface WSWowShareReceiverVideoContentView : UIView
{
    unsigned int _type; // +0x8
    MMWebImageView * _thumbImageView; // +0x10
    UIView * _thumbShadowView; // +0x18
    MMUIImageView * _thumbIconView; // +0x20
    MMUILabel * _titleLabel; // +0x28
    MMUILabel * _subTitleLabel; // +0x30
    UIView * _bottomLine; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (void)outsideSetType:(unsigned int)arg1 title:(id)arg2 subTitle:(id)arg3 videoThumbUrl:(id)arg4;
- (void)layoutSubviews;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)thumbImageView;
- (void)setThumbImageView:(id)arg1;
- (id)thumbShadowView;
- (void)setThumbShadowView:(id)arg1;
- (id)thumbIconView;
- (void)setThumbIconView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg1;
- (id)bottomLine;
- (void)setBottomLine:(id)arg1;
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;
- (void).cxx_destruct;
@end
