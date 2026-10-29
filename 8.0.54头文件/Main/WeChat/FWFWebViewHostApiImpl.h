@interface FWFWebViewHostApiImpl : NSObject <FWFWKWebViewHostApi>
{
    FWFInstanceManager * _instanceManager; // +0x8
    NSBundle * _bundle; // +0x10
    FWFAssetManager * _assetManager; // +0x18
}
+ (id)errorForURLString:(id)arg1;
- (id)initWithInstanceManager:(id)arg1;
- (id)initWithInstanceManager:(id)arg1 bundle:(id)arg2 assetManager:(id)arg3;
- (id)webViewForIdentifier:(id)arg1;
- (void)createWithIdentifier:(id)arg1 configurationIdentifier:(id)arg2 error:(id *)arg3;
- (void)loadRequestForWebViewWithIdentifier:(id)arg1 request:(id)arg2 error:(id *)arg3;
- (void)setUserAgentForWebViewWithIdentifier:(id)arg1 userAgent:(id)arg2 error:(id *)arg3;
- (id)canGoBackForWebViewWithIdentifier:(id)arg1 error:(id *)arg2;
- (id)URLForWebViewWithIdentifier:(id)arg1 error:(id *)arg2;
- (id)canGoForwardForWebViewWithIdentifier:(id)arg1 error:(id *)arg2;
- (id)estimatedProgressForWebViewWithIdentifier:(id)arg1 error:(id *)arg2;
- (void)evaluateJavaScriptForWebViewWithIdentifier:(id)arg1 javaScriptString:(id)arg2 completion:(id /* block */)arg3;
- (void)goBackForWebViewWithIdentifier:(id)arg1 error:(id *)arg2;
- (void)goForwardForWebViewWithIdentifier:(id)arg1 error:(id *)arg2;
- (void)loadAssetForWebViewWithIdentifier:(id)arg1 assetKey:(id)arg2 error:(id *)arg3;
- (void)loadFileForWebViewWithIdentifier:(id)arg1 fileURL:(id)arg2 readAccessURL:(id)arg3 error:(id *)arg4;
- (void)loadHTMLForWebViewWithIdentifier:(id)arg1 HTMLString:(id)arg2 baseURL:(id)arg3 error:(id *)arg4;
- (void)reloadWebViewWithIdentifier:(id)arg1 error:(id *)arg2;
- (void)setAllowsBackForwardForWebViewWithIdentifier:(id)arg1 isAllowed:(id)arg2 error:(id *)arg3;
- (void)setNavigationDelegateForWebViewWithIdentifier:(id)arg1 delegateIdentifier:(id)arg2 error:(id *)arg3;
- (void)setUIDelegateForWebViewWithIdentifier:(id)arg1 delegateIdentifier:(id)arg2 error:(id *)arg3;
- (id)titleForWebViewWithIdentifier:(id)arg1 error:(id *)arg2;
- (id)instanceManager;
- (void)setInstanceManager:(id)arg1;
- (id)bundle;
- (void)setBundle:(id)arg1;
- (id)assetManager;
- (void)setAssetManager:(id)arg1;
- (void).cxx_destruct;
@end

