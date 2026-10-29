@interface WAContactRemoteVersion : MMObject <WCTTableCoding>
{
    unsigned int _lastVersion; // +0x8
    unsigned int _launchFallbackDirectlyMinVersion; // +0xc
    unsigned int _reportId; // +0x10
    NSString * _userName; // +0x18
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)userName;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_userName;
+ (const void *)lastVersion;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_lastVersion;
+ (const void *)reportId;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_reportId;
+ (const void *)launchFallbackDirectlyMinVersion;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_launchFallbackDirectlyMinVersion;
+ (void)__wcdb_column_constraint_4:(void *)arg1;
- (id)description;
- (id)userName;
- (void)setUserName:(id)arg1;
- (unsigned int)lastVersion;
- (void)setLastVersion:(unsigned int)arg1;
- (unsigned int)launchFallbackDirectlyMinVersion;
- (void)setLaunchFallbackDirectlyMinVersion:(unsigned int)arg1;
- (unsigned int)reportId;
- (void)setReportId:(unsigned int)arg1;
- (void).cxx_destruct;
@end

