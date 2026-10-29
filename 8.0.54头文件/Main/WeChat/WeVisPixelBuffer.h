@interface WeVisPixelBuffer : NSObject
{
    __CVBuffer * _pixelBufferRef; // +0x8
    id /* block */ _cleanupCallback; // +0x10
}
+ (id)bufferWithCVPixelBuffer:(__CVBuffer *)arg1 cleanup:(id /* block */)arg2;
+ (id)bufferFromPool:(__CVPixelBufferPool *)arg1 maxBufferCount:(int)arg2 cleanup:(id /* block */)arg3;
+ (id)bufferWithNV12WidthY:(unsigned long long)arg1 heightY:(unsigned long long)arg2 cleanup:(id /* block */)arg3;
+ (id)bufferWithBGRAWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 cleanup:(id /* block */)arg3;
- (void)dealloc;
- (id)cloneYUV;
- (__CVBuffer *)pixelBufferRef;
- (void)setPixelBufferRef:(__CVBuffer *)arg1;
- (id /* block */)cleanupCallback;
- (void)setCleanupCallback:(id /* block */)arg1;
- (void).cxx_destruct;
@end

