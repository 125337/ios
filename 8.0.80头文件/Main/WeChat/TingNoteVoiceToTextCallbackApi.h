@interface TingNoteVoiceToTextCallbackApi : NSObject
{
    NSObject<FlutterBinaryMessenger> * _binaryMessenger; // +0x8
    NSString * _messageChannelSuffix; // +0x10
}
- (id)initWithBinaryMessenger:(id)arg1;
- (id)initWithBinaryMessenger:(id)arg1 messageChannelSuffix:(id)arg2;
- (void)onConvertSuccessTaskKey:(id)arg1 segments:(id)arg2 highlightSegments:(id)arg3 completion:(id /* block */)arg4;
- (void)onConvertFailedTaskKey:(id)arg1 errorMessage:(id)arg2 completion:(id /* block */)arg3;
- (void)onConvertPartialTaskKey:(id)arg1 segments:(id)arg2 highlightSegments:(id)arg3 completion:(id /* block */)arg4;
- (id)binaryMessenger;
- (void)setBinaryMessenger:(id)arg1;
- (id)messageChannelSuffix;
- (void)setMessageChannelSuffix:(id)arg1;
- (void).cxx_destruct;
@end
