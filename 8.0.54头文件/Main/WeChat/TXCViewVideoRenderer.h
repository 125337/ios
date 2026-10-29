@interface TXCViewVideoRenderer : TXCVideoBindableObject <TXIVideoRenderViewDelegate, TXCGSensorDelegate, TXILocalVideoRenderer>
{
    id <TXILocalVideoRendererDelegate> rendererDelegate; // +0x8
    TXCDispatchQueue * _queue; // +0x10
    id <TXIGlContext> _context; // +0x18
    id <TXIGlContext> _refContext; // +0x20
    TXCVideoRenderConfig * _config; // +0x28
    UIView * _superView; // +0x30
    UIView<TXIVideoRenderViewInterface> * _renderView; // +0x38
    TXCVideoFrameCoords * _frameCoords; // +0x40
    TXCFramebufferDrawer * _drawer; // +0x48
    TXCGSensor * _gSensor; // +0x50
    id /* block */ _drawOperation; // +0x58
    TXCDroppableDispatcher * _dispatcher; // +0x60
    TXCVideoFrame * _lastFrame; // +0x68
}
- (id)initWithQueue:(id)arg1 context:(id)arg2 config:(id)arg3 view:(id)arg4;
- (void)setupRenderViewWithSuperView:(id)arg1;
- (BOOL)createGlObjectsIfNeeded;
- (void)dealloc;
- (void)applyConfigs;
- (void)processVideoFrame:(id)arg1 onComplete:(id /* block */)arg2;
- (void)start;
- (void)stop:(BOOL)arg1;
- (void)clearRenderTask;
- (void)clearScreen;
- (void)setFillMode:(unsigned long long)arg1;
- (void)setMirrorMode:(unsigned long long)arg1;
- (void)setRotation:(unsigned long long)arg1;
- (void)setGSensorMode:(unsigned long long)arg1 homeOrientation:(int)arg2;
- (void)snapshotOnComplete:(id /* block */)arg1;
- (id)convertPointToVideoFrame:(CGPoint)arg1 isFrontCamera:(BOOL)arg2;
- (void)showFocusViewAtPoint:(CGPoint)arg1;
- (CGRect)renderRect;
- (id)createRenderContextFrom:(id)arg1;
- (void)drawVideoFrame:(id)arg1 onComplete:(id /* block */)arg2;
- (void)drawTexture:(id)arg1;
- (void)drawPixelBuffer:(id)arg1;
- (void)renderView:(id)arg1 onSizeChange:(CGSize)arg2;
- (void)renderView:(id)arg1 onTouchPoint:(CGPoint)arg2;
- (void)renderView:(id)arg1 onPinchScale:(double)arg2;
- (void)gSensor:(id)arg1 onChangeRenderRotation:(unsigned long long)arg2 isViewInLandscape:(BOOL)arg3;
- (id)rendererDelegate;
- (void)setRendererDelegate:(id)arg1;
- (id)queue;
- (id)context;
- (id)refContext;
- (id)config;
- (id)superView;
- (void)setSuperView:(id)arg1;
- (id)renderView;
- (void)setRenderView:(id)arg1;
- (id)frameCoords;
- (void)setFrameCoords:(id)arg1;
- (id)drawer;
- (void)setDrawer:(id)arg1;
- (id)gSensor;
- (void)setGSensor:(id)arg1;
- (id /* block */)drawOperation;
- (id)dispatcher;
- (void)setDispatcher:(id)arg1;
- (id)lastFrame;
- (void)setLastFrame:(id)arg1;
- (void).cxx_destruct;
@end

