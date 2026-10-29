@interface TXCVideoUtils : NSObject
+ (id)context;
+ (id)transferSession;
+ (opaqueCMSampleBuffer *)createSampleBufferFromPixelBuffer:(__CVBuffer *)arg1 time:(struct)arg2;
+ (__CVBuffer *)createPixelBufferWithFormat:(unsigned long long)arg1 bufferSize:(CGSize)arg2;
+ (__CVPixelBufferPool *)createPixelBufferPoolWithFormat:(unsigned long long)arg1 bufferSize:(CGSize)arg2 attribules:(id)arg3;
+ (__CVPixelBufferPool *)createPixelBufferPoolWithFormat:(unsigned long long)arg1 bufferSize:(CGSize)arg2;
+ (__CVBuffer *)createPixelBufferFromPool:(__CVPixelBufferPool *)arg1;
+ (void)copyPixelBuffer:(__CVBuffer *)arg1 toPixelBuffer:(__CVBuffer *)arg2;
+ (void)copyPixelBuffer:(__CVBuffer *)arg1 atPlane:(long long)arg2 toData:(char *)arg3;
+ (id)imageFromPixelBuffer:(__CVBuffer *)arg1;
+ (__CVBuffer *)pixelBufferFromImage:(CGImage *)arg1;
+ (__CVBuffer *)retainImageSupportedBuffer:(__CVBuffer *)arg1;
+ (unsigned long long)formatOfPixelBuffer:(__CVBuffer *)arg1;
+ (BOOL)isNv12:(unsigned long long)arg1;
+ (BOOL)isP010le:(unsigned long long)arg1;
+ (BOOL)isI420:(unsigned long long)arg1;
+ (BOOL)isFormat:(unsigned long long)arg1 sameTo:(unsigned long long)arg2;
+ (CGSize)sizeOfPixelBuffer:(__CVBuffer *)arg1;
+ (unsigned long long)bytesOfFormat:(unsigned long long)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3;
+ (unsigned int)osTypeOfVideoFormat:(unsigned long long)arg1;
+ (void)copyNv12Buffer:(__CVBuffer *)arg1 toBgraBuffer:(__CVBuffer *)arg2;
+ (void)copyBgraBuffer:(__CVBuffer *)arg1 toNv12Buffer:(__CVBuffer *)arg2;
+ (void)copyBgraBuffer:(__CVBuffer *)arg1 toI420Buffer:(__CVBuffer *)arg2;
+ (void)copyI420Buffer:(__CVBuffer *)arg1 toNv12Buffer:(__CVBuffer *)arg2;
+ (void)copyNv12Buffer:(__CVBuffer *)arg1 toI420Buffer:(__CVBuffer *)arg2;
+ (void)copyPixelBuffer:(__CVBuffer *)arg1 toSamePixelBuffer:(__CVBuffer *)arg2;
+ (void)copyYuv420P10leBytes:(const char * *)arg1 size:(const int *)arg2 toP010eBuffer:(__CVBuffer *)arg3;
+ (void)copyI420Bytes:(const char * *)arg1 size:(const int *)arg2 toI420PixelBuffer:(__CVBuffer *)arg3;
@end

