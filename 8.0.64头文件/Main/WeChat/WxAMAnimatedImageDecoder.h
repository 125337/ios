@interface WxAMAnimatedImageDecoder : MMAnimatedImageDecoder
{
    NSData * m_data; // +0x8
    void * m_decoder; // +0x10
    StWxAMFrame * m_curWxFrame; // +0x18
    unsigned int m_maxWidth; // +0x20
    BOOL m_hasDecodeOneLoop; // +0x24
    BOOL m_isSingleFrame; // +0x25
    int m_frameCount; // +0x28
    int m_currentFrameId; // +0x2c
    int m_decodedLoopCnt; // +0x30
    NSString * m_cpKey; // +0x38
    UIImage * m_currentFrameImage; // +0x40
    double m_currentFrameDuration; // +0x48
    MMAnimatedImageDecodeConfig * _config; // +0x50
    CGSize m_imageSize; // +0x58
}
+ (BOOL)isWxAMData:(id)arg1;
+ (CGSize)imageSizeWithWxAMData:(id)arg1;
+ (int)frameCountForImageData:(id)arg1;
+ (id)imageWithWxAMData:(id)arg1 scale:(double)arg2;
+ (id)imageWithWxAMData:(id)arg1 scale:(double)arg2 config:(id)arg3;
+ (double)secondsOfFrame:(StWxAMFrame *)arg1;
+ (id)imageOfFrame:(StWxAMFrame *)arg1 scale:(double)arg2 shouldShowWxamMark:(BOOL)arg3;
- (void)dealloc;
- (id)initWithData:(id)arg1 config:(id)arg2;
- (BOOL)rewind;
- (BOOL)seekToNextFrame;
- (id)currentFrameImage;
- (void)setScale:(double)arg1;
- (void)uninitDecoder;
- (BOOL)configDecoderWithWXGifData:(id)arg1;
- (id)cpKey;
- (double)currentFrameDuration;
- (int)frameCount;
- (CGSize)imageSize;
- (int)currentFrameId;
- (BOOL)hasDecodeOneLoop;
- (BOOL)isSingleFrame;
- (int)decodedLoopCnt;
- (id)config;
- (void)setConfig:(id)arg1;
- (void).cxx_destruct;
@end
