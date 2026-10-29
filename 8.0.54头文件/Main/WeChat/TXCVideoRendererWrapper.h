@interface TXCVideoRendererWrapper : TXCVideoBindableObject <TXILocalVideoRenderer>
{
    id <TXILocalVideoRendererDelegate> rendererDelegate; // +0x8
    TXCGSensor * gSensor; // +0x10
    TXCDispatchQueue * _queue; // +0x18
    TXCVideoRenderConfig * _config; // +0x20
    UIView * _superView; // +0x28
    id <TXILocalVideoRenderer> _renderer; // +0x30
    TXCDroppableDispatcher * _dispatcher; // +0x38
}
- (id)initWithQueue:(id)arg1 config:(id)arg2 view:(id)arg3;
- (void)dealloc;
- (void)recreateRendererIfNeeded:(id)arg1;
- (void)processVideoFrame:(id)arg1 onComplete:(id /* block */)arg2;
- (void)drawVideoFrame:(id)arg1 onComplete:(id /* block */)arg2;
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
- (id)rendererDelegate;
- (void)setRendererDelegate:(id)arg1;
- (id)gSensor;
- (id)queue;
- (id)config;
- (id)superView;
- (void)setSuperView:(id)arg1;
- (id)renderer;
- (void)setRenderer:(id)arg1;
- (id)dispatcher;
- (void)setDispatcher:(id)arg1;
- (void).cxx_destruct;
@end

