@interface _TtC6WeChat13MagicEmojiBiz : _TtC6WeChat19MBDynamicBizContext <IMBViewDelegate, IMBLifecycle>
{
     createdTime; // +0x10
     delegate; // +0x20
     magicbrush; // +0x28
     adapter; // +0x30
     packageUDR; // +0x38
     $__lazy_storage_$_mbVConsoleHelper; // +0x40
     eventTaskQueue; // +0x48
     $__lazy_storage_$_semaphore; // +0x68
     envStatus; // +0x70
     $__lazy_storage_$_easterEggElementDict; // +0x78
     easterEggTimeout; // +0x80
    UIView * runtimeView; // +0x88
     frame; // +0x90
     belowInputContainerWrapper; // +0xb8
}
- (id)runtimeView;
- (void)setRuntimeView:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)setup;
- (void)start;
- (void)destroy;
- (void)sendWithScene:(long long)arg1 emojiData:(id)arg2;
- (void)dispatch:(id)arg1 data:(id)arg2;
- (void)dispatchClientEventWithEventName:(id)arg1 data:(id)arg2;
- (void)setFrame:(CGRect)arg1;
- (void)pause;
- (void)resume;
- (void)onCanvasViewCreated:(unsigned int)arg1 view:(id)arg2;
- (void)onCanvasViewLayout:(unsigned int)arg1 view:(id)arg2 left:(float)arg3 top:(float)arg4 width:(float)arg5 height:(float)arg6;
- (void)onCanvasViewDestroy:(unsigned int)arg1 view:(id)arg2;
- (void)setCoverViewContainerBelowInputCoverView:(id)arg1;
- (void)onCreated;
- (void)onMainScriptInjected:(id)arg1;
- (id)getInstanceName;
- (id)getVisibleMetaDict:(BOOL)arg1;
- (id)getMetaByID:(id)arg1 needFrame:(BOOL)arg2;
- (void)shakeAllVisiableViews:(BOOL)arg1;
- (void).cxx_destruct;
@end
