@interface WADBContactTable : NSObject <WCTTableCoding>
{
    unsigned int _type; // +0x8
    unsigned int _wxAppOpt; // +0xc
    NSString * _userName; // +0x10
    NSString * _brandIconURL; // +0x18
    NSString * _externalInfo; // +0x20
    WADBContactPack * _contactPack; // +0x28
    NSString * _headImageStatus; // +0x30
    NSString * _appId; // +0x38
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)userName;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_userName;
+ (const void *)type;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_type;
+ (const void *)brandIconURL;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_brandIconURL;
+ (const void *)externalInfo;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_externalInfo;
+ (const void *)contactPack;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_contactPack;
+ (const void *)wxAppOpt;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_wxAppOpt;
+ (const void *)headImageStatus;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_headImageStatus;
+ (const void *)appId;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (id)swift_appId;
+ (void)__wcdb_column_constraint_8:(void *)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;
- (id)brandIconURL;
- (void)setBrandIconURL:(id)arg1;
- (id)externalInfo;
- (void)setExternalInfo:(id)arg1;
- (id)contactPack;
- (void)setContactPack:(id)arg1;
- (unsigned int)wxAppOpt;
- (void)setWxAppOpt:(unsigned int)arg1;
- (id)headImageStatus;
- (void)setHeadImageStatus:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (void).cxx_destruct;
@end

