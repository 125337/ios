@interface FTS5NewMsgContentItem : NSObject <WCTTableCoding>
{
    unsigned int _userNameId; // +0x8
    unsigned int _msgLocalId; // +0xc
    unsigned int _createTime; // +0x10
    unsigned int _reservedInt; // +0x14
    NSString * _msg; // +0x18
    NSString * _reservedText; // +0x20
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)msg;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (id)swift_msg;
+ (const void *)userNameId;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (id)swift_userNameId;
+ (const void *)msgLocalId;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (id)swift_msgLocalId;
+ (const void *)createTime;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (id)swift_createTime;
+ (const void *)reservedInt;
+ (const void *)__wcdb_synthesize_13:(void *)arg1;
+ (id)swift_reservedInt;
+ (const void *)reservedText;
+ (const void *)__wcdb_synthesize_14:(void *)arg1;
+ (id)swift_reservedText;
+ (void)__wcdb_virtual_table_15:(void *)arg1;
+ (void)__wcdb_virtual_table_16:(void *)arg1;
+ (void)__wcdb_column_constraint_17:(void *)arg1;
+ (void)__wcdb_column_constraint_18:(void *)arg1;
+ (void)__wcdb_column_constraint_19:(void *)arg1;
+ (void)__wcdb_column_constraint_20:(void *)arg1;
+ (void)__wcdb_column_constraint_21:(void *)arg1;
+ (void)__wcdb_column_constraint_22:(void *)arg1;
+ (void)__wcdb_column_constraint_23:(void *)arg1;
+ (void)__wcdb_column_constraint_24:(void *)arg1;
- (id)description;
- (unsigned int)userNameId;
- (void)setUserNameId:(unsigned int)arg1;
- (unsigned int)msgLocalId;
- (void)setMsgLocalId:(unsigned int)arg1;
- (unsigned int)createTime;
- (void)setCreateTime:(unsigned int)arg1;
- (id)msg;
- (void)setMsg:(id)arg1;
- (unsigned int)reservedInt;
- (void)setReservedInt:(unsigned int)arg1;
- (id)reservedText;
- (void)setReservedText:(id)arg1;
- (void).cxx_destruct;
@end

