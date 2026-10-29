@interface GameLifeContact : NSObject <WCTTableCoding>
{
    BOOL _isValid; // +0x8
    unsigned int _accountType; // +0xc
    unsigned int _sex; // +0x10
    NSString * _username; // +0x18
    NSString * _nickname; // +0x20
    NSString * _avatarUrl; // +0x28
    NSString * _tag; // +0x30
    WCGameLifeProfileJumpInfo * _jumpInfo; // +0x38
    unsigned long long _updateTime; // +0x40
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)username;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_username;
+ (const void *)accountType;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_accountType;
+ (const void *)nickname;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_nickname;
+ (const void *)avatarUrl;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_avatarUrl;
+ (const void *)sex;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_sex;
+ (const void *)tag;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_tag;
+ (const void *)jumpInfo;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_jumpInfo;
+ (const void *)updateTime;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (id)swift_updateTime;
+ (void)__wcdb_column_constraint_8:(void *)arg1;
- (id)init;
- (id)initWithChatUserInfo:(id)arg1;
- (id)initWithUsername:(id)arg1;
- (id)getJumpUrl;
- (id)description;
- (id)toCContact;
- (id)username;
- (void)setUsername:(id)arg1;
- (unsigned int)accountType;
- (void)setAccountType:(unsigned int)arg1;
- (id)nickname;
- (void)setNickname:(id)arg1;
- (id)avatarUrl;
- (void)setAvatarUrl:(id)arg1;
- (unsigned int)sex;
- (void)setSex:(unsigned int)arg1;
- (id)tag;
- (void)setTag:(id)arg1;
- (id)jumpInfo;
- (void)setJumpInfo:(id)arg1;
- (unsigned long long)updateTime;
- (void)setUpdateTime:(unsigned long long)arg1;
- (BOOL)isValid;
- (void)setIsValid:(BOOL)arg1;
- (void).cxx_destruct;
@end
