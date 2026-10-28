@interface FWFObjectFlutterApiImpl : FWFNSObjectFlutterApi
{
    id <FlutterBinaryMessenger> _binaryMessenger; // +0x8
    FWFInstanceManager * _instanceManager; // +0x10
}
- (id)initWithBinaryMessenger:(id)arg1 instanceManager:(id)arg2;
- (long long)identifierForObject:(id)arg1;
- (void)observeValueForObject:(id)arg1 keyPath:(id)arg2 object:(id)arg3 change:(id)arg4 completion:(id /* block */)arg5;
- (id)binaryMessenger;
- (void)setBinaryMessenger:(id)arg1;
- (id)instanceManager;
- (void)setInstanceManager:(id)arg1;
- (void).cxx_destruct;
@end
