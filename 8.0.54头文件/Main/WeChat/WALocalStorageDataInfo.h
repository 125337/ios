@interface WALocalStorageDataInfo : NSObject <WCTTableCoding>
{
    unsigned int _keyAndDataLength; // +0x8
    unsigned int _lastModifyTime; // +0xc
    NSString * _key; // +0x10
    NSString * _dataType; // +0x18
    NSString * _data; // +0x20
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)key;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_key;
+ (const void *)keyAndDataLength;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_keyAndDataLength;
+ (const void *)lastModifyTime;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_lastModifyTime;
+ (const void *)dataType;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (id)swift_dataType;
+ (const void *)data;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (id)swift_data;
+ (void)__wcdb_column_constraint_9:(void *)arg1;
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

