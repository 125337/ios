@interface WCLocalizationService : NSObject <NSCopying, NSMutableCopying>
{
    NSBundle * _bundle; // +0x8
    NSString * _locale; // +0x10
    long long _brandType; // +0x18
    BrandLemmaTable * _brandLemmaTable; // +0x20
    NSDictionary * _domainDict; // +0x28
    NSDictionary * _localeToLprojNameDict; // +0x30
    NSDictionary * _supportedLanguageDict; // +0x38
    NSString * _currentSystemLanguage; // +0x40
    NSRegularExpression * _domainRegex; // +0x48
}
+ (id)sharedInstance;
+ (id)allocWithZone:(_NSZone *)arg1;
+ (id)getDomainKey:(id)arg1;
- (id)init;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)mutableCopyWithZone:(_NSZone *)arg1;
- (id)locale;
- (id)resolveLocalizedString:(id)arg1;
- (id)getLocalizedString:(id)arg1;
- (id)getBackUpLocalizedString:(id)arg1;
- (id)getReplacedLocalizedString:(id)arg1;
- (id)localeToLprojNameDict;
- (id)supportedLanguageDict;
- (id)currentSystemLanguage;
- (id)trimForiOS9Plus:(id)arg1;
- (id)resolveURLString:(id)arg1;
- (id)domainRegex;
- (id)bundle;
- (void)setBundle:(id)arg1;
- (void)setLocale:(id)arg1;
- (long long)brandType;
- (void)setBrandType:(long long)arg1;
- (id)brandLemmaTable;
- (void)setBrandLemmaTable:(id)arg1;
- (id)domainDict;
- (void)setDomainDict:(id)arg1;
- (void)setLocaleToLprojNameDict:(id)arg1;
- (void)setSupportedLanguageDict:(id)arg1;
- (void)setCurrentSystemLanguage:(id)arg1;
- (void)setDomainRegex:(id)arg1;
- (void).cxx_destruct;
@end

