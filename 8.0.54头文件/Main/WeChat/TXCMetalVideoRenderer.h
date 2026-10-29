@interface TXCMetalVideoRenderer : TXCVideoBindableObject <TXCMTKViewDelegate, TXCGSensorDelegate, TXILocalVideoRenderer>
{
    id <MTLTexture> _rgbTexture; // +0x8
    atomic<int> _mainThreadTaskCount; // +0x10
    shared_ptr<liteav::video::NativePixelFrame> _pbFrame; // +0x18
    NSObject<OS_dispatch_semaphore> * _inflate_semaphore; // +0x28
    BOOL _requestClearView; // +0x30
    id <TXILocalVideoRendererDelegate> rendererDelegate; // +0x38
    TXCDispatchQueue * _queue; // +0x40
    TXCMetalContext * _mtlContext; // +0x48
    TXCVideoRenderConfig * _config; // +0x50
    TXCMetalDisplayConfig * _displayConfig; // +0x58
    TXCMetalRenderer * _render; // +0x60
    TXCMetalRenderTargetView * _renderTarget; // +0x68
    TXCRenderFrameCoords * _renderCoords; // +0x70
    TXCGSensor * _gSensor; // +0x78
    UIView * _superView; // +0x80
    TXCMTKView * _renderView; // +0x88
    unsigned long long _fillMode; // +0x90
}
- (id)initWithQueue:(id)arg1 context:(id)arg2 config:(id)arg3 view:(id)arg4;
- (id)initWithQueue:(id)arg1 config:(id)arg2 view:(id)arg3;
- (void)dealloc;
- (void)applyConfigs;
- (void)processVideoFrame:(id)arg1 onComplete:(id /* block */)arg2;
- (void)updateRenderView:(id)arg1;
- (BOOL)waitMainThreadTaskFinishIfNeed;
- (void)updateMetalDrawableSize;
- (void)start;
- (void)stop:(BOOL)arg1;
- (void)clearRenderTask;
- (void)clearScreen;
- (void)setFillMode:(unsigned long long)arg1;
- (void)setMirrorMode:(unsigned long long)arg1;
- (void)setRotation:(unsigned long long)arg1;
- (void)setBackgroundColor:(unsigned int)arg1;
- (void)setGSensorMode:(unsigned long long)arg1 homeOrientation:(int)arg2;
- (BOOL)isBT2020Supported;
- (id)getDisplayConfigFromMetaData:(const void *)arg1;
- (void)updateDisplayConfigFromMetaData:(shared_ptr<liteav::video::PixelFrameMetaData>)arg1;
- (void)snapshotOnComplete:(id /* block */)arg1;
- (id)convertPointToVideoFrame:(CGPoint)arg1 isFrontCamera:(BOOL)arg2;
- (void)showFocusViewAtPoint:(CGPoint)arg1;
- (CGRect)renderRect;
- (void)drawInTXCMTKView:(id)arg1;
- (id)rendererDelegate;
- (void)setRendererDelegate:(id)arg1;
- (id)queue;
- (id)mtlContext;
- (id)config;
- (id)displayConfig;
- (void)setDisplayConfig:(id)arg1;
- (id)render;
- (void)setRender:(id)arg1;
- (id)renderTarget;
- (void)setRenderTarget:(id)arg1;
- (id)renderCoords;
- (void)setRenderCoords:(id)arg1;
- (id)gSensor;
- (void)setGSensor:(id)arg1;
- (id)superView;
- (void)setSuperView:(id)arg1;
- (id)renderView;
- (void)setRenderView:(id)arg1;
- (unsigned long long)fillMode;
- (BOOL)requestClearView;
- (void)setRequestClearView:(BOOL)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

