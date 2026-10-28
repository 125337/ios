@interface EditVideoSecondCutPromotionButtonShadowWrapper : MMUIView
{
    EditVideoSecondCutPromotionButton * _button; // +0x8
    CAGradientLayer * _backgroundLayer; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (void)_initButton;
- (void)_initBackgroundLayer;
- (void)layoutSubviews;
- (void)setButtonClickAction:(id)arg1 action:(SEL)arg2;
- (long long)getCurrentEntryType;
- (void)updateEntryType:(long long)arg1;
- (void)updateEditVideoEntrance:(unsigned long long)arg1;
- (id)button;
- (void)setButton:(id)arg1;
- (id)backgroundLayer;
- (void)setBackgroundLayer:(id)arg1;
- (void).cxx_destruct;
@end
