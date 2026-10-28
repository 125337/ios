@interface KFContact : CBaseContact <WCTTableCoding>
{
    BOOL _headImgUpdateFlag; // +0xf0
    unsigned int _kfType; // +0xf4
    unsigned int _updateTime; // +0xf8
    NSString * kfOpenId; // +0x100
    NSString * _brand; // +0x108
    NSString * _headImageUrl; // +0x110
    NSString * _nickName; // +0x118
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)kfOpenId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_kfOpenId;
+ (const void *)kfType;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_kfType;
+ (const void *)brand;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_brand;
+ (const void *)headImageUrl;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_headImageUrl;
+ (const void *)nickName;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_nickName;
+ (const void *)updateTime;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_updateTime;
+ (const void *)headImgUpdateFlag;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_headImgUpdateFlag;
+ (void)__wcdb_column_constraint_7:(void *)arg1;
- (void)setKfOpenId:(id)arg1;
- (id)kfOpenId;
- (unsigned int)kfType;
- (void)setKfType:(unsigned int)arg1;
- (id)brand;
- (void)setBrand:(id)arg1;
- (id)headImageUrl;
- (void)setHeadImageUrl:(id)arg1;
- (id)nickName;
- (void)setNickName:(id)arg1;
- (unsigned int)updateTime;
- (void)setUpdateTime:(unsigned int)arg1;
- (BOOL)headImgUpdateFlag;
- (void)setHeadImgUpdateFlag:(BOOL)arg1;
- (void).cxx_destruct;
@end
