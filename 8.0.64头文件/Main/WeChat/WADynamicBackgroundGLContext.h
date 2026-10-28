@interface WADynamicBackgroundGLContext : MMObject
{
    unsigned int program; // +0x8
}
+ (id)contextWithVertexShaderPath:(id)arg1 fragmentShaderPath:(id)arg2;
- (id)initWithVertexShader:(id)arg1 fragmentShader:(id)arg2;
- (void)active;
- (void)bindAttribs:(float *)arg1;
- (void)bindAttribsUV:(float *)arg1;
- (void)drawTriangles:(float *)arg1 vertexCount:(int)arg2;
- (void)drawTrianglesWithVBO:(unsigned int)arg1 vertexCount:(int)arg2;
- (void)drawTrianglesWithVAO:(unsigned int)arg1 vertexCount:(int)arg2;
- (void)drawGeometry:(id)arg1;
- (void)setUniform1i:(id)arg1 value:(int)arg2;
- (void)setUniform1f:(id)arg1 value:(float)arg2;
- (void)setUniform2fv:(id)arg1 value:(_GLKVector2)arg2;
- (void)setUniform3fv:(id)arg1 value:(_GLKVector3)arg2;
- (void)setUniform4fv:(id)arg1 value:(_GLKVector4)arg2;
- (void)setUniformMatrix4fv:(id)arg1 value:(_GLKMatrix4)arg2;
- (void)bindTexture:(id)arg1 to:(unsigned int)arg2 uniformName:(id)arg3;
- (void)bindCubeTexture:(id)arg1 to:(unsigned int)arg2 uniformName:(id)arg3;
- (void)bindTextureName:(unsigned int)arg1 to:(unsigned int)arg2 uniformName:(id)arg3;
- (void)setupShader:(id)arg1 fragmentShaderContent:(id)arg2;
- (unsigned int)program;
- (void)setProgram:(unsigned int)arg1;
@end
