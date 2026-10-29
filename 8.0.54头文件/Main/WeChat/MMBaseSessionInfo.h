@interface MMBaseSessionInfo : NSObject <WCTTableCoding, BaseSessionInfo>
{
    NSString * sessionId; // +0x8
    unsigned int unreadCount; // +0x10
    unsigned int lastMsgUpdateTime; // +0x14
    NSString * draftMsg; // +0x18
    unsigned int draftMsgTime; // +0x20
    unsigned int sessionFlag; // +0x24
    PBCMessageWrap * pbLastMessage; // +0x28
    unsigned int outUnreadCount; // +0x30
    unsigned int outUnreadMsgTime; // +0x34
    unsigned int jumpMsgLocalId; // +0x38
    CBaseContact * contact; // +0x40
    CMessageWrap * lastMessage; // +0x48
    unsigned int sessionTopTime; // +0x50
    unsigned int sessionUnTopTime; // +0x54
    NSString * _atUserList; // +0x58
    long long _referMsgSvrId; // +0x60
    unsigned long long _messageCount; // +0x68
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
+ (void)__wcdb_column_constraint_12:(void *)arg1;
+ (id)baseSessionInfoWithUsrName:(id)arg1;
+ (id)baseSessionInfoWithUsrName:(id)arg1 contact:(id)arg2 lastMessage:(id)arg3;
+ (id)baseSessionInfoWithUsrName:(id)arg1 contact:(id)arg2 lastMessage:(id)arg3 unreadCount:(unsigned int)arg4;
- (BOOL)showRedDotOuter;
- (void)setShowRedDotOuter:(BOOL)arg1;
- (id)genContact;
- (id)contact;
- (void)setContact:(id)arg1;
- (id)genLastMessage;
- (id)lastMessage;
- (void)setLastMessage:(id)arg1;
- (void)setPbLastMessage:(id)arg1;
- (void)copyFieldFromSessionInfo:(id)arg1;
- (void)updateSessionInfo;
- (void)updateDraftAndTime:(id)arg1 Time:(unsigned int)arg2;
- (void)updateUnreadCount;
- (void)updateLastMessage;
- (void)updateContact;
- (void)updateContact:(id)arg1;
- (long long)compare:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToSessionInfo:(id)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (unsigned int)unreadCount;
- (void)setUnreadCount:(unsigned int)arg1;
- (unsigned int)lastMsgUpdateTime;
- (void)setLastMsgUpdateTime:(unsigned int)arg1;
- (id)draftMsg;
- (void)setDraftMsg:(id)arg1;
- (unsigned int)draftMsgTime;
- (void)setDraftMsgTime:(unsigned int)arg1;
- (unsigned int)sessionFlag;
- (void)setSessionFlag:(unsigned int)arg1;
- (unsigned int)outUnreadCount;
- (void)setOutUnreadCount:(unsigned int)arg1;
- (unsigned int)sessionTopTime;
- (void)setSessionTopTime:(unsigned int)arg1;
- (id)pbLastMessage;
- (unsigned int)sessionUnTopTime;
- (void)setSessionUnTopTime:(unsigned int)arg1;
- (unsigned int)outUnreadMsgTime;
- (void)setOutUnreadMsgTime:(unsigned int)arg1;
- (unsigned int)jumpMsgLocalId;
- (void)setJumpMsgLocalId:(unsigned int)arg1;
- (id)atUserList;
- (void)setAtUserList:(id)arg1;
- (long long)referMsgSvrId;
- (void)setReferMsgSvrId:(long long)arg1;
- (unsigned long long)messageCount;
- (void)setMessageCount:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

