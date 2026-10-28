@interface EnterpriseSessionInfo : MMBaseSessionInfo <WCTTableCoding>
{
    unsigned int atMeCount; // +0x50
    unsigned int newUnreadCount; // +0x54
    unsigned int newAtMeCount; // +0x58
    unsigned int sessionTopTime; // +0x5c
    unsigned int lastExposeTime; // +0x60
    unsigned int chatType; // +0x64
    unsigned int _atAllCount; // +0x68
    unsigned int _newAtAllCount; // +0x6c
    NSString * _brandUserName; // +0x70
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
+ (const void *)atMeCount;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_atMeCount;
+ (const void *)newUnreadCount;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (id)swift_newUnreadCount;
+ (const void *)newAtMeCount;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (id)swift_newAtMeCount;
+ (const void *)sessionTopTime;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (id)swift_sessionTopTime;
+ (const void *)lastExposeTime;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (id)swift_lastExposeTime;
+ (const void *)atAllCount;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (id)swift_atAllCount;
+ (const void *)newAtAllCount;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (id)swift_newAtAllCount;
+ (void)__wcdb_column_constraint_13:(void *)arg1;
+ (id)sessionInfoWithContact:(id)arg1 lastMessage:(id)arg2 Brand:(id)arg3;
- (id)initWithContact:(id)arg1 lastMessage:(id)arg2 Brand:(id)arg3;
- (unsigned int)chatType;
- (id)lastMessage;
- (id)contact;
- (void)updateContact;
- (void)updateContactAndDraft;
- (BOOL)updateContactAndTopTime;
- (void)updateLastMessage;
- (void)updateUnreadCount;
- (void)updateExposeTime;
- (void)updateNewUnreadCount;
- (void)checkExposeTime:(unsigned int)arg1;
- (void)fixCount;
- (id)genContact;
- (id)genLastMessage;
- (unsigned int)GetUnReadCount:(id)arg1;
- (BOOL)isSessionTop;
- (void)incUnreadCount;
- (void)clearUnreadCount;
- (void)incNewUnreadCount;
- (void)clearNewUnreadCount;
- (void)incAtMeCount;
- (void)clearAtMeCount;
- (void)incNewAtMeCount;
- (void)clearNewAtMeCount;
- (void)incAtAllCount;
- (void)clearAtAllCount;
- (void)incNewAtAllCount;
- (void)clearNewAtAllCount;
- (unsigned int)atMeCount;
- (void)setAtMeCount:(unsigned int)arg1;
- (unsigned int)newUnreadCount;
- (void)setNewUnreadCount:(unsigned int)arg1;
- (unsigned int)newAtMeCount;
- (void)setNewAtMeCount:(unsigned int)arg1;
- (unsigned int)sessionTopTime;
- (void)setSessionTopTime:(unsigned int)arg1;
- (unsigned int)lastExposeTime;
- (void)setLastExposeTime:(unsigned int)arg1;
- (void)setChatType:(unsigned int)arg1;
- (unsigned int)atAllCount;
- (void)setAtAllCount:(unsigned int)arg1;
- (unsigned int)newAtAllCount;
- (void)setNewAtAllCount:(unsigned int)arg1;
- (id)brandUserName;
- (void)setBrandUserName:(id)arg1;
- (void).cxx_destruct;
@end
