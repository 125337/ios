@interface WATemplateMsgBanWrap : MMObject <PBCoding>
{
    BOOL _isBanned; // +0x8
    NSString * _appUsername; // +0x10
    NSString * _appNickname; // +0x18
    NSString * _avatarURLString; // +0x20
}
+ (void)PBArrayAdd_appUsername;
+ (void)PBArrayAdd_appNickname;
+ (void)PBArrayAdd_avatarURLString;
+ (void)PBArrayAdd_isBanned;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)appUsername;
- (void)setAppUsername:(id)arg1;
- (id)appNickname;
- (void)setAppNickname:(id)arg1;
- (id)avatarURLString;
- (void)setAvatarURLString:(id)arg1;
- (BOOL)isBanned;
- (void)setIsBanned:(BOOL)arg1;
- (void).cxx_destruct;
@end
