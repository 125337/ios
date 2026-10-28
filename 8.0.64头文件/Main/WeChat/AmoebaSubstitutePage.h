@interface AmoebaSubstitutePage : NSObject <NSCopying>
{
    BOOL _is4TabOfLauncherUI; // +0x8
    BOOL _isFullSubPage; // +0x9
    BOOL _isSubPage; // +0xa
    BOOL _isParentPage; // +0xb
    BOOL _isFlutterPage; // +0xc
    unsigned long long _pageHash; // +0x10
    NSString * _pageHashStr; // +0x18
    NSString * _pageName; // +0x20
    long long _stackDeep; // +0x28
    NSString * _title; // +0x30
    NSString * _currEnterMethod; // +0x38
    NSString * _origEnterMethod; // +0x40
}
- (id)init;
- (id)initWithObj:(id)arg1;
- (id)initWithPageHash:(unsigned long long)arg1 withPageName:(id)arg2;
- (BOOL)isEqualObject:(id)arg1;
- (BOOL)isEqualSubstitutePage:(id)arg1;
- (BOOL)isEqualHash:(unsigned long long)arg1;
- (BOOL)isEqualHash:(unsigned long long)arg1 pageName:(id)arg2;
- (id)toString;
- (id)getCurrEnterMethod;
- (id)getOrigEnterMethod;
- (id)getEnterMethodJson;
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (unsigned long long)pageHash;
- (void)setPageHash:(unsigned long long)arg1;
- (id)pageHashStr;
- (void)setPageHashStr:(id)arg1;
- (id)pageName;
- (void)setPageName:(id)arg1;
- (BOOL)is4TabOfLauncherUI;
- (void)setIs4TabOfLauncherUI:(BOOL)arg1;
- (BOOL)isFullSubPage;
- (void)setIsFullSubPage:(BOOL)arg1;
- (BOOL)isSubPage;
- (void)setIsSubPage:(BOOL)arg1;
- (BOOL)isParentPage;
- (void)setIsParentPage:(BOOL)arg1;
- (BOOL)isFlutterPage;
- (void)setIsFlutterPage:(BOOL)arg1;
- (long long)stackDeep;
- (void)setStackDeep:(long long)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)currEnterMethod;
- (void)setCurrEnterMethod:(id)arg1;
- (id)origEnterMethod;
- (void)setOrigEnterMethod:(id)arg1;
- (void).cxx_destruct;
@end
