@interface GameURLSessionWrapper : NSObject <NSURLSessionDataDelegate, NSURLSessionDelegate, INetworkStatusMgrExt>
{
    NSRecursiveLock * m_lock; // +0x8
    BOOL _isVideoInnerSessionWrapper; // +0x10
    BOOL _isSimpleDnsExptEnable; // +0x11
    BOOL _hasTurnLevelDown; // +0x12
    BOOL _isNetWorkDisconnet; // +0x13
    id <GameURLSessionWrapperDelegate> _delegate; // +0x18
    NSURLSession * _urlSession; // +0x20
    NSMutableDictionary * _sessionTaskToSchemeTaskDict; // +0x28
    NSMutableDictionary * _schemeTaskToTryInfoDict; // +0x30
    unsigned long long _webRequestStatus; // +0x38
    NSMutableDictionary * _ip2hostDict; // +0x40
    GameURLSessionStatistics * _sessionStatistics; // +0x48
    long long _simpleReqFailCount; // +0x50
    long long _simpleErrorTotalCount; // +0x58
    long long _simpleErrorContinuousCount; // +0x60
}
+ (BOOL)isValidIPAddress:(id)arg1;
+ (BOOL)isIPV6Address:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (BOOL)rootSimpleDnsEnable;
- (void)startTaskWithRequest:(id)arg1 andUrlSchemeTask:(id)arg2;
- (void)stopTaskWithUrlSchemeTask:(id)arg1;
- (id)getSchemeTaskBySessionTask:(id)arg1;
- (BOOL)needUseSimpleDnsForHost:(id)arg1 andScheme:(id)arg2;
- (void)setWebRequestStatus:(unsigned long long)arg1;
- (void)setHasTurnLevelDown:(BOOL)arg1;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(id /* block */)arg4;
- (BOOL)evaluateServerTrust:(__SecTrust *)arg1 forDomain:(id)arg2;
- (BOOL)isDnsError:(id)arg1;
- (void)setIsNetWorkDisconnet:(BOOL)arg1;
- (void)onNetworkStatusChange:(unsigned int)arg1;
- (void)onNetworkWeakChanged:(BOOL)arg1 currentRTT:(unsigned int)arg2;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)handleCookieForRedirectRequest:(id)arg1 fromResponse:(id)arg2;
- (void)processCookieOnMainThreadWithResponse:(id)arg1;
- (void)processCookieWithResponse:(id)arg1;
- (id)description;
- (void)resetGameWebRequestStatus;
- (void)resetSessionWrapperOnlyForVideoLoader;
- (void)invalidateAndCleanup;
- (id)getRequestCookieHeaderForURL:(id)arg1;
- (id)getRequestCookieHeaderForHost:(id)arg1;
- (id)searchLocalCookiesForUrl:(id)arg1;
- (BOOL)cookieFilterWithCookie:(id)arg1 andUrl:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isVideoInnerSessionWrapper;
- (void)setIsVideoInnerSessionWrapper:(BOOL)arg1;
- (id)urlSession;
- (void)setUrlSession:(id)arg1;
- (id)sessionTaskToSchemeTaskDict;
- (void)setSessionTaskToSchemeTaskDict:(id)arg1;
- (id)schemeTaskToTryInfoDict;
- (void)setSchemeTaskToTryInfoDict:(id)arg1;
- (BOOL)isSimpleDnsExptEnable;
- (void)setIsSimpleDnsExptEnable:(BOOL)arg1;
- (unsigned long long)webRequestStatus;
- (id)ip2hostDict;
- (void)setIp2hostDict:(id)arg1;
- (BOOL)hasTurnLevelDown;
- (BOOL)isNetWorkDisconnet;
- (id)sessionStatistics;
- (void)setSessionStatistics:(id)arg1;
- (long long)simpleReqFailCount;
- (void)setSimpleReqFailCount:(long long)arg1;
- (long long)simpleErrorTotalCount;
- (void)setSimpleErrorTotalCount:(long long)arg1;
- (long long)simpleErrorContinuousCount;
- (void)setSimpleErrorContinuousCount:(long long)arg1;
- (void).cxx_destruct;
@end
