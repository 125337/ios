@interface XEffectRenderTarget : NSObject
{
    __CVOpenGLESTextureCache * _cvTextureCache; // +0x8
    unsigned int _renderBuffer; // +0x10
    unsigned int _frameBuffer; // +0x14
    unsigned int _texVAO; // +0x18
    unsigned int _texVBO; // +0x1c
    unsigned int _glProgTex; // +0x20
    __CVBuffer * _videoTexture; // +0x28
    unsigned int _videoTextureID; // +0x30
    __CVBuffer * _drawTexture; // +0x38
    unsigned int _drawTextureID; // +0x40
    unsigned int _prevPointGroupCount; // +0x44
    XEffect_GLContext _ctx; // +0x48
    BOOL _shouldUpdateLayer; // +0x54
    BOOL _isBackground; // +0x55
    BOOL _shouldRecreateTexture; // +0x56
    long long _orientation; // +0x58
    __CVBuffer * _renderPixelBuffer; // +0x60
    EAGLContext * _glContext; // +0x68
    CAEAGLLayer * _layer; // +0x70
    id <XEffectRenderTargetDelegate> _delegate; // +0x78
    CGSize _currentViewSize; // +0x80
    CGSize _drawTextureSize; // +0x90
    CGRect _renderArea; // +0xa0
}
- (id)initWithDelegate:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)registerBackgroundNotification;
- (void)appWillResignActive:(id)arg1;
- (void)appDidBecomeActive:(id)arg1;
- (void)setupProgTex;
- (void)setupVerticeArrWithTexSize:(CGSize)arg1;
- (void)setupFramebuffers;
- (void)resetViewPort;
- (unsigned int)loadGLProgram:(const char *)arg1 frag:(const char *)arg2 ctx:(XEffect_GLContext *)arg3;
- (BOOL)compileShader:(unsigned int *)arg1 type:(unsigned int)arg2 shaderString:(const char *)arg3;
- (BOOL)linkProgram:(unsigned int)arg1;
- (unsigned int)setupTexture:(__CVBuffer *)arg1;
- (void)ensureCoreVideoCache;
- (void)ensureDrawTexture:(CGSize)arg1;
- (void)rebindBuffer;
- (void)renderDrawTexture;
- (unsigned int)getDrawTexture;
- (unsigned int)getVideoTexture;
- (CGSize)getDrawTextureSize;
- (id)getLayerForPreview;
- (void)setRenderArea:(CGRect)arg1;
- (id)snapshotWithFrame:(CGRect)arg1 format:(long long)arg2 alwaysCopy:(BOOL)arg3;
- (BOOL)setContext:(id)arg1;
- (void)begin;
- (void)end;
- (CGRect)renderArea;
- (CGSize)currentViewSize;
- (void)setCurrentViewSize:(CGSize)arg1;
- (long long)orientation;
- (void)setOrientation:(long long)arg1;
- (BOOL)shouldUpdateLayer;
- (void)setShouldUpdateLayer:(BOOL)arg1;
- (__CVBuffer *)renderPixelBuffer;
- (void)setRenderPixelBuffer:(__CVBuffer *)arg1;
- (BOOL)isBackground;
- (void)setIsBackground:(BOOL)arg1;
- (id)glContext;
- (void)setGlContext:(id)arg1;
- (CGSize)drawTextureSize;
- (void)setDrawTextureSize:(CGSize)arg1;
- (id)layer;
- (void)setLayer:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)shouldRecreateTexture;
- (void)setShouldRecreateTexture:(BOOL)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
