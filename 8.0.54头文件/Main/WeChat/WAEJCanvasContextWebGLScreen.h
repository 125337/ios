@interface WAEJCanvasContextWebGLScreen : WAEJCanvasContextWebGL <EJPresentable>
{
    EAGLView * glview; // +0x70
    CGRect style; // +0x78
    BOOL needResumeUpdate; // +0x98
    int gCurrFrameBuffer; // +0x9c
    int gCurrRenderBuffer; // +0xa0
}
- (void)dealloc;
- (void)setStyle:(CGRect)arg1;
- (CGRect)frame;
- (void)resizeToWidth:(short)arg1 height:(short)arg2;
- (BOOL)notifyStyleChangedIfNeeded:(CGRect)arg1;
- (void)onLayerReady:(id)arg1;
- (void)finish;
- (void)resetFramebuffer;
- (id)captureImage;
- (void)present;
- (id)texture;
- (void)resumeUpdate:(BOOL)arg1;
- (void)remove;
- (id)getTexture;
- (CGRect)style;
- (id)view;
@end

