@interface WeVisGLProgram : NSObject
{
    NSMutableArray * attributes; // +0x8
    NSMutableArray * uniforms; // +0x10
    unsigned int vertShaderId; // +0x18
    unsigned int fragShaderId; // +0x1c
    BOOL _isCompileAndLinked; // +0x20
    unsigned int _programId; // +0x24
}
- (BOOL)compileShader:(unsigned int *)arg1 type:(unsigned int)arg2 source:(const char *)arg3;
- (id)initWithVertShader:(const char *)arg1 fragShader:(const char *)arg2;
- (void)dealloc;
- (void)addAttribute:(id)arg1;
- (unsigned int)attributeIndex:(id)arg1;
- (unsigned int)uniformIndex:(id)arg1;
- (BOOL)link;
- (void)bind;
- (BOOL)validate;
- (unsigned int)programId;
- (void)setProgramId:(unsigned int)arg1;
- (BOOL)isCompileAndLinked;
- (void)setIsCompileAndLinked:(BOOL)arg1;
- (void).cxx_destruct;
@end
