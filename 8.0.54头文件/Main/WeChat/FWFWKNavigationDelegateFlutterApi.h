@interface FWFWKNavigationDelegateFlutterApi : NSObject
{
    NSObject<FlutterBinaryMessenger> * _binaryMessenger; // +0x8
}
- (id)initWithBinaryMessenger:(id)arg1;
- (void)didFinishNavigationForDelegateWithIdentifier:(id)arg1 webViewIdentifier:(id)arg2 URL:(id)arg3 completion:(id /* block */)arg4;
- (id)binaryMessenger;
- (void)setBinaryMessenger:(id)arg1;
- (void).cxx_destruct;
@end

