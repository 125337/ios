@interface WAJSEventHandler_createSocketTask : WAJSEventHandler_BaseEvent
- (void)buildCanvasHandlersWithTaskID:(id)arg1 outOpen:(id /* block */ *)arg2 outClose:(id /* block */ *)arg3 outError:(id /* block */ *)arg4 outMessage:(id /* block */ *)arg5;
- (void)handleJSEvent:(id)arg1;
@end
