@interface EJTextureHolder : NSObject
{
    BOOL _create; // +0x8
    BOOL _boud; // +0x9
    int _frameBuffer; // +0xc
    int _renderBuffer; // +0x10
    int _pixelWidth; // +0x14
    int _pixelHeight; // +0x18
    int _viewWidth; // +0x1c
    int _viewHeight; // +0x20
    unsigned int _textureId; // +0x24
    unsigned int _glTexture; // +0x28
    EAGLContext * _glTextureContext; // +0x30
    __CVBuffer * _pixeTexture; // +0x38
    __CVBuffer * _pixelBuffer; // +0x40
    BOOL ready; // +0x48
    NSMutableData * nsData; // +0x50
}
- (void)dealloc;
- (BOOL)ready;
- (id)nsData;
- (void)resize:(int)arg1 height:(int)arg2;
- (BOOL)create:(__CVOpenGLESTextureCache *)arg1 withPixelBuffer:(BOOL)arg2;
- (void)bind;
- (void)active;
- (void)removeOldCaptureTexture;
- (int)frameBuffer;
- (int)renderBuffer;
- (int)width;
- (int)height;
- (unsigned int)textureId;
- (__CVBuffer *)pixelBuffer;
@end
