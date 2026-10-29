@interface FTS3MsgContentItem : NSObject <WCTTableCoding>
{
    unsigned int userNameId; // +0x8
    unsigned int msgLocalId; // +0xc
    unsigned int createTime; // +0x10
    unsigned int _reservedInt; // +0x14
    NSString * msg; // +0x18
    NSString * _reservedText; // +0x20
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)userNameId;
+ (const void *)__wcdb_synthesize_25:(void *)arg1;
+ (id)swift_userNameId;
+ (const void *)msgLocalId;
+ (const void *)__wcdb_synthesize_26:(void *)arg1;
+ (id)swift_msgLocalId;
+ (const void *)createTime;
+ (const void *)__wcdb_synthesize_27:(void *)arg1;
+ (id)swift_createTime;
+ (const void *)msg;
+ (const void *)__wcdb_synthesize_28:(void *)arg1;
+ (id)swift_msg;
+ (const void *)reservedInt;
+ (const void *)__wcdb_synthesize_29:(void *)arg1;
+ (id)swift_reservedInt;
+ (const void *)reservedText;
+ (const void *)__wcdb_synthesize_30:(void *)arg1;
+ (id)swift_reservedText;
+ (void)__wcdb_virtual_table_31:(void *)arg1;
+ (void)__wcdb_virtual_table_32:(void *)arg1;
+ (void)__wcdb_table_constraint_33:(void *)arg1;
+ (void)__wcdb_table_constraint_34:(void *)arg1;
+ (void)__wcdb_table_constraint_35:(void *)arg1;
+ (void)__wcdb_column_constraint_36:(void *)arg1;
+ (void)__wcdb_column_constraint_37:(void *)arg1;
+ (void)__wcdb_column_constraint_38:(void *)arg1;
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
