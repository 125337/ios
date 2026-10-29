@interface TXCVideoTextureFrame : NSObject
{
    unsigned int _texture; // +0x8
    TXCGlFrameBuffer * _frameBuffer; // +0x10
    id <MTLTexture> _metalTextue; // +0x18
    TXCMetalContext * _metalContext; // +0x20
    unsigned long long _width; // +0x28
    unsigned long long _height; // +0x30
}
- (id)initWithFrameBuffer:(id)arg1;
- (id)initWithTexture:(unsigned int)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3;
- (id)frameBuffer;
- (unsigned int)texture;
- (void)setTexture:(unsigned int)arg1;
- (id)metalTextue;
- (id)metalContext;
- (unsigned long long)width;
- (unsigned long long)height;
- (void).cxx_destruct;
@end
