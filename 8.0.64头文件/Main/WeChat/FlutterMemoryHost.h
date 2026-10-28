@interface FlutterMemoryHost : NSObject
{
    NSObject<FlutterBinaryMessenger> * _binaryMessenger; // +0x8
    NSString * _messageChannelSuffix; // +0x10
}
- (id)initWithBinaryMessenger:(id)arg1;
- (id)initWithBinaryMessenger:(id)arg1 messageChannelSuffix:(id)arg2;
- (void)freeImageCacheWithCompletion:(id /* block */)arg1;
- (void)getMemInfoWithCompletion:(id /* block */)arg1;
- (id)binaryMessenger;
- (void)setBinaryMessenger:(id)arg1;
- (id)messageChannelSuffix;
- (void)setMessageChannelSuffix:(id)arg1;
- (void).cxx_destruct;
@end
