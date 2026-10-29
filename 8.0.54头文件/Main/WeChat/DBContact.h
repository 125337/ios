@interface DBContact : NSObject <WCTTableCoding>
{
    unsigned int _version; // +0x8
    unsigned int _uin; // +0xc
    unsigned int _sex; // +0x10
    unsigned int _type; // +0x14
    unsigned int _LastChatTime; // +0x18
    NSString * _userName; // +0x20
    NSString * _nickName; // +0x28
    NSString * _email; // +0x30
    NSString * _mobile; // +0x38
    NSString * _fullPinYin; // +0x40
    NSData * _extent; // +0x48
    NSString * _image; // +0x50
    NSString * _draft; // +0x58
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)version;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_version;
+ (const void *)userName;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_userName;
+ (const void *)nickName;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_nickName;
+ (const void *)uin;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_uin;
+ (const void *)email;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_email;
+ (const void *)mobile;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_mobile;
+ (const void *)sex;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_sex;
+ (const void *)fullPinYin;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (id)swift_fullPinYin;
+ (const void *)extent;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (id)swift_extent;
+ (const void *)image;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (id)swift_image;
+ (const void *)type;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (id)swift_type;
+ (const void *)LastChatTime;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (id)swift_LastChatTime;
+ (const void *)draft;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (id)swift_draft;
+ (void)__wcdb_column_constraint_13:(void *)arg1;
+ (void)__wcdb_column_constraint_14:(void *)arg1;
+ (void)__wcdb_column_constraint_15:(void *)arg1;
+ (void)__wcdb_column_constraint_16:(void *)arg1;
+ (void)__wcdb_column_constraint_17:(void *)arg1;
+ (void)__wcdb_column_constraint_18:(void *)arg1;
+ (void)__wcdb_column_constraint_19:(void *)arg1;
- (unsigned int)version;
- (void)setVersion:(unsigned int)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)nickName;
- (void)setNickName:(id)arg1;
- (unsigned int)uin;
- (void)setUin:(unsigned int)arg1;
- (id)email;
- (void)setEmail:(id)arg1;
- (id)mobile;
- (void)setMobile:(id)arg1;
- (unsigned int)sex;
- (void)setSex:(unsigned int)arg1;
- (id)fullPinYin;
- (void)setFullPinYin:(id)arg1;
- (id)extent;
- (void)setExtent:(id)arg1;
- (id)image;
- (void)setImage:(id)arg1;
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;
- (id)draft;
- (void)setDraft:(id)arg1;
- (unsigned int)LastChatTime;
- (void)setLastChatTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end

