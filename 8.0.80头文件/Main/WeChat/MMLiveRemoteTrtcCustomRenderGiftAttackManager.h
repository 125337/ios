@interface MMLiveRemoteTrtcCustomRenderGiftAttackManager : NSObject
{
    id /* block */ _checkCanSurviveCallback; // +0x8
    MMLiveRemoteTrtcCustomRenderComposeManagerV2 * _composeManager; // +0x10
    MMLiveTaskId * _liveTaskId; // +0x18
}
- (id)initWithParam:(id)arg1;
- (void)startGiftAttack;
- (void)stopGiftAttack;
- (void)onSurviveOverTime;
- (BOOL)checkCanSurviveAfterRenderStop;
- (void)startSurviveCountDown;
- (void)cancelSurviveCountDown;
- (double)getSurviveDuration;
- (double)getRecentAverageFootPrintMemoryPercent:(id)arg1;
- (id)finderLiveTask;
- (id /* block */)checkCanSurviveCallback;
- (void)setCheckCanSurviveCallback:(id /* block */)arg1;
- (id)composeManager;
- (void)setComposeManager:(id)arg1;
- (id)liveTaskId;
- (void)setLiveTaskId:(id)arg1;
- (void).cxx_destruct;
@end
