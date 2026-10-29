@interface WCFinderMsgSessionInfo : MMBaseSessionInfo <WCTTableCoding>
{
    BOOL _canSendAttachment; // +0x50
    BOOL _isGreetMsgSession; // +0x51
    BOOL _isSessionHolder; // +0x52
    unsigned int _comparePriority; // +0x54
    NSString * realChatUserName; // +0x58
    NSString * _realChatSessionId; // +0x60
    WCFinderMsgContactExtInfo * _contactExtInfo; // +0x68
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)sessionId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_sessionId;
+ (const void *)realChatUserName;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_realChatUserName;
+ (const void *)unreadCount;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_unreadCount;
+ (const void *)lastMsgUpdateTime;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_lastMsgUpdateTime;
+ (const void *)draftMsg;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_draftMsg;
+ (const void *)draftMsgTime;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_draftMsgTime;
+ (const void *)sessionFlag;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_sessionFlag;
+ (const void *)outUnreadCount;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (id)swift_outUnreadCount;
+ (const void *)sessionTopTime;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (id)swift_sessionTopTime;
+ (const void *)pbLastMessage;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (id)swift_pbLastMessage;
+ (const void *)sessionUnTopTime;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (id)swift_sessionUnTopTime;
+ (const void *)outUnreadMsgTime;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (id)swift_outUnreadMsgTime;
+ (const void *)jumpMsgLocalId;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (id)swift_jumpMsgLocalId;
+ (const void *)canSendAttachment;
+ (const void *)__wcdb_synthesize_13:(void *)arg1;
+ (id)swift_canSendAttachment;
+ (void)__wcdb_column_constraint_14:(void *)arg1;
- (id)initWithSessionId:(id)arg1 realChatUserName:(id)arg2 lastMsg:(id)arg3 needUpdateUnreadCount:(BOOL)arg4;
- (long long)compare:(id)arg1;
- (void)setLastMessage:(id)arg1;
- (void)setPbLastMessage:(id)arg1;
- (void)updateWithNewMsg:(id)arg1 needUpdateUnreadCount:(BOOL)arg2;
- (id)realChatUserName;
- (void)setRealChatUserName:(id)arg1;
- (BOOL)canSendAttachment;
- (void)setCanSendAttachment:(BOOL)arg1;
- (unsigned int)comparePriority;
- (void)setComparePriority:(unsigned int)arg1;
- (BOOL)isGreetMsgSession;
- (void)setIsGreetMsgSession:(BOOL)arg1;
- (BOOL)isSessionHolder;
- (void)setIsSessionHolder:(BOOL)arg1;
- (id)realChatSessionId;
- (void)setRealChatSessionId:(id)arg1;
- (id)contactExtInfo;
- (void)setContactExtInfo:(id)arg1;
- (void).cxx_destruct;
@end

