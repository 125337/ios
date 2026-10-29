@interface ForwardToSystemShareDirectHandler : NSObject
{
    id /* block */ _onReadyToForwardSystemShare; // +0x8
    NSDictionary * _reportParams; // +0x10
}
- (id)initWithReportParams:(id)arg1;
- (void)startFlow;
- (void)continueFlowAfterAuthorizationWithParams:(id)arg1;
- (void)deliverWithParams:(id)arg1;
- (id /* block */)onReadyToForwardSystemShare;
- (void)setOnReadyToForwardSystemShare:(id /* block */)arg1;
- (id)reportParams;
- (void)setReportParams:(id)arg1;
- (void).cxx_destruct;
@end
