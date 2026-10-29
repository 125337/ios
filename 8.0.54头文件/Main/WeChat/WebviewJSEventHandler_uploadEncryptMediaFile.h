@interface WebviewJSEventHandler_uploadEncryptMediaFile : WebviewJSEventHandlerBase <IWebviewResourceManagerExt>
{
    NSString * _localId; // +0x8
    BOOL _isShowProgressTips; // +0x10
}
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (id)getAppId:(id)arg1;
- (void)onLocalResourceUploadFinished:(id)arg1 SvrId:(id)arg2 ErrCode:(int)arg3;
- (void)onLocalResourceUploadProgress:(int)arg1 LocalId:(id)arg2;
- (void).cxx_destruct;
@end

