@interface TXCMetalVideoRenderer : TXCVideoBindableObject <TXCMTKViewDelegate, TXILocalVideoRenderer>
{
    id <MTLTexture> _rgbTexture; // +0x8
    atomic<int> _mainThreadTaskCount; // +0x10
    shared_ptr<liteav::video::NativePixelFrame> _pbFrame; // +0x18
    NSObject<OS_dispatch_semaphore> * _inflate_semaphore; // +0x28
    Lock _lock; // +0x30
    SkMatrix _transform_matrix; // +0x70
    BOOL _requestClearView; // +0x98
    BOOL _enableTappingScreenToFocus; // +0x99
    id <TXILocalVideoRendererDelegate> rendererDelegate; // +0xa0
    TXCDispatchQueue * _queue; // +0xa8
    TXCMetalContext * _mtlContext; // +0xb0
    TXCVideoRenderConfig * _config; // +0xb8
    TXCMetalDisplayConfig * _displayConfig; // +0xc0
    TXCMetalRenderer * _render; // +0xc8
    TXCMetalRenderTargetView * _renderTarget; // +0xd0
    TXCRenderFrameCoords * _renderCoords; // +0xd8
    UIView * _superView; // +0xe0
    TXCMTKView * _renderView; // +0xe8
    struct _backgroundColorValue; // +0xf0
}
- (id)initWithQueue:(id)arg1 config:(id)arg2 view:(id)arg3;
- (id)render;
- (void)dealloc;
- (void)applyConfigs;
- (void)setupMetalContext:(shared_ptr<liteav::video::NativePixelFrame>)arg1;
- (void)processVideoFrame:(id)arg1 onComplete:(id /* block */)arg2;
- (BOOL)processNativePixelFrame:(shared_ptr<liteav::video::NativePixelFrame>)arg1;
- (void)updateRenderView:(id)arg1;
- (BOOL)waitForMainThreadTasksToFinish;
- (void)setRenderInputFrameSize;
- (void)start;
- (void)stop:(BOOL)arg1;
- (void)clearRenderTask;
- (void)clearScreen;
- (void)setFillMode:(unsigned long long)arg1;
- (void)setMirrorMode:(unsigned long long)arg1;
- (void)setRotation:(unsigned long long)arg1;
- (void)setBackgroundColor:(unsigned int)arg1;
- (void)updateFrameCoordWithMetaData:(shared_ptr<liteav::video::PixelFrameMetaData>)arg1;
- (void)updateFrameMatrixWithMetaData:(shared_ptr<liteav::video::PixelFrameMetaData>)arg1;
- (void)updateDisplayConfig:(shared_ptr<liteav::video::PixelFrameMetaData>)arg1 pixelFormat:(int)arg2;
- (void)snapshotOnComplete:(id /* block */)arg1;
- (id)convertPointToVideoFrame:(CGPoint)arg1 isFrontCamera:(BOOL)arg2;
- (void)showFocusViewAtPoint:(CGPoint)arg1;
- (void)EnableTappingScreenToFocus:(BOOL)arg1;
- (void)setExternalFocusPosition:(CGPoint)arg1;
- (CGRect)renderRect;
- (void)drawInTXCMTKView:(id)arg1;
- (void)onTouchPoint:(CGPoint)arg1;
- (void)onPinchScale:(double)arg1;
- (void)onSizeChange:(CGSize)arg1 sizeInPixels:(CGSize)arg2;
- (id)rendererDelegate;
- (void)setRendererDelegate:(id)arg1;
- (id)queue;
- (id)mtlContext;
- (id)config;
- (id)displayConfig;
- (void)setDisplayConfig:(id)arg1;
- (void)setRender:(id)arg1;
- (id)renderTarget;
- (void)setRenderTarget:(id)arg1;
- (id)renderCoords;
- (void)setRenderCoords:(id)arg1;
- (id)superView;
- (void)setSuperView:(id)arg1;
- (id)renderView;
- (void)setRenderView:(id)arg1;
- (BOOL)requestClearView;
- (void)setRequestClearView:(BOOL)arg1;
- (BOOL)enableTappingScreenToFocus;
- (void)setEnableTappingScreenToFocus:(BOOL)arg1;
- (struct)backgroundColorValue;
- (void)setBackgroundColorValue:(struct)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
