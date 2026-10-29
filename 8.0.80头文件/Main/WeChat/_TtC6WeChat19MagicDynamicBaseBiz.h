@interface _TtC6WeChat19MagicDynamicBaseBiz : _TtC6WeChat19MBDynamicBizContext <IMBViewDelegate, IMBLifecycle, MBCommonAdapterDelegate>
{
     magicbrush; // +0x10
     mbCommonAdapter; // +0x18
     mbVConsoleHelper; // +0x20
     created; // +0x28
     pendingStart; // +0x29
     paused; // +0x2a
     mainScriptInjected; // +0x2b
     pendingEvents; // +0x30
     lock; // +0x38
     viewController; // +0x40
     jsapiContextImpl; // +0x48
}
- (id)init;
- (void)setup:(id)arg1;
- (void)start;
- (void)pause;
- (void)resume;
- (void)sendEventWithName:(id)arg1 params:(id)arg2;
- (void)destroy;
- (id)provideCurrentViewController;
- (unsigned int)getDebugModeType;
- (void)onCreated;
- (void)onMainScriptInjected:(id)arg1;
- (void)onJSException:(id)arg1 msg:(id)arg2 extra:(id)arg3;
- (void)onDestroy:(int)arg1;
- (void)onCanvasViewCreated:(unsigned int)arg1 view:(id)arg2;
- (void)onCanvasViewLayout:(unsigned int)arg1 view:(id)arg2 left:(float)arg3 top:(float)arg4 width:(float)arg5 height:(float)arg6;
- (void)onCanvasViewFirstFrameRendered:(unsigned int)arg1;
- (void)onCanvasViewDestroy:(unsigned int)arg1 view:(id)arg2;
- (void).cxx_destruct;
@end
