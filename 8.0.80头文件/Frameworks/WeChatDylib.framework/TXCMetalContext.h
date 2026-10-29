@interface TXCMetalContext : NSObject
{
    unsigned int _gpuTaskCount; // +0x8
    id <MTLCommandBuffer> _sharedCommandBuffer; // +0x10
    TXCMetalRenderKernel * _sharedBGRARenderKernel; // +0x18
    TXCMetalRenderKernel * _sharedRGBARenderKernel; // +0x20
    id <MTLDevice> _device; // +0x28
    id <MTLCommandQueue> _commandQueue; // +0x30
    __CVMetalTextureCache * _metalTextureCache; // +0x38
}
- (id)initWithCommandQueue:(id)arg1;
- (id)device;
- (id)commandQueue;
- (__CVMetalTextureCache *)metalTextureCache;
- (id)sharedCommandBuffer;
- (id)commandBuffer;
- (id)sharedBGRARenderKernel;
- (id)sharedRGBARenderKernel;
- (void)dealloc;
- (id)newTXCMetalTexture:(CGSize)arg1;
- (id)newTextureWithTXImage:(id)arg1;
- (id)textureFromCVPixelBuffer:(__CVBuffer *)arg1;
- (BOOL)commitCommandBuffer;
- (void)notifyTaskIncrement;
- (void)flush;
- (void)finish;
- (void)waitUntilScheduled;
- (void).cxx_destruct;
@end
