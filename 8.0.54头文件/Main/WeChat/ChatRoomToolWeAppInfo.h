@interface ChatRoomToolWeAppInfo : MMObject <PBCoding>
{
    NSString * _userName; // +0x8
    NSString * _appUserName; // +0x10
    NSString * _appPagePath; // +0x18
    NSString * _appNickName; // +0x20
    NSString * _appIconUrl; // +0x28
}
+ (void)PBArrayAdd_userName;
+ (void)PBArrayAdd_appUserName;
+ (void)PBArrayAdd_appPagePath;
+ (void)initialize;
- (id)getPBPropertyTable;
- (void)copyFromOtherWeAppInfo:(id)arg1;
- (id)genDBContactChatRoomToolWeApp;
- (void)copyFromDBWeAppInfo:(id)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)appUserName;
- (void)setAppUserName:(id)arg1;
- (id)appPagePath;
- (void)setAppPagePath:(id)arg1;
- (id)appNickName;
- (void)setAppNickName:(id)arg1;
- (id)appIconUrl;
- (void)setAppIconUrl:(id)arg1;
- (void).cxx_destruct;
@end

