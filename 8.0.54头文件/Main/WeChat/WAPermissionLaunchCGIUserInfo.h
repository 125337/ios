@interface WAPermissionLaunchCGIUserInfo : NSObject
{
    BOOL _isFromBackground; // +0x8
    BOOL _isSilentOpen; // +0x9
    BOOL _isSheetMode; // +0xa
    BOOL _isCustomLoading; // +0xb
    unsigned int _enterScene; // +0xc
    WAAppItemData * _appItem; // +0x10
    NSString * _sessionId; // +0x18
    long long _costTime; // +0x20
    NSString * _migrateFromUsername; // +0x28
}
- (id)appItem;
- (void)setAppItem:(id)arg1;
- (unsigned int)enterScene;
- (void)setEnterScene:(unsigned int)arg1;
- (BOOL)isFromBackground;
- (void)setIsFromBackground:(BOOL)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (BOOL)isSilentOpen;
- (void)setIsSilentOpen:(BOOL)arg1;
- (BOOL)isSheetMode;
- (void)setIsSheetMode:(BOOL)arg1;
- (BOOL)isCustomLoading;
- (void)setIsCustomLoading:(BOOL)arg1;
- (long long)costTime;
- (void)setCostTime:(long long)arg1;
- (id)migrateFromUsername;
- (void)setMigrateFromUsername:(id)arg1;
- (void).cxx_destruct;
@end

