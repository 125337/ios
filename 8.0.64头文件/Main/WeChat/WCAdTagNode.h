@interface WCAdTagNode : NSObject <NSCoding>
{
    NSString * _tagName; // +0x8
    NSString * _iconForDarkMode; // +0x10
    NSString * _iconForLightMode; // +0x18
    NSString * _tagLightBgColor; // +0x20
    NSString * _tagLightNameColor; // +0x28
    NSString * _tagDarkBgColor; // +0x30
    NSString * _tagDarkNameColor; // +0x38
    UIImage * _darkIcon; // +0x40
    UIImage * _lightIcon; // +0x48
}
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isValid;
- (BOOL)hasIcon;
- (id)tagName;
- (void)setTagName:(id)arg1;
- (id)iconForDarkMode;
- (void)setIconForDarkMode:(id)arg1;
- (id)iconForLightMode;
- (void)setIconForLightMode:(id)arg1;
- (id)tagLightBgColor;
- (void)setTagLightBgColor:(id)arg1;
- (id)tagLightNameColor;
- (void)setTagLightNameColor:(id)arg1;
- (id)tagDarkBgColor;
- (void)setTagDarkBgColor:(id)arg1;
- (id)tagDarkNameColor;
- (void)setTagDarkNameColor:(id)arg1;
- (id)darkIcon;
- (void)setDarkIcon:(id)arg1;
- (id)lightIcon;
- (void)setLightIcon:(id)arg1;
- (void).cxx_destruct;
@end
