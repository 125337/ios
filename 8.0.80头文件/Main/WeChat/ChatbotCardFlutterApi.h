@interface ChatbotCardFlutterApi : NSObject
{
    NSObject<FlutterBinaryMessenger> * _binaryMessenger; // +0x8
    NSString * _messageChannelSuffix; // +0x10
}
- (id)initWithBinaryMessenger:(id)arg1;
- (id)initWithBinaryMessenger:(id)arg1 messageChannelSuffix:(id)arg2;
- (void)onReadyWithCompletion:(id /* block */)arg1;
- (void)onHeightChangedHeight:(double)arg1 completion:(id /* block */)arg2;
- (void)onErrorError:(id)arg1 completion:(id /* block */)arg2;
- (void)onCardClickTarget:(id)arg1 completion:(id /* block */)arg2;
- (id)binaryMessenger;
- (void)setBinaryMessenger:(id)arg1;
- (id)messageChannelSuffix;
- (void)setMessageChannelSuffix:(id)arg1;
- (void).cxx_destruct;
@end
