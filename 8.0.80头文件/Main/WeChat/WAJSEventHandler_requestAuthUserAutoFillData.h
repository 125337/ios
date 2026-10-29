@interface WAJSEventHandler_requestAuthUserAutoFillData : WAJSEventHandler_BaseEvent <WAWebViewPlugin_ApiQueueProtocol, WAAppConfirmWindowDelegate, WAAutoFillDataAuthorizePageSheetDelegate>
{
    WAAppConfirmWindow * _confirmWindow; // +0x8
    WAAutoFillDataAuthorizePageSheet * _pageSheet; // +0x10
    unsigned int _clientVersion; // +0x18
    NSDictionary * _dicInputParam; // +0x20
}
- (void)handleJSEvent:(id)arg1;
- (void)onHandleApiEvent:(id)arg1;
- (void)onConfirm:(BOOL)arg1;
- (void)onClickLink;
- (void)closeConfirmWindow;
- (void)onWAAutoFillDataAuthorizePageSheetDidClickAcceptButton:(id)arg1;
- (void)onWAAutoFillDataAuthorizePageSheetDidClickRejectButton:(id)arg1;
- (void)dismissPageSheet:(id)arg1;
- (void)onWAAutoFillDataAuthorizePageSheet:(id)arg1 didClickTextViewLinkURL:(id)arg2;
- (void)_handleUserSelect:(BOOL)arg1;
- (void)requestAutoFillAuthorize:(id)arg1 allow:(BOOL)arg2 authStatus:(unsigned int)arg3 clientVersion:(unsigned int)arg4;
- (void)handleApiEventEnd;
- (void)onCgiResponse:(id)arg1 forEvent:(unsigned int)arg2;
- (id)dicInputParam;
- (void)setDicInputParam:(id)arg1;
- (unsigned int)clientVersion;
- (void)setClientVersion:(unsigned int)arg1;
- (void).cxx_destruct;
@end
