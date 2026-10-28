@interface FWFNSUrlProtectionSpaceFlutterApi : NSObject
{
    NSObject<FlutterBinaryMessenger> * _binaryMessenger; // +0x8
}
- (id)initWithBinaryMessenger:(id)arg1;
- (void)createWithIdentifier:(long long)arg1 host:(id)arg2 realm:(id)arg3 authenticationMethod:(id)arg4 completion:(id /* block */)arg5;
- (id)binaryMessenger;
- (void)setBinaryMessenger:(id)arg1;
- (void).cxx_destruct;
@end
