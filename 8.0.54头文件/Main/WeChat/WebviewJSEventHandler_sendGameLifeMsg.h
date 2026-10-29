@interface WebviewJSEventHandler_sendGameLifeMsg : WebviewJSEventHandlerBase
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (BOOL)isNullOrEmpty:(id)arg1;
- (void)sendMsg:(int)arg1 sessionId:(id)arg2 msg:(id)arg3;
- (id)constructMsgWrap:(id)arg1 content:(id)arg2 selfUsername:(id)arg3 talker:(id)arg4 msgType:(long long)arg5;
- (void)updateContent:(id)arg1;
- (id)printNodeText:(XmlReaderNode_t *)arg1;
@end

