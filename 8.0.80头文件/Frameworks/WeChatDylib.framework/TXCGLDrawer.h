@interface TXCGLDrawer : NSObject
{
    vector<unsigned char, std::allocator<unsigned char>> _planeBuffer; // +0x8
    unsigned int _positionAttr; // +0x20
    unsigned int _textureCordAttr; // +0x24
    id <TXIGlContext> _context; // +0x28
    TXCVideoFrameCoords * _coords; // +0x30
    TXCGlProgram * _program; // +0x38
    long long _textureWidth; // +0x40
    long long _textureHeight; // +0x48
}
+ (id)createDrawerWithType:(unsigned long long)arg1 context:(id)arg2 coords:(id)arg3;
- (id)initWithContext:(id)arg1 coords:(id)arg2;
- (unsigned long long)getType;
- (CGSize)getTextureSize;
- (BOOL)drawPixelBuffer:(__CVBuffer *)arg1;
- (BOOL)drawTexture:(unsigned int)arg1 width:(double)arg2 height:(double)arg3;
- (void)draw;
- (unsigned int)createTexture:(unsigned int)arg1;
- (void)setupCoordsAndDraw;
- (BOOL)textureCacheUploadTexture:(__CVBuffer * *)arg1 pixelBuffer:(__CVBuffer *)arg2 planeIndex:(int)arg3 pixelFormat:(unsigned int)arg4;
- (void)texImageUploadTexture:(unsigned int)arg1 textureTarget:(unsigned int)arg2 pixelBuffer:(__CVBuffer *)arg3 planeIndex:(int)arg4 pixelFormat:(unsigned int)arg5;
- (id)context;
- (id)coords;
- (id)program;
- (void)setProgram:(id)arg1;
- (unsigned int)positionAttr;
- (void)setPositionAttr:(unsigned int)arg1;
- (unsigned int)textureCordAttr;
- (void)setTextureCordAttr:(unsigned int)arg1;
- (long long)textureWidth;
- (void)setTextureWidth:(long long)arg1;
- (long long)textureHeight;
- (void)setTextureHeight:(long long)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
