@interface VoiceRecognitionCallback : NSObject
{
    NSObject<FlutterBinaryMessenger> * _binaryMessenger; // +0x8
    NSString * _messageChannelSuffix; // +0x10
}
- (id)initWithBinaryMessenger:(id)arg1;
- (id)initWithBinaryMessenger:(id)arg1 messageChannelSuffix:(id)arg2;
- (void)onResultResult:(id)arg1 completion:(id /* block */)arg2;
- (void)onErrorErrType:(long long)arg1 errCode:(long long)arg2 localCode:(long long)arg3 voiceid:(long long)arg4 completion:(id /* block */)arg5;
- (void)onRecordFinishedWithCompletion:(id /* block */)arg1;
- (void)onRecognizeFinishedWithCompletion:(id /* block */)arg1;
- (id)binaryMessenger;
- (void)setBinaryMessenger:(id)arg1;
- (id)messageChannelSuffix;
- (void)setMessageChannelSuffix:(id)arg1;
- (void).cxx_destruct;
@end
