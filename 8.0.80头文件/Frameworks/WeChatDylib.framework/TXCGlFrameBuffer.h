@interface TXCGlFrameBuffer : NSObject
{
    BOOL _enableShareTexToPixelBuffer; // +0x8
    unsigned int _framebuffer; // +0xc
    unsigned int _texture; // +0x10
    id <TXIGlContext> _glContext; // +0x18
    __CVBuffer * _renderPixelBuffer; // +0x20
    unsigned long long _mode; // +0x28
    __CVBuffer * _renderTexture; // +0x30
    char * _outputBytes; // +0x38
    CGSize _size; // +0x40
    CGSize _outputSize; // +0x50
}
- (id)initWithContext:(id)arg1;
- (void)dealloc;
- (void)setSize:(CGSize)arg1;
- (void)activate;
- (void)activateWithClear:(BOOL)arg1;
- (void)setMode:(unsigned long long)arg1;
- (void)bindPixelBufferAsRenderTarget:(__CVBuffer *)arg1;
- (void)bindTexture:(unsigned int)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3;
- (void)bindPixelBuffer:(__CVBuffer *)arg1;
- (void)createFramebuffer;
- (BOOL)createRenderPixelBufferWithSize:(CGSize)arg1;
- (void)createTextureWithSize:(CGSize)arg1;
- (char *)byteBuffer;
- (id)dumpImage;
- (unsigned long long)padding;
- (id)glContext;
- (unsigned int)framebuffer;
- (unsigned int)texture;
- (void)setTexture:(unsigned int)arg1;
- (__CVBuffer *)renderPixelBuffer;
- (void)setRenderPixelBuffer:(__CVBuffer *)arg1;
- (CGSize)size;
- (BOOL)enableShareTexToPixelBuffer;
- (void)setEnableShareTexToPixelBuffer:(BOOL)arg1;
- (unsigned long long)mode;
- (__CVBuffer *)renderTexture;
- (void)setRenderTexture:(__CVBuffer *)arg1;
- (char *)outputBytes;
- (void)setOutputBytes:(char *)arg1;
- (CGSize)outputSize;
- (void)setOutputSize:(CGSize)arg1;
- (void).cxx_destruct;
@end
