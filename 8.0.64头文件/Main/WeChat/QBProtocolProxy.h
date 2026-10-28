@interface QBProtocolProxy : NSObject
{
    QBProtocolWorker * _worker; // +0x8
    int _resType; // +0x10
    BOOL _isQBWebViewRequest; // +0x14
    unsigned long long _byteLength; // +0x18
    NSURLProtocol * _protocol; // +0x20
}
+ (id)validURLForRequest:(id)arg1;
+ (void)addProxyAuthenticationDelegate:(id)arg1;
+ (void)removeProxyAuthenticationDelegate:(id)arg1;
+ (unsigned long long)indexOfDelegate:(id)arg1;
+ (void)setProtocolWorkerClass:(Class)arg1;
+ (BOOL)protocolCanInitWithRequest:(id)arg1 isQBWebViewRequest:(BOOL)arg2;
+ (id)protocolAddCustomHTTPHeader:(id)arg1;
+ (id)protocolCanonicalRequestForRequest:(id)arg1;
+ (BOOL)protocolRequestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2;
+ (BOOL)workerClassRespondsToSelector:(SEL)arg1;
- (void)protocolDidInitialized:(id)arg1 resourceType:(int)arg2;
- (BOOL)protocolShouldStartLoading;
- (void)protocolDidStartLoading;
- (BOOL)protocolDidReceiveResponse:(id *)arg1 error:(id *)arg2;
- (id)protocolDidReceiveData:(id)arg1;
- (void)protocolDidFinishLoading;
- (void)protocolDidFinishLoadingWithCached:(id)arg1 errCode:(long long)arg2;
- (void)protocolDidFailWithError:(id)arg1;
- (id)protocolWillSendRequest:(id)arg1 redirectResponse:(id)arg2;
- (void)protocolDidStopLoading;
- (void)protocolDidResolveDNS:(double)arg1 type:(unsigned long long)arg2 address:(id)arg3 errCode:(long long)arg4;
- (void)protocolDidSendRequest:(id)arg1 type:(long long)arg2;
- (void)protocolAfterSendRequest:(id)arg1;
- (BOOL)protocolWillSendRequestForAuthenticationChallenge:(id)arg1 forURL:(id)arg2;
- (BOOL)protocolDidReceiveChallenge:(id)arg1 completionHandler:(id /* block */)arg2 forURL:(id)arg3;
- (void).cxx_destruct;
- (id)protocol;
- (void)setProtocol:(id)arg1;
@end
