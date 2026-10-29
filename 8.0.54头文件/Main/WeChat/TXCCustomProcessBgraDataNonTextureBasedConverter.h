@interface TXCCustomProcessBgraDataNonTextureBasedConverter : TXCCustomProcessBgraDataConverter
{
    __CVBuffer * _dstPixelBuffer; // +0x8
}
- (id)srcDataFromVideoFrame:(id)arg1;
- (id)outputVideoFrameFromDstVideoFrame:(id)arg1 withTexture:(id)arg2;
- (__CVBuffer *)createBufferIfNeeded:(__CVBuffer *)arg1 forSize:(CGSize)arg2;
- (__CVBuffer *)dstPixelBuffer;
- (void)setDstPixelBuffer:(__CVBuffer *)arg1;
@end

