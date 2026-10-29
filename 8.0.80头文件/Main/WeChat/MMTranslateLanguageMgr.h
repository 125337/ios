@interface MMTranslateLanguageMgr : MMUserService <MMServiceProtocol>
- (id)setTranslateLanguage:(id)arg1;
- (id)setFollowSystemLanguage;
- (BOOL)isFollowSystemLanguage;
- (id)currentTranslateLanguage;
- (id)currentTranslateLanguageDisplayName;
- (id)getSupportedTranslateLanguages;
- (id)getSupportedTranslateLanguageDisplayNames;
- (id)setTranslateLanguage:(id)arg1 followSystemLanguage:(BOOL)arg2;
@end
