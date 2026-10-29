@interface _TtC6WeChat17MagicEmojiService : MMUserService <MMServiceProtocol>
{
     _biz; // +0x8
     delegate; // +0x10
     belowInputCoverViewContainer; // +0x18
}
- (void)onServiceInit;
- (void)onServiceTerminate;
- (void)setupWithDelegate:(id)arg1;
- (void)insertView:(id)arg1;
- (id)getRuntimeView;
- (void)clear;
- (void)safeDestroyWithDelegate:(id)arg1;
- (BOOL)trigger:(id)arg1 handler:(id)arg2;
- (void)destroy;
- (id)getBizSession;
- (BOOL)easterEggPlayAnimationWithEggKey:(id)arg1 eggId:(id)arg2 animationType:(unsigned long long)arg3 sceneId:(id)arg4 extString:(id)arg5;
- (void)easterEggGiftClickWithEggKey:(id)arg1 eggId:(id)arg2 sceneId:(id)arg3;
- (void)easterEggForceStopWithEggKey:(id)arg1 eggId:(id)arg2 stopReason:(unsigned long long)arg3 sceneId:(id)arg4;
- (CGRect)getBoundingBoxWithEggId:(id)arg1;
- (void)applicationDidBecomeActive;
- (void)applicationDidEnterBackground;
- (id)init;
- (void).cxx_destruct;
@end

