@interface BrandLemmaContent : NSObject
{
    unsigned int _type; // +0x8
    NSDictionary * _i18n; // +0x10
}
- (id)getLemmaForLocale:(id)arg1;
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;
- (id)i18n;
- (void)setI18n:(id)arg1;
- (void).cxx_destruct;
@end

