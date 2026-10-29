@interface W1wUserInfo : NSObject
{
    int _avatarStyle; // +0x8
    NSString * _username; // +0x10
    NSString * _nickname; // +0x18
    NSString * _avatar; // +0x20
}
+ (id)userInfoWithDict:(id)arg1;
- (id)description;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)nickname;
- (void)setNickname:(id)arg1;
- (id)avatar;
- (void)setAvatar:(id)arg1;
- (int)avatarStyle;
- (void)setAvatarStyle:(int)arg1;
- (void).cxx_destruct;
@end
