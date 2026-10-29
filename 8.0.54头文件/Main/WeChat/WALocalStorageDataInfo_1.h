@interface WALocalStorageDataInfo_1 : NSObject <WCTTableCoding>
{
    int _storageId; // +0x8
    unsigned int _keyAndDataLength; // +0xc
    unsigned int _lastModifyTime; // +0x10
    NSString * _key; // +0x18
    NSString * _dataType; // +0x20
    NSString * _data; // +0x28
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)storageId;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (id)swift_storageId;
+ (const void *)key;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (id)swift_key;
+ (const void *)keyAndDataLength;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (id)swift_keyAndDataLength;
+ (const void *)lastModifyTime;
+ (const void *)__wcdb_synthesize_13:(void *)arg1;
+ (id)swift_lastModifyTime;
+ (const void *)dataType;
+ (const void *)__wcdb_synthesize_14:(void *)arg1;
+ (id)swift_dataType;
+ (const void *)data;
+ (const void *)__wcdb_synthesize_15:(void *)arg1;
+ (id)swift_data;
+ (void)__wcdb_table_constraint_16:(void *)arg1;
+ (void)__wcdb_table_constraint_17:(void *)arg1;
+ (void)__wcdb_column_constraint_18:(void *)arg1;
- (int)storageId;
- (void)setStorageId:(int)arg1;
- (id)key;
- (void)setKey:(id)arg1;
- (unsigned int)keyAndDataLength;
- (void)setKeyAndDataLength:(unsigned int)arg1;
- (unsigned int)lastModifyTime;
- (void)setLastModifyTime:(unsigned int)arg1;
- (id)dataType;
- (void)setDataType:(id)arg1;
- (id)data;
- (void)setData:(id)arg1;
- (void).cxx_destruct;
@end

