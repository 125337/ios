@interface WebpUrlSchemeHandler : NSObject <WKURLSchemeHandler, NSURLProtocolClient>
{
    NSMutableDictionary * _taskDic; // +0x8
}
+ (void)installSchemeTo:(id)arg1;
- (id)init;
- (void)webView:(id)arg1 startURLSchemeTask:(id)arg2;
- (void)webView:(id)arg1 stopURLSchemeTask:(id)arg2;
- (void)URLProtocol:(id)arg1 cachedResponseIsValid:(id)arg2;
- (void)URLProtocol:(id)arg1 didCancelAuthenticationChallenge:(id)arg2;
- (void)URLProtocol:(id)arg1 didFailWithError:(id)arg2;
- (void)URLProtocol:(id)arg1 didLoadData:(id)arg2;
- (void)URLProtocol:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (void)URLProtocol:(id)arg1 didReceiveResponse:(id)arg2 cacheStoragePolicy:(unsigned long long)arg3;
- (void)URLProtocol:(id)arg1 wasRedirectedToRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)URLProtocolDidFinishLoading:(id)arg1;
- (id)taskDic;
- (void)setTaskDic:(id)arg1;
- (void).cxx_destruct;
@end

