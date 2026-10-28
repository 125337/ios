@interface TXCDisplayLayerVideoRenderer : TXCVideoBindableObject <TXILocalVideoRenderer>
{
    atomic<int> _mainThreadTaskCount; // +0x8
    unique_ptr<liteav::video::PixelFramePool, std::default_delete<liteav::video::PixelFramePool>> _pixelFramePool; // +0x10
    id <TXILocalVideoRendererDelegate> rendererDelegate; // +0x18
    TXCDispatchQueue * _queue; // +0x20
    TXCVideoRenderConfig * _config; // +0x28
    UIView * _superView; // +0x30
    TXCDisplayLayerView * _renderView; // +0x38
    unsigned long long _fillMode; // +0x40
    unsigned long long _renderRotation; // +0x48
}
+ (BOOL)IsHdrSupported:(int)arg1;
+ (BOOL)IsBufferTypeSupported:(int)arg1;
- (id)initWithQueue:(id)arg1 config:(id)arg2 view:(id)arg3;
- (void)dealloc;
- (void)applyConfigs;
- (void)processVideoFrame:(id)arg1 onComplete:(id /* block */)arg2;
- (BOOL)processNativePixelFrame:(shared_ptr<liteav::video::NativePixelFrame>)arg1;
- (void)createPixelFramePoolIfNeeded:(shared_ptr<liteav::video::NativePixelFrame>)arg1;
- (shared_ptr<liteav::video::NativePixelFrame>)convertByteBufferToPixelBuffer:(shared_ptr<liteav::video::NativePixelFrame>)arg1;
- (BOOL)drawFrame:(__CVBuffer *)arg1;
- (void)updateRenderView:(id)arg1;
- (BOOL)waitMainThreadTaskFinishIfNeed;
- (void)start;
- (void)stop:(BOOL)arg1;
- (void)clearRenderTask;
- (void)clearScreen;
- (void)setFillMode:(unsigned long long)arg1;
- (void)setMirrorMode:(unsigned long long)arg1;
- (void)setRotation:(unsigned long long)arg1;
- (void)setBackgroundColor:(unsigned int)arg1;
- (void)EnableTappingScreenToFocus:(BOOL)arg1;
- (void)setExternalFocusPosition:(CGPoint)arg1;
- (void)updateFrameCoordWithMetaData:(shared_ptr<liteav::video::PixelFrameMetaData>)arg1;
- (void)snapshotOnComplete:(id /* block */)arg1;
- (id)convertPointToVideoFrame:(CGPoint)arg1 isFrontCamera:(BOOL)arg2;
- (void)showFocusViewAtPoint:(CGPoint)arg1;
- (CGRect)renderRect;
- (id)rendererDelegate;
- (void)setRendererDelegate:(id)arg1;
- (id)queue;
- (id)config;
- (id)superView;
- (void)setSuperView:(id)arg1;
- (id)renderView;
- (void)setRenderView:(id)arg1;
- (unsigned long long)fillMode;
- (unsigned long long)renderRotation;
- (void)setRenderRotation:(unsigned long long)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
