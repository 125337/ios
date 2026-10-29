@interface TXCYuvToRgbFilter : TXCBaseFilter
{
    id <TXIGlContext> _context; // +0x8
    TXCGlFrameBuffer * _frameBuffer; // +0x10
    TXCFramebufferDrawer * _framebufferDrawer; // +0x18
}
- (id)initWithContext:(id)arg1;
- (void)dealloc;
- (BOOL)createGlObjectsIfNeeded;
- (void)processVideoFrame:(id)arg1 onComplete:(id /* block */)arg2;
- (id)context;
- (id)frameBuffer;
- (void)setFrameBuffer:(id)arg1;
- (id)framebufferDrawer;
- (void)setFramebufferDrawer:(id)arg1;
- (void).cxx_destruct;
@end

