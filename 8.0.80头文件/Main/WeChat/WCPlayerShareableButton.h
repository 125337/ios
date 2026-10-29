@interface WCPlayerShareableButton : MMUIButton
{
    BOOL _usesV3GalleryStyle; // +0x8
    RichTextView * _richTitle; // +0x10
    UIImageView * _indicator; // +0x18
    UIView * _hightLightMaskView; // +0x20
}
- (id)initWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (id)richTitle;
- (void)prepareForAccessibility;
- (id)indicator;
- (void)layoutSubviews;
- (void)sizeToFit;
- (void)applyV3GalleryStyleWithFont:(id)arg1 maximumWidth:(double)arg2;
- (id)hightLightMaskView;
- (void)setHighlighted:(BOOL)arg1;
- (void)setRichTitle:(id)arg1;
- (void)setIndicator:(id)arg1;
- (void)setHightLightMaskView:(id)arg1;
- (BOOL)usesV3GalleryStyle;
- (void)setUsesV3GalleryStyle:(BOOL)arg1;
- (void).cxx_destruct;
@end
