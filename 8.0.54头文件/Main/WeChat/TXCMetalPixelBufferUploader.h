@interface TXCMetalPixelBufferUploader : NSObject
{
    id <MTLTexture>[3] _cpuTexturesCache; // +0x8
    TXCMetalContext * _metalContext; // +0x20
}
+ (BOOL)supportGPUUpload:(__CVBuffer *)arg1;
+ (id)uploadPixelBuffer:(__CVBuffer *)arg1 textureCache:(__CVMetalTextureCache *)arg2;
+ (id)metalTextureFromRGBPixelBuffer:(__CVBuffer *)arg1 textureCache:(__CVMetalTextureCache *)arg2;
+ (id)metalTextureFromI420PixelBuffer:(__CVBuffer *)arg1 planeIndex:(unsigned long long)arg2 textureCache:(__CVMetalTextureCache *)arg3;
+ (id)metalTextureFromNV12PixelBuffer:(__CVBuffer *)arg1 planeIndex:(unsigned long long)arg2 textureCache:(__CVMetalTextureCache *)arg3;
+ (id)metalTextureFromP010LEPixelBuffer:(__CVBuffer *)arg1 planeIndex:(unsigned long long)arg2 textureCache:(__CVMetalTextureCache *)arg3;
- (id)initWithMetalContext:(id)arg1;
- (void)updateTexture:(unsigned long long)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 withBytes:(const void *)arg4 bytesPerRow:(unsigned long long)arg5 pixelFormat:(unsigned long long)arg6;
- (id)cpuUploadPixelBuffer:(__CVBuffer *)arg1;
- (id)uploadPixelBuffer:(__CVBuffer *)arg1;
- (void).cxx_destruct;
@end

