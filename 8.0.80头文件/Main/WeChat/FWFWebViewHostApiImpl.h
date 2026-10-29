@interface FWFWebViewHostApiImpl : NSObject <FWFWKWebViewHostApi>
{
    id <FlutterBinaryMessenger> _binaryMessenger; // +0x8
    FWFInstanceManager * _instanceManager; // +0x10
    NSBundle * _bundle; // +0x18
    FWFAssetManager * _assetManager; // +0x20
}
+ (id)errorForURLString:(id)arg1;
- (id)initWithBinaryMessenger:(id)arg1 instanceManager:(id)arg2;
- (id)initWithBinaryMessenger:(id)arg1 instanceManager:(id)arg2 bundle:(id)arg3 assetManager:(id)arg4;
- (id)webViewForIdentifier:(long long)arg1;
- (void)createWithIdentifier:(long long)arg1 configurationIdentifier:(long long)arg2 error:(id *)arg3;
- (void)loadRequestForWebViewWithIdentifier:(long long)arg1 request:(id)arg2 error:(id *)arg3;
- (void)setCustomUserAgentForWebViewWithIdentifier:(long long)arg1 userAgent:(id)arg2 error:(id *)arg3;
- (id)canGoBackForWebViewWithIdentifier:(long long)arg1 error:(id *)arg2;
- (id)URLForWebViewWithIdentifier:(long long)arg1 error:(id *)arg2;
- (id)canGoForwardForWebViewWithIdentifier:(long long)arg1 error:(id *)arg2;
- (id)estimatedProgressForWebViewWithIdentifier:(long long)arg1 error:(id *)arg2;
- (void)evaluateJavaScriptForWebViewWithIdentifier:(long long)arg1 javaScriptString:(id)arg2 completion:(id /* block */)arg3;
- (void)setInspectableForWebViewWithIdentifier:(long long)arg1 inspectable:(BOOL)arg2 error:(id *)arg3;
- (void)goBackForWebViewWithIdentifier:(long long)arg1 error:(id *)arg2;
- (void)goForwardForWebViewWithIdentifier:(long long)arg1 error:(id *)arg2;
- (void)loadAssetForWebViewWithIdentifier:(long long)arg1 assetKey:(id)arg2 error:(id *)arg3;
- (void)loadFileForWebViewWithIdentifier:(long long)arg1 fileURL:(id)arg2 readAccessURL:(id)arg3 error:(id *)arg4;
- (void)loadHTMLForWebViewWithIdentifier:(long long)arg1 HTMLString:(id)arg2 baseURL:(id)arg3 error:(id *)arg4;
- (void)reloadWebViewWithIdentifier:(long long)arg1 error:(id *)arg2;
- (void)setAllowsBackForwardForWebViewWithIdentifier:(long long)arg1 isAllowed:(BOOL)arg2 error:(id *)arg3;
- (void)setNavigationDelegateForWebViewWithIdentifier:(long long)arg1 delegateIdentifier:(id)arg2 error:(id *)arg3;
- (void)setUIDelegateForWebViewWithIdentifier:(long long)arg1 delegateIdentifier:(id)arg2 error:(id *)arg3;
- (id)titleForWebViewWithIdentifier:(long long)arg1 error:(id *)arg2;
- (id)customUserAgentForWebViewWithIdentifier:(long long)arg1 error:(id *)arg2;
- (id)binaryMessenger;
- (void)setBinaryMessenger:(id)arg1;
- (id)instanceManager;
- (void)setInstanceManager:(id)arg1;
- (id)bundle;
- (void)setBundle:(id)arg1;
- (id)assetManager;
- (void)setAssetManager:(id)arg1;
- (void).cxx_destruct;
@end
