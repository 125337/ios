@interface URLSchemeIgnoreAlertInfo : MMObject <WCTTableCoding>
{
    unsigned int _updateTime; // +0x8
    NSString * _appID; // +0x10
    NSString * _urlScheme; // +0x18
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)appID;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_appID;
+ (const void *)updateTime;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_updateTime;
+ (const void *)urlScheme;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_urlScheme;
+ (void)__wcdb_column_constraint_3:(void *)arg1;
- (id)appID;
- (void)setAppID:(id)arg1;
- (unsigned int)updateTime;
- (void)setUpdateTime:(unsigned int)arg1;
- (id)urlScheme;
- (void)setUrlScheme:(id)arg1;
- (void).cxx_destruct;
@end

