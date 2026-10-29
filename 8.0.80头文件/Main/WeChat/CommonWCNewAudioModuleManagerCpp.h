@interface CommonWCNewAudioModuleManagerCpp : UnitRCObjcBaseProxyClass <CommonWCNewAudioModuleManager>
+ (id)shared;
- (BOOL)activateModule:(id)arg1 listener:(id)arg2 platformConfig:(id)arg3;
- (BOOL)deactivateModule:(id)arg1;
- (BOOL)activateMixModule:(id)arg1 listener:(id)arg2;
- (BOOL)deactivateMixModule:(id)arg1;
- (BOOL)canSetActive:(id)arg1;
- (id)currentActiveModules;
- (BOOL)isAudioModuleActive:(id)arg1;
- (id)currentInterruptModules;
- (BOOL)isAudioModuleInterrupt:(id)arg1;
- (void)onSystemAudioSessionInterrupted;
- (void)onSystemAudioSessionInterruptEnd:(BOOL)arg1;
@end
