@interface WAEJCanvasContextWebGL : WAEJCanvasContext
{
    unsigned int viewFrameBuffer; // +0x48
    unsigned int viewRenderBuffer; // +0x4c
    unsigned int msaaFrameBuffer; // +0x50
    unsigned int msaaRenderBuffer; // +0x54
    unsigned int boundFrameBuffer; // +0x58
    unsigned int boundRenderBuffer; // +0x5c
    unsigned int depthStencilBuffer; // +0x60
    WAEJJavaScriptView * scriptView; // +0x68
}
- (BOOL)needsPresenting;
- (void)setNeedsPresenting:(BOOL)arg1;
- (id)initWithScriptView:(id)arg1 width:(short)arg2 height:(short)arg3 screenGroup:(BOOL)arg4;
- (void)resizeToWidth:(short)arg1 height:(short)arg2;
- (void)resizeAuxiliaryBuffers;
- (void)create;
- (void)dealloc;
- (void)prepare;
- (void)setStopRender:(BOOL)arg1;
- (void)clear;
- (void)bindFramebuffer:(int)arg1 toTarget:(unsigned int)arg2;
- (void)bindRenderbuffer:(int)arg1 toTarget:(unsigned int)arg2;
- (void)setWidth:(short)arg1;
- (void)setHeight:(short)arg1;
@end
