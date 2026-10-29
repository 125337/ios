@interface WebViewJSEventHandler_uploadMediaFile : WebviewJSEventHandlerBase <IWebviewResourceManagerExt>
{
    BOOL _isShowProgressTips; // +0x8
}
- (id)init;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)onLocalResourceUploadProgressWithouMediaId:(int)arg1 LocalId:(id)arg2;
- (void)onLocalResourceUploadFinishedWithoutMediaId:(id)arg1 LocalId:(id)arg2 FileUrl:(id)arg3 ErrCode:(int)arg4;
@end

