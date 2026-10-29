@interface MxGifAnimatedImageDecoder : MMAnimatedImageDecoder
{
    void * m_gifImage; // +0x8
    NSData * m_gifData; // +0x10
    BOOL m_hasDecodeOneLoop; // +0x18
    BOOL m_isSingleFrame; // +0x19
    int m_frameCount; // +0x1c
    int m_currentFrameId; // +0x20
    int m_decodedLoopCnt; // +0x24
    NSString * m_cpKey; // +0x28
    UIImage * m_currentFrameImage; // +0x30
    double m_currentFrameDuration; // +0x38
    CGSize m_imageSize; // +0x40
}
+ (id)cgImageWithData:(id)arg1 maxWidth:(unsigned int)arg2 scale:(double)arg3;
+ (double)frameDurationInSecondForDuration:(double)arg1;
+ (int)frameCountForImageData:(id)arg1;
- (void)dealloc;
- (id)initWithData:(id)arg1 config:(id)arg2;
- (BOOL)rewind;
- (BOOL)seekToNextFrame;
- (id)currentFrameImage;
- (int)frameCount;
- (void)setScale:(double)arg1;
- (BOOL)configDecoderWithGifData:(id)arg1 maxWidth:(unsigned int)arg2;
- (id)cpKey;
- (double)currentFrameDuration;
- (CGSize)imageSize;
- (int)currentFrameId;
- (BOOL)hasDecodeOneLoop;
- (BOOL)isSingleFrame;
- (int)decodedLoopCnt;
- (void).cxx_destruct;
@end

