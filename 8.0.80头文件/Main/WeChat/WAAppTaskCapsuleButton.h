@interface WAAppTaskCapsuleButton : MMUIButton
{
    BOOL _isDisabled; // +0x8
    UIView * _hightlightedView; // +0x10
    UIImage * _icon; // +0x18
    UIImage * _iconWhenDisabled; // +0x20
}
+ (id)genRoundedCapsuleButton;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)setIsDisabled:(BOOL)arg1;
- (void)updateIcon;
- (void)setHighlighted:(BOOL)arg1;
- (id)hightlightedView;
- (void)setHightlightedView:(id)arg1;
- (BOOL)isDisabled;
- (id)icon;
- (void)setIcon:(id)arg1;
- (id)iconWhenDisabled;
- (void)setIconWhenDisabled:(id)arg1;
- (void).cxx_destruct;
@end
