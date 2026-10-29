@interface FlutterActionBarCallback : NSObject
{
    NSObject<FlutterBinaryMessenger> * _binaryMessenger; // +0x8
}
- (id)initWithBinaryMessenger:(id)arg1;
- (void)setShowFlutterActionBarShow:(id)arg1 completion:(id /* block */)arg2;
- (void)updateHostActionBarWithCompletion:(id /* block */)arg1;
- (id)binaryMessenger;
- (void)setBinaryMessenger:(id)arg1;
- (void).cxx_destruct;
@end

