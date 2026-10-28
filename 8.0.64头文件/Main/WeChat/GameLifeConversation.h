@interface GameLifeConversation : MMBaseSessionInfo <WCTTableCoding>
{
    unsigned int _digestFlag; // +0x50
    NSString * talker; // +0x58
    NSString * selfUsername; // +0x60
    NSString * digest; // +0x68
    NSString * _digestPrefix; // +0x70
    GameLifeContact * _gameLifeContact; // +0x78
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)sessionId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_sessionId;
+ (const void *)unreadCount;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_unreadCount;
+ (const void *)lastMsgUpdateTime;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_lastMsgUpdateTime;
+ (const void *)draftMsg;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_draftMsg;
+ (const void *)draftMsgTime;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_draftMsgTime;
+ (const void *)sessionFlag;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_sessionFlag;
+ (const void *)outUnreadCount;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_outUnreadCount;
+ (const void *)sessionTopTime;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (id)swift_sessionTopTime;
+ (const void *)pbLastMessage;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (id)swift_pbLastMessage;
+ (const void *)sessionUnTopTime;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (id)swift_sessionUnTopTime;
+ (const void *)outUnreadMsgTime;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (id)swift_outUnreadMsgTime;
+ (const void *)jumpMsgLocalId;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (id)swift_jumpMsgLocalId;
+ (const void *)talker;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (id)swift_talker;
+ (const void *)selfUsername;
+ (const void *)__wcdb_synthesize_13:(void *)arg1;
+ (id)swift_selfUsername;
+ (const void *)digest;
+ (const void *)__wcdb_synthesize_14:(void *)arg1;
+ (id)swift_digest;
+ (const void *)digestFlag;
+ (const void *)__wcdb_synthesize_15:(void *)arg1;
+ (id)swift_digestFlag;
+ (const void *)digestPrefix;
+ (const void *)__wcdb_synthesize_16:(void *)arg1;
+ (id)swift_digestPrefix;
+ (void)__wcdb_column_constraint_17:(void *)arg1;
- (id)initWithSessionId:(id)arg1 talker:(id)arg2 selfUsername:(id)arg3 lastMsg:(id)arg4 needUpdateUnreadCount:(BOOL)arg5;
- (void)updateWithNewMsg:(id)arg1 needUpdateUnreadCount:(BOOL)arg2;
- (void)setLastMessage:(id)arg1;
- (void)setPbLastMessage:(id)arg1;
- (void)updateDigestFlag:(id)arg1;
- (void)bindWithGameLifeContact:(id)arg1;
- (unsigned int)getReportSessionType;
- (BOOL)isHistory;
- (id)description;
- (id)talker;
- (void)setTalker:(id)arg1;
- (id)selfUsername;
- (void)setSelfUsername:(id)arg1;
- (id)digest;
- (void)setDigest:(id)arg1;
- (unsigned int)digestFlag;
- (void)setDigestFlag:(unsigned int)arg1;
- (id)digestPrefix;
- (void)setDigestPrefix:(id)arg1;
- (id)gameLifeContact;
- (void)setGameLifeContact:(id)arg1;
- (void).cxx_destruct;
@end
