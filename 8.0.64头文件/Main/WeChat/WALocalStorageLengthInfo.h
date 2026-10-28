@interface WALocalStorageLengthInfo : NSObject <WCTTableCoding>
{
    int _storageId; // +0x8
    unsigned int _lastModifyTime; // +0xc
    unsigned long long _storageLength; // +0x10
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)storageId;
+ (const void *)__wcdb_synthesize_19:(void *)arg1;
+ (id)swift_storageId;
+ (const void *)storageLength;
+ (const void *)__wcdb_synthesize_20:(void *)arg1;
+ (id)swift_storageLength;
+ (const void *)lastModifyTime;
+ (const void *)__wcdb_synthesize_21:(void *)arg1;
+ (id)swift_lastModifyTime;
+ (void)__wcdb_column_constraint_22:(void *)arg1;
- (int)storageId;
- (void)setStorageId:(int)arg1;
- (unsigned long long)storageLength;
- (void)setStorageLength:(unsigned long long)arg1;
- (unsigned int)lastModifyTime;
- (void)setLastModifyTime:(unsigned int)arg1;
@end
