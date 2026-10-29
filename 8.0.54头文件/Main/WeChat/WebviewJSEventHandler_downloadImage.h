@interface WebviewJSEventHandler_downloadImage : WebviewJSEventHandlerBase <IWebviewResourceManagerExt>
{
    BOOL _isShowProgressTips; // +0x8
}
- (id)init;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)onResourceDownloadProgress:(int)arg1 SvrId:(id)arg2;
- (void)onResourceDownloadFinished:(id)arg1 SvrId:(id)arg2 ErrCode:(int)arg3;
@end

