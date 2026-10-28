@interface MultiTalkContactItem : MMObject <WCTTableCoding>
{
    BOOL isAutoIncrement; // +0x8
    unsigned int localID; // +0xc
    int routID; // +0x10
    unsigned int memberListCount; // +0x14
    NSString * groupID; // +0x18
    NSString * clientGroupID; // +0x20
    NSString * wxGroupID; // +0x28
    MultiTalkMemberList * contactMemberList; // +0x30
    NSString * createUserName; // +0x38
    NSString * nickName; // +0x40
    long long lastInsertedRowID; // +0x48
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)localID;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (id)swift_localID;
+ (const void *)groupID;
+ (const void *)__wcdb_synthesize_13:(void *)arg1;
+ (id)swift_groupID;
+ (const void *)clientGroupID;
+ (const void *)__wcdb_synthesize_14:(void *)arg1;
+ (id)swift_clientGroupID;
+ (const void *)wxGroupID;
+ (const void *)__wcdb_synthesize_15:(void *)arg1;
+ (id)swift_wxGroupID;
+ (const void *)routID;
+ (const void *)__wcdb_synthesize_16:(void *)arg1;
+ (id)swift_routID;
+ (const void *)contactMemberList;
+ (const void *)__wcdb_synthesize_17:(void *)arg1;
+ (id)swift_contactMemberList;
+ (const void *)createUserName;
+ (const void *)__wcdb_synthesize_18:(void *)arg1;
+ (id)swift_createUserName;
+ (const void *)nickName;
+ (const void *)__wcdb_synthesize_19:(void *)arg1;
+ (id)swift_nickName;
+ (const void *)memberListCount;
+ (const void *)__wcdb_synthesize_20:(void *)arg1;
+ (id)swift_memberListCount;
+ (void)__wcdb_column_constraint_21:(void *)arg1;
- (id)getContactDisplayName;
- (BOOL)isContactItemValid;
- (id)description;
- (unsigned int)localID;
- (void)setLocalID:(unsigned int)arg1;
- (id)groupID;
- (void)setGroupID:(id)arg1;
- (id)clientGroupID;
- (void)setClientGroupID:(id)arg1;
- (id)wxGroupID;
- (void)setWxGroupID:(id)arg1;
- (int)routID;
- (void)setRoutID:(int)arg1;
- (id)contactMemberList;
- (void)setContactMemberList:(id)arg1;
- (id)createUserName;
- (void)setCreateUserName:(id)arg1;
- (id)nickName;
- (void)setNickName:(id)arg1;
- (unsigned int)memberListCount;
- (void)setMemberListCount:(unsigned int)arg1;
- (BOOL)isAutoIncrement;
- (void)setIsAutoIncrement:(BOOL)arg1;
- (long long)lastInsertedRowID;
- (void)setLastInsertedRowID:(long long)arg1;
- (void).cxx_destruct;
@end
