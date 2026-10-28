@interface TPMTKView : UIView
{
    BOOL _layerSizeDidUpdate; // +0x8
    BOOL _enableColorManage; // +0x9
    int _layerColorSpace; // +0xc
    int _lucidMode; // +0x10
    id <CAMetalDrawable> _currentDrawable; // +0x18
    MTLRenderPassDescriptor * _renderPassDescriptor; // +0x20
    id <TPMTKViewDelegate> _delegate; // +0x28
    id <MTLDevice> _device; // +0x30
    CAMetalLayer * _metalLayer; // +0x38
    double _scaleFactor; // +0x40
    CGSize _drawableSize; // +0x48
}
+ (Class)layerClass;
- (id)initWithFrame:(CGRect)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setAlpha:(double)arg1;
- (void)initCommon;
- (void)initMetal:(id)arg1;
- (void)initMetal:(id)arg1 withColor:(BOOL)arg2;
- (void)didMoveToWindow;
- (id)initWithCoder:(id)arg1;
- (void)setupMetalLayerForLucid:(int)arg1;
- (void)setupRenderPassDescriptorForTexture:(id)arg1;
- (id)renderPassDescriptor;
- (id)currentDrawable;
- (void)display;
- (void)configViewColorSpace:(int)arg1;
- (void)configColorspace:(__CFString *)arg1;
- (void)setContentScaleFactor:(double)arg1;
- (void)layoutSubviews;
- (void)setDrawableSize:(CGSize)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)device;
- (int)layerColorSpace;
- (void)setLayerColorSpace:(int)arg1;
- (id)metalLayer;
- (void)setMetalLayer:(id)arg1;
- (BOOL)layerSizeDidUpdate;
- (void)setLayerSizeDidUpdate:(BOOL)arg1;
- (BOOL)enableColorManage;
- (void)setEnableColorManage:(BOOL)arg1;
- (double)scaleFactor;
- (void)setScaleFactor:(double)arg1;
- (CGSize)drawableSize;
- (int)lucidMode;
- (void)setLucidMode:(int)arg1;
- (void).cxx_destruct;
@end
