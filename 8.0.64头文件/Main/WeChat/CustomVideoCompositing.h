@interface CustomVideoCompositing : NSObject <AVVideoCompositing>
{
    BOOL _shouldCancelAllRequests; // +0x8
    BOOL _isRenderContextChanged; // +0x9
    BOOL _isInAutoRefreshMode; // +0xa
    BOOL _isDefaultPixelTimeToRefresh; // +0xb
    NSDictionary * _sourcePixelBufferAttributes; // +0x10
    NSDictionary * _requiredPixelBufferAttributesForRenderContext; // +0x18
    MMContext * _context; // +0x20
    NSObject<OS_dispatch_queue> * _renderingQueue; // +0x28
    AVVideoCompositionRenderContext * _renderContext; // +0x30
    CIContext * _ciContext; // +0x38
    WCPIPVideoFrame * _emptyVideoFrame; // +0x40
    NSMutableArray * _compositionRequestList; // +0x48
    CADisplayLink * _displayLink; // +0x50
    unsigned long long _lastPIPRenderTime; // +0x58
}
- (id)init;
- (void)dealloc;
- (void)registerExtension;
- (void)initNotifications;
- (void)renderContextChanged:(id)arg1;
- (void)startVideoCompositionRequest:(id)arg1;
- (void)cancelAllPendingVideoCompositionRequests;
- (void)defaultHandleVideoCompositionRequest:(id)arg1;
- (void)handleVideoCompositionRequest:(id)arg1;
- (void)finishVideoCompositionRequest:(id)arg1 withPixelBuffer:(__CVBuffer *)arg2;
- (__CVBuffer *)applyPixelBuffer:(__CVBuffer *)arg1 renderContext:(id)arg2;
- (id)createFitFrameImageWithRenderSize:(CGSize)arg1;
- (id)createRenderImageWithVideoFrame:(id)arg1 attachRender:(id)arg2 renderSize:(CGSize)arg3;
- (id)createRenderImageWithAttachWidget:(id)arg1 renderSize:(CGSize)arg2;
- (id)getAspectedImage:(id)arg1 withRenderObj:(id)arg2 renderSize:(CGSize)arg3;
- (CGRect)getDisplayRectWithNormalizedFrame:(CGRect)arg1 renderSize:(CGSize)arg2;
- (CGRect)transferNormalizedFrameFromCGModeToCIMode:(CGRect)arg1;
- (id)getAspectedBackImage:(CGSize)arg1;
- (id)getAspectedMaskImage:(id)arg1 renderSize:(CGSize)arg2;
- (id)getBlendedImageWithInputImage:(id)arg1 inputBackgroundImage:(id)arg2 maskImage:(id)arg3;
- (__CVBuffer *)newRenderdPixelBufferForRequest:(id)arg1;
- (void)onCustomPixelBufferRenderCompleted;
- (__CVBuffer *)createEmptyPixelBuffer;
- (void)clearEmptyVideoFrame;
- (void)startAutoRefreshPixelBuffer;
- (void)startAutoRefreshDisplayLink;
- (void)stopAutoRefreshPixelBuffer;
- (void)stopAutoRefreshDisplayLink;
- (void)setRenderContext:(id)arg1;
- (id)emptyVideoFrame;
- (id)compositionRequestList;
- (id)ciContext;
- (id)createCIContext;
- (BOOL)checkEnableHandleCompositionRequest;
- (void)onNewPixelBufferRefresh;
- (void)onAttachWidgetsChange;
- (void)finishVideoCompositionRequest;
- (void)onStartCustomPixelTransferChange;
- (void)directlyHandleCurrentVideoCompositionRequest;
- (void)onEnableDisplayVideoSrcChange:(BOOL)arg1;
- (void)refreshWithDisplayLink:(id)arg1;
- (void)willEnterForeground:(id)arg1;
- (void)didEnterBackground:(id)arg1;
- (void)logForLastPIPRenderTime:(BOOL)arg1;
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
- (BOOL)isRenderContextChanged;
- (void)setIsRenderContextChanged:(BOOL)arg1;
- (id)renderContext;
- (void)setCiContext:(id)arg1;
- (void)setEmptyVideoFrame:(id)arg1;
- (void)setCompositionRequestList:(id)arg1;
- (BOOL)isInAutoRefreshMode;
- (void)setIsInAutoRefreshMode:(BOOL)arg1;
- (id)displayLink;
- (void)setDisplayLink:(id)arg1;
- (BOOL)isDefaultPixelTimeToRefresh;
- (void)setIsDefaultPixelTimeToRefresh:(BOOL)arg1;
- (unsigned long long)lastPIPRenderTime;
- (void)setLastPIPRenderTime:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
