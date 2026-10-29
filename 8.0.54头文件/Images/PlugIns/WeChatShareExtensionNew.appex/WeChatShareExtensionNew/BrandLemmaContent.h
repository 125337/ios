@interface BrandLemmaContent : NSObject
{
    long long _type; // +0x8
    NSDictionary * _i18n; // +0x10
}
- (id)getLemma;
- (long long)type;
- (void)setType:(long long)arg1;
- (id)i18n;
- (void)setI18n:(id)arg1;
- (void).cxx_destruct;
@end

