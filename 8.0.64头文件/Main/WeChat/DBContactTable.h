@interface DBContactTable : NSObject <WCTTableCoding>
{
    unsigned int _type; // +0x8
    unsigned int _certificationFlag; // +0xc
    unsigned int _imgStatus; // +0x10
    unsigned int _extFlag; // +0x14
    NSString * _userName; // +0x18
    unsigned long long _typeExt; // +0x20
    NSString * _encodeUserName; // +0x28
    DBContactLocal * _dbContactLocal; // +0x30
    DBContactOther * _dbContactOther; // +0x38
    DBContactRemark * _dbContactRemark; // +0x40
    DBContactHeadImage * _dbContactHeadImage; // +0x48
    DBContactProfile * _dbContactProfile; // +0x50
    DBContactSocial * _dbContactSocial; // +0x58
    DBContactChatRoom * _dbContactChatRoom; // +0x60
    DBContactBrand * _dbContactBrand; // +0x68
    NSString * _openIMAppid; // +0x70
    DBContactOpenIM * _dbContactOpenIM; // +0x78
    DBContactEncryptSecret * _dbContactEncryptSecret; // +0x80
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
+ (const void *)typeExt;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_typeExt;
+ (const void *)certificationFlag;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_certificationFlag;
+ (const void *)imgStatus;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_imgStatus;
+ (const void *)encodeUserName;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_encodeUserName;
+ (const void *)dbContactLocal;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_dbContactLocal;
+ (const void *)dbContactOther;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (id)swift_dbContactOther;
+ (const void *)dbContactRemark;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (id)swift_dbContactRemark;
+ (const void *)dbContactHeadImage;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (id)swift_dbContactHeadImage;
+ (const void *)dbContactProfile;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (id)swift_dbContactProfile;
+ (const void *)dbContactSocial;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (id)swift_dbContactSocial;
+ (const void *)dbContactChatRoom;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (id)swift_dbContactChatRoom;
+ (const void *)dbContactBrand;
+ (const void *)__wcdb_synthesize_13:(void *)arg1;
+ (id)swift_dbContactBrand;
+ (const void *)extFlag;
+ (const void *)__wcdb_synthesize_14:(void *)arg1;
+ (id)swift_extFlag;
+ (const void *)openIMAppid;
+ (const void *)__wcdb_synthesize_15:(void *)arg1;
+ (id)swift_openIMAppid;
+ (const void *)dbContactOpenIM;
+ (const void *)__wcdb_synthesize_16:(void *)arg1;
+ (id)swift_dbContactOpenIM;
+ (const void *)dbContactEncryptSecret;
+ (const void *)__wcdb_synthesize_17:(void *)arg1;
+ (id)swift_dbContactEncryptSecret;
+ (void)__wcdb_column_constraint_18:(void *)arg1;
+ (void)__wcdb_column_constraint_19:(void *)arg1;
+ (void)__wcdb_column_constraint_20:(void *)arg1;
+ (void)__wcdb_column_constraint_21:(void *)arg1;
+ (void)__wcdb_column_constraint_22:(void *)arg1;
+ (void)__wcdb_column_constraint_23:(void *)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;
- (unsigned long long)typeExt;
- (void)setTypeExt:(unsigned long long)arg1;
- (unsigned int)certificationFlag;
- (void)setCertificationFlag:(unsigned int)arg1;
- (id)encodeUserName;
- (void)setEncodeUserName:(id)arg1;
- (unsigned int)imgStatus;
- (void)setImgStatus:(unsigned int)arg1;
- (id)dbContactLocal;
- (void)setDbContactLocal:(id)arg1;
- (id)dbContactOther;
- (void)setDbContactOther:(id)arg1;
- (id)dbContactRemark;
- (void)setDbContactRemark:(id)arg1;
- (id)dbContactHeadImage;
- (void)setDbContactHeadImage:(id)arg1;
- (id)dbContactProfile;
- (void)setDbContactProfile:(id)arg1;
- (id)dbContactSocial;
- (void)setDbContactSocial:(id)arg1;
- (id)dbContactChatRoom;
- (void)setDbContactChatRoom:(id)arg1;
- (id)dbContactBrand;
- (void)setDbContactBrand:(id)arg1;
- (unsigned int)extFlag;
- (void)setExtFlag:(unsigned int)arg1;
- (id)openIMAppid;
- (void)setOpenIMAppid:(id)arg1;
- (id)dbContactOpenIM;
- (void)setDbContactOpenIM:(id)arg1;
- (id)dbContactEncryptSecret;
- (void)setDbContactEncryptSecret:(id)arg1;
- (void).cxx_destruct;
@end
