@interface _TtC6WeChat34MagicAgentRuntimePixelBufferPlugin : NSObject <_TtP6WeChat26IMBSclExternalViewDelegate_>
{
     biz; // +0x8
}
- (void)onCanvasViewCreated:(unsigned int)arg1 view:(id)arg2;
- (void)onCanvasViewFirstFrameRendered:(unsigned int)arg1;
- (void)onCanvasIdAndFrameSetIdBindWithCanvasId:(unsigned int)arg1 frameSetId:(id)arg2;
- (void)onCanvasViewLayout:(unsigned int)arg1 view:(id)arg2 left:(float)arg3 top:(float)arg4 width:(float)arg5 height:(float)arg6;
- (void)onCanvasViewDestroy:(unsigned int)arg1 view:(id)arg2;
- (void)onFrameSetResizeWithFrameSet:(id)arg1;
- (void)setGestureRectsWithBizName:(id)arg1 frameSetId:(id)arg2 canvasId:(unsigned int)arg3 rects:(id)arg4;
- (void)removeCoverWithFrameSetId:(id)arg1;
- (BOOL)shouldUsePixelBufferForCanvas:(unsigned int)arg1;
- (id)init;
- (void).cxx_destruct;
@end
