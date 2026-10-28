@interface FavMusic : NSObject <WCTTableCoding>
{
    BOOL isAutoIncrement; // +0x8
    unsigned int _itemLocalId; // +0xc
    NSString * _musicId; // +0x10
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)itemLocalId;
+ (const void *)__wcdb_synthesize_87:(void *)arg1;
+ (id)swift_itemLocalId;
+ (const void *)musicId;
+ (const void *)__wcdb_synthesize_88:(void *)arg1;
+ (id)swift_musicId;
+ (void)__wcdb_column_constraint_89:(void *)arg1;
+ (void)__wcdb_index_90:(void *)arg1;
+ (void)__wcdb_column_constraint_91:(void *)arg1;
- (BOOL)isAutoIncrement;
- (void)setIsAutoIncrement:(BOOL)arg1;
- (id)musicId;
- (void)setMusicId:(id)arg1;
- (unsigned int)itemLocalId;
- (void)setItemLocalId:(unsigned int)arg1;
- (void).cxx_destruct;
@end
