@interface GameCenterMsgUserInfo : NSObject
{
    NSString * _username; // +0x8
    NSString * _iconUrl; // +0x10
    NSString * _nickname; // +0x18
    NSString * _badgeIconUrl; // +0x20
    NSString * _profileUrl; // +0x28
    GameJumpInfo * _userJumpInfo; // +0x30
}
- (id)getXmlSectionString;
- (id)getProfileUrl;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)iconUrl;
- (void)setIconUrl:(id)arg1;
- (id)nickname;
- (void)setNickname:(id)arg1;
- (id)badgeIconUrl;
- (void)setBadgeIconUrl:(id)arg1;
- (id)profileUrl;
- (void)setProfileUrl:(id)arg1;
- (id)userJumpInfo;
- (void)setUserJumpInfo:(id)arg1;
- (void).cxx_destruct;
@end
