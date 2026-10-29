@interface WAConfigInfo : NSObject <WCTTableCoding>
{
    unsigned int type; // +0x8
    unsigned int version; // +0xc
    unsigned int updateTime; // +0x10
    NSString * appID; // +0x18
    NSData * configData; // +0x20
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)appID;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_appID;
+ (const void *)type;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_type;
+ (const void *)version;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_version;
+ (const void *)configData;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_configData;
+ (const void *)updateTime;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_updateTime;
+ (void)__wcdb_table_constraint_5:(void *)arg1;
+ (void)__wcdb_table_constraint_6:(void *)arg1;
- (id)appID;
- (void)setAppID:(id)arg1;
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;
- (unsigned int)version;
- (void)setVersion:(unsigned int)arg1;
- (id)configData;
- (void)setConfigData:(id)arg1;
- (unsigned int)updateTime;
- (void)setUpdateTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end
