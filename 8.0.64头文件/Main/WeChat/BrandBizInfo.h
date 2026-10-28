@interface BrandBizInfo : NSObject
{
    NSString * _bizuin; // +0x8
    NSString * _username; // +0x10
    NSString * _nickname; // +0x18
    NSString * _avatarImageURL; // +0x20
}
- (id)bizuin;
- (void)setBizuin:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)nickname;
- (void)setNickname:(id)arg1;
- (id)avatarImageURL;
- (void)setAvatarImageURL:(id)arg1;
- (void).cxx_destruct;
@end
