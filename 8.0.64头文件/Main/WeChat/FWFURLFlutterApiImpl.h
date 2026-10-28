@interface FWFURLFlutterApiImpl : NSObject
{
    FWFNSUrlFlutterApi * _api; // +0x8
    FWFInstanceManager * _instanceManager; // +0x10
}
- (id)initWithBinaryMessenger:(id)arg1 instanceManager:(id)arg2;
- (void)create:(id)arg1 completion:(id /* block */)arg2;
- (id)api;
- (void)setApi:(id)arg1;
- (id)instanceManager;
- (void)setInstanceManager:(id)arg1;
- (void).cxx_destruct;
@end
