@interface WAAvatarItem : NSObject
{
    unsigned int _avatarId; // +0x8
    NSString * _nickname; // +0x10
    NSString * _url; // +0x18
    NSString * _desc; // +0x20
}
+ (id)fromUserAvatarItem:(id)arg1;
+ (id)fromOauthAvatarInfo:(id)arg1;
- (unsigned int)avatarId;
- (void)setAvatarId:(unsigned int)arg1;
- (id)nickname;
- (void)setNickname:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (void).cxx_destruct;
@end

