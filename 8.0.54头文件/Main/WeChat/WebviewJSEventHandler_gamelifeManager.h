@interface WebviewJSEventHandler_gamelifeManager : WebviewJSEventHandlerBase
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)getConversationList:(id)arg1 jsEvent:(id)arg2;
- (void)addConversation:(id)arg1 jsEvent:(id)arg2;
- (void)deleteConversation:(id)arg1 jsEvent:(id)arg2;
- (void)getGameLifeMsg:(id)arg1 jsEvent:(id)arg2;
- (void)sendGameLifeMsg:(id)arg1 jsEvent:(id)arg2;
- (void)deleteGameLifeMsg:(id)arg1 jsEvent:(id)arg2;
- (void)getGameLifeContact:(id)arg1 jsEvent:(id)arg2;
- (void)getGameLifeSessionId:(id)arg1 jsEvent:(id)arg2;
- (BOOL)isVaildMiniGameConversation:(id)arg1 SessionInfo:(id)arg2;
- (BOOL)isVaildMiniGameConversation:(id)arg1 inSessionInfoList:(id)arg2;
- (BOOL)isNullOrEmpty:(id)arg1;
- (void)sendMsg:(long long)arg1 sessionId:(id)arg2 msg:(id)arg3;
- (id)constructMsgWrap:(id)arg1 content:(id)arg2 selfUsername:(id)arg3 talker:(id)arg4 msgType:(long long)arg5;
- (void)updateContent:(id)arg1;
- (id)printNodeText:(XmlReaderNode_t *)arg1;
@end

