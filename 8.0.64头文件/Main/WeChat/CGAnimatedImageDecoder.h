@interface CGAnimatedImageDecoder : MMAnimatedImageDecoder
{
    BOOL m_hasDecodeOneLoop; // +0x8
    BOOL m_isSingleFrame; // +0x9
    int m_frameCount; // +0xc
    int m_currentFrameId; // +0x10
    int m_decodedLoopCnt; // +0x14
    NSString * m_cpKey; // +0x18
    UIImage * m_currentFrameImage; // +0x20
    double m_currentFrameDuration; // +0x28
    CGImageSource * _source; // +0x30
    long long _orientation; // +0x38
    CGSize m_imageSize; // +0x40
}
- (void)dealloc;
- (id)initWithData:(id)arg1 config:(id)arg2;
- (BOOL)seekToNextFrame;
- (BOOL)rewind;
- (void)setScale:(double)arg1;
- (void)releaseSource;
- (id)cpKey;
- (id)currentFrameImage;
- (double)currentFrameDuration;
- (int)frameCount;
- (CGSize)imageSize;
- (int)currentFrameId;
- (BOOL)hasDecodeOneLoop;
- (BOOL)isSingleFrame;
- (int)decodedLoopCnt;
- (CGImageSource *)source;
- (void)setSource:(CGImageSource *)arg1;
- (long long)orientation;
- (void)setOrientation:(long long)arg1;
- (void).cxx_destruct;
@end
