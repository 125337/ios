@interface FTS5RowidIndexItem : NSObject <WCTTableCoding>
{
    unsigned int _userNameId; // +0x8
    unsigned int _msgLocalId; // +0xc
    unsigned int _tableId; // +0x10
    long long _indexRowid; // +0x18
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)userNameId;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_userNameId;
+ (const void *)msgLocalId;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_msgLocalId;
+ (const void *)tableId;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_tableId;
+ (const void *)indexRowid;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_indexRowid;
+ (void)__wcdb_table_constraint_6:(void *)arg1;
+ (void)__wcdb_table_constraint_7:(void *)arg1;
+ (void)__wcdb_table_constraint_8:(void *)arg1;
- (unsigned int)userNameId;
- (void)setUserNameId:(unsigned int)arg1;
- (unsigned int)msgLocalId;
- (void)setMsgLocalId:(unsigned int)arg1;
- (unsigned int)tableId;
- (void)setTableId:(unsigned int)arg1;
- (long long)indexRowid;
- (void)setIndexRowid:(long long)arg1;
@end

