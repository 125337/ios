@interface TingVoiceTranslateListenerCpp : UnitRCObjcBaseProxyClass <TingVoiceTranslateListener>
- (void)onVoiceTransResultChange:(id)arg1 inputId:(int)arg2;
- (void)onVoiceTransEnd:(int)arg1;
- (void)onVoiceTransTimeout:(int)arg1;
- (void)onBeginRecording:(int)arg1 errorCode:(int)arg2;
- (void)onLevelMeter:(int)arg1 peakPower:(float)arg2;
- (void)onVoiceDetectSilenceToSpeaking:(int)arg1;
@end
