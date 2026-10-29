@interface FavTagDBItem : NSObject <WCTTableCoding>
{
    unsigned int _tagId; // +0x8
    NSString * _name; // +0x10
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)tagId;
+ (const void *)__wcdb_synthesize_95:(void *)arg1;
+ (id)swift_tagId;
+ (const void *)name;
+ (const void *)__wcdb_synthesize_96:(void *)arg1;
+ (id)swift_name;
+ (void)__wcdb_column_constraint_97:(void *)arg1;
+ (void)__wcdb_column_constraint_98:(void *)arg1;
+ (void)__wcdb_table_constraint_99:(void *)arg1;
- (unsigned int)tagId;
- (void)setTagId:(unsigned int)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (void).cxx_destruct;
@end
