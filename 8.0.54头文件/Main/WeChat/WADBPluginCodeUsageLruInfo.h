@interface WADBPluginCodeUsageLruInfo : NSObject
{
    unsigned int _hit; // +0x8
    unsigned int _updateTime; // +0xc
    NSString * _appID; // +0x10
    unsigned long long _version; // +0x18
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)appID;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_appID;
+ (const void *)version;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_version;
+ (const void *)hit;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_hit;
+ (const void *)updateTime;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_updateTime;
+ (void)__wcdb_table_constraint_4:(void *)arg1;
+ (void)__wcdb_table_constraint_5:(void *)arg1;
- (id)appID;
- (void)setAppID:(id)arg1;
- (unsigned long long)version;
- (void)setVersion:(unsigned long long)arg1;
- (unsigned int)hit;
- (void)setHit:(unsigned int)arg1;
- (unsigned int)updateTime;
- (void)setUpdateTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end

