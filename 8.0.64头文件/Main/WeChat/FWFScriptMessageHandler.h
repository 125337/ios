@interface FWFScriptMessageHandler : FWFObject <WKScriptMessageHandler>
{
    FWFScriptMessageHandlerFlutterApiImpl * _scriptMessageHandlerAPI; // +0x8
}
- (id)initWithBinaryMessenger:(id)arg1 instanceManager:(id)arg2;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (id)scriptMessageHandlerAPI;
- (void).cxx_destruct;
@end
