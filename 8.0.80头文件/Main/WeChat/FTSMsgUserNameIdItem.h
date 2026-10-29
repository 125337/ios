@interface FTSMsgUserNameIdItem : NSObject <WCTTableCoding>
{
    BOOL isAutoIncrement; // +0x8
    unsigned int userNameId; // +0xc
    unsigned int validFlag; // +0x10
    unsigned int tableId; // +0x14
    unsigned int preCursorMesId; // +0x18
    unsigned int nextCursorMesId; // +0x1c
    NSString * userName; // +0x20
    long long lastInsertedRowID; // +0x28
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)userNameId;
+ (const void *)__wcdb_synthesize_39:(void *)arg1;
+ (id)swift_userNameId;
+ (const void *)validFlag;
+ (const void *)__wcdb_synthesize_40:(void *)arg1;
+ (id)swift_validFlag;
+ (const void *)userName;
+ (const void *)__wcdb_synthesize_41:(void *)arg1;
+ (id)swift_userName;
+ (const void *)tableId;
+ (const void *)__wcdb_synthesize_42:(void *)arg1;
+ (id)swift_tableId;
+ (const void *)preCursorMesId;
+ (const void *)__wcdb_synthesize_43:(void *)arg1;
+ (id)swift_preCursorMesId;
+ (const void *)nextCursorMesId;
+ (const void *)__wcdb_synthesize_44:(void *)arg1;
+ (id)swift_nextCursorMesId;
+ (void)__wcdb_column_constraint_45:(void *)arg1;
+ (void)__wcdb_column_constraint_46:(void *)arg1;
+ (void)__wcdb_column_constraint_47:(void *)arg1;
+ (void)__wcdb_column_constraint_48:(void *)arg1;
+ (void)__wcdb_column_constraint_49:(void *)arg1;
- (id)description;
- (unsigned int)userNameId;
- (void)setUserNameId:(unsigned int)arg1;
- (unsigned int)validFlag;
- (void)setValidFlag:(unsigned int)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (unsigned int)tableId;
- (void)setTableId:(unsigned int)arg1;
- (unsigned int)preCursorMesId;
- (void)setPreCursorMesId:(unsigned int)arg1;
- (unsigned int)nextCursorMesId;
- (void)setNextCursorMesId:(unsigned int)arg1;
- (BOOL)isAutoIncrement;
- (void)setIsAutoIncrement:(BOOL)arg1;
- (long long)lastInsertedRowID;
- (void)setLastInsertedRowID:(long long)arg1;
- (void).cxx_destruct;
@end
