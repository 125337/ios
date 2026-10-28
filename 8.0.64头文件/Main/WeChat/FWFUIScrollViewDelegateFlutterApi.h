@interface FWFUIScrollViewDelegateFlutterApi : NSObject
{
    NSObject<FlutterBinaryMessenger> * _binaryMessenger; // +0x8
}
- (id)initWithBinaryMessenger:(id)arg1;
- (void)scrollViewDidScrollWithIdentifier:(long long)arg1 UIScrollViewIdentifier:(long long)arg2 x:(double)arg3 y:(double)arg4 completion:(id /* block */)arg5;
- (id)binaryMessenger;
- (void)setBinaryMessenger:(id)arg1;
- (void).cxx_destruct;
@end
