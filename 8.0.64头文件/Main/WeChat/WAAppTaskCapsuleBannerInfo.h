@interface WAAppTaskCapsuleBannerInfo : MMObject
{
    BOOL _isPersistant; // +0x8
    NSString * _text; // +0x10
    NSString * _iconUrl; // +0x18
    NSString * _darkModeIconUrl; // +0x20
    UIImage * _iconImage; // +0x28
    UIImage * _defaultImage; // +0x30
    unsigned long long _type; // +0x38
    long long _mutationType; // +0x40
}
- (id)text;
- (void)setText:(id)arg1;
- (id)iconUrl;
- (void)setIconUrl:(id)arg1;
- (id)darkModeIconUrl;
- (void)setDarkModeIconUrl:(id)arg1;
- (id)iconImage;
- (void)setIconImage:(id)arg1;
- (id)defaultImage;
- (void)setDefaultImage:(id)arg1;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (long long)mutationType;
- (void)setMutationType:(long long)arg1;
- (BOOL)isPersistant;
- (void)setIsPersistant:(BOOL)arg1;
- (void).cxx_destruct;
@end
