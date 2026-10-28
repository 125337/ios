@interface FWFScriptMessageHandlerFlutterApiImpl : FWFWKScriptMessageHandlerFlutterApi
{
    FWFInstanceManager * _instanceManager; // +0x8
}
- (id)initWithBinaryMessenger:(id)arg1 instanceManager:(id)arg2;
- (long long)identifierForHandler:(id)arg1;
- (void)didReceiveScriptMessageForHandler:(id)arg1 userContentController:(id)arg2 message:(id)arg3 completion:(id /* block */)arg4;
- (id)instanceManager;
- (void)setInstanceManager:(id)arg1;
- (void).cxx_destruct;
@end
