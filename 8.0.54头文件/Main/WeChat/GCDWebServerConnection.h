@interface GCDWebServerConnection : NSObject
{
    GCDWebServer * _server; // +0x8
    NSData * _localAddress; // +0x10
    NSData * _remoteAddress; // +0x18
    int _socket; // +0x20
    unsigned long long _bytesRead; // +0x28
    unsigned long long _bytesWritten; // +0x30
    BOOL _virtualHEAD; // +0x38
    __CFHTTPMessage * _requestMessage; // +0x40
    GCDWebServerRequest * _request; // +0x48
    GCDWebServerHandler * _handler; // +0x50
    __CFHTTPMessage * _responseMessage; // +0x58
    GCDWebServerResponse * _response; // +0x60
    long long _statusCode; // +0x68
    BOOL _opened; // +0x70
}
+ (void)initialize;
- (BOOL)open;
- (void)didReadBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (void)didWriteBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (id)rewriteRequestURL:(id)arg1 withMethod:(id)arg2 headers:(id)arg3;
- (id)preflightRequest:(id)arg1;
- (void)processRequest:(id)arg1 completion:(id /* block */)arg2;
- (id)overrideResponse:(id)arg1 forRequest:(id)arg2;
- (void)abortRequest:(id)arg1 withStatusCode:(long long)arg2;
- (void)close;
- (void)_writeData:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (void)_writeHeadersWithCompletionBlock:(id /* block */)arg1;
- (void)_writeBodyWithCompletionBlock:(id /* block */)arg1;
- (void)_readData:(id)arg1 withLength:(unsigned long long)arg2 completionBlock:(id /* block */)arg3;
- (void)_readHeaders:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (void)_readBodyWithRemainingLength:(unsigned long long)arg1 completionBlock:(id /* block */)arg2;
- (void)_readNextBodyChunk:(id)arg1 completionBlock:(id /* block */)arg2;
- (BOOL)isUsingIPv6;
- (void)_initializeResponseHeadersWithStatusCode:(long long)arg1;
- (void)_startProcessingRequest;
- (void)_finishProcessingRequest:(id)arg1;
- (void)_readBodyWithLength:(unsigned long long)arg1 initialData:(id)arg2;
- (void)_readChunkedBodyWithInitialData:(id)arg1;
- (void)_readRequestHeaders;
- (id)initWithServer:(id)arg1 localAddress:(id)arg2 remoteAddress:(id)arg3 socket:(int)arg4;
- (id)localAddressString;
- (id)remoteAddressString;
- (void)dealloc;
- (id)server;
- (id)localAddressData;
- (id)remoteAddressData;
- (unsigned long long)totalBytesRead;
- (unsigned long long)totalBytesWritten;
- (void).cxx_destruct;
@end

