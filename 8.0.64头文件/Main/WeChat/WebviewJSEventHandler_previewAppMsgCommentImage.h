@interface WebviewJSEventHandler_previewAppMsgCommentImage : WebviewJSEventHandlerBase
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (int)getCommentType:(id)arg1;
- (void)launchBizImagePreviewPage:(LaunchBizImagePreviewInfo)arg1 previewCallback:(id /* block */)arg2;
- (id)buildCallbackData:(id)arg1;
@end
