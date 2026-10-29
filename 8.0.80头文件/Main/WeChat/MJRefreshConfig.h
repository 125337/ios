@interface MJRefreshConfig : NSObject
{
    NSString * _languageCode; // +0x8
    NSString * _i18nFilename; // +0x10
    NSBundle * _i18nBundle; // +0x18
}
+ (void)resetLanguageResourceCache;
+ (id)defaultConfig;
- (void)setLanguageCode:(id)arg1;
- (id)languageCode;
- (id)i18nFilename;
- (void)setI18nFilename:(id)arg1;
- (id)i18nBundle;
- (void)setI18nBundle:(id)arg1;
- (void).cxx_destruct;
@end
