@interface MMDarkModeConfigUtil : NSObject
+ (BOOL)changeDarkModeConfigType:(long long)arg1;
+ (long long)currentDarkModeConfigType;
+ (void)updateCurrentIsDarkMode:(BOOL)arg1;
+ (BOOL)getIsDarkModeFromUIScene;
+ (BOOL)isDarkMode;
@end
