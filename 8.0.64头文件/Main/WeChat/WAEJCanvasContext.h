@interface WAEJCanvasContext : NSObject
{
    short width; // +0x8
    short height; // +0xa
    double contentScale; // +0x10
    short bufferWidth; // +0x18
    short bufferHeight; // +0x1a
    BOOL preserveDrawingBuffer; // +0x1c
    BOOL msaaEnabled; // +0x1d
    BOOL needsPresenting; // +0x1e
    int msaaSamples; // +0x20
    EAGLContext * glContext; // +0x28
    WAEJTextureCapture * textureCapture; // +0x30
    BOOL stopRender; // +0x38
    NSValue * canvasContext; // +0x40
    BOOL _isTransparent; // +0x48
    BOOL _isEAGLViewOwner; // +0x49
    BOOL _firstRendered; // +0x4a
    unsigned int _canvasId; // +0x4c
    unsigned int _drawCall; // +0x50
    unsigned int _vertexCount; // +0x54
    unsigned int _triangleCount; // +0x58
}
- (void)create;
- (void)flushBuffers;
- (void)prepare;
- (void)remove;
- (void)clearDrawCount;
- (void)resumeUpdate:(BOOL)arg1;
- (id)getTexture;
- (id)captureImage;
- (void)dealloc;
- (id)glContext;
- (short)width;
- (void)setWidth:(short)arg1;
- (short)height;
- (void)setHeight:(short)arg1;
- (double)contentScale;
- (void)setContentScale:(double)arg1;
- (short)bufferWidth;
- (void)setBufferWidth:(short)arg1;
- (short)bufferHeight;
- (void)setBufferHeight:(short)arg1;
- (BOOL)msaaEnabled;
- (void)setMsaaEnabled:(BOOL)arg1;
- (int)msaaSamples;
- (void)setMsaaSamples:(int)arg1;
- (BOOL)preserveDrawingBuffer;
- (void)setPreserveDrawingBuffer:(BOOL)arg1;
- (BOOL)stopRender;
- (void)setStopRender:(BOOL)arg1;
- (id)canvasContext;
- (void)setCanvasContext:(id)arg1;
- (id)textureCapture;
- (BOOL)isTransparent;
- (void)setIsTransparent:(BOOL)arg1;
- (unsigned int)canvasId;
- (void)setCanvasId:(unsigned int)arg1;
- (BOOL)isEAGLViewOwner;
- (void)setIsEAGLViewOwner:(BOOL)arg1;
- (unsigned int)drawCall;
- (void)setDrawCall:(unsigned int)arg1;
- (unsigned int)vertexCount;
- (void)setVertexCount:(unsigned int)arg1;
- (unsigned int)triangleCount;
- (void)setTriangleCount:(unsigned int)arg1;
- (BOOL)firstRendered;
- (void)setFirstRendered:(BOOL)arg1;
@end
