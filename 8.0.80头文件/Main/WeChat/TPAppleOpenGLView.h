@interface TPAppleOpenGLView : UIView
{
    TPVideoRender * _glRenderer; // +0x8
    TPVideoRenderFrame * _glFrame; // +0x10
    EAGLContext * _eaglContext; // +0x18
    int _backingWidth; // +0x20
    int _backingHeight; // +0x24
    unsigned int _frameBuffer; // +0x28
    unsigned int _renderBuffer; // +0x2c
}
+ (Class)layerClass;
- (id)initWithParams:(TPRendererVideoFrameParams)arg1;
- (void)dealloc;
- (int)writeOneFrame:(TPFrame *)arg1;
- (void)finish;
- (void)uninit;
- (BOOL)initGL;
- (void)uninitGL;
- (void)clearAllResources;
- (void).cxx_destruct;
@end
