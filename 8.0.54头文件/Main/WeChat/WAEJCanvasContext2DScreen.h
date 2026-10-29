@interface WAEJCanvasContext2DScreen : WAEJCanvasContext2D <EJPresentable>
{
    EAGLView * glview; // +0x8c0
    CGRect style; // +0x8c8
}
- (void)dealloc;
- (void)setStyle:(CGRect)arg1;
- (CGRect)frame;
- (void)resizeToWidth:(short)arg1 height:(short)arg2;
- (BOOL)notifyStyleChangedIfNeeded:(CGRect)arg1;
- (void)onLayerReady:(id)arg1;
- (void)finish;
- (void)present;
- (void)resetFramebuffer;
- (void)remove;
- (id)texture;
- (id)getTexture;
- (CGRect)style;
- (id)view;
@end

