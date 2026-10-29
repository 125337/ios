@interface WABizAttrSyncBuffer : NSObject <WCTTableCoding>
{
    unsigned int _lastUpdateTime; // +0x8
    NSString * _userName; // +0x10
    NSData * _version; // +0x18
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)userName;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (id)swift_userName;
+ (const void *)lastUpdateTime;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (id)swift_lastUpdateTime;
+ (const void *)version;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (id)swift_version;
+ (void)__wcdb_column_constraint_12:(void *)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (unsigned int)lastUpdateTime;
- (void)setLastUpdateTime:(unsigned int)arg1;
- (id)version;
- (void)setVersion:(id)arg1;
- (void).cxx_destruct;
@end

