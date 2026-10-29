@interface MultiTalkMessageItem : MMObject <WCTTableCoding>
{
    BOOL isAutoIncrement; // +0x8
    unsigned int localID; // +0xc
    unsigned int createTime; // +0x10
    unsigned int messageType; // +0x14
    unsigned int hasGenWCMessage; // +0x18
    NSString * groupID; // +0x20
    NSString * clientGroupID; // +0x28
    NSString * createUserName; // +0x30
    NSString * messageContent; // +0x38
    long long lastInsertedRowID; // +0x40
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)localID;
+ (const void *)__wcdb_synthesize_22:(void *)arg1;
+ (id)swift_localID;
+ (const void *)groupID;
+ (const void *)__wcdb_synthesize_23:(void *)arg1;
+ (id)swift_groupID;
+ (const void *)clientGroupID;
+ (const void *)__wcdb_synthesize_24:(void *)arg1;
+ (id)swift_clientGroupID;
+ (const void *)createUserName;
+ (const void *)__wcdb_synthesize_25:(void *)arg1;
+ (id)swift_createUserName;
+ (const void *)createTime;
+ (const void *)__wcdb_synthesize_26:(void *)arg1;
+ (id)swift_createTime;
+ (const void *)messageType;
+ (const void *)__wcdb_synthesize_27:(void *)arg1;
+ (id)swift_messageType;
+ (const void *)messageContent;
+ (const void *)__wcdb_synthesize_28:(void *)arg1;
+ (id)swift_messageContent;
+ (const void *)hasGenWCMessage;
+ (const void *)__wcdb_synthesize_29:(void *)arg1;
+ (id)swift_hasGenWCMessage;
+ (void)__wcdb_column_constraint_30:(void *)arg1;
- (BOOL)isMessageItemValid;
- (id)description;
- (unsigned int)localID;
- (void)setLocalID:(unsigned int)arg1;
- (id)groupID;
- (void)setGroupID:(id)arg1;
- (id)clientGroupID;
- (void)setClientGroupID:(id)arg1;
- (id)createUserName;
- (void)setCreateUserName:(id)arg1;
- (unsigned int)createTime;
- (void)setCreateTime:(unsigned int)arg1;
- (unsigned int)messageType;
- (void)setMessageType:(unsigned int)arg1;
- (id)messageContent;
- (void)setMessageContent:(id)arg1;
- (unsigned int)hasGenWCMessage;
- (void)setHasGenWCMessage:(unsigned int)arg1;
- (BOOL)isAutoIncrement;
- (void)setIsAutoIncrement:(BOOL)arg1;
- (long long)lastInsertedRowID;
- (void)setLastInsertedRowID:(long long)arg1;
- (void).cxx_destruct;
@end

