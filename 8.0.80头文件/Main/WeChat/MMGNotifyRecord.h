@interface MMGNotifyRecord : NSObject <WCTTableCoding>
{
    unsigned int _createTime; // +0x8
    unsigned int _msgLocalId; // +0xc
    unsigned int _unreadCount; // +0x10
    NSString * _chatName; // +0x18
    NSString * _groupKey; // +0x20
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)chatName;
+ (const void *)__wcdb_synthesize_17:(void *)arg1;
+ (id)swift_chatName;
+ (const void *)groupKey;
+ (const void *)__wcdb_synthesize_18:(void *)arg1;
+ (id)swift_groupKey;
+ (const void *)createTime;
+ (const void *)__wcdb_synthesize_19:(void *)arg1;
+ (id)swift_createTime;
+ (const void *)msgLocalId;
+ (const void *)__wcdb_synthesize_20:(void *)arg1;
+ (id)swift_msgLocalId;
+ (const void *)unreadCount;
+ (const void *)__wcdb_synthesize_21:(void *)arg1;
+ (id)swift_unreadCount;
+ (void)__wcdb_column_constraint_22:(void *)arg1;
+ (void)__wcdb_index_23:(void *)arg1;
+ (void)__wcdb_index_24:(void *)arg1;
- (id)chatName;
- (void)setChatName:(id)arg1;
- (id)groupKey;
- (void)setGroupKey:(id)arg1;
- (unsigned int)createTime;
- (void)setCreateTime:(unsigned int)arg1;
- (unsigned int)msgLocalId;
- (void)setMsgLocalId:(unsigned int)arg1;
- (unsigned int)unreadCount;
- (void)setUnreadCount:(unsigned int)arg1;
- (void).cxx_destruct;
@end
