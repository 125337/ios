@interface WebviewJSEventHandler_request : WebviewJSEventHandlerBase
{
    NSURLSession * _urlSession; // +0x8
}
- (id)init;
- (void)dealloc;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)onResponse:(id)arg1 data:(id)arg2 error:(id)arg3 event:(id)arg4 url:(id)arg5;
- (void)endWithError:(id)arg1 event:(id)arg2;
- (void)endWithSuccessResult:(id)arg1 event:(id)arg2;
- (void)endWithResult:(id)arg1 event:(id)arg2;
- (void)setupNSURLSession;
- (id)headerDictionaryFromResponse:(id)arg1;
- (id)urlSession;
- (void)setUrlSession:(id)arg1;
- (void).cxx_destruct;
@end
