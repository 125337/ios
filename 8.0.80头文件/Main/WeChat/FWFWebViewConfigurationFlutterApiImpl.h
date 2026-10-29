@interface FWFWebViewConfigurationFlutterApiImpl : FWFWKWebViewConfigurationFlutterApi
{
    FWFInstanceManager * _instanceManager; // +0x8
}
- (id)initWithBinaryMessenger:(id)arg1 instanceManager:(id)arg2;
- (void)createWithConfiguration:(id)arg1 completion:(id /* block */)arg2;
- (id)instanceManager;
- (void)setInstanceManager:(id)arg1;
- (void).cxx_destruct;
@end
