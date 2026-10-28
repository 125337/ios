@interface TXCMTKView : UIView <UIGestureRecognizerDelegate>
{
    atomic<float> _scaleFactor; // +0x8
    atomic<bool> _requestUpdateDrawableSize; // +0xc
    atomic<unsigned int> _viewSize; // +0x10
    atomic<UIViewContentMode> _atomicContentMode; // +0x18
    id <CAMetalDrawable> _currentDrawable; // +0x20
    MTLRenderPassDescriptor * _renderPassDescriptor; // +0x28
    id <TXCMTKViewDelegate> _delegate; // +0x30
    id <MTLDevice> _device; // +0x38
    TXCMetalDisplayConfig * _displayConfig; // +0x40
    CAMetalLayer * _metalLayer; // +0x48
    TXCCameraFocusSquareView * _focusSquareView; // +0x50
    CGSize _inputFrameSize; // +0x58
}
+ (Class)layerClass;
- (id)initWithFrame:(CGRect)arg1 device:(id)arg2;
- (void)setDevice:(id)arg1;
- (void)commonInit;
- (void)updateViewSize:(CGSize)arg1;
- (CGSize)viewSizeInPixels;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (void)setContentMode:(long long)arg1;
- (void)setContentScaleFactor:(double)arg1;
- (void)addTapGesture;
- (void)addPinchGesture;
- (void)handleTapGesture:(id)arg1;
- (void)handlePinchGesture:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)setupRenderPassDescriptorForTexture:(id)arg1;
- (id)renderPassDescriptor;
- (id)currentDrawable;
- (void)snapshot:(id)arg1 complete:(id /* block */)arg2;
- (BOOL)display;
- (void)setInputFrameSize:(CGSize)arg1;
- (void)setDisplayConfig:(id)arg1;
- (void)showFocusViewAtPoint:(CGPoint)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)device;
- (CGSize)inputFrameSize;
- (id)displayConfig;
- (id)metalLayer;
- (id)focusSquareView;
- (void)setFocusSquareView:(id)arg1;
- (void).cxx_destruct;
@end
