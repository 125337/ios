@interface QMCSubwayWeakScriptMessageHandler : NSObject <WKScriptMessageHandler>
{
    id <WKScriptMessageHandler> _target; // +0x8
}
- (id)initWithTarget:(id)arg1;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (id)target;
- (void)setTarget:(id)arg1;
- (void).cxx_destruct;
@end
