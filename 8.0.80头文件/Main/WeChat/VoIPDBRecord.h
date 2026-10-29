@interface VoIPDBRecord : NSObject <WCTTableCoding>
{
    unsigned int _sdkMode; // +0x8
    unsigned int _expireTime; // +0xc
    unsigned int _liveTime; // +0x10
    NSString * _contactUserName; // +0x18
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)contactUserName;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_contactUserName;
+ (const void *)sdkMode;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_sdkMode;
+ (const void *)expireTime;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_expireTime;
+ (const void *)liveTime;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_liveTime;
+ (void)__wcdb_table_constraint_5:(void *)arg1;
+ (void)__wcdb_table_constraint_6:(void *)arg1;
+ (void)__wcdb_table_constraint_7:(void *)arg1;
+ (void)__wcdb_table_constraint_8:(void *)arg1;
- (id)contactUserName;
- (void)setContactUserName:(id)arg1;
- (unsigned int)sdkMode;
- (void)setSdkMode:(unsigned int)arg1;
- (unsigned int)expireTime;
- (void)setExpireTime:(unsigned int)arg1;
- (unsigned int)liveTime;
- (void)setLiveTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end
