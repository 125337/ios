@interface WCFinderMsgSessionStatus : NSObject <WCTTableCoding>
{
    BOOL _rejectMsgStatus; // +0x8
    BOOL _isInNormalSession; // +0x9
    BOOL _canSendAttachment; // +0xa
    BOOL _disableSendmsgNeedFollow; // +0xb
    unsigned int _myAccountType; // +0xc
    NSString * _sessionId; // +0x10
    NSString * _realChatUserName; // +0x18
    NSString * _selfChatUserName; // +0x20
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)sessionId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_sessionId;
+ (const void *)myAccountType;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_myAccountType;
+ (const void *)realChatUserName;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_realChatUserName;
+ (const void *)rejectMsgStatus;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_rejectMsgStatus;
+ (const void *)isInNormalSession;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_isInNormalSession;
+ (const void *)canSendAttachment;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_canSendAttachment;
+ (const void *)selfChatUserName;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_selfChatUserName;
+ (const void *)disableSendmsgNeedFollow;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (id)swift_disableSendmsgNeedFollow;
+ (void)__wcdb_column_constraint_8:(void *)arg1;
- (id)description;
- (id)init;
- (void)setSessionId:(id)arg1;
- (void)setMyAccountType:(unsigned int)arg1;
- (BOOL)isValid;
- (id)sessionId;
- (unsigned int)myAccountType;
- (id)realChatUserName;
- (void)setRealChatUserName:(id)arg1;
- (id)selfChatUserName;
- (void)setSelfChatUserName:(id)arg1;
- (BOOL)rejectMsgStatus;
- (void)setRejectMsgStatus:(BOOL)arg1;
- (BOOL)isInNormalSession;
- (void)setIsInNormalSession:(BOOL)arg1;
- (BOOL)canSendAttachment;
- (void)setCanSendAttachment:(BOOL)arg1;
- (BOOL)disableSendmsgNeedFollow;
- (void)setDisableSendmsgNeedFollow:(BOOL)arg1;
- (void).cxx_destruct;
@end
