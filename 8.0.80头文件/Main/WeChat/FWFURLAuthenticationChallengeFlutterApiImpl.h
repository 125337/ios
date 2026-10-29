@interface FWFURLAuthenticationChallengeFlutterApiImpl : NSObject
{
    FWFNSUrlAuthenticationChallengeFlutterApi * _api; // +0x8
    id <FlutterBinaryMessenger> _binaryMessenger; // +0x10
    FWFInstanceManager * _instanceManager; // +0x18
}
- (id)initWithBinaryMessenger:(id)arg1 instanceManager:(id)arg2;
- (void)createWithInstance:(id)arg1 protectionSpace:(id)arg2 completion:(id /* block */)arg3;
- (id)api;
- (void)setApi:(id)arg1;
- (id)binaryMessenger;
- (void)setBinaryMessenger:(id)arg1;
- (id)instanceManager;
- (void)setInstanceManager:(id)arg1;
- (void).cxx_destruct;
@end
