@interface OTTextureProgram : NSObject
{
    BOOL _ready; // +0x8
    unsigned int _program; // +0xc
    unsigned int _vertexShader; // +0x10
    unsigned int _fragmentShader; // +0x14
    unsigned int _position; // +0x18
    unsigned int _coords; // +0x1c
    unsigned int _flipTexture; // +0x20
    unsigned int _vao; // +0x24
    unsigned int _vbo; // +0x28
    unsigned int _ebo; // +0x2c
}
- (void)dealloc;
- (BOOL)create:(const char *)arg1 fragmentsShader:(const char *)arg2;
- (void)use;
- (void)destroy;
- (BOOL)compileShader:(const char *)arg1 withType:(unsigned int)arg2 shaderHandle:(unsigned int *)arg3;
- (BOOL)ready;
@end

