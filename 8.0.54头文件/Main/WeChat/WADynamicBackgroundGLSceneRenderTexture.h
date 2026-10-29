@interface WADynamicBackgroundGLSceneRenderTexture : WADynamicBackgroundGLObject
{
    unsigned int vbo; // +0x8
    unsigned int vao; // +0xc
    unsigned int diffuseTexture; // +0x10
    BOOL _needBlend; // +0x14
    unsigned int _directionX; // +0x18
    unsigned int _needColorMatrix; // +0x1c
    _GLKMatrix4 _colorMatrix; // +0x20
}
- (id)initWithGLContext:(id)arg1 texture:(unsigned int)arg2;
- (void)dealloc;
- (float *)planeData;
- (void)genVBO;
- (void)genVAO;
- (void)update:(double)arg1;
- (void)draw:(id)arg1;
- (_GLKMatrix4)colorMatrix;
- (void)setColorMatrix:(_GLKMatrix4)arg1;
- (unsigned int)directionX;
- (void)setDirectionX:(unsigned int)arg1;
- (unsigned int)needColorMatrix;
- (void)setNeedColorMatrix:(unsigned int)arg1;
- (BOOL)needBlend;
- (void)setNeedBlend:(BOOL)arg1;
@end

