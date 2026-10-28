@interface LiteAppPageConfig : NSObject
{
    BOOL _useCoreText; // +0x8
    unsigned long long _backgroundColor; // +0x10
    unsigned long long _darkBackgroundColor; // +0x18
    unsigned long long _titleBackgroundColor; // +0x20
    unsigned long long _darkTitleBackgroundColor; // +0x28
    long long _pageOrientation; // +0x30
    NSString * _backgroundImagePath; // +0x38
    NSString * _darkBackgroundImagePath; // +0x40
    NSString * _backgroundImageMode; // +0x48
    NSString * _globalPkgAppId; // +0x50
    NSString * _globalPkgMinVersion; // +0x58
}
- (id)initWithJson:(id)arg1;
- (id)stringForKey:(id)arg1 key:(id)arg2 defaultValue:(id)arg3;
- (long long)intForKey:(id)arg1 key:(id)arg2 defaultValue:(long long)arg3;
- (unsigned long long)uintForKey:(id)arg1 key:(id)arg2 defaultValue:(unsigned long long)arg3;
- (BOOL)boolForKey:(id)arg1 key:(id)arg2;
- (BOOL)darkMode;
- (id)currentBackgroundColor;
- (id)currentTitleBackgroundColor;
- (id)currentBackgroundImage:(id)arg1;
- (long long)currentBackgroundImageMode;
- (unsigned long long)backgroundColor;
- (void)setBackgroundColor:(unsigned long long)arg1;
- (unsigned long long)darkBackgroundColor;
- (void)setDarkBackgroundColor:(unsigned long long)arg1;
- (unsigned long long)titleBackgroundColor;
- (void)setTitleBackgroundColor:(unsigned long long)arg1;
- (unsigned long long)darkTitleBackgroundColor;
- (void)setDarkTitleBackgroundColor:(unsigned long long)arg1;
- (long long)pageOrientation;
- (void)setPageOrientation:(long long)arg1;
- (BOOL)useCoreText;
- (void)setUseCoreText:(BOOL)arg1;
- (id)backgroundImagePath;
- (void)setBackgroundImagePath:(id)arg1;
- (id)darkBackgroundImagePath;
- (void)setDarkBackgroundImagePath:(id)arg1;
- (id)backgroundImageMode;
- (void)setBackgroundImageMode:(id)arg1;
- (id)globalPkgAppId;
- (void)setGlobalPkgAppId:(id)arg1;
- (id)globalPkgMinVersion;
- (void)setGlobalPkgMinVersion:(id)arg1;
- (void).cxx_destruct;
@end
