@interface WAEJCanvasContextSkia2D : WAEJCanvasContext
{
    unsigned int _offscreenFbo; // +0x48
    WAEJJavaScriptView * _scriptView; // +0x50
    sk_sp<GrDirectContext> _skContext; // +0x58
    WAEJSharedOpenGLContext * _sharedGLContext; // +0x60
    WAEJTexture * _innerTexture; // +0x68
    sk_sp<SkSurface> _offscreenSurface; // +0x70
    NSMutableArray * _states; // +0x78
    SkPath _path; // +0x80
}
- (id)initWithScriptView:(id)arg1 width:(short)arg2 height:(short)arg3 screenGroup:(BOOL)arg4;
- (void)dealloc;
- (void *)canvas;
- (void *)currentState;
- (void)setWidth:(short)arg1;
- (void)setHeight:(short)arg1;
- (void)markDrawCall;
- (void)createOffScreenSurface;
- (void)resizeToWidth:(short)arg1 height:(short)arg2;
- (void)create;
- (void)flushBuffers;
- (void)prepare;
- (id)getTexture;
- (id)texture;
- (id)capture;
- (id)fillObject;
- (void)setFillStyleColor:(union)arg1;
- (void)setFillStyleObject:(id)arg1;
- (id)strokeObject;
- (void)setStrokeStyleColor:(union)arg1;
- (void)setStrokeStyleObject:(id)arg1;
- (void)save;
- (void)restore;
- (void)resetState;
- (void)rotate:(float)arg1;
- (void)translateX:(float)arg1 y:(float)arg2;
- (void)scaleX:(float)arg1 y:(float)arg2;
- (void)resetTransform;
- (void)transformM11:(float)arg1 m12:(float)arg2 m21:(float)arg3 m22:(float)arg4 dx:(float)arg5 dy:(float)arg6;
- (void)setTransformM11:(float)arg1 m12:(float)arg2 m21:(float)arg3 m22:(float)arg4 dx:(float)arg5 dy:(float)arg6;
- (vector<float, std::allocator<float>>)getTransform;
- (void)fillRectX:(float)arg1 y:(float)arg2 w:(float)arg3 h:(float)arg4;
- (void)strokeRectX:(float)arg1 y:(float)arg2 w:(float)arg3 h:(float)arg4;
- (void)clearRectX:(float)arg1 y:(float)arg2 w:(float)arg3 h:(float)arg4;
- (id)getImageDataSx:(short)arg1 sy:(short)arg2 sw:(short)arg3 sh:(short)arg4;
- (void)putImageData:(id)arg1 dx:(float)arg2 dy:(float)arg3;
- (void)drawImage:(id)arg1 sx:(float)arg2 sy:(float)arg3 sw:(float)arg4 sh:(float)arg5 dx:(float)arg6 dy:(float)arg7 dw:(float)arg8 dh:(float)arg9;
- (void)beginPath;
- (void)closePath;
- (void)moveToX:(float)arg1 y:(float)arg2;
- (void)lineToX:(float)arg1 y:(float)arg2;
- (void)rectX:(float)arg1 y:(float)arg2 w:(float)arg3 h:(float)arg4;
- (void)bezierCurveToCpx1:(float)arg1 cpy1:(float)arg2 cpx2:(float)arg3 cpy2:(float)arg4 x:(float)arg5 y:(float)arg6;
- (void)quadraticCurveToCpx:(float)arg1 cpy:(float)arg2 x:(float)arg3 y:(float)arg4;
- (void)arcToX1:(float)arg1 y1:(float)arg2 x2:(float)arg3 y2:(float)arg4 radius:(float)arg5;
- (void)arcX:(float)arg1 y:(float)arg2 radius:(float)arg3 startAngle:(float)arg4 endAngle:(float)arg5 antiClockwise:(BOOL)arg6;
- (void)ellipse:(float)arg1 y:(float)arg2 radiusX:(float)arg3 radiusY:(float)arg4 rotation:(float)arg5 startAngle:(float)arg6 endAngle:(float)arg7 antiClockwise:(BOOL)arg8;
- (void)fill:(int)arg1;
- (void)fill:(int)arg1 withPath:(void *)arg2;
- (void)stroke;
- (void)strokeWithPath:(void *)arg1;
- (void)clip:(int)arg1;
- (void)clip:(int)arg1 withPath:(void *)arg2;
- (BOOL)isPointInPath:(float)arg1 y:(float)arg2 fillRule:(int)arg3;
- (BOOL)isPointInPath:(float)arg1 y:(float)arg2 fillRule:(int)arg3 withPath:(void *)arg4;
- (BOOL)isPointInStroke:(float)arg1 y:(float)arg2;
- (BOOL)isPointInStroke:(float)arg1 y:(float)arg2 withPath:(void *)arg3;
- (void)drawText:(void *)arg1 text:(basic_string<char, std::char_traits<char>, std::allocator<char>>)arg2 x:(float)arg3 y:(float)arg4 maxWidth:(float)arg5 paint:(const void *)arg6;
- (void)fillText:(basic_string<char, std::char_traits<char>, std::allocator<char>>)arg1 x:(float)arg2 y:(float)arg3;
- (void)strokeText:(basic_string<char, std::char_traits<char>, std::allocator<char>>)arg1 x:(float)arg2 y:(float)arg3;
- (struct)measureText:(basic_string<char, std::char_traits<char>, std::allocator<char>>)arg1;
- (id)scriptView;
- (void)setScriptView:(id)arg1;
- (sk_sp<GrDirectContext>)skContext;
- (void)setSkContext:(sk_sp<GrDirectContext>)arg1;
- (id)sharedGLContext;
- (void)setSharedGLContext:(id)arg1;
- (unsigned int)offscreenFbo;
- (void)setOffscreenFbo:(unsigned int)arg1;
- (id)innerTexture;
- (void)setInnerTexture:(id)arg1;
- (sk_sp<SkSurface>)offscreenSurface;
- (void)setOffscreenSurface:(sk_sp<SkSurface>)arg1;
- (id)states;
- (void)setStates:(id)arg1;
- (SkPath)path;
- (void)setPath:(SkPath)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
