@interface WCFinderLiveMsgSessionInfo : MMBaseSessionInfo <WCTTableCoding>
{
    unsigned int _liveIdentity; // +0x50
    unsigned int _comparePriority; // +0x54
    NSString * realChatUserName; // +0x58
    NSString * selfUserName; // +0x60
    unsigned long long _liveId; // +0x68
    NSString * _selfEncryptedUsername; // +0x70
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)sessionId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_sessionId;
+ (const void *)liveId;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_liveId;
+ (const void *)liveIdentity;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_liveIdentity;
+ (const void *)selfUserName;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_selfUserName;
+ (const void *)selfEncryptedUsername;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_selfEncryptedUsername;
+ (const void *)realChatUserName;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_realChatUserName;
+ (const void *)unreadCount;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_unreadCount;
+ (const void *)lastMsgUpdateTime;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (id)swift_lastMsgUpdateTime;
+ (const void *)draftMsg;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (id)swift_draftMsg;
+ (const void *)draftMsgTime;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (id)swift_draftMsgTime;
+ (const void *)sessionFlag;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (id)swift_sessionFlag;
+ (const void *)outUnreadCount;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (id)swift_outUnreadCount;
+ (const void *)sessionTopTime;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (id)swift_sessionTopTime;
+ (const void *)pbLastMessage;
+ (const void *)__wcdb_synthesize_13:(void *)arg1;
+ (id)swift_pbLastMessage;
+ (const void *)sessionUnTopTime;
+ (const void *)__wcdb_synthesize_14:(void *)arg1;
+ (id)swift_sessionUnTopTime;
+ (const void *)outUnreadMsgTime;
+ (const void *)__wcdb_synthesize_15:(void *)arg1;
+ (id)swift_outUnreadMsgTime;
+ (const void *)jumpMsgLocalId;
+ (const void *)__wcdb_synthesize_16:(void *)arg1;
+ (id)swift_jumpMsgLocalId;
+ (void)__wcdb_column_constraint_17:(void *)arg1;
+ (void)__wcdb_index_18:(void *)arg1;
+ (void)__wcdb_index_19:(void *)arg1;
+ (void)__wcdb_index_20:(void *)arg1;
+ (id)GetSelfUserNameFromSession:(id)arg1;
- (id)initWithPbSessionInfo:(id)arg1 realChatUserName:(id)arg2 selfEncryptedUsername:(id)arg3;
- (id)initWithPbSessionInfo:(id)arg1 realChatUserName:(id)arg2 selfEncryptedUsername:(id)arg3 lastMsg:(id)arg4 needUpdateUnreadCount:(BOOL)arg5;
- (id)initWithSessionId:(id)arg1 liveId:(unsigned long long)arg2 selfUserName:(id)arg3 liveIdentity:(unsigned int)arg4 realChatUserName:(id)arg5 selfEncryptedUsername:(id)arg6 lastMsg:(id)arg7 needUpdateUnreadCount:(BOOL)arg8;
- (long long)compare:(id)arg1;
- (void)setLastMessage:(id)arg1;
- (void)setPbLastMessage:(id)arg1;
- (void)updateWithNewMsg:(id)arg1 needUpdateUnreadCount:(BOOL)arg2;
- (id)description;
- (id)realChatUserName;
- (void)setRealChatUserName:(id)arg1;
- (id)selfUserName;
- (void)setSelfUserName:(id)arg1;
- (unsigned long long)liveId;
- (void)setLiveId:(unsigned long long)arg1;
- (unsigned int)liveIdentity;
- (void)setLiveIdentity:(unsigned int)arg1;
- (id)selfEncryptedUsername;
- (void)setSelfEncryptedUsername:(id)arg1;
- (unsigned int)comparePriority;
- (void)setComparePriority:(unsigned int)arg1;
- (void).cxx_destruct;
@end
