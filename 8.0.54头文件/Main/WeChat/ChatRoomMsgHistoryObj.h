@interface ChatRoomMsgHistoryObj : MMObject <WCTTableCoding>
{
    unsigned int _msgType; // +0x8
    unsigned int _createTime; // +0xc
    unsigned long long _historyId; // +0x10
    long long _serverID; // +0x18
    NSString * _chatRoomName; // +0x20
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)historyId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_historyId;
+ (const void *)serverID;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_serverID;
+ (const void *)createTime;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_createTime;
+ (const void *)chatRoomName;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_chatRoomName;
+ (const void *)msgType;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_msgType;
+ (void)__wcdb_table_constraint_5:(void *)arg1;
+ (void)__wcdb_table_constraint_6:(void *)arg1;
+ (void)__wcdb_index_7:(void *)arg1;
+ (id)generateHistoryObjWithHistoryMsgsInfo:(id)arg1 messageWrap:(id)arg2;
- (unsigned long long)historyId;
- (void)setHistoryId:(unsigned long long)arg1;
- (long long)serverID;
- (void)setServerID:(long long)arg1;
- (unsigned int)msgType;
- (void)setMsgType:(unsigned int)arg1;
- (unsigned int)createTime;
- (void)setCreateTime:(unsigned int)arg1;
- (id)chatRoomName;
- (void)setChatRoomName:(id)arg1;
- (void).cxx_destruct;
@end

