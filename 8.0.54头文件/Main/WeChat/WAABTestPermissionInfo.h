@interface WAABTestPermissionInfo : NSObject <WCTTableCoding>
{
    unsigned int _appType; // +0x8
    unsigned int _versionType; // +0xc
    NSString * _appID; // +0x10
    NSData * _control_bytes; // +0x18
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)appID;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_appID;
+ (const void *)control_bytes;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_control_bytes;
+ (const void *)appType;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_appType;
+ (const void *)versionType;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_versionType;
+ (void)__wcdb_column_constraint_4:(void *)arg1;
- (id)appID;
- (void)setAppID:(id)arg1;
- (id)control_bytes;
- (void)setControl_bytes:(id)arg1;
- (unsigned int)appType;
- (void)setAppType:(unsigned int)arg1;
- (unsigned int)versionType;
- (void)setVersionType:(unsigned int)arg1;
- (void).cxx_destruct;
@end

