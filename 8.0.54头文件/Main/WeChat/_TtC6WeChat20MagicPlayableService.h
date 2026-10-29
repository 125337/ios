@interface _TtC6WeChat20MagicPlayableService : MMUserService <MMServiceProtocol, IMBViewDelegate, IMBPkgManagement, IMBFileSystem, IMBLifecycle>
{
     mainScriptCallback; // +0x8
     mainScriptJSContext; // +0x18
     $__lazy_storage_$_jsApiContext; // +0x20
     config; // +0x28
     magicbrush; // +0x30
     mbCommonAdapter; // +0x38
     $__lazy_storage_$_mbVConsoleHelper; // +0x40
     containerView; // +0x48
     canvasView; // +0x50
     pkg; // +0x58
     manualPaused; // +0x60
     startTime; // +0x68
     usingOldJs; // +0x70
     bootsPkg; // +0x78
}
- (void)startWithConfig:(id)arg1;
- (void)stop;
- (void)pause;
- (void)resume;
- (void)manualResume;
- (void)setMuteWithMute:(BOOL)arg1;
- (void)sendEventWithEvent:(id)arg1 data:(id)arg2;
- (void)setContainerViewWithView:(id)arg1;
- (void)notifyMiniProgramPlayableStatusWithIsEnd:(BOOL)arg1;
- (void)onCreated;
- (void)onMainScriptInjected:(id)arg1;
- (void)onCanvasViewCreated:(unsigned int)arg1 view:(id)arg2;
- (void)onCanvasViewLayout:(unsigned int)arg1 view:(id)arg2 left:(float)arg3 top:(float)arg4 width:(float)arg5 height:(float)arg6;
- (void)onCanvasViewDestroy:(unsigned int)arg1 view:(id)arg2;
- (void)onCanvasViewFirstFrameRendered:(unsigned int)arg1;
- (void)onJSException:(id)arg1 msg:(id)arg2 extra:(id)arg3;
- (void)provideMainScriptWithJSContext:(id)arg1 callback:(id /* block */)arg2;
- (void)provideMainScript:(id /* block */)arg1;
- (id)provideFileSystem;
- (id)getFileDataByPath:(id)arg1;
- (id)readFile:(id)arg1 position:(long long)arg2 length:(long long)arg3 error:(id *)arg4;
- (id)init;
- (void).cxx_destruct;
@end

