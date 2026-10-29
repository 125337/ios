@interface WxamUrlProtocol : NSURLProtocol <NSURLSessionDataDelegate>
{
    BOOL _didFallbackRetry; // +0x10
    BOOL _stopped; // +0x11
    BOOL _terminalCallbackScheduled; // +0x12
    BOOL _tornDown; // +0x13
    id <WKURLSchemeTask> _schemeTask; // +0x18
    NSURLRequest * _originRequest; // +0x20
    NSURLRequest * _realRequest; // +0x28
    NSURL * _cacheURL; // +0x30
    id <NSURLProtocolClient> _realClient; // +0x38
    NSURLSession * _session; // +0x40
    NSMutableData * _responseData; // +0x48
    unsigned long long _attemptSeq; // +0x50
}
+ (BOOL)isWxamUrlRequest:(id)arg1;
+ (BOOL)canInitWithRequest:(id)arg1;
+ (BOOL)acceptContainsWxPic:(id)arg1;
+ (BOOL)isWxPicQueryItem:(id)arg1;
+ (BOOL)requestHasWxPicNegotiation:(id)arg1;
+ (id)requestByRemovingWxPicNegotiation:(id)arg1;
+ (id)canonicalRequestForRequest:(id)arg1;
+ (BOOL)urlSupportsWxamTranscode:(id)arg1;
+ (BOOL)isHTTPURL:(id)arg1;
+ (id)errorWithCode:(long long)arg1 description:(id)arg2;
+ (BOOL)isStaticWxAMData:(id)arg1;
+ (BOOL)isStaticWxAMData:(id)arg1 outFrameCount:(unsigned long long *)arg2;
+ (BOOL)isWxAMHeaderSafeForDecode:(id)arg1 logURL:(id)arg2;
+ (unsigned long long)maxDownloadDataSize;
+ (unsigned long long)maxFrameBitmapBytes;
+ (id)contentTypeForData:(id)arg1;
- (id)schemeTask;
- (void)setSchemeTask:(id)arg1;
- (void)startLoadingBySchemeTask:(id)arg1 client:(id)arg2;
- (void)startLoading;
- (void)innerLoading;
- (void)startNetworkLoading;
- (void)startRequest:(id)arg1 cachePolicy:(unsigned long long)arg2;
- (BOOL)retryWithOriginImageIfNeeded;
- (void)stopLoading;
- (void)teardown;
- (BOOL)isStoppedOrFinishing;
- (BOOL)beginTerminalCallbackNeedTeardown:(BOOL *)arg1;
- (void)finishWithData:(id)arg1;
- (void)finishWithError:(id)arg1;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)handleDownloadedData:(id)arg1 attemptSeq:(unsigned long long)arg2;
- (id)originRequest;
- (void)setOriginRequest:(id)arg1;
- (id)realRequest;
- (void)setRealRequest:(id)arg1;
- (id)cacheURL;
- (void)setCacheURL:(id)arg1;
- (id)realClient;
- (void)setRealClient:(id)arg1;
- (id)session;
- (void)setSession:(id)arg1;
- (id)responseData;
- (void)setResponseData:(id)arg1;
- (unsigned long long)attemptSeq;
- (void)setAttemptSeq:(unsigned long long)arg1;
- (BOOL)didFallbackRetry;
- (void)setDidFallbackRetry:(BOOL)arg1;
- (BOOL)stopped;
- (void)setStopped:(BOOL)arg1;
- (BOOL)terminalCallbackScheduled;
- (void)setTerminalCallbackScheduled:(BOOL)arg1;
- (BOOL)tornDown;
- (void)setTornDown:(BOOL)arg1;
- (void).cxx_destruct;
@end
