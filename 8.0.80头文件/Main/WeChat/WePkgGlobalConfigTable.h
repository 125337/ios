@interface WePkgGlobalConfigTable : MMObject <WCTTableCoding>
{
    unsigned int _lastCheckUpdateTimestamp; // +0x8
    NSString * _pkgId; // +0x10
    NSString * _lastCheckUpdateVersion; // +0x18
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)pkgId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_pkgId;
+ (const void *)lastCheckUpdateTimestamp;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_lastCheckUpdateTimestamp;
+ (const void *)lastCheckUpdateVersion;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_lastCheckUpdateVersion;
+ (void)__wcdb_column_constraint_3:(void *)arg1;
- (id)pkgId;
- (void)setPkgId:(id)arg1;
- (unsigned int)lastCheckUpdateTimestamp;
- (void)setLastCheckUpdateTimestamp:(unsigned int)arg1;
- (id)lastCheckUpdateVersion;
- (void)setLastCheckUpdateVersion:(id)arg1;
- (void).cxx_destruct;
@end
