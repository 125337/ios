@interface FWFNSObjectFlutterApi : NSObject
{
    NSObject<FlutterBinaryMessenger> * _binaryMessenger; // +0x8
}
- (id)initWithBinaryMessenger:(id)arg1;
- (void)observeValueForObjectWithIdentifier:(long long)arg1 keyPath:(id)arg2 objectIdentifier:(long long)arg3 changeKeys:(id)arg4 changeValues:(id)arg5 completion:(id /* block */)arg6;
- (void)disposeObjectWithIdentifier:(long long)arg1 completion:(id /* block */)arg2;
- (id)binaryMessenger;
- (void)setBinaryMessenger:(id)arg1;
- (void).cxx_destruct;
@end
