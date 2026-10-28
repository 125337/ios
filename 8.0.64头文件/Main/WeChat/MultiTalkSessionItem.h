@interface MultiTalkSessionItem : MMObject <WCTTableCoding>
{
    BOOL isAutoIncrement; // +0x8
    unsigned int localID; // +0xc
    unsigned int lastMessageID; // +0x10
    NSString * groupID; // +0x18
    NSString * clientGroupID; // +0x20
    NSString * createUserName; // +0x28
    long long lastInsertedRowID; // +0x30
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)localID;
+ (const void *)__wcdb_synthesize_31:(void *)arg1;
+ (id)swift_localID;
+ (const void *)groupID;
+ (const void *)__wcdb_synthesize_32:(void *)arg1;
+ (id)swift_groupID;
+ (const void *)clientGroupID;
+ (const void *)__wcdb_synthesize_33:(void *)arg1;
+ (id)swift_clientGroupID;
+ (const void *)createUserName;
+ (const void *)__wcdb_synthesize_34:(void *)arg1;
+ (id)swift_createUserName;
+ (const void *)lastMessageID;
+ (const void *)__wcdb_synthesize_35:(void *)arg1;
+ (id)swift_lastMessageID;
+ (void)__wcdb_column_constraint_36:(void *)arg1;
- (BOOL)isSessionItemValid;
- (id)description;
- (unsigned int)localID;
- (void)setLocalID:(unsigned int)arg1;
- (id)groupID;
- (void)setGroupID:(id)arg1;
- (id)clientGroupID;
- (void)setClientGroupID:(id)arg1;
- (id)createUserName;
- (void)setCreateUserName:(id)arg1;
- (unsigned int)lastMessageID;
- (void)setLastMessageID:(unsigned int)arg1;
- (BOOL)isAutoIncrement;
- (void)setIsAutoIncrement:(BOOL)arg1;
- (long long)lastInsertedRowID;
- (void)setLastInsertedRowID:(long long)arg1;
- (void).cxx_destruct;
@end
