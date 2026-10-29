@interface TXCMusicResourceDecoderAppleDelegateAdapter : NSObject <TXCMusicResourceDecoderAppleDelegate>
{
    MusicResourceDecodeCallback * _callback; // +0x8
}
- (void)dealloc;
- (void)audioFileReader:(id)arg1 didGetAudioData:(void *)arg2;
- (void)audioFileReader:(id)arg1 onError:(id)arg2;
- (void)audioFileReaderDidComplete:(id)arg1;
- (MusicResourceDecodeCallback *)callback;
- (void)setCallback:(MusicResourceDecodeCallback *)arg1;
@end
