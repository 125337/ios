@interface W1wPersonalMsgSessionInfo : MMBaseSessionInfo <WCTTableCoding>
{
    BOOL _canRecvMsg; // +0x50
    BOOL _canChangeIdentity; // +0x51
    int _sessionStatus; // +0x54
    NSString * username; // +0x58
    NSString * toUsername; // +0x60
    NSString * _replyTipsWording; // +0x68
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)sessionId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_sessionId;
+ (const void *)username;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_username;
+ (const void *)toUsername;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_toUsername;
+ (const void *)replyTipsWording;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_replyTipsWording;
+ (const void *)sessionStatus;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_sessionStatus;
+ (const void *)canRecvMsg;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_canRecvMsg;
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
- (id)initWithSessionID:(id)arg1 message:(id)arg2;
- (id)initWithSessionID:(id)arg1 username:(id)arg2 toUsername:(id)arg3;
- (void)updateWithMessage:(id)arg1;
- (void)cleanWithMessage:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)toUsername;
- (void)setToUsername:(id)arg1;
- (id)replyTipsWording;
- (void)setReplyTipsWording:(id)arg1;
- (int)sessionStatus;
- (void)setSessionStatus:(int)arg1;
- (BOOL)canRecvMsg;
- (void)setCanRecvMsg:(BOOL)arg1;
- (BOOL)canChangeIdentity;
- (void)setCanChangeIdentity:(BOOL)arg1;
- (void).cxx_destruct;
@end
