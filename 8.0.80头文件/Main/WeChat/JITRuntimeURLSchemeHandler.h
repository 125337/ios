@interface JITRuntimeURLSchemeHandler : NSObject <WKURLSchemeHandler>
{
    id <WKURLSchemeHandler> _delegate; // +0x8
}
- (void)webView:(id)arg1 startURLSchemeTask:(id)arg2;
- (void)webView:(id)arg1 stopURLSchemeTask:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
