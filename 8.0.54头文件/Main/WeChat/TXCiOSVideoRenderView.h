@interface TXCiOSVideoRenderView : UIView <UIGestureRecognizerDelegate, TXIVideoRenderViewInterface>
{
    BOOL _isGlObjectsInvalid; // +0x8
    unsigned int _frameBuffer; // +0xc
    unsigned int _renderBuffer; // +0x10
    id <TXIVideoRenderViewDelegate> renderDelegate; // +0x18
    id <TXIGlContext> _context; // +0x20
    TXCDispatchQueue * _renderQueue; // +0x28
    CAEAGLLayer * _eaglLayer; // +0x30
    TXCCameraFocusSquareView * _focusSquareView; // +0x38
    CGSize _viewSize; // +0x40
}
+ (Class)layerClass;
- (id)initWithQueue:(id)arg1 context:(id)arg2;
- (void)dealloc;
- (BOOL)createGlObjectsIfNeeded;
- (void)layoutSubviews;
- (void)embedViewIn:(id)arg1;
- (BOOL)prepareToRender;
- (void)render;
- (void)snapshotWithImageSize:(CGSize)arg1 fillMode:(unsigned long long)arg2 rotation:(unsigned long long)arg3 onComplete:(id /* block */)arg4;
- (void)showFocusViewAtPoint:(CGPoint)arg1;
- (void)addTapGesture;
- (void)addPinchGesture;
- (void)handleTapGesture:(id)arg1;
- (void)handlePinchGesture:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)renderDelegate;
- (void)setRenderDelegate:(id)arg1;
- (id)context;
- (id)renderQueue;
- (id)eaglLayer;
- (unsigned int)frameBuffer;
- (void)setFrameBuffer:(unsigned int)arg1;
- (unsigned int)renderBuffer;
- (void)setRenderBuffer:(unsigned int)arg1;
- (CGSize)viewSize;
- (void)setViewSize:(CGSize)arg1;
- (BOOL)isGlObjectsInvalid;
- (void)setIsGlObjectsInvalid:(BOOL)arg1;
- (id)focusSquareView;
- (void)setFocusSquareView:(id)arg1;
- (void).cxx_destruct;
@end

