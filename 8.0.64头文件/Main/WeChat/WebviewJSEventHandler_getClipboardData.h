@interface WebviewJSEventHandler_getClipboardData : WebviewJSEventHandlerBase
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)handleJSEventInMainThread:(id)arg1;
- (void)readPasteBoardWithEvent:(id)arg1 hasContentPtr:(BOOL *)arg2;
- (void)fetchClipBoardContentWithTextPtr:(id *)arg1 htmlPtr:(id *)arg2 hasContentPtr:(BOOL *)arg3;
- (BOOL)iOSReadPasteBaordRemindOpen;
- (double)getRemindAminitionDuration;
@end
