@interface TXCMetalContext : NSObject
{
    id <MTLCommandBuffer> _sharedCommandBuffer; // +0x8
    TXCMetalRenderKernel * _sharedBGRARenderKernel; // +0x10
    TXCMetalRenderKernel * _sharedRGBARenderKernel; // +0x18
    id <MTLDevice> _device; // +0x20
    id <MTLCommandQueue> _commandQueue; // +0x28
    __CVMetalTextureCache * _metalTextureCache; // +0x30
}
- (id)init;
- (id)sharedCommandBuffer;
- (id)sharedBGRARenderKernel;
- (id)sharedRGBARenderKernel;
- (void)dealloc;
- (id)newTXCMetalTexture:(CGSize)arg1;
- (id)textureFromCVPixelBuffer:(__CVBuffer *)arg1;
- (void)flush;
- (void)finish;
- (void)waitUntilScheduled;
- (id)device;
- (id)commandQueue;
- (__CVMetalTextureCache *)metalTextureCache;
- (void).cxx_destruct;
@end

