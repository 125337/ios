@interface TXCCustomProcessBgraNonTextureBasedConverter : NSObject <TXICustomProcessConverter>
{
    __CVBuffer * _srcPixelBuffer; // +0x8
    __CVBuffer * _dstPixelBuffer; // +0x10
}
- (BOOL)needsYuvInput;
- (id)srcVideoFrameFromVideoFrame:(id)arg1;
- (id)dstVideoFrameFromTexture:(id)arg1 pts:(unsigned int)arg2;
- (id)outputVideoFrameFromDstVideoFrame:(id)arg1 withTexture:(id)arg2;
- (__CVBuffer *)createBufferIfNeeded:(__CVBuffer *)arg1 forSize:(CGSize)arg2;
- (__CVBuffer *)srcPixelBuffer;
- (void)setSrcPixelBuffer:(__CVBuffer *)arg1;
- (__CVBuffer *)dstPixelBuffer;
- (void)setDstPixelBuffer:(__CVBuffer *)arg1;
@end

