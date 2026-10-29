@interface TPMTLDisplayView : UIView <TPMTLDrawable>
{
    BOOL _layerSizeUpdateFlag; // +0x8
    CAMetalLayer * _metalLayer; // +0x10
    double _scaleFactor; // +0x18
    id <MTLDevice> _mtlDeivce; // +0x20
    id <CAMetalDrawable> _currentDrawable; // +0x28
    TPMTLDisplayConfig * _displayCfg; // +0x30
    CGSize _drawableSize; // +0x38
}
+ (Class)layerClass;
- (id)initWithFrame:(CGRect)arg1 with:(id)arg2;
- (void)dealloc;
- (void)setupLayer;
- (void)setContentScaleFactor:(double)arg1;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)updateDrawableSize:(CGSize)arg1;
- (id)currentDrawable;
- (void)configDisplay:(id)arg1;
- (id)getDisplayConfig;
- (void)prepareRenderResources;
- (void)cleanupRenderResources;
- (id)metalLayer;
- (void)setMetalLayer:(id)arg1;
- (CGSize)drawableSize;
- (void)setDrawableSize:(CGSize)arg1;
- (double)scaleFactor;
- (void)setScaleFactor:(double)arg1;
- (BOOL)layerSizeUpdateFlag;
- (void)setLayerSizeUpdateFlag:(BOOL)arg1;
- (id)mtlDeivce;
- (void)setMtlDeivce:(id)arg1;
- (void)setCurrentDrawable:(id)arg1;
- (id)displayCfg;
- (void)setDisplayCfg:(id)arg1;
- (void).cxx_destruct;
@end
