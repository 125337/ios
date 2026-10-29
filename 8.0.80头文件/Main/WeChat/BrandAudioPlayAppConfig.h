@interface BrandAudioPlayAppConfig : NSObject <MinimizeTaskStateInfoDelegate, ITingPlayAppConfig>
{
    id <TingPlayAppMinimizeDelegate> _minimizeDelegate; // +0x8
}
- (int)identifier;
- (int)audioModuleScene;
- (id)minimizeTaskBizName;
- (void)onMinimizeTap;
- (void)updateTaskDataBeforeMinimize:(id)arg1;
- (id)minimizeStateDelegate;
- (void)onTerminateMinimizeTask;
- (BOOL)openPreloadPlayer;
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
- (id)minimizeDelegate;
- (void)setMinimizeDelegate:(id)arg1;
- (void).cxx_destruct;
@end
