@interface WXVoIPAudioFileReaderAppleDelegateBridge : NSObject <AudioFileReaderAppleImplDelegate>
{
    AudioDecodeCallback * _callback; // +0x8
}
- (void)dealloc;
- (void)audioFileReader:(id)arg1 didGetAudioData:(AudioFrame *)arg2;
- (void)audioFileReader:(id)arg1 onError:(id)arg2;
- (void)audioFileReaderDidComplete:(id)arg1;
- (AudioDecodeCallback *)callback;
- (void)setCallback:(AudioDecodeCallback *)arg1;
@end
