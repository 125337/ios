@interface PIPPerformanceComputeResult : NSObject
{
    int _fps; // +0x8
    int _fpsDifference; // +0xc
    WCLoopMetrics * _rootLoopMetrics; // +0x10
    double _pixelRenderDuration; // +0x18
    double _newRenderBufferDuration; // +0x20
    double _attachWidgetsDuration; // +0x28
    double _renderToBufferDuration; // +0x30
}
- (id)description;
- (int)pixelRenderMsDuration;
- (int)newRenderBufferMsDuration;
- (int)attachWidgetsMsDuration;
- (int)renderToBufferMsDuration;
- (int)fps;
- (void)setFps:(int)arg1;
- (id)rootLoopMetrics;
- (void)setRootLoopMetrics:(id)arg1;
- (double)pixelRenderDuration;
- (void)setPixelRenderDuration:(double)arg1;
- (double)newRenderBufferDuration;
- (void)setNewRenderBufferDuration:(double)arg1;
- (double)attachWidgetsDuration;
- (void)setAttachWidgetsDuration:(double)arg1;
- (double)renderToBufferDuration;
- (void)setRenderToBufferDuration:(double)arg1;
- (int)fpsDifference;
- (void)setFpsDifference:(int)arg1;
- (void).cxx_destruct;
@end
