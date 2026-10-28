@interface FWFURLProtectionSpaceFlutterApiImpl : NSObject
{
    FWFNSUrlProtectionSpaceFlutterApi * _api; // +0x8
    FWFInstanceManager * _instanceManager; // +0x10
}
- (id)initWithBinaryMessenger:(id)arg1 instanceManager:(id)arg2;
- (void)createWithInstance:(id)arg1 host:(id)arg2 realm:(id)arg3 authenticationMethod:(id)arg4 completion:(id /* block */)arg5;
- (id)api;
- (void)setApi:(id)arg1;
- (id)instanceManager;
- (void)setInstanceManager:(id)arg1;
- (void).cxx_destruct;
@end
