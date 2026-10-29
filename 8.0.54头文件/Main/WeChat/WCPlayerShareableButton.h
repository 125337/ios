@interface WCPlayerShareableButton : MMUIButton
{
    RichTextView * _richTitle; // +0x8
    UIImageView * _indicator; // +0x10
    UIView * _hightLightMaskView; // +0x18
}
- (id)initWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (id)richTitle;
- (void)prepareForAccessibility;
- (id)indicator;
- (void)layoutSubviews;
- (void)sizeToFit;
- (id)hightLightMaskView;
- (void)setHighlighted:(BOOL)arg1;
- (void)setRichTitle:(id)arg1;
- (void)setIndicator:(id)arg1;
- (void)setHightLightMaskView:(id)arg1;
- (void).cxx_destruct;
@end

