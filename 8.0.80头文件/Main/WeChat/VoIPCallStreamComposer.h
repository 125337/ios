@interface VoIPCallStreamComposer : NSObject
{
    id <MTLDevice> _recordingDevice; // +0x8
    id <MTLRenderPipelineState> _recordingRenderPipelineState; // +0x10
    id <MTLRenderPipelineState> _recordingSmallWindowRenderPipelineState; // +0x18
    id <MTLRenderPipelineState> _recordingBGRARenderPipelineState; // +0x20
    id <MTLRenderPipelineState> _recordingBGRASmallWindowRenderPipelineState; // +0x28
    id <MTLDepthStencilState> _recordingDepthStencilState; // +0x30
    CGSize _recordingCanvasSize; // +0x38
}
- (BOOL)composeWithLocalCursor:(id)arg1 remoteCursor:(id)arg2 startNs:(unsigned long long)arg3 endNs:(unsigned long long)arg4 uiStateSnap:(id)arg5 canvasSize:(CGSize)arg6 localPlaceholders:(id)arg7 remotePlaceholders:(id)arg8 frameConsumer:(id /* block */)arg9 producedCount:(unsigned long long *)arg10;
- (void)dealloc;
- (BOOL)p_setupRecordingMetalResourcesWithCanvasSize:(CGSize)arg1;
- (id)p_createRenderPipelineStateWithFragmentFunction:(id)arg1 device:(id)arg2 library:(id)arg3;
- (BOOL)customizeRecordingRenderCommandEncoder:(id)arg1 withYMetalTexutre:(__CVBuffer *)arg2 UVMetalTexutre:(__CVBuffer *)arg3 bufferWidth:(double)arg4 bufferHeight:(double)arg5 destinationRectInCanvas:(CGRect)arg6 canvasSize:(CGSize)arg7 isMirror:(BOOL)arg8 aspectFit:(BOOL)arg9 rotateDegree:(double)arg10;
- (BOOL)customizeSmallWindowRenderCommandEncoder:(id)arg1 withYMetalTexutre:(__CVBuffer *)arg2 UVMetalTexutre:(__CVBuffer *)arg3 bufferWidth:(double)arg4 bufferHeight:(double)arg5 normalizedRectInCanvas:(CGRect)arg6 isMirror:(BOOL)arg7 aspectFit:(BOOL)arg8 rotateDegree:(double)arg9;
- (BOOL)customizeRecordingRenderCommandEncoder:(id)arg1 withBGRAMetalTexture:(__CVBuffer *)arg2 bufferWidth:(double)arg3 bufferHeight:(double)arg4 destinationRectInCanvas:(CGRect)arg5 canvasSize:(CGSize)arg6 rotateDegree:(double)arg7;
- (BOOL)customizeSmallWindowRenderCommandEncoder:(id)arg1 withBGRAMetalTexture:(__CVBuffer *)arg2 bufferWidth:(double)arg3 bufferHeight:(double)arg4 normalizedRectInCanvas:(CGRect)arg5 rotateDegree:(double)arg6;
- (long long)p_localPlaceholderStyleForUIState:(id)arg1;
- (long long)p_remotePlaceholderStyleForUIState:(id)arg1;
- (__CVPixelBufferPool *)p_createBGRACopyPoolWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 minBufferCount:(int)arg3;
- (__CVBuffer *)p_deepCopyBGRAPixelBuffer:(__CVBuffer *)arg1 pool:(__CVPixelBufferPool *)arg2;
- (id)recordingDevice;
- (void)setRecordingDevice:(id)arg1;
- (id)recordingRenderPipelineState;
- (void)setRecordingRenderPipelineState:(id)arg1;
- (id)recordingSmallWindowRenderPipelineState;
- (void)setRecordingSmallWindowRenderPipelineState:(id)arg1;
- (id)recordingBGRARenderPipelineState;
- (void)setRecordingBGRARenderPipelineState:(id)arg1;
- (id)recordingBGRASmallWindowRenderPipelineState;
- (void)setRecordingBGRASmallWindowRenderPipelineState:(id)arg1;
- (id)recordingDepthStencilState;
- (void)setRecordingDepthStencilState:(id)arg1;
- (CGSize)recordingCanvasSize;
- (void)setRecordingCanvasSize:(CGSize)arg1;
- (void).cxx_destruct;
@end
