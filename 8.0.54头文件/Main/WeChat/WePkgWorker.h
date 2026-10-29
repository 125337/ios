@interface WePkgWorker : QBProtocolWorker
+ (BOOL)qbProxyProtocolCanInitWithRequest:(id)arg1 isQBWebViewRequest:(BOOL)arg2;
+ (id)qbProxyProtocolAddCustomHTTPHeader:(id)arg1;
- (void)qbProxyProtocolDidInitialized;
- (BOOL)qbProxyProtocolShouldStartLoading;
- (void)qbProxyProtocolDidStartLoading;
- (BOOL)qbProxyProtocolDidReceiveResponse:(id *)arg1 error:(id *)arg2;
- (id)qbProxyProtocolDidReceiveData:(id)arg1;
- (void)qbProxyProtocolDidFinishLoading;
- (void)qbProxyProtocolDidFailWithError:(id)arg1;
- (id)qbProxyProtocolWillSendRequest:(id)arg1 redirectResponse:(id)arg2;
- (void)qbProxyProtocolDidStopLoading;
@end

