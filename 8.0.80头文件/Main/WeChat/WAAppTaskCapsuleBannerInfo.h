@interface WAAppTaskCapsuleBannerInfo : MMObject
{
    BOOL _isPersistant; // +0x8
    BOOL _needShow; // +0x9
    BOOL _showed; // +0xa
    NSString * _textPrefix; // +0x10
    NSString * _text; // +0x18
    NSString * _iconUrl; // +0x20
    NSString * _darkModeIconUrl; // +0x28
    UIImage * _iconImage; // +0x30
    UIImage * _defaultImage; // +0x38
    unsigned long long _type; // +0x40
    long long _mutationType; // +0x48
}
- (id)init;
- (id)textPrefix;
- (void)setTextPrefix:(id)arg1;
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
- (BOOL)needShow;
- (void)setNeedShow:(BOOL)arg1;
- (BOOL)showed;
- (void)setShowed:(BOOL)arg1;
- (void).cxx_destruct;
@end
