@interface WAEJCanvasContextSkia2DScreen : WAEJCanvasContextSkia2D <EJPresentable>
{
    EAGLView * glview; // +0x48
    CGRect style; // +0x50
    unsigned int _viewRenderbuffer; // +0x70
    unsigned int _viewFramebuffer; // +0x74
    sk_sp<SkSurface> _onscreenSurface; // +0x78
}
- (void)dealloc;
- (CGRect)frame;
- (void)setStyle:(CGRect)arg1;
- (void)resizeToWidth:(short)arg1 height:(short)arg2;
- (BOOL)notifyStyleChangedIfNeeded:(CGRect)arg1;
- (void)create;
- (void)markDrawCall;
- (void)remove;
- (void)finish;
- (void)resetFramebuffer;
- (void)prepare;
- (void *)canvas;
- (id)captureImage;
- (id)getTexture;
- (void)present;
- (CGRect)style;
- (id)view;
- (sk_sp<SkSurface>)onscreenSurface;
- (void)setOnscreenSurface:(sk_sp<SkSurface>)arg1;
- (unsigned int)viewRenderbuffer;
- (void)setViewRenderbuffer:(unsigned int)arg1;
- (unsigned int)viewFramebuffer;
- (void)setViewFramebuffer:(unsigned int)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
