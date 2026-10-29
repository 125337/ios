@interface WebviewJSEventHandler_uploadVideo : WebviewJSEventHandlerBase <IWebviewResourceManagerExt>
{
    BOOL _isShowProgressTips; // +0x8
    NSMutableArray * arrLocalIDs; // +0x10
}
- (id)init;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)doUploadVideo;
- (void)onLocalResourceUploadProgress:(int)arg1 LocalId:(id)arg2;
- (void)onLocalResourceUploadFinished:(id)arg1 SvrId:(id)arg2 ErrCode:(int)arg3;
- (void)doDelayCancel;
- (void).cxx_destruct;
@end

