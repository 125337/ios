@interface TranslateMsgUtil : MMObject
+ (BOOL)alwaysShowEntry;
+ (id)getUserTranslateRootDir;
+ (BOOL)isTranslateMsgOff;
+ (BOOL)couldTranslateMsg:(id)arg1;
+ (BOOL)canShowTranslateMenuItem:(id)arg1;
+ (BOOL)canShowTranslateMenuItemForText:(id)arg1;
+ (id)languageForContent:(id)arg1;
+ (BOOL)isSameLanguage:(id)arg1;
+ (BOOL)isSameLanguage:(id)arg1 filterChar:(BOOL)arg2;
+ (BOOL)isSameLanguage:(id)arg1 lang:(id)arg2;
+ (BOOL)isSameLanguage:(id)arg1 filterChar:(BOOL)arg2 ignoreHansT:(BOOL)arg3 lang:(id)arg4;
@end
