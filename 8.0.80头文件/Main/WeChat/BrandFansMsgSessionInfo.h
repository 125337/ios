@interface BrandFansMsgSessionInfo : MMBaseSessionInfo <WCTTableCoding>
{
    unsigned int _isGreetSession; // +0x50
    unsigned int _firstHitGreetTime; // +0x54
    int _bizType; // +0x58
    NSString * fansOpenID; // +0x60
    NSString * _replyTipsWording; // +0x68
    NSString * _bizuin; // +0x70
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)sessionId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_sessionId;
+ (const void *)fansOpenID;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_fansOpenID;
+ (const void *)replyTipsWording;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_replyTipsWording;
+ (const void *)unreadCount;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_unreadCount;
+ (const void *)lastMsgUpdateTime;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_lastMsgUpdateTime;
+ (const void *)draftMsg;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_draftMsg;
+ (const void *)draftMsgTime;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_draftMsgTime;
+ (const void *)sessionFlag;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (id)swift_sessionFlag;
+ (const void *)outUnreadCount;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (id)swift_outUnreadCount;
+ (const void *)sessionTopTime;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (id)swift_sessionTopTime;
+ (const void *)pbLastMessage;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (id)swift_pbLastMessage;
+ (const void *)sessionUnTopTime;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (id)swift_sessionUnTopTime;
+ (const void *)outUnreadMsgTime;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (id)swift_outUnreadMsgTime;
+ (const void *)jumpMsgLocalId;
+ (const void *)__wcdb_synthesize_13:(void *)arg1;
+ (id)swift_jumpMsgLocalId;
+ (const void *)isGreetSession;
+ (const void *)__wcdb_synthesize_14:(void *)arg1;
+ (id)swift_isGreetSession;
+ (const void *)firstHitGreetTime;
+ (const void *)__wcdb_synthesize_15:(void *)arg1;
+ (id)swift_firstHitGreetTime;
+ (void)__wcdb_column_constraint_16:(void *)arg1;
- (id)initWithSessionID:(id)arg1 message:(id)arg2;
- (void)updateWithMessage:(id)arg1;
- (id)fansOpenID;
- (void)setFansOpenID:(id)arg1;
- (id)replyTipsWording;
- (void)setReplyTipsWording:(id)arg1;
- (unsigned int)isGreetSession;
- (void)setIsGreetSession:(unsigned int)arg1;
- (unsigned int)firstHitGreetTime;
- (void)setFirstHitGreetTime:(unsigned int)arg1;
- (id)bizuin;
- (void)setBizuin:(id)arg1;
- (int)bizType;
- (void)setBizType:(int)arg1;
- (void).cxx_destruct;
@end
