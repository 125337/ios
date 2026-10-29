@interface MetalTextureUtils : NSObject
+ (id)metalTextureFromPixelBuffer:(__CVBuffer *)arg1 textureCache:(__CVMetalTextureCache *)arg2 pixelFormat:(unsigned long long)arg3;
+ (__CVBuffer *)pixelBufferFromMetalTexture:(id)arg1 pixelBufferPool:(__CVPixelBufferPool *)arg2;
+ (int)createTextureCache:(__CVMetalTextureCache * *)arg1 device:(id)arg2;
+ (void)releaseTextureCache:(__CVMetalTextureCache *)arg1;
@end
