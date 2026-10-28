@interface FWFUIDelegateHostApiImpl : NSObject <FWFWKUIDelegateHostApi>
{
    id <FlutterBinaryMessenger> _binaryMessenger; // +0x8
    FWFInstanceManager * _instanceManager; // +0x10
}
- (id)initWithBinaryMessenger:(id)arg1 instanceManager:(id)arg2;
- (id)delegateForIdentifier:(id)arg1;
- (void)createWithIdentifier:(long long)arg1 error:(id *)arg2;
- (id)binaryMessenger;
- (void)setBinaryMessenger:(id)arg1;
- (id)instanceManager;
- (void)setInstanceManager:(id)arg1;
- (void).cxx_destruct;
@end
