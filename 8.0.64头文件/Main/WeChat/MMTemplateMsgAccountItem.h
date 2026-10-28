@interface MMTemplateMsgAccountItem : MMObject <PBCoding>
{
    NSString * _userName; // +0x8
    NSString * _nickName; // +0x10
    NSString * _avatarUrl; // +0x18
}
+ (void)PBArrayAdd_userName;
+ (void)PBArrayAdd_nickName;
+ (void)PBArrayAdd_avatarUrl;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)nickName;
- (void)setNickName:(id)arg1;
- (id)avatarUrl;
- (void)setAvatarUrl:(id)arg1;
- (void).cxx_destruct;
@end
