@interface FavFileRetainCount : NSObject <WCTTableCoding>
{
    unsigned int _itemLocalId; // +0x8
    NSString * _md5; // +0x10
    NSString * _dataFmt; // +0x18
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)md5;
+ (const void *)__wcdb_synthesize_89:(void *)arg1;
+ (id)swift_md5;
+ (const void *)itemLocalId;
+ (const void *)__wcdb_synthesize_90:(void *)arg1;
+ (id)swift_itemLocalId;
+ (const void *)dataFmt;
+ (const void *)__wcdb_synthesize_91:(void *)arg1;
+ (id)swift_dataFmt;
+ (void)__wcdb_index_92:(void *)arg1;
+ (void)__wcdb_index_93:(void *)arg1;
+ (void)__wcdb_column_constraint_94:(void *)arg1;
- (id)md5;
- (void)setMd5:(id)arg1;
- (unsigned int)itemLocalId;
- (void)setItemLocalId:(unsigned int)arg1;
- (id)dataFmt;
- (void)setDataFmt:(id)arg1;
- (void).cxx_destruct;
@end
