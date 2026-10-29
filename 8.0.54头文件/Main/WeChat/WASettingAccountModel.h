@interface WASettingAccountModel : NSObject
{
    BOOL _selected; // +0x8
    NSString * _avatarUrl; // +0x10
    NSString * _userName; // +0x18
    NSString * _detail; // +0x20
    NSMutableArray * _menuItemsArray; // +0x28
    id _userInfo; // +0x30
}
+ (id)createWithAvatarUrl:(id)arg1 userName:(id)arg2 detail:(id)arg3 selected:(BOOL)arg4 menuItemsArray:(id)arg5;
- (id)avatarUrl;
- (void)setAvatarUrl:(id)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)detail;
- (void)setDetail:(id)arg1;
- (BOOL)selected;
- (void)setSelected:(BOOL)arg1;
- (id)menuItemsArray;
- (void)setMenuItemsArray:(id)arg1;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (void).cxx_destruct;
@end

