@interface WAJSEventHandler_getUserAutoFillData : WAJSEventHandler_BaseEvent
- (void)handleJSEvent:(id)arg1;
- (void)getAutoFillInfo:(id)arg1 getAllInfo:(BOOL)arg2 clientVersion:(unsigned int)arg3;
- (void)onCgiResponse:(id)arg1 forEvent:(unsigned int)arg2;
@end
