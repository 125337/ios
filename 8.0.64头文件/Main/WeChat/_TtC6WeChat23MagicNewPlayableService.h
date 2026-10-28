@interface _TtC6WeChat23MagicNewPlayableService : MMUserService <MMServiceProtocol, IMBViewDelegate, IMBLifecycle>
{
     $__lazy_storage_$_jsApiContext; // +0x8
     initConfig; // +0x10
     magicbrush; // +0x18
     mbCommonAdapter; // +0x20
     $__lazy_storage_$_mbVConsoleHelper; // +0x28
     pendingEvents; // +0x30
     containerView; // +0x38
     canvasView; // +0x40
     pkg; // +0x48
     manualPaused; // +0x50
     startTime; // +0x58
     mainScriptInjected; // +0x60
}
- (void)startWithConfig:(id)arg1;
- (void)stop;
- (void)pause;
- (void)resume;
- (void)manualResume;
- (void)setManualPauseStatus;
- (void)setMuteWithMute:(BOOL)arg1;
- (void)sendEventWithName:(id)arg1 params:(id)arg2;
- (void)setContainerViewWithView:(id)arg1;
- (void)injectJsFilesWithJsInfoFileArray:(id)arg1 completion:(id /* block */)arg2;
- (void)notifyMiniProgramPlayableStatusWithIsEnd:(BOOL)arg1;
- (void)postMessageToMiniProgramLibWithExtra:(id)arg1;
- (void)onCreated;
- (void)onMainScriptInjected:(id)arg1;
- (void)onDestroy:(int)arg1;
- (void)onCanvasViewCreated:(unsigned int)arg1 view:(id)arg2;
- (void)onCanvasViewLayout:(unsigned int)arg1 view:(id)arg2 left:(float)arg3 top:(float)arg4 width:(float)arg5 height:(float)arg6;
- (void)onCanvasViewDestroy:(unsigned int)arg1 view:(id)arg2;
- (void)onCanvasViewFirstFrameRendered:(unsigned int)arg1;
- (void)onJSException:(id)arg1 msg:(id)arg2 extra:(id)arg3;
- (id)init;
- (void).cxx_destruct;
@end
