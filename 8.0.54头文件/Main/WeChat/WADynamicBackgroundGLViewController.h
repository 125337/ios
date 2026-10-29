@interface WADynamicBackgroundGLViewController : WADynamicBackgroundGLBaseViewController <DynamicBackgroundSystemDelegate>
{
    BOOL _canDraw; // +0x8
    BOOL _isTryingDrawFirstFrame; // +0x9
    BOOL _isFirstFrameDrawed; // +0xa
    unsigned int _blurQuality; // +0xc
    id <WADynamicBackgroundGLViewControllerDelegate> _mDelegate; // +0x10
    NSMutableArray * _objects; // +0x18
    NSMutableArray * _blurs; // +0x20
    WADynamicBackgroundSystem * _backgroundSystem; // +0x28
    CGSize _framebufferSize; // +0x30
    _GLKMatrix4 _projectionMatrix; // +0x40
}
- (id)init;
- (void)viewDidLoad;
- (void)willResignActive;
- (void)didBecomeActive;
- (void)becomeUnvisible;
- (void)createDynamicBackground;
- (_GLKVector4)getVector4ColorFromHex:(int)arg1 alpha:(double)arg2;
- (void)createTextureFrameBuffer:(unsigned int *)arg1 toTexture:(unsigned int *)arg2 framebufferSize:(CGSize)arg3;
- (id)createPlaneWithTexture:(unsigned int)arg1 directionX:(unsigned int)arg2 needColorMatrix:(unsigned int)arg3;
- (void)update;
- (void)drawObjects;
- (void)drawPlane:(id)arg1;
- (BOOL)isBackground;
- (void)setPaused:(BOOL)arg1;
- (void)tryDrawFirstFrame;
- (void)endTryDrawFirstFrame;
- (void)glkView:(id)arg1 drawInRect:(CGRect)arg2;
- (void)updateBackgroundColorWithColor1:(_GLKVector4)arg1 color2:(_GLKVector4)arg2;
- (BOOL)isCurrentTimeInDarkStyle;
- (id)mDelegate;
- (void)setMDelegate:(id)arg1;
- (BOOL)canDraw;
- (void)setCanDraw:(BOOL)arg1;
- (_GLKMatrix4)projectionMatrix;
- (void)setProjectionMatrix:(_GLKMatrix4)arg1;
- (id)objects;
- (void)setObjects:(id)arg1;
- (CGSize)framebufferSize;
- (void)setFramebufferSize:(CGSize)arg1;
- (unsigned int)blurQuality;
- (void)setBlurQuality:(unsigned int)arg1;
- (id)blurs;
- (void)setBlurs:(id)arg1;
- (BOOL)isTryingDrawFirstFrame;
- (void)setIsTryingDrawFirstFrame:(BOOL)arg1;
- (BOOL)isFirstFrameDrawed;
- (void)setIsFirstFrameDrawed:(BOOL)arg1;
- (id)backgroundSystem;
- (void)setBackgroundSystem:(id)arg1;
- (void).cxx_destruct;
@end

