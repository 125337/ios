@interface TAVImageProcessor : NSObject
{
    TAVVideoSharpenMetal * __MetalSharpenFilter; // +0x8
    id <MTLDevice> _device; // +0x10
    id <MTLCommandQueue> _commandQueue; // +0x18
    __CVMetalTextureCache * _textureCache; // +0x20
}
- (id)init;
- (void)dealloc;
- (BOOL)isPixelBufferYUVFormat:(__CVBuffer *)arg1;
- (void)processPixelBuffer:(__CVBuffer *)arg1;
- (void)writeTextureBackToPixelBuffer:(id)arg1 pixelBuffer:(__CVBuffer *)arg2 planeIndex:(long long)arg3;
- (id)textureFromPixelBuffer:(__CVBuffer *)arg1 planeIndex:(long long)arg2;
- (id)_MetalSharpenFilter;
- (void)set_MetalSharpenFilter:(id)arg1;
- (id)device;
- (void)setDevice:(id)arg1;
- (id)commandQueue;
- (void)setCommandQueue:(id)arg1;
- (__CVMetalTextureCache *)textureCache;
- (void)setTextureCache:(__CVMetalTextureCache *)arg1;
- (void).cxx_destruct;
@end
