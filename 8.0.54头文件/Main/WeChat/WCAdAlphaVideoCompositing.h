@interface WCAdAlphaVideoCompositing : NSObject <WCLoopMetricsCollectorDelegate, AVVideoCompositing>
{
    BOOL _shouldCancelAllRequests; // +0x8
    NSDictionary * _sourcePixelBufferAttributes; // +0x10
    NSDictionary * _requiredPixelBufferAttributesForRenderContext; // +0x18
    NSObject<OS_dispatch_queue> * _renderContextQueue; // +0x20
    NSObject<OS_dispatch_queue> * _renderingQueue; // +0x28
    AVVideoCompositionRenderContext * _renderContext; // +0x30
    CIContext * _ciContext; // +0x38
    WCLoopMetricsCollector * _metricsCollector; // +0x40
}
- (id)init;
- (void)renderContextChanged:(id)arg1;
- (void)startVideoCompositionRequest:(id)arg1;
- (__CVBuffer *)newRenderPixelBufferForRequest:(id)arg1;
- (__CVBuffer *)createEmptyPixelBuffer;
- (id)ciContext;
- (void)loopMetricsCollection:(id)arg1 didFinishCollectingMetrics:(id)arg2;
- (id)sourcePixelBufferAttributes;
- (id)requiredPixelBufferAttributesForRenderContext;
- (id)renderContextQueue;
- (void)setRenderContextQueue:(id)arg1;
- (id)renderingQueue;
- (void)setRenderingQueue:(id)arg1;
- (BOOL)shouldCancelAllRequests;
- (void)setShouldCancelAllRequests:(BOOL)arg1;
- (id)renderContext;
- (void)setRenderContext:(id)arg1;
- (void)setCiContext:(id)arg1;
- (id)metricsCollector;
- (void)setMetricsCollector:(id)arg1;
- (void).cxx_destruct;
@end

