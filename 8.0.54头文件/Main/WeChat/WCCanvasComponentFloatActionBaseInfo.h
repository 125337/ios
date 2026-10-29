@interface WCCanvasComponentFloatActionBaseInfo : MMObject <NSCoding>
{
    BOOL _backgroundBlurEffect; // +0x8
    BOOL _isFullClickable; // +0x9
    NSString * _backgroundImg; // +0x10
    NSString * _backgroundColor; // +0x18
    double _backgroundColorAlpha; // +0x20
    NSString * _backgroundBlurEffectColor; // +0x28
    double _backgroundBlurEffectColorAlpha; // +0x30
    NSString * _iconUrl; // +0x38
    NSString * _title; // +0x40
    NSString * _titleColor; // +0x48
    double _titleColorAlpha; // +0x50
    NSString * _desc; // +0x58
    NSString * _descColor; // +0x60
    double _descColorAlpha; // +0x68
    WCCanvasComponentItem * _actionButton; // +0x70
}
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)backgroundImg;
- (void)setBackgroundImg:(id)arg1;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (double)backgroundColorAlpha;
- (void)setBackgroundColorAlpha:(double)arg1;
- (BOOL)backgroundBlurEffect;
- (void)setBackgroundBlurEffect:(BOOL)arg1;
- (id)backgroundBlurEffectColor;
- (void)setBackgroundBlurEffectColor:(id)arg1;
- (double)backgroundBlurEffectColorAlpha;
- (void)setBackgroundBlurEffectColorAlpha:(double)arg1;
- (id)iconUrl;
- (void)setIconUrl:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)titleColor;
- (void)setTitleColor:(id)arg1;
- (double)titleColorAlpha;
- (void)setTitleColorAlpha:(double)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)descColor;
- (void)setDescColor:(id)arg1;
- (double)descColorAlpha;
- (void)setDescColorAlpha:(double)arg1;
- (BOOL)isFullClickable;
- (void)setIsFullClickable:(BOOL)arg1;
- (id)actionButton;
- (void)setActionButton:(id)arg1;
- (void).cxx_destruct;
@end

