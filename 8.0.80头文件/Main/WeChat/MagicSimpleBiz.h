@interface MagicSimpleBiz : MagicBaseBiz
{
     TAG; // +0x30
     bizConfig; // +0x40
     isActive; // +0x48
     viewDelegate; // +0x50
     viewId; // +0x58
     lifecycleListeners; // +0x68
}
- (void)addLifecycleListener:(id)arg1;
- (void)activate;
- (void)deactivate;
- (void)resume;
- (void)pause;
- (void)bindViewDelegate:(id)arg1;
- (void)sendEventWithName:(id)arg1 data:(id)arg2;
- (void)testEvaluateScript:(id)arg1 callback:(id /* block */)arg2;
- (void)onDestroy;
- (id)initWithBizName:(id)arg1;
- (void).cxx_destruct;
@end
