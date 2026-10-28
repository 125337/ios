@interface XEffectPixelBuffer : NSObject
{
    __CVBuffer * _pixelBuffer; // +0x8
    id /* block */ _cleanup; // +0x10
    CGRect _pixelBufferSize; // +0x18
}
+ (id)bufferWithPixel:(__CVBuffer *)arg1 snapshotRect:(CGRect)arg2 cleanup:(id /* block */)arg3;
- (id)clone;
- (void)dealloc;
- (__CVBuffer *)pixelBuffer;
- (void)setPixelBuffer:(__CVBuffer *)arg1;
- (CGRect)pixelBufferSize;
- (void)setPixelBufferSize:(CGRect)arg1;
- (id /* block */)cleanup;
- (void)setCleanup:(id /* block */)arg1;
- (void).cxx_destruct;
@end
