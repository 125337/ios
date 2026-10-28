@interface HistoryProcessTag : MMObject <WCTTableCoding>
{
    unsigned long long _historyId; // +0x8
    NSString * _chatRoomName; // +0x10
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)historyId;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (id)swift_historyId;
+ (const void *)chatRoomName;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (id)swift_chatRoomName;
+ (void)__wcdb_column_constraint_10:(void *)arg1;
+ (void)__wcdb_index_11:(void *)arg1;
- (id)initWithHistoryID:(unsigned long long)arg1 chatName:(id)arg2;
- (unsigned long long)historyId;
- (void)setHistoryId:(unsigned long long)arg1;
- (id)chatRoomName;
- (void)setChatRoomName:(id)arg1;
- (void).cxx_destruct;
@end
