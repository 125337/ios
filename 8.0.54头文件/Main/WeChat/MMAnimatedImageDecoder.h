@interface MMAnimatedImageDecoder : MMObject
{
    BOOL _hasDecodeOneLoop; // +0x8
    BOOL _isSingleFrame; // +0x9
    int _currentFrameId; // +0xc
    int _frameCount; // +0x10
    int _decodedLoopCnt; // +0x14
    NSString * _cpKey; // +0x18
    UIImage * _currentFrameImage; // +0x20
    double _currentFrameDuration; // +0x28
    double _scale; // +0x30
    CGSize _imageSize; // +0x38
}
+ (int)frameCountForImageData:(id)arg1;
+ (id)animatedImageOfData:(id)arg1;
+ (id)animatedImageOfData:(id)arg1 tryUIImageWhenFailed:(BOOL)arg2;
+ (id)framesOfData:(id)arg1;
+ (id)framesOfData:(id)arg1 scale:(double)arg2;
+ (id)framesOfData:(id)arg1 scale:(double)arg2 cpKey:(id)arg3;
+ (id)animationOfFrames:(id)arg1;
+ (id)animationOfData:(id)arg1 scale:(double)arg2;
+ (id)animationOfData:(id)arg1 scale:(double)arg2 cpKey:(id)arg3;
+ (id)animatedDecoderOfData:(id)arg1;
+ (id)animatedDecoderOfData:(id)arg1 cpKey:(id)arg2;
+ (id)animatedDecoderOfData:(id)arg1 config:(id)arg2;
- (BOOL)rewind;
- (BOOL)seekToNextFrame;
- (id)cpKey;
- (id)currentFrameImage;
- (double)currentFrameDuration;
- (int)currentFrameId;
- (int)frameCount;
- (CGSize)imageSize;
- (BOOL)hasDecodeOneLoop;
- (BOOL)isSingleFrame;
- (int)decodedLoopCnt;
- (double)scale;
- (void)setScale:(double)arg1;
- (void).cxx_destruct;
@end

