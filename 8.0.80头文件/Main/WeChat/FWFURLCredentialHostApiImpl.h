@interface FWFURLCredentialHostApiImpl : NSObject <FWFNSUrlCredentialHostApi>
{
    id <FlutterBinaryMessenger> _binaryMessenger; // +0x8
    FWFInstanceManager * _instanceManager; // +0x10
}
- (id)initWithBinaryMessenger:(id)arg1 instanceManager:(id)arg2;
- (void)createWithUserWithIdentifier:(long long)arg1 user:(id)arg2 password:(id)arg3 persistence:(unsigned long long)arg4 error:(id *)arg5;
- (id)credentialForIdentifier:(id)arg1 error:(id *)arg2;
- (id)binaryMessenger;
- (void)setBinaryMessenger:(id)arg1;
- (id)instanceManager;
- (void)setInstanceManager:(id)arg1;
- (void).cxx_destruct;
@end
