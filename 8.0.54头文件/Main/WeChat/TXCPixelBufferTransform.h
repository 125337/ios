@interface TXCPixelBufferTransform : NSObject
{
    __CVBuffer * _intermediateBuffer; // +0x8
}
- (void)dealloc;
- (void)resizePixelBuffer:(__CVBuffer *)arg1 toPixelBuffer:(__CVBuffer *)arg2;
- (void)recreateIntermediateBufferIfNeeded:(CGSize)arg1;
- (__CVBuffer *)intermediateBuffer;
- (void)setIntermediateBuffer:(__CVBuffer *)arg1;
@end

