@interface WCWebJSMenuShowConfig : MMObject
{
    unsigned int _forbigFlag; // +0x8
    NSArray * _arrMenuItems; // +0x10
    long long _menuUIStyle; // +0x18
}
- (id)init;
- (BOOL)isForbigSearchInArticleMenuButton;
- (BOOL)isForbigChangeFontSizeMenuButton;
- (unsigned int)forbigFlag;
- (void)setForbigFlag:(unsigned int)arg1;
- (id)arrMenuItems;
- (void)setArrMenuItems:(id)arg1;
- (long long)menuUIStyle;
- (void)setMenuUIStyle:(long long)arg1;
- (void).cxx_destruct;
@end

