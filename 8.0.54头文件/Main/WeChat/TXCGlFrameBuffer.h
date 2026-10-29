@interface TXCGlFrameBuffer : NSObject
{
    BOOL _enableShareTexToPixelBuffer; // +0x8
    unsigned int _framebuffer; // +0xc
    unsigned int _texture; // +0x10
    __CVBuffer * _renderPixelBuffer; // +0x18
    unsigned long long _mode; // +0x20
    id <TXIGlContext> _glContext; // +0x28
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
- (void)bindPixelBuffer:(__CVBuffer *)arg1;
- (void)createFramebuffer;
- (BOOL)createRenderPixelBufferWithSize:(CGSize)arg1;
- (void)createTextureWithSize:(CGSize)arg1;
- (char *)byteBuffer;
- (unsigned long long)padding;
- (unsigned int)framebuffer;
- (unsigned int)texture;
- (void)setTexture:(unsigned int)arg1;
- (__CVBuffer *)renderPixelBuffer;
- (void)setRenderPixelBuffer:(__CVBuffer *)arg1;
- (CGSize)size;
- (BOOL)enableShareTexToPixelBuffer;
- (void)setEnableShareTexToPixelBuffer:(BOOL)arg1;
- (unsigned long long)mode;
- (id)glContext;
- (__CVBuffer *)renderTexture;
- (void)setRenderTexture:(__CVBuffer *)arg1;
- (char *)outputBytes;
- (void)setOutputBytes:(char *)arg1;
- (CGSize)outputSize;
- (void)setOutputSize:(CGSize)arg1;
- (void).cxx_destruct;
@end

