@interface CRNHTTPProtocolHandlerProxyWithClientThread : NSObject <CRNHTTPProtocolHandlerProxy>
{
    NSURLProtocol * _protocol; // +0x8
    NSThread * _clientThread; // +0x10
    NSArray * _runLoopModes; // +0x18
    NSString * _url; // +0x20
    Time _creationTime; // +0x28
    BOOL _requestComplete; // +0x30
    BOOL _paused; // +0x31
    NSMutableArray * _queuedBlocks; // +0x38
}
- (id)initWithProtocol:(id)arg1 clientThread:(id)arg2 runLoopMode:(id)arg3;
- (void)invalidate;
- (void)runQueuedBlocksOnClientThread;
- (void)postBlockToClientThread:(id /* block */)arg1;
- (void)performBlockOnClientThread:(id /* block */)arg1;
- (void)didFailWithNSErrorCode:(long long)arg1 netErrorCode:(int)arg2;
- (void)didLoadData:(id)arg1;
- (void)didReceiveResponse:(id)arg1;
- (void)wasRedirectedToRequest:(id)arg1 nativeRequest:(void *)arg2 redirectResponse:(id)arg3;
- (void)didFinishLoading;
- (void)didCreateNativeRequest:(void *)arg1;
- (void)didFailWithErrorOnClientThread:(id)arg1;
- (void)didLoadDataOnClientThread:(id)arg1;
- (void)didReceiveResponseOnClientThread:(id)arg1;
- (void)wasRedirectedToRequestOnClientThread:(id)arg1 redirectResponse:(id)arg2;
- (void)didFinishLoadingOnClientThread;
- (void)pause;
- (void)resume;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
