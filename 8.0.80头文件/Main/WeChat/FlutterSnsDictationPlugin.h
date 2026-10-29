@interface FlutterSnsDictationPlugin : NSObject <MMDictationLogicObserver, MMFlutterPlugin, PlatformDictationApi>
{
    BOOL _waitingForFinalResult; // +0x8
    MMDictationLogic * _dictationLogic; // +0x10
    FlutterDictationCallbackApi * _callbackApi; // +0x18
}
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (id)startDictationWithError:(id *)arg1;
- (void)stopDictationWithError:(id *)arg1;
- (void)onDictationBegan:(id)arg1;
- (void)onDictationLevelMeter:(float)arg1;
- (void)onDictationRecordStopped:(id)arg1 reason:(long long)arg2;
- (void)onDictationEnd:(id)arg1 endFlag:(long long)arg2 stopMode:(long long)arg3 displayText:(id)arg4;
- (void)onDictationResult:(id)arg1 shouldCover:(BOOL)arg2;
- (void)notifyState:(unsigned long long)arg1 text:(id)arg2;
- (id)dictationLogic;
- (void)setDictationLogic:(id)arg1;
- (id)callbackApi;
- (void)setCallbackApi:(id)arg1;
- (BOOL)waitingForFinalResult;
- (void)setWaitingForFinalResult:(BOOL)arg1;
- (void).cxx_destruct;
@end
