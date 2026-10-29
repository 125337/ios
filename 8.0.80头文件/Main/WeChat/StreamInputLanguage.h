@interface StreamInputLanguage : NSObject
{
    unsigned int _languageType; // +0x8
    NSString * _languageName; // +0x10
    NSString * _voicetransIcon; // +0x18
    NSString * _voicetransIconEnglish; // +0x20
}
- (id)initWithLanguageType:(unsigned int)arg1 LanguageName:(id)arg2;
- (id)initWithLanguageType:(unsigned int)arg1 LanguageName:(id)arg2 transIcon:(id)arg3 transIconEnglish:(id)arg4;
- (unsigned int)languageType;
- (void)setLanguageType:(unsigned int)arg1;
- (id)languageName;
- (void)setLanguageName:(id)arg1;
- (id)voicetransIcon;
- (void)setVoicetransIcon:(id)arg1;
- (id)voicetransIconEnglish;
- (void)setVoicetransIconEnglish:(id)arg1;
- (void).cxx_destruct;
@end
