@interface MAVMetalContext : NSObject
{
    id <MTLDevice> _device; // +0x8
    __CVMetalTextureCache * _textureCache; // +0x10
    id <MTLLibrary> _defaultLibrary; // +0x18
    id <MTLCommandQueue> _defaultCommandQueue; // +0x20
}
- (id)init;
- (void)dealloc;
- (id)defaultLibrary;
- (id)defaultCommandQueue;
- (id)device;
- (void)setDevice:(id)arg1;
- (__CVMetalTextureCache *)textureCache;
- (void)setTextureCache:(__CVMetalTextureCache *)arg1;
- (void)setDefaultLibrary:(id)arg1;
- (void)setDefaultCommandQueue:(id)arg1;
- (void).cxx_destruct;
@end

