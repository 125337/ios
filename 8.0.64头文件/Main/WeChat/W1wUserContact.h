@interface W1wUserContact : NSObject <WCTTableCoding>
{
    unsigned int _avatarStyle; // +0x8
    NSString * _username; // +0x10
    NSString * _nickname; // +0x18
    NSString * _avatar; // +0x20
    NSString * _userJumpInfo; // +0x28
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)username;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_username;
+ (const void *)nickname;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_nickname;
+ (const void *)avatar;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_avatar;
+ (const void *)avatarStyle;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_avatarStyle;
+ (const void *)userJumpInfo;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_userJumpInfo;
+ (void)__wcdb_column_constraint_5:(void *)arg1;
- (id)initWithUsername:(id)arg1;
- (id)initWithUserInfo:(id)arg1;
- (id)initWithMsgContactInfo:(id)arg1;
- (id)asContact;
- (BOOL)useRoundAvatar;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)nickname;
- (void)setNickname:(id)arg1;
- (id)avatar;
- (void)setAvatar:(id)arg1;
- (unsigned int)avatarStyle;
- (void)setAvatarStyle:(unsigned int)arg1;
- (id)userJumpInfo;
- (void)setUserJumpInfo:(id)arg1;
- (void).cxx_destruct;
@end
