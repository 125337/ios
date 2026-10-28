@interface FWFScrollViewDelegateFlutterApiImpl : FWFUIScrollViewDelegateFlutterApi
{
    id <FlutterBinaryMessenger> _binaryMessenger; // +0x8
    FWFInstanceManager * _instanceManager; // +0x10
}
- (id)initWithBinaryMessenger:(id)arg1 instanceManager:(id)arg2;
- (long long)identifierForDelegate:(id)arg1;
- (void)scrollViewDidScrollForDelegate:(id)arg1 uiScrollView:(id)arg2 completion:(id /* block */)arg3;
- (id)binaryMessenger;
- (void)setBinaryMessenger:(id)arg1;
- (id)instanceManager;
- (void)setInstanceManager:(id)arg1;
- (void).cxx_destruct;
@end
