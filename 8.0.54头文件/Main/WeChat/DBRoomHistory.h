@interface DBRoomHistory : NSObject <WCTTableCoding>
{
    NSString * _chatName; // +0x8
    unsigned long long _historyId; // +0x10
    long long _msgServerId; // +0x18
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)chatName;
+ (const void *)__wcdb_synthesize_170:(void *)arg1;
+ (id)swift_chatName;
+ (const void *)historyId;
+ (const void *)__wcdb_synthesize_171:(void *)arg1;
+ (id)swift_historyId;
+ (const void *)msgServerId;
+ (const void *)__wcdb_synthesize_172:(void *)arg1;
+ (id)swift_msgServerId;
+ (void)__wcdb_table_constraint_173:(void *)arg1;
+ (void)__wcdb_table_constraint_174:(void *)arg1;
+ (void)__wcdb_index_175:(void *)arg1;
+ (void)__wcdb_index_176:(void *)arg1;
- (id)chatName;
- (void)setChatName:(id)arg1;
- (unsigned long long)historyId;
- (void)setHistoryId:(unsigned long long)arg1;
- (long long)msgServerId;
- (void)setMsgServerId:(long long)arg1;
- (void).cxx_destruct;
@end

