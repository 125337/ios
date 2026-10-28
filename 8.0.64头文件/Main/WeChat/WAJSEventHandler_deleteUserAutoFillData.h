@interface WAJSEventHandler_deleteUserAutoFillData : WAJSEventHandler_BaseEvent
- (void)handleJSEvent:(id)arg1;
- (void)deleteAutoFillInfo:(long long)arg1 groupKey:(id)arg2 clientVersion:(unsigned int)arg3;
- (void)onCgiResponse:(id)arg1 forEvent:(unsigned int)arg2;
@end
