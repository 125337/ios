@interface MAVYuvToRgbRenderer : NSObject
{
    MAVMetalContext * _context; // +0x8
    id <MTLDevice> _device; // +0x10
    id <MTLCommandQueue> _commandQueue; // +0x18
    __CVMetalTextureCache * _textureCache; // +0x20
}
- (id)initWithContext:(id)arg1 CommandQueue:(id)arg2;
- (void)fromPixelBuffer:(__CVBuffer *)arg1 toTexture:(id)arg2;
- (__CVBuffer *)acquireTextureFromBuffer:(__CVBuffer *)arg1 isLuma:(BOOL)arg2;
- (id)context;
- (void)setContext:(id)arg1;
- (id)device;
- (void)setDevice:(id)arg1;
- (id)commandQueue;
- (void)setCommandQueue:(id)arg1;
- (__CVMetalTextureCache *)textureCache;
- (void)setTextureCache:(__CVMetalTextureCache *)arg1;
- (void).cxx_destruct;
@end
