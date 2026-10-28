@interface _TtC6WeChat14MagicRewardBiz : NSObject <IMBViewDelegate, IMBLifecycle>
{
     magicbrush; // +0x8
     adapter; // +0x10
     packageUDR; // +0x18
     $__lazy_storage_$_mbVConsoleHelper; // +0x20
     $__lazy_storage_$_semaphore; // +0x28
     envStatus; // +0x30
     eventTaskQueue; // +0x38
     runtimeView; // +0x58
     $__lazy_storage_$_rewardViewWeakMap; // +0x60
     _rewardView; // +0x68
}
- (void)dealloc;
- (void)onCanvasViewCreated:(unsigned int)arg1 view:(id)arg2;
- (void)onCanvasViewLayout:(unsigned int)arg1 view:(id)arg2 left:(float)arg3 top:(float)arg4 width:(float)arg5 height:(float)arg6;
- (void)onCanvasViewDestroy:(unsigned int)arg1 view:(id)arg2;
- (void)onCreated;
- (void)onMainScriptInjected:(id)arg1;
- (void)onDestroy:(int)arg1;
- (id)init;
- (void).cxx_destruct;
@end
