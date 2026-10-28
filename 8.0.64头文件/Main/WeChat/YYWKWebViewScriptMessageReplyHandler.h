@interface YYWKWebViewScriptMessageReplyHandler : NSObject <WKScriptMessageHandlerWithReply>
{
    id <WKScriptMessageHandlerWithReply> _delegate; // +0x8
}
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2 replyHandler:(id /* block */)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
