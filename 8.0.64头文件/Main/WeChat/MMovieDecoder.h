@interface MMovieDecoder : NSObject
{
    NSString * m_url; // +0x8
    AVURLAsset * m_asset; // +0x10
    NSInvocationOperation * m_playThread; // +0x18
    NSRecursiveLock * m_threadLock; // +0x20
    id <MMovieDecoderDelegate> m_delegate; // +0x28
    int m_decodeMode; // +0x30
    BOOL m_shouldDecodeVideo; // +0x34
    BOOL m_shouldDecodeAudio; // +0x35
    BOOL m_shouldSleepForEveryFrame; // +0x36
    CGAffineTransform m_preferredTransform; // +0x38
    unsigned long long m_pixelFormatType; // +0x68
    BOOL _audioOnly; // +0x70
    NSString * _cpKey; // +0x78
}
+ (id)shareOperationQueue;
- (id)init;
- (void)dealloc;
- (void)setDecodeMode:(int)arg1;
- (void)setAudioOnly:(BOOL)arg1;
- (void)releaseThread;
- (void)load:(id)arg1;
- (long long)videoOrientation;
- (long long)imageOrientation;
- (void)start;
- (void)pause;
- (void)threadFunc;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (int)decodeMode;
- (CGAffineTransform)preferredTransform;
- (BOOL)audioOnly;
- (id)cpKey;
- (void)setCpKey:(id)arg1;
- (void).cxx_destruct;
@end
