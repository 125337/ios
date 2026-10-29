@interface MMGMetaRecord : NSObject <WCTTableCoding>
{
    unsigned int _createTime; // +0x8
    unsigned int _totalcount; // +0xc
    unsigned int _receivedCount; // +0x10
    NSString * _chatName; // +0x18
    NSString * _groupId; // +0x20
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)chatName;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_chatName;
+ (const void *)groupId;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_groupId;
+ (const void *)createTime;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_createTime;
+ (const void *)totalcount;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_totalcount;
+ (const void *)receivedCount;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_receivedCount;
+ (void)__wcdb_table_constraint_5:(void *)arg1;
+ (void)__wcdb_table_constraint_6:(void *)arg1;
+ (void)__wcdb_index_7:(void *)arg1;
+ (void)__wcdb_index_8:(void *)arg1;
- (id)chatName;
- (void)setChatName:(id)arg1;
- (id)groupId;
- (void)setGroupId:(id)arg1;
- (unsigned int)createTime;
- (void)setCreateTime:(unsigned int)arg1;
- (unsigned int)totalcount;
- (void)setTotalcount:(unsigned int)arg1;
- (unsigned int)receivedCount;
- (void)setReceivedCount:(unsigned int)arg1;
- (void).cxx_destruct;
@end
