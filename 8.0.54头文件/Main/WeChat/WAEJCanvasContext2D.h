@interface WAEJCanvasContext2D : WAEJCanvasContext
{
    unsigned int viewFrameBuffer; // +0x48
    unsigned int viewRenderBuffer; // +0x4c
    unsigned int msaaFrameBuffer; // +0x50
    unsigned int msaaRenderBuffer; // +0x54
    unsigned int stencilBuffer; // +0x58
    unsigned char stencilMask; // +0x5c
    unsigned int textureFilter; // +0x60
    WAEJTexture * currentTexture; // +0x68
    WAEJPath * path; // +0x70
    struct * vertexBuffer; // +0x78
    int vertexBufferSize; // +0x80
    int vertexBufferIndex; // +0x84
    int stateIndex; // +0x88
    struct[16] stateStack; // +0x90
    struct * state; // +0x890
    BOOL upsideDown; // +0x898
    WAEJFontCache * fontCache; // +0x8a0
    WAEJJavaScriptView * scriptView; // +0x8a8
    WAEJGLProgram2D * currentProgram; // +0x8b0
    WAEJSharedOpenGLContext * sharedGLContext; // +0x8b8
    BOOL imageSmoothingEnabled; // +0x8c0
    int _imageSmoothingQuality; // +0x8c4
}
- (id)initWithScriptView:(id)arg1 width:(short)arg2 height:(short)arg3 screenGroup:(BOOL)arg4;
- (void)dealloc;
- (void)create;
- (void)setStopRender:(BOOL)arg1;
- (void)resizeToWidth:(short)arg1 height:(short)arg2;
- (void)resetFramebuffer;
- (void)createStencilBufferOnce;
- (void)bindVertexBuffer;
- (void)prepare;
- (void)setWidth:(short)arg1;
- (void)setHeight:(short)arg1;
- (void)setTexture:(id)arg1;
- (void)setProgram:(id)arg1;
- (void)pushTriX1:(float)arg1 y1:(float)arg2 x2:(float)arg3 y2:(float)arg4 x3:(float)arg5 y3:(float)arg6 color:(union)arg7 withTransform:(CGAffineTransform)arg8;
- (void)pushQuadV1:(struct)arg1 v2:(struct)arg2 v3:(struct)arg3 v4:(struct)arg4 color:(union)arg5 withTransform:(CGAffineTransform)arg6;
- (void)pushRectX:(float)arg1 y:(float)arg2 w:(float)arg3 h:(float)arg4 color:(union)arg5 withTransform:(CGAffineTransform)arg6;
- (void)pushFilledRectX:(float)arg1 y:(float)arg2 w:(float)arg3 h:(float)arg4 fillable:(id)arg5 color:(union)arg6 withTransform:(CGAffineTransform)arg7;
- (void)pushGradientRectX:(float)arg1 y:(float)arg2 w:(float)arg3 h:(float)arg4 gradient:(id)arg5 color:(union)arg6 withTransform:(CGAffineTransform)arg7;
- (void)pushPatternedRectX:(float)arg1 y:(float)arg2 w:(float)arg3 h:(float)arg4 pattern:(id)arg5 color:(union)arg6 withTransform:(CGAffineTransform)arg7;
- (void)pushTexturedRectX:(float)arg1 y:(float)arg2 w:(float)arg3 h:(float)arg4 tx:(float)arg5 ty:(float)arg6 tw:(float)arg7 th:(float)arg8 color:(union)arg9 withTransform:(CGAffineTransform)arg10;
- (void)flushBuffers;
- (BOOL)imageSmoothingEnabled;
- (void)setImageSmoothingEnabled:(BOOL)arg1;
- (void)setGlobalCompositeOperation:(int)arg1;
- (int)globalCompositeOperation;
- (void)setFont:(id)arg1;
- (id)font;
- (void)setFillObject:(id)arg1;
- (id)fillObject;
- (void)setStrokeObject:(id)arg1;
- (id)strokeObject;
- (void)save;
- (void)restore;
- (void)rotate:(float)arg1;
- (void)translateX:(float)arg1 y:(float)arg2;
- (void)scaleX:(float)arg1 y:(float)arg2;
- (void)transformM11:(float)arg1 m12:(float)arg2 m21:(float)arg3 m22:(float)arg4 dx:(float)arg5 dy:(float)arg6;
- (void)setTransformM11:(float)arg1 m12:(float)arg2 m21:(float)arg3 m22:(float)arg4 dx:(float)arg5 dy:(float)arg6;
- (void)drawImage:(id)arg1 sx:(float)arg2 sy:(float)arg3 sw:(float)arg4 sh:(float)arg5 dx:(float)arg6 dy:(float)arg7 dw:(float)arg8 dh:(float)arg9;
- (void)fillRectX:(float)arg1 y:(float)arg2 w:(float)arg3 h:(float)arg4;
- (void)strokeRectX:(float)arg1 y:(float)arg2 w:(float)arg3 h:(float)arg4;
- (void)clearRectX:(float)arg1 y:(float)arg2 w:(float)arg3 h:(float)arg4;
- (id)getImageDataSx:(short)arg1 sy:(short)arg2 sw:(short)arg3 sh:(short)arg4;
- (void)putImageData:(id)arg1 dx:(float)arg2 dy:(float)arg3;
- (void)beginPath;
- (void)closePath;
- (void)fill:(int)arg1;
- (void)stroke;
- (void)moveToX:(float)arg1 y:(float)arg2;
- (void)lineToX:(float)arg1 y:(float)arg2;
- (void)bezierCurveToCpx1:(float)arg1 cpy1:(float)arg2 cpx2:(float)arg3 cpy2:(float)arg4 x:(float)arg5 y:(float)arg6;
- (void)quadraticCurveToCpx:(float)arg1 cpy:(float)arg2 x:(float)arg3 y:(float)arg4;
- (void)rectX:(float)arg1 y:(float)arg2 w:(float)arg3 h:(float)arg4;
- (void)arcToX1:(float)arg1 y1:(float)arg2 x2:(float)arg3 y2:(float)arg4 radius:(float)arg5;
- (void)arcX:(float)arg1 y:(float)arg2 radius:(float)arg3 startAngle:(float)arg4 endAngle:(float)arg5 antiClockwise:(BOOL)arg6;
- (void)fillText:(id)arg1 x:(float)arg2 y:(float)arg3;
- (void)strokeText:(id)arg1 x:(float)arg2 y:(float)arg3;
- (struct)measureText:(id)arg1;
- (void)clip:(int)arg1;
- (void)resetClip;
- (struct *)state;
- (void)setState:(struct *)arg1;
- (unsigned char)stencilMask;
- (void)setStencilMask:(unsigned char)arg1;
- (int)imageSmoothingQuality;
- (void)setImageSmoothingQuality:(int)arg1;
@end

