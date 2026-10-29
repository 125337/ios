@interface VoiceTransXiaoWeiLogic : NSObject
{
    NSString * _sessionId; // +0x8
}
- (id)initWithSessionId:(id)arg1;
- (void)getSugListWithChatName:(id)arg1 complete:(id /* block */)arg2;
- (void)requestSugListWithChatHistory:(id)arg1 ciphertextInfo:(id)arg2 complete:(id /* block */)arg3;
- (BOOL)canUploadChatHistory;
- (id)chatHistoryElementForChatName:(id)arg1;
- (id)selfGroupNicknameForChat:(id)arg1 selfContact:(id)arg2;
- (id)messageDictForMessage:(id)arg1 withUserId:(id)arg2;
- (id)senderNameForMessage:(id)arg1 isSelf:(BOOL)arg2 isGroupChat:(BOOL)arg3;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (void).cxx_destruct;
@end
