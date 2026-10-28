@interface WADynamicBackgroundGLGeometry : WADynamicBackgroundGLObject
{
    unsigned int vbo; // +0x8
    BOOL vboValid; // +0xc
    BOOL _vboUpdated; // +0xd
    unsigned long long _geometryType; // +0x10
    NSMutableData * _vertexData; // +0x18
}
- (id)initWithGeometryType:(unsigned long long)arg1;
- (void)dealloc;
- (void)appendVertex:(struct)arg1;
- (void)appendVertexXYZRGBA:(struct)arg1;
- (unsigned int)getVBO;
- (void)updateVBOIfNeeded;
- (int)vertexCount;
- (int)vertexXYZRGBACount;
- (void)cleanVertex;
- (unsigned long long)geometryType;
- (void)setGeometryType:(unsigned long long)arg1;
- (BOOL)vboUpdated;
- (void)setVboUpdated:(BOOL)arg1;
- (id)vertexData;
- (void)setVertexData:(id)arg1;
- (void).cxx_destruct;
@end
