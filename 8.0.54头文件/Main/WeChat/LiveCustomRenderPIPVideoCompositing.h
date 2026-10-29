@interface LiveCustomRenderPIPVideoCompositing : NSObject <AVVideoCompositing>
{
    BOOL _shouldCancelAllRequests; // +0x8
    NSDictionary * _sourcePixelBufferAttributes; // +0x10
    NSDictionary * _requiredPixelBufferAttributesForRenderContext; // +0x18
    MMContext * _context; // +0x20
    NSObject<OS_dispatch_queue> * _renderingQueue; // +0x28
    AVVideoCompositionRenderContext * _renderContext; // +0x30
    CIContext * _ciContext; // +0x38
    WCPIPVideoFrame * _emptyVideoFrame; // +0x40
}
- (id)init;
- (void)dealloc;
- (void)renderContextChanged:(id)arg1;
- (void)startVideoCompositionRequest:(id)arg1;
- (void)cancelAllPendingVideoCompositionRequests;
- (void)defaultHandleVideoCompositionRequest:(id)arg1;
- (void)finishVideoCompositionRequest:(id)arg1 withPixelBuffer:(__CVBuffer *)arg2;
- (id)emptyVideoFrame;
- (__CVBuffer *)createEmptyPixelBuffer;
- (void)clearEmptyVideoFrame;
- (id)ciContext;
- (id)createCIContext;
- (id)sourcePixelBufferAttributes;
- (void)setSourcePixelBufferAttributes:(id)arg1;
- (id)requiredPixelBufferAttributesForRenderContext;
- (void)setRequiredPixelBufferAttributesForRenderContext:(id)arg1;
- (id)context;
- (void)setContext:(id)arg1;
- (id)renderingQueue;
- (void)setRenderingQueue:(id)arg1;
- (BOOL)shouldCancelAllRequests;
- (void)setShouldCancelAllRequests:(BOOL)arg1;
- (id)renderContext;
- (void)setRenderContext:(id)arg1;
- (void)setCiContext:(id)arg1;
- (void)setEmptyVideoFrame:(id)arg1;
- (void).cxx_destruct;
@end

