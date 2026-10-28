@interface MMAnimatedImagePlayTask : NSObject
{
    unsigned long long m_timeTickCount; // +0x8
    BOOL m_isUpdating; // +0x10
    BOOL m_needUpdateFrame; // +0x11
    NSMutableArray * m_frameCache; // +0x18
    double m_maxCacheWidth; // +0x20
    int m_currentFrameId; // +0x28
    int m_totalFrameCount; // +0x2c
    double m_currentDuration; // +0x30
    UIImageView * m_imageView; // +0x38
    MMAnimatedImagePlayConfig * m_config; // +0x40
    unsigned int m_remainingTimes; // +0x48
    UIImage * m_firstFrameImage; // +0x50
    BOOL m_needRewind; // +0x58
    BOOL m_stopped; // +0x59
    MMAnimatedImageDecoder * _decoder; // +0x60
}
- (unsigned long long)playMode;
- (id)initWithDecoder:(id)arg1 imageView:(id)arg2 config:(id)arg3 maxCacheSize:(double)arg4;
- (id)init;
- (id)imageView;
- (void)removeImageView;
- (void)removePlayObserver;
- (void)forceResetWithTickCount:(unsigned long long)arg1;
- (void)updateWithTickCount:(unsigned long long)arg1;
- (void)seekToNextFrameIfNeeded;
- (void)seekToNextFrameWithDecoder:(id)arg1 async:(BOOL)arg2;
- (void)onSeekNextFrameFinished:(BOOL)arg1;
- (void)updateFrame;
- (BOOL)stopped;
- (id)decoder;
- (void).cxx_destruct;
@end
