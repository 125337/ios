@interface FWFWKScriptMessageHandlerFlutterApi : NSObject
{
    NSObject<FlutterBinaryMessenger> * _binaryMessenger; // +0x8
}
- (id)initWithBinaryMessenger:(id)arg1;
- (void)didReceiveScriptMessageForHandlerWithIdentifier:(long long)arg1 userContentControllerIdentifier:(long long)arg2 message:(id)arg3 completion:(id /* block */)arg4;
- (id)binaryMessenger;
- (void)setBinaryMessenger:(id)arg1;
- (void).cxx_destruct;
@end
