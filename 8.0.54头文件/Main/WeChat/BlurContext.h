@interface BlurContext : NSObject
{
    unsigned int _framebuffer; // +0x8
    unsigned int _framebufferColorTexture; // +0xc
    WADynamicBackgroundGLSceneRenderTexture * _displayFramebufferPlane; // +0x10
    EAGLContext * _glContext; // +0x18
}
- (void)dealloc;
- (id)displayFramebufferPlane;
- (void)setDisplayFramebufferPlane:(id)arg1;
- (unsigned int)framebuffer;
- (void)setFramebuffer:(unsigned int)arg1;
- (unsigned int)framebufferColorTexture;
- (void)setFramebufferColorTexture:(unsigned int)arg1;
- (id)glContext;
- (void)setGlContext:(id)arg1;
- (void).cxx_destruct;
@end

