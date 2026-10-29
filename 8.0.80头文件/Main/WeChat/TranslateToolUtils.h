@interface TranslateToolUtils : NSObject
+ (BOOL)IsOpenInputTranslating;
+ (id)getDefaultLanguage;
+ (id)getSupportLanguage;
+ (BOOL)isSupportLanguage:(id)arg1;
+ (id)getLanguageDesWithType:(id)arg1;
+ (id)getLastUseLanguageType:(id)arg1;
+ (void)setLastUseLanguageType:(id)arg1 chatName:(id)arg2;
+ (id)getLastUseTransResult:(id)arg1 language:(id)arg2;
+ (void)setLastUseTransResult:(id)arg1 chatName:(id)arg2 language:(id)arg3;
+ (BOOL)hadShowPlaceHolder;
+ (void)setShowPlaceHolder;
+ (BOOL)isDispalyingTranslateTool:(id)arg1;
+ (void)setTranslateTool:(id)arg1 dispalying:(BOOL)arg2;
+ (void)notifyEnterNewSession;
+ (void)notifyExposeUseBtn:(id)arg1;
+ (void)notifyUserOpenTranslateTool:(id)arg1;
+ (void)notifyUserUseTranslate:(id)arg1;
@end
