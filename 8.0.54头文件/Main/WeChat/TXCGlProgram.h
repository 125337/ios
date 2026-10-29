@interface TXCGlProgram : NSObject
{
    unsigned int _program; // +0x8
    NSMutableDictionary * _uniforms; // +0x10
    NSMutableDictionary * _attributes; // +0x18
}
- (id)initWithVertex:(id)arg1 fragment:(id)arg2;
- (void)dealloc;
- (unsigned int)setupProgramWithVertex:(id)arg1 fragment:(id)arg2;
- (void)use;
- (unsigned int)compileShader:(id)arg1 withType:(unsigned int)arg2;
- (BOOL)checkLinkResult:(unsigned int)arg1;
- (unsigned int)uniformIndexOf:(id)arg1;
- (unsigned int)attributeIndexOf:(id)arg1;
- (void)setInt:(int)arg1 forUniformName:(id)arg2;
- (void)setFloat:(float)arg1 forUniformName:(id)arg2;
- (void)setVec2:(GPUVector2)arg1 forUniformName:(id)arg2;
- (void)setVec4:(GPUVector4)arg1 forUniformName:(id)arg2;
- (unsigned int)program;
- (id)uniforms;
- (void)setUniforms:(id)arg1;
- (id)attributes;
- (void)setAttributes:(id)arg1;
- (void).cxx_destruct;
@end

