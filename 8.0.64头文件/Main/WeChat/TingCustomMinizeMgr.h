@interface TingCustomMinizeMgr : TingPlayAppMinimieBase <TingPlayAppMinimizeDelegate>
{
    id <TingPlayAppConfig> _playAppConfig; // +0x8
}
- (void)updatePlayingInfo:(id)arg1;
- (void)onTerminateMinimizeTask;
- (void)onMinimizeTaskInitInMainThread;
- (void)onForegroundStateChangedInMainThread:(BOOL)arg1;
- (BOOL)shouldTurnMinimizeActive;
- (void)onPlayingInfoChangedInMainThread:(id)arg1;
- (id)copyContainerView;
- (id)minimizeTaskDataForPlayApp;
- (id)customMinimizeStateInfoDelegate;
- (void)onNextBtnClicked:(id)arg1;
- (void)onVoiceControlRecordStart:(id)arg1;
- (void)onVoiceControlRecordEnd:(id)arg1;
- (void)onVoiceControlRecordCancalled:(id)arg1;
- (void)setVoicePeakPowerCallback:(id)arg1;
- (void)resetVoicePeakPowerCallback;
- (void)onPreviousBtnClicked:(id)arg1;
- (void)onBackwards15s:(id)arg1;
- (void)onForward30s:(id)arg1;
- (void)onSpeedFactorClicked:(id)arg1 currentFactor:(long long)arg2;
- (id)playAppConfig;
- (void)setPlayAppConfig:(id)arg1;
- (void).cxx_destruct;
@end
