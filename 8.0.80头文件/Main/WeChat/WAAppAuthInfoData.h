@interface WAAppAuthInfoData : MMObject
{
    unsigned int _state; // +0x8
    NSString * _appid; // +0x10
    NSString * _scopeKey; // +0x18
    NSString * _scopeDesc; // +0x20
    UserAvatarInfo * _avatarInfo; // +0x28
    NSString * _subDesc; // +0x30
    NSString * _authWording; // +0x38
    NSString * _bottomDesc; // +0x40
    NSString * _scopeSecDesc; // +0x48
    NSString * _itemTitle; // +0x50
}
- (id)copyWithZone:(_NSZone *)arg1;
- (id)description;
- (id)selectedAvatarItem;
- (id)appid;
- (void)setAppid:(id)arg1;
- (id)scopeKey;
- (void)setScopeKey:(id)arg1;
- (id)scopeDesc;
- (void)setScopeDesc:(id)arg1;
- (unsigned int)state;
- (void)setState:(unsigned int)arg1;
- (id)avatarInfo;
- (void)setAvatarInfo:(id)arg1;
- (id)subDesc;
- (void)setSubDesc:(id)arg1;
- (id)authWording;
- (void)setAuthWording:(id)arg1;
- (id)bottomDesc;
- (void)setBottomDesc:(id)arg1;
- (id)scopeSecDesc;
- (void)setScopeSecDesc:(id)arg1;
- (id)itemTitle;
- (void)setItemTitle:(id)arg1;
- (void).cxx_destruct;
@end
