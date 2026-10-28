@interface TingSysVADImpl : UnitRCObjcBaseClass <TingAudioRecorderListener, EVADProcessorDelegate, TingVAD>
{
    UnitRCWeakPtr * _listener; // +0x8
    EVADProcessor * _evad; // +0x10
    id <TingVADListener> _vadListener; // +0x18
}
- (void)start;
- (void)stop;
- (void)createEVADProcessor;
- (void)releaseEVADProcessor;
- (void)setVADListener:(id)arg1;
- (void)onVADDetectSpeakingToSlience:(long long)arg1 data:(id)arg2;
- (void)onVADDetectFirstStart:(id)arg1;
- (void)onVADDetectSilentTooLong;
- (void)onVADDetectSlienceToSpeaking:(long long)arg1 data:(id)arg2 HasSpeak:(BOOL)arg3;
- (void)onBuffer:(id)arg1;
- (void)onAudioRecorderStarted;
- (id)listener;
- (void)setListener:(id)arg1;
- (id)evad;
- (void)setEvad:(id)arg1;
- (id)vadListener;
- (void)setVadListener:(id)arg1;
- (void).cxx_destruct;
@end
