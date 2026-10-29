@interface StreamAudioQueuePlayer : AudioQueuePlayer
{
    BOOL mAppendDataEnd; // +0x10
    NSMutableArray * mEmptyBuffers; // +0x18
    NSString * _filePath; // +0x20
}
- (id)init;
- (BOOL)preparePlayWithFile:(id)arg1;
- (void)playAtTime:(unsigned int)arg1;
- (void)appendData:(id)arg1 endFlag:(BOOL)arg2;
- (void)fillEmptyBufferIfNeed;
- (int)getCodecTypeFromVoiceFormat:(long long)arg1;
- (BOOL)initAudioQueue;
- (id)filePath;
- (void)setFilePath:(id)arg1;
- (void).cxx_destruct;
@end
