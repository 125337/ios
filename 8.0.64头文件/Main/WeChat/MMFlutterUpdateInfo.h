@interface MMFlutterUpdateInfo : MMObject <WCTTableCoding, NSCopying>
{
    NSString * appId; // +0x8
    NSString * baseId; // +0x10
    NSString * pId; // +0x18
    NSString * type; // +0x20
    NSString * signatrueKey; // +0x28
    unsigned long long updateTime; // +0x30
    NSString * md5; // +0x38
    NSString * path; // +0x40
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)appId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_appId;
+ (const void *)baseId;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_baseId;
+ (const void *)pId;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_pId;
+ (const void *)type;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_type;
+ (const void *)signatrueKey;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_signatrueKey;
+ (const void *)updateTime;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_updateTime;
+ (const void *)md5;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_md5;
+ (void)__wcdb_column_constraint_7:(void *)arg1;
+ (id)createItem:(id)arg1 baseId:(id)arg2 pId:(id)arg3 md5:(id)arg4 filePath:(id)arg5 signatrueKey:(id)arg6 type:(id)arg7;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)init;
- (BOOL)isDebug;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)baseId;
- (void)setBaseId:(id)arg1;
- (id)pId;
- (void)setPId:(id)arg1;
- (id)type;
- (void)setType:(id)arg1;
- (id)signatrueKey;
- (void)setSignatrueKey:(id)arg1;
- (unsigned long long)updateTime;
- (void)setUpdateTime:(unsigned long long)arg1;
- (id)md5;
- (void)setMd5:(id)arg1;
- (id)path;
- (void)setPath:(id)arg1;
- (void).cxx_destruct;
@end
