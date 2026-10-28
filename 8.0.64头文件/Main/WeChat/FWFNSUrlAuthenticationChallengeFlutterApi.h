@interface FWFNSUrlAuthenticationChallengeFlutterApi : NSObject
{
    NSObject<FlutterBinaryMessenger> * _binaryMessenger; // +0x8
}
- (id)initWithBinaryMessenger:(id)arg1;
- (void)createWithIdentifier:(long long)arg1 protectionSpaceIdentifier:(long long)arg2 completion:(id /* block */)arg3;
- (id)binaryMessenger;
- (void)setBinaryMessenger:(id)arg1;
- (void).cxx_destruct;
@end
