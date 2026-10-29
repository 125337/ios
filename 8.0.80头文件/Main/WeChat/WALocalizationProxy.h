@interface WALocalizationProxy : NSObject <IWALocalizationService>
+ (id)localizedStringForKey:(id)arg1;
+ (void)updateLanguage:(id)arg1 forRefresh:(BOOL)arg2 withViewScene:(unsigned int)arg3 shouldChangeMainFrame:(BOOL)arg4;
+ (void)setTranslateLanguageVCInstance:(id)arg1;
+ (id)getTranslateLanguageVCInstance;
+ (void)changeTranslateLanguageWithUserData:(id)arg1 viewController:(id)arg2;
+ (id)getChangeTranslateUserData;
@end
