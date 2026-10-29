@interface _TtC6WeChat28MagicSclBizFlutterPluginBase : NSObject <MMFlutterPlugin, _TtP6WeChat26IMBSclExternalViewDelegate_>
{
     mbPlugin; // +0x8
     flutterApi; // +0x10
     dpr; // +0x18
     pendingCreateCanvas; // +0x20
     pendingLayoutCanvas; // +0x28
     pendingLock; // +0x30
     pendingTasksAfterAttach; // +0x38
     pendingTasksAfterBind; // +0x40
     rootMap; // +0x48
     weakEngine; // +0x50
     control; // +0x58
     randomNum; // +0x68
}
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)onCanvasViewCreated:(unsigned int)arg1 view:(id)arg2;
- (void)onCanvasViewLayout:(unsigned int)arg1 view:(id)arg2 left:(float)arg3 top:(float)arg4 width:(float)arg5 height:(float)arg6;
- (void)onCanvasViewDestroy:(unsigned int)arg1 view:(id)arg2;
- (void)onCanvasViewFirstFrameRendered:(unsigned int)arg1;
- (void)onFrameSetResizeWithFrameSet:(id)arg1;
- (void)onCanvasIdAndFrameSetIdBindWithCanvasId:(unsigned int)arg1 frameSetId:(id)arg2;
- (void)setGestureRectsWithBizName:(id)arg1 frameSetId:(id)arg2 canvasId:(unsigned int)arg3 rects:(id)arg4;
- (void)removeCoverWithFrameSetId:(id)arg1;
- (id)init;
- (void).cxx_destruct;
@end

