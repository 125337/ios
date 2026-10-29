@interface TAVVideoCompositing : NSObject <AVVideoCompositing>
{
    BOOL _renderContextDidChange; // +0x8
    BOOL _shouldCancelAllRequests; // +0x9
    NSDictionary * _sourcePixelBufferAttributes; // +0x10
    NSDictionary * _requiredPixelBufferAttributesForRenderContext; // +0x18
    NSObject<OS_dispatch_queue> * _renderContextQueue; // +0x20
    NSObject<OS_dispatch_queue> * _renderingQueue; // +0x28
    AVVideoCompositionRenderContext * _renderContext; // +0x30
    TAVRenderReportData * _renderReportData; // +0x38
}
+ (void)initialize;
+ (void)setGlobalSourcePixelBufferAttributes:(id)arg1;
+ (void)setGlobalRequiredPixelBufferAttributesForRenderContext:(id)arg1;
+ (id)globalSourcePixelBufferAttributes;
+ (id)globalRequiredPixelBufferAttributesForRenderContext;
- (void)dealloc;
- (id)init;
- (void)renderContextChanged:(id)arg1;
- (void)startVideoCompositionRequest:(id)arg1;
- (void)cancelAllPendingVideoCompositionRequests;
- (__CVBuffer *)newRenderdPixelBufferForRequest:(id)arg1;
- (__CVBuffer *)RBGBuffereCopyWithPixelBuffer:(__CVBuffer *)arg1;
- (id)sourcePixelBufferAttributes;
- (void)setSourcePixelBufferAttributes:(id)arg1;
- (id)requiredPixelBufferAttributesForRenderContext;
- (void)setRequiredPixelBufferAttributesForRenderContext:(id)arg1;
- (id)renderContextQueue;
- (void)setRenderContextQueue:(id)arg1;
- (id)renderingQueue;
- (void)setRenderingQueue:(id)arg1;
- (BOOL)renderContextDidChange;
- (void)setRenderContextDidChange:(BOOL)arg1;
- (BOOL)shouldCancelAllRequests;
- (void)setShouldCancelAllRequests:(BOOL)arg1;
- (id)renderContext;
- (void)setRenderContext:(id)arg1;
- (id)renderReportData;
- (void)setRenderReportData:(id)arg1;
- (void).cxx_destruct;
@end

