@interface WAEJGLProgram2D : NSObject
{
    unsigned int program; // +0x8
    unsigned int screen; // +0xc
}
+ (int)compileShaderSource:(const char *)arg1 type:(unsigned int)arg2;
+ (void)linkProgram:(unsigned int)arg1;
- (id)initWithVertexShader:(const char *)arg1 fragmentShader:(const char *)arg2;
- (void)dealloc;
- (void)bindAttributeLocations;
- (void)getUniforms;
- (unsigned int)program;
- (unsigned int)screen;
@end
