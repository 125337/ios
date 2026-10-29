@interface QBProtocolWorker : NSObject
{
    NSURLProtocol * _protocol; // +0x8
}
+ (void)addAuthenticationDelegate:(id)arg1;
+ (void)removeAuthenticationDelegate:(id)arg1;
+ (BOOL)qbProxyProtocolCanInitWithRequest:(id)arg1 isQBWebViewRequest:(BOOL)arg2;
+ (id)qbProxyProtocolAddCustomHTTPHeader:(id)arg1;
+ (id)qbProxyCanonicalRequestForRequest:(id)arg1;
- (void)qbProxyProtocolDidInitialized;
- (BOOL)qbProxyProtocolShouldStartLoading;
- (void)qbProxyProtocolDidStartLoading;
- (BOOL)qbProxyProtocolDidReceiveResponse:(id *)arg1 error:(id *)arg2;
- (id)qbProxyProtocolDidReceiveData:(id)arg1;
- (void)qbProxyProtocolDidFinishLoading;
- (void)qbProxyProtocolDidFailWithError:(id)arg1;
- (id)qbProxyProtocolWillSendRequest:(id)arg1 redirectResponse:(id)arg2;
- (void)qbProxyProtocolDidStopLoading;
- (void)qbProxyProtocolDidFinishLoadingWithCached:(id)arg1 errCode:(long long)arg2;
- (void)qbProxyProtocolAfterSendRequest:(id)arg1;
- (void).cxx_destruct;
- (id)protocol;
- (void)setProtocol:(id)arg1;
@end
