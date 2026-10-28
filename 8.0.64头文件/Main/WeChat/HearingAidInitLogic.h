@interface HearingAidInitLogic : NSObject <HearingAidRecorderDelegate>
{
    id <HearingAidInitLogicDelegate> _delegate; // +0x8
    id /* block */ _prepareCallback; // +0x10
    HearingAidRecorderLogic * _recorder; // +0x18
    IWaveAudioHAidInterface * _waveAudioHAidInterface; // +0x20
    NSMutableArray * _soundDB; // +0x28
}
+ (id)sharedInstance;
- (id)init;
- (void)startPrepare:(id /* block */)arg1;
- (void)startNoiseDetect;
- (void)onReceiveAudioData:(id)arg1;
- (void)stopNoiseDetect;
- (double)dbToNormalized:(double)arg1 baseDb:(double)arg2 scale:(double)arg3;
- (double)dbToNormalized:(double)arg1;
- (BOOL)voiceResourcesIsReady;
- (void)startDownloadResource;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id /* block */)prepareCallback;
- (void)setPrepareCallback:(id /* block */)arg1;
- (id)recorder;
- (void)setRecorder:(id)arg1;
- (IWaveAudioHAidInterface *)waveAudioHAidInterface;
- (void)setWaveAudioHAidInterface:(IWaveAudioHAidInterface *)arg1;
- (id)soundDB;
- (void)setSoundDB:(id)arg1;
- (void).cxx_destruct;
@end
