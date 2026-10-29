@interface TAVPreview : UIView <MTKViewDelegate, GLKViewDelegate>
{
    id <TAVPreviewDelegate> _delegate; // +0x8
    MTKView * _MTKView; // +0x10
    id <MTLCommandQueue> _MTLCommandQueue; // +0x18
    id <MTLDevice> _MTLDevice; // +0x20
    GLKView * _GLKView; // +0x28
    EAGLContext * _EAGLContext; // +0x30
    CIContext * _CIContext; // +0x38
    TAVFrame * _currentFrame; // +0x40
    CIImage * _CIImage; // +0x48
    unsigned long long _imageMode; // +0x50
    CGRect _contentRect; // +0x58
}
+ (BOOL)supportMetal;
- (id)initWithFrame:(CGRect)arg1;
- (void)setContentMode:(long long)arg1;
- (void)setContentRect:(CGRect)arg1;
- (void)dealloc;
- (void)initContext;
- (void)createMTLContext;
- (void)createEAGLContext;
- (void)updatePreviewWithFrame:(id)arg1;
- (void)layoutSubviews;
- (void)setupPreviewIfNeeded;
- (void)setNeedsDisplay;
- (CGSize)renderSize;
- (id)renderedCIImage;
- (id)resizeCIImageForDrawing:(id)arg1;
- (id)createEmptyCIImageWithSize:(CGSize)arg1;
- (void)drawRect:(CGRect)arg1;
- (void)drawInMTKView:(id)arg1;
- (void)mtkView:(id)arg1 drawableSizeWillChange:(CGSize)arg2;
- (void)glkView:(id)arg1 drawInRect:(CGRect)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (CGRect)contentRect;
- (id)MTKView;
- (void)setMTKView:(id)arg1;
- (id)MTLCommandQueue;
- (void)setMTLCommandQueue:(id)arg1;
- (id)MTLDevice;
- (void)setMTLDevice:(id)arg1;
- (id)GLKView;
- (void)setGLKView:(id)arg1;
- (id)EAGLContext;
- (void)setEAGLContext:(id)arg1;
- (id)CIContext;
- (void)setCIContext:(id)arg1;
- (id)currentFrame;
- (void)setCurrentFrame:(id)arg1;
- (id)CIImage;
- (void)setCIImage:(id)arg1;
- (unsigned long long)imageMode;
- (void)setImageMode:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
