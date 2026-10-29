@interface MMWebviewAdSchemeHandler : NSObject <WKURLSchemeHandler>
{
    id <MMWebviewAdSchemeHandlerDelegate> _delegate; // +0x8
}
- (void)webView:(id)arg1 startURLSchemeTask:(id)arg2;
- (void)webView:(id)arg1 stopURLSchemeTask:(id)arg2;
- (id)customScheme;
- (void)handleGetAdTokenRequestWithURLComponents:(id)arg1 url:(id)arg2 task:(id)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

