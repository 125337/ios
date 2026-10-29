@interface WebviewJSEventHandler_stopRecord : WebviewJSEventHandlerBase <IWebviewRecorderManagerExt>
- (void)dealloc;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)onRecordTimeTooShort;
- (void)onFinishedRecord:(id)arg1 ErrCode:(int)arg2 stopReason:(long long)arg3;
@end
