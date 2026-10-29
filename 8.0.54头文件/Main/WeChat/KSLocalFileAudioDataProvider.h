@interface KSLocalFileAudioDataProvider : KSAudioDataProvider
{
    NSString * _audioFileExt; // +0x38
}
- (id)initWithSongInfo:(id)arg1 queue:(id)arg2 context:(void *)arg3;
- (void)dealloc;
- (BOOL)prepareAudioData;
- (BOOL)isReady;
- (void)close:(BOOL)arg1;
- (id)audioFileExtension;
- (id)audioFileExt;
- (void)setAudioFileExt:(id)arg1;
- (void).cxx_destruct;
@end

