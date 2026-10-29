@interface TXCCustomProcessYuvConverter : NSObject <TXICustomProcessConverter>
{
    unsigned long long _format; // +0x8
    __CVBuffer * _dstBuffer; // +0x10
}
- (id)initWithFormat:(unsigned long long)arg1;
- (BOOL)needsYuvInput;
- (id)srcVideoFrameFromVideoFrame:(id)arg1;
- (id)dstVideoFrameFromTexture:(id)arg1 pts:(unsigned int)arg2;
- (id)outputVideoFrameFromDstVideoFrame:(id)arg1 withTexture:(id)arg2;
- (__CVBuffer *)createBufferIfNeeded:(__CVBuffer *)arg1 forSize:(CGSize)arg2;
- (unsigned long long)format;
- (__CVBuffer *)dstBuffer;
- (void)setDstBuffer:(__CVBuffer *)arg1;
@end

