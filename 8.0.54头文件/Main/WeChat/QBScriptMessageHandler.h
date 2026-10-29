@interface QBScriptMessageHandler : NSObject <WKScriptMessageHandler>
{
    id <QBScriptMessageHandlerDelegate> _delegate; // +0x8
}
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg1;
@end

