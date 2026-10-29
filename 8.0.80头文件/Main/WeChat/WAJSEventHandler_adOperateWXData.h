@interface WAJSEventHandler_adOperateWXData : WAJSEventHandler_BaseEvent
- (void)handleJSEvent:(id)arg1;
- (void)onCgiResponse:(id)arg1 forEvent:(unsigned int)arg2;
- (void)onResponseData:(id)arg1;
- (void)endErrorWithMessage:(id)arg1;
- (void)endErrorWithMessage:(id)arg1 code:(int)arg2;
- (void)endOKWithData:(id)arg1;
- (void)endCancel;
@end
