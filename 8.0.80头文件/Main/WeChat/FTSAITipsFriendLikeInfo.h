@interface FTSAITipsFriendLikeInfo : NSObject
{
    NSString * _userName; // +0x8
    NSString * _nickName; // +0x10
    NSString * _avatarUrl; // +0x18
    unsigned long long _timestamp; // +0x20
}
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)nickName;
- (void)setNickName:(id)arg1;
- (id)avatarUrl;
- (void)setAvatarUrl:(id)arg1;
- (unsigned long long)timestamp;
- (void)setTimestamp:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
