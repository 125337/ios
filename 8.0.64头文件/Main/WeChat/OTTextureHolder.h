@interface OTTextureHolder : NSObject
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
    __CVBuffer * _pixeTexture; // +0x28
    __CVBuffer * _pixelBuffer; // +0x30
    BOOL ready; // +0x38
    NSMutableData * nsData; // +0x40
}
- (void)dealloc;
- (BOOL)ready;
- (id)nsData;
- (void)resize:(int)arg1 height:(int)arg2;
- (BOOL)create:(__CVOpenGLESTextureCache *)arg1;
- (void)bind;
- (void)active;
- (int)frameBuffer;
- (int)renderBuffer;
- (int)width;
- (int)height;
- (unsigned int)textureId;
- (__CVBuffer *)pixelBuffer;
- (void).cxx_destruct;
@end
