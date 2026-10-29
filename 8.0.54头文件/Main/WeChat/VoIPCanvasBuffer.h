@interface VoIPCanvasBuffer : NSObject
{
    __CVBuffer * _pixelBuffer; // +0x8
    __CVBuffer * _metalTexture; // +0x10
    unsigned long long _width; // +0x18
    unsigned long long _height; // +0x20
    id <MTLTexture> _texture; // +0x28
}
+ (__CVBuffer *)createPixelBufferWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2;
+ (__CVBuffer *)createMetalTextureFromPixelBuffer:(__CVBuffer *)arg1 withMetalTextureCache:(__CVMetalTextureCache *)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4 pixelFormat:(unsigned long long)arg5;
+ (id)bufferByMetalTextureCache:(__CVMetalTextureCache *)arg1 withWidth:(unsigned long long)arg2 height:(unsigned long long)arg3 pixelFormat:(unsigned long long)arg4;
- (__CVBuffer *)pixelBuffer;
- (__CVBuffer *)metalTexture;
- (id)initWithPixelBuffer:(__CVBuffer *)arg1 metalTexture:(__CVBuffer *)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4;
- (void)dealloc;
- (unsigned long long)width;
- (void)setWidth:(unsigned long long)arg1;
- (unsigned long long)height;
- (void)setHeight:(unsigned long long)arg1;
- (id)texture;
- (void)setTexture:(id)arg1;
- (void).cxx_destruct;
@end

