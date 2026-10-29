@interface MMGPUGLProgram : NSObject
{
    NSMutableArray * attributes; // +0x8
    NSMutableArray * uniforms; // +0x10
    unsigned int program; // +0x18
    unsigned int vertShader; // +0x1c
    unsigned int fragShader; // +0x20
    BOOL _initialized; // +0x24
    NSString * _vertexShaderLog; // +0x28
    NSString * _fragmentShaderLog; // +0x30
    NSString * _programLog; // +0x38
}
- (id)initWithVertexShaderString:(id)arg1 fragmentShaderString:(id)arg2;
- (id)initWithVertexShaderString:(id)arg1 fragmentShaderFilename:(id)arg2;
- (id)initWithVertexShaderFilename:(id)arg1 fragmentShaderFilename:(id)arg2;
- (BOOL)compileShader:(unsigned int *)arg1 type:(unsigned int)arg2 string:(id)arg3;
- (void)addAttribute:(id)arg1;
- (unsigned int)attributeIndex:(id)arg1;
- (unsigned int)uniformIndex:(id)arg1;
- (BOOL)link;
- (void)use;
- (void)validate;
- (void)dealloc;
- (BOOL)initialized;
- (void)setInitialized:(BOOL)arg1;
- (id)vertexShaderLog;
- (void)setVertexShaderLog:(id)arg1;
- (id)fragmentShaderLog;
- (void)setFragmentShaderLog:(id)arg1;
- (id)programLog;
- (void)setProgramLog:(id)arg1;
- (void).cxx_destruct;
@end

