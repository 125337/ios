@interface FTS5FavTagItem : NSObject <WCTTableCoding>
{
    NSString * _tag; // +0x8
    NSString * _localIds; // +0x10
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)tag;
+ (const void *)__wcdb_synthesize_81:(void *)arg1;
+ (id)swift_tag;
+ (const void *)localIds;
+ (const void *)__wcdb_synthesize_82:(void *)arg1;
+ (id)swift_localIds;
+ (void)__wcdb_virtual_table_83:(void *)arg1;
+ (void)__wcdb_virtual_table_84:(void *)arg1;
- (id)tag;
- (void)setTag:(id)arg1;
- (id)localIds;
- (void)setLocalIds:(id)arg1;
- (void).cxx_destruct;
@end
