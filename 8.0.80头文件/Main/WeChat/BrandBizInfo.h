@interface BrandBizInfo : NSObject
{
    int _bizType; // +0x8
    NSString * _bizuin; // +0x10
    NSString * _username; // +0x18
    NSString * _nickname; // +0x20
    NSString * _avatarImageURL; // +0x28
}
- (id)bizuin;
- (void)setBizuin:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)nickname;
- (void)setNickname:(id)arg1;
- (id)avatarImageURL;
- (void)setAvatarImageURL:(id)arg1;
- (int)bizType;
- (void)setBizType:(int)arg1;
- (void).cxx_destruct;
@end
