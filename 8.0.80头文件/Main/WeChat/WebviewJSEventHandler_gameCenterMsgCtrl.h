@interface WebviewJSEventHandler_gameCenterMsgCtrl : WebviewJSEventHandlerBase
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (int)getMsgList:(id)arg1 Result:(id)arg2;
- (void)fillResultWithNewMsg:(id)arg1 withMsg:(id)arg2 contentType:(id)arg3;
- (void)fillResultArray:(id)arg1 withMsgList:(id)arg2 contentType:(id)arg3;
- (int)setMsgListRead:(id)arg1 Result:(id)arg2;
- (int)getBubbleMsg:(id)arg1 Result:(id)arg2;
- (int)setBubbleMsgRead:(id)arg1 Result:(id)arg2;
- (int)getMsgCenterRedDotMsg:(id)arg1 Result:(id)arg2;
- (int)setMsgCenterRedDotMsgRead:(id)arg1 Result:(id)arg2;
- (int)getNewAppMsg:(id)arg1 Result:(id)arg2;
- (int)setNewAppMsgRead:(id)arg1 Result:(id)arg2;
- (int)getGiftRedDotMsg:(id)arg1 Result:(id)arg2;
- (int)setGiftRedDotMsgRead:(id)arg1 Result:(id)arg2;
- (int)closeH5FloatLayer:(id)arg1 Result:(id)arg2;
- (int)deleteMsg:(id)arg1;
@end
