@interface WCCameraModuleMgr : MMUserService <MMServiceProtocol>
{
    WCCameraModule * _activeModule; // +0x8
    WCCameraModule * _interruptionModule; // +0x10
}
- (void)setActive:(BOOL)arg1 scene:(long long)arg2 listener:(id)arg3;
- (void)setActive:(BOOL)arg1 scene:(long long)arg2 listener:(id)arg3 userData:(id)arg4;
- (void)changeActiveModule:(id)arg1;
- (void)pushInterruptionModule:(id)arg1;
- (void)deactiveModule:(id)arg1;
- (void)reportInterruptionEvent:(id)arg1 oldModule:(id)arg2;
- (id)currentActiveModule;
- (id)activeModule;
- (void)setActiveModule:(id)arg1;
- (id)interruptionModule;
- (void)setInterruptionModule:(id)arg1;
- (void).cxx_destruct;
@end
