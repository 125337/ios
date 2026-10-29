@interface TXYLanguageHandle : NSObject
{
    NSBundle * localLanguageBundle; // +0x8
    BOOL isExitUserLangBundle; // +0x10
    NSBundle * _huiyanSDKUIBundle; // +0x18
    NSString * _languageBundlePath; // +0x20
    NSString * _languageFileName; // +0x28
}
- (id)init;
- (BOOL)setSdkLanguageWith:(unsigned long long)arg1 userLanguageFileName:(id)arg2;
- (id)createLocalBundle:(id)arg1 fileName:(id)arg2;
- (id)checkLanguageFileName:(long long)arg1 userFileName:(id)arg2;
- (id)isExitBundle:(id)arg1;
- (id)setLanguageBundleString:(id)arg1;
- (id)languageBundlePath;
- (void)setLanguageBundlePath:(id)arg1;
- (id)languageFileName;
- (void)setLanguageFileName:(id)arg1;
- (void).cxx_destruct;
@end
