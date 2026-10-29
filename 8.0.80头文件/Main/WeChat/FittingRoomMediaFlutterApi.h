@interface FittingRoomMediaFlutterApi : NSObject
{
    NSObject<FlutterBinaryMessenger> * _binaryMessenger; // +0x8
    NSString * _messageChannelSuffix; // +0x10
}
- (id)initWithBinaryMessenger:(id)arg1;
- (id)initWithBinaryMessenger:(id)arg1 messageChannelSuffix:(id)arg2;
- (void)onCroppedPhotoReadyPhoto:(id)arg1 completion:(id /* block */)arg2;
- (void)onPhotoFlowCancelledWithCompletion:(id /* block */)arg1;
- (void)onPhotoFlowFailedCode:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (id)binaryMessenger;
- (void)setBinaryMessenger:(id)arg1;
- (id)messageChannelSuffix;
- (void)setMessageChannelSuffix:(id)arg1;
- (void).cxx_destruct;
@end
