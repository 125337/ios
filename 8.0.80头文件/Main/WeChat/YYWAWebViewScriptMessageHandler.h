@interface YYWAWebViewScriptMessageHandler : NSObject <WKScriptMessageHandler, WKURLSchemeHandler>
{
    id <WKScriptMessageHandler> _delegate; // +0x8
}
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
