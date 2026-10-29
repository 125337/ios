@interface FTS5NewFavSearchItem : NSObject <WCTTableCoding>
{
    unsigned int localId; // +0x8
    unsigned int updateTime; // +0xc
    unsigned int _FavItemReservedInt; // +0x10
    NSString * searchTitle; // +0x18
    NSString * searchDesc; // +0x20
    NSString * searchSource; // +0x28
    NSString * _FavItemReservedText; // +0x30
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)searchTitle;
+ (const void *)__wcdb_synthesize_65:(void *)arg1;
+ (id)swift_searchTitle;
+ (const void *)searchDesc;
+ (const void *)__wcdb_synthesize_66:(void *)arg1;
+ (id)swift_searchDesc;
+ (const void *)searchSource;
+ (const void *)__wcdb_synthesize_67:(void *)arg1;
+ (id)swift_searchSource;
+ (const void *)localId;
+ (const void *)__wcdb_synthesize_68:(void *)arg1;
+ (id)swift_localId;
+ (const void *)updateTime;
+ (const void *)__wcdb_synthesize_69:(void *)arg1;
+ (id)swift_updateTime;
+ (const void *)FavItemReservedInt;
+ (const void *)__wcdb_synthesize_70:(void *)arg1;
+ (id)swift_FavItemReservedInt;
+ (const void *)FavItemReservedText;
+ (const void *)__wcdb_synthesize_71:(void *)arg1;
+ (id)swift_FavItemReservedText;
+ (void)__wcdb_virtual_table_72:(void *)arg1;
+ (void)__wcdb_virtual_table_73:(void *)arg1;
+ (void)__wcdb_column_constraint_74:(void *)arg1;
+ (void)__wcdb_column_constraint_75:(void *)arg1;
+ (void)__wcdb_column_constraint_76:(void *)arg1;
+ (void)__wcdb_column_constraint_77:(void *)arg1;
+ (void)__wcdb_column_constraint_78:(void *)arg1;
+ (void)__wcdb_column_constraint_79:(void *)arg1;
+ (void)__wcdb_column_constraint_80:(void *)arg1;
- (id)description;
- (unsigned int)localId;
- (void)setLocalId:(unsigned int)arg1;
- (unsigned int)updateTime;
- (void)setUpdateTime:(unsigned int)arg1;
- (id)searchTitle;
- (void)setSearchTitle:(id)arg1;
- (id)searchDesc;
- (void)setSearchDesc:(id)arg1;
- (id)searchSource;
- (void)setSearchSource:(id)arg1;
- (unsigned int)FavItemReservedInt;
- (void)setFavItemReservedInt:(unsigned int)arg1;
- (id)FavItemReservedText;
- (void)setFavItemReservedText:(id)arg1;
- (void).cxx_destruct;
@end
