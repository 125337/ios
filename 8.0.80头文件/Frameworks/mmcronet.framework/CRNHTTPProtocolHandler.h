@interface CRNHTTPProtocolHandler : NSURLProtocol
{
    scoped_refptr<net::HttpProtocolHandlerCore> _core; // +0x10
    id <CRNHTTPProtocolHandlerProxy> _protocolProxy; // +0x18
    NSThread * _clientThread; // +0x20
    BOOL _supportedURL; // +0x28
    NSURLSessionTask * _task; // +0x30
}
+ (BOOL)canInitWithRequest:(id)arg1;
+ (id)canonicalRequestForRequest:(id)arg1;
- (id)initWithRequest:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3;
- (id)initWithTask:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3;
- (id)cachedResponse;
- (void)startLoading;
- (void)ensureProtocolHandlerProxyCreated;
- (void)cancelRequest;
- (void)stopLoading;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
