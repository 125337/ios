@interface TXCAudioFileReaderAppleDelegateAdapter : NSObject <TXCAudioFileReaderAppleDelegate>
{
    AudioDecodeCallback * _callback; // +0x8
}
- (void)dealloc;
- (void)audioFileReader:(id)arg1 didGetAudioData:(void *)arg2;
- (void)audioFileReader:(id)arg1 onError:(id)arg2;
- (void)audioFileReaderDidComplete:(id)arg1;
- (AudioDecodeCallback *)callback;
- (void)setCallback:(AudioDecodeCallback *)arg1;
@end

