@interface WALocalStorageMainInfo : NSObject <WCTTableCoding>
{
    unsigned int _lastModifyTime; // +0x8
    NSString * _appID; // +0x10
    unsigned long long _storageLength; // +0x18
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)appID;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_appID;
+ (const void *)storageLength;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_storageLength;
+ (const void *)lastModifyTime;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_lastModifyTime;
+ (void)__wcdb_column_constraint_3:(void *)arg1;
- (id)appID;
- (void)setAppID:(id)arg1;
- (unsigned long long)storageLength;
- (void)setStorageLength:(unsigned long long)arg1;
- (unsigned int)lastModifyTime;
- (void)setLastModifyTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end

