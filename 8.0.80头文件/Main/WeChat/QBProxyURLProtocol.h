@interface QBProxyURLProtocol : NSURLProtocol <QBNetworkDelegate>
{
    long long _directReasonType; // +0x10
    BOOL _stopLoading; // +0x18
    int _resourceType; // +0x1c
    QBProtocolProxy * _protocolProxy; // +0x20
    QBDNSQueryItem * _currentQueryItem; // +0x28
    QBDNSQueryItem * _preQueryItem; // +0x30
    NSDate * _startTime; // +0x38
    long long _dnsHTTPStatus; // +0x40
    long long _preQueryErr; // +0x48
    BOOL _isTBSInnerRequest; // +0x50
    BOOL _isHTMLRespnse; // +0x51
    BOOL _hadProceJs; // +0x52
    BOOL _hadFindFirstFlag; // +0x53
    unsigned char _FindInsertPostionStatus; // +0x54
    char * _firstTag; // +0x58
    unsigned long long _firstTagPos; // +0x60
    BOOL _firstTagFound; // +0x68
    BOOL _isWKType; // +0x69
    BOOL _hadCSPHeader; // +0x6a
    BOOL _NoRspCharset; // +0x6b
    NSString * _originPOSTURLString; // +0x70
    QBNetwork * _network; // +0x78
}
+ (void)startProxyWithWorker:(Class)arg1;
+ (void)setCurrentMainURL:(id)arg1;
+ (id)getCurrentMainURL;
+ (BOOL)canInitWithRequest:(id)arg1;
+ (BOOL)isTBSInnerURL:(id)arg1;
+ (id)canonicalRequestForRequest:(id)arg1;
+ (BOOL)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2;
+ (void)addFrameInfoWithAddress:(id)arg1 withURLString:(id)arg2;
+ (BOOL)isFrameSrcForRedirectWithURLString:(id)arg1;
+ (BOOL)isFrameSrcForInjectWithURLString:(id)arg1;
+ (void)removeFrameInfoWithAddress:(id)arg1;
+ (void)removeAllFrameInfo;
+ (id)toInjectScriptTags;
+ (void)getSystemThreads;
+ (_opaque_pthread_t *)getWebThread;
- (id)initWithRequest:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3;
- (void)startLoading;
- (void)mttStartLoading;
- (void)_sendRequestDirect:(long long)arg1;
- (id)_dnsQueryItem:(id)arg1 cached:(BOOL)arg2;
- (void)_doSendRequestWarpper:(id)arg1;
- (void)_doSendRequest:(id)arg1 directType:(long long)arg2;
- (void)stopLoading;
- (void)mttStopLoading;
- (void)dealloc;
- (BOOL)isValidVary:(id)arg1 withResponse:(id)arg2;
- (long long)isValidCachedResponse:(id)arg1;
- (id)cachedURLResponseIfPossible:(long long *)arg1;
- (BOOL)canLoadCacheData;
- (BOOL)isValidateConditionalRequest;
- (BOOL)returnCacheDataFor304:(unsigned long long)arg1;
- (void)recordRspContentType:(id)arg1;
- (id)injectScriptToData:(id)arg1;
- (BOOL)isNeedProcRedirectForLess_9_2_IOS;
- (void)sendRspToWebViewForRedirectWithLocation:(id)arg1;
- (BOOL)isNeedSpecialRedirectedProcessByHttpResponseHeaders:(id)arg1;
- (void)ifNeedNotfiyJsGetCookieResponse:(id)arg1;
- (void)qbNetwork:(id)arg1 didReceiveResponse:(id)arg2;
- (void)sendRspToWebView:(id)arg1;
- (void)qbNetwork:(id)arg1 didReceiveData:(id)arg2;
- (void)qbNetworkDidFinishLoading:(id)arg1;
- (void)qbNetwork:(id)arg1 didFailWithError:(id)arg2;
- (id)qbNetwork:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (id)qbNetwork:(id)arg1 willCacheResponse:(id)arg2;
- (__SecTrust *)newServerTrust:(__SecTrust *)arg1 forDomain:(id)arg2;
- (void)qbNetwork:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2;
- (void)qbNetwork:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)qbNetworkOriginHost:(id)arg1;
- (void)reportDNSDadRequest:(long long)arg1 aInterval:(long long)arg2 bInterval:(long long)arg3 cInterval:(long long)arg4;
- (void).cxx_destruct;
- (id)network;
- (void)setNetwork:(id)arg1;
@end
