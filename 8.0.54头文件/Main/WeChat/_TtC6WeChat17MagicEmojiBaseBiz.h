@interface _TtC6WeChat17MagicEmojiBaseBiz : _TtC6WeChat19MagicDynamicBaseBiz
{
     runtimeView; // +0x50
     frame; // +0x58
     delegate; // +0x80
     useJitMode; // +0x88
}
- (id)runtimeView;
- (void)setRuntimeView:(id)arg1;
- (void)setFrame:(CGRect)arg1;
- (void)start;
- (void)resume;
- (void)dispatchClientEventWithEventName:(id)arg1 data:(id)arg2;
- (void)destroy;
- (void)onCreated;
- (void)onMainScriptInjected:(id)arg1;
- (void)onDestroy:(int)arg1;
- (void)onJSException:(id)arg1 msg:(id)arg2 extra:(id)arg3;
- (void)onCanvasViewCreated:(unsigned int)arg1 view:(id)arg2;
- (void)onCanvasViewLayout:(unsigned int)arg1 view:(id)arg2 left:(float)arg3 top:(float)arg4 width:(float)arg5 height:(float)arg6;
- (void)onCanvasViewDestroy:(unsigned int)arg1 view:(id)arg2;
- (void)onCanvasViewFirstFrameRendered:(unsigned int)arg1;
- (id)init;
- (void).cxx_destruct;
@end

