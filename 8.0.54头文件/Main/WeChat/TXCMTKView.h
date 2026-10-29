@interface TXCMTKView : UIView
{
    BOOL _layerSizeDidUpdate; // +0x8
    id <CAMetalDrawable> _currentDrawable; // +0x10
    MTLRenderPassDescriptor * _renderPassDescriptor; // +0x18
    id <TXCMTKViewDelegate> _delegate; // +0x20
    id <MTLDevice> _device; // +0x28
    TXCMetalDisplayConfig * _displayConfig; // +0x30
    CAMetalLayer * _metalLayer; // +0x38
    double _scaleFactor; // +0x40
    CGSize _drawableSize; // +0x48
}
+ (Class)layerClass;
- (id)initWithFrame:(CGRect)arg1 device:(id)arg2;
- (void)commonInit;
- (void)didMoveToWindow;
- (void)setContentScaleFactor:(double)arg1;
- (void)layoutSubviews;
- (void)setupRenderPassDescriptorForTexture:(id)arg1;
- (id)renderPassDescriptor;
- (id)currentDrawable;
- (void)display;
- (void)setDrawableSize:(CGSize)arg1;
- (void)setDisplayConfig:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)device;
- (CGSize)drawableSize;
- (id)displayConfig;
- (id)metalLayer;
- (BOOL)layerSizeDidUpdate;
- (void)setLayerSizeDidUpdate:(BOOL)arg1;
- (double)scaleFactor;
- (void)setScaleFactor:(double)arg1;
- (void).cxx_destruct;
@end

