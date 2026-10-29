@interface MpWebViewHostApiImpl : NSObject <MpWebViewHostApi>
{
    MpWebViewFlutterApi * _flutterApi; // +0x8
}
- (void)createViewId:(id)arg1 customSchemes:(id)arg2 cacheKey:(id)arg3 error:(id *)arg4;
- (void)preloadWebViewCacheKey:(id)arg1 error:(id *)arg2;
- (void)invalidatePreloadCacheKey:(id)arg1 error:(id *)arg2;
- (void)enableAutoPreloadCacheKey:(id)arg1 error:(id *)arg2;
- (void)disableAutoPreloadCacheKey:(id)arg1 error:(id *)arg2;
- (void)retryEditorResourceLoadViewId:(id)arg1 error:(id *)arg2;
- (void)disposeViewId:(id)arg1 error:(id *)arg2;
- (void)loadUrlViewId:(id)arg1 url:(id)arg2 error:(id *)arg3;
- (void)loadHtmlStringViewId:(id)arg1 html:(id)arg2 baseUrl:(id)arg3 error:(id *)arg4;
- (void)loadFileUrlViewId:(id)arg1 filePath:(id)arg2 error:(id *)arg3;
- (void)reloadViewId:(id)arg1 error:(id *)arg2;
- (void)evaluateJavascriptViewId:(id)arg1 js:(id)arg2 completion:(id /* block */)arg3;
- (void)addJavaScriptChannelViewId:(id)arg1 name:(id)arg2 error:(id *)arg3;
- (void)respondToSchemeRequestViewId:(id)arg1 requestId:(id)arg2 statusCode:(id)arg3 data:(id)arg4 mimeType:(id)arg5 error:(id *)arg6;
- (id)flutterApi;
- (void)setFlutterApi:(id)arg1;
- (void).cxx_destruct;
@end
