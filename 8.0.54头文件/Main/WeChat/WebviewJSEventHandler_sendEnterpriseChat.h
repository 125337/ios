@interface WebviewJSEventHandler_sendEnterpriseChat : WebviewJSEventHandlerBase
{
    NSURLConnection * _connection; // +0x8
    JSEvent * _curEvent; // +0x10
    NSDictionary * _curExtraData; // +0x18
    NSMutableData * _recData; // +0x20
}
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)processTextMsg;
- (void)processLinkMsg;
- (void)clearCurData;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)sendAppMessage:(id)arg1 extraData:(id)arg2 imageData:(id)arg3;
- (void)dealloc;
- (void).cxx_destruct;
@end

