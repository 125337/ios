@interface HearingAidInitLogic : NSObject
{
    BOOL _isAudioInterrupted; // +0x8
    id /* block */ _prepareCallback; // +0x10
    HearingAidRecorderLogic * _recorder; // +0x18
    IWaveAudioHAidInterface * _waveAudioHAidInterface; // +0x20
    NSMutableArray * _soundDB; // +0x28
    NSMutableArray * _avgsoundDBList; // +0x30
    unsigned long long _returnIsQuietTime; // +0x38
    unsigned long long _returnAvgDBTime; // +0x40
}
- (id)init;
- (BOOL)voiceResourcesIsReady;
- (void)startDownloadResource;
- (void)startPrepare:(id /* block */)arg1;
- (id /* block */)prepareCallback;
- (void)setPrepareCallback:(id /* block */)arg1;
- (id)recorder;
- (void)setRecorder:(id)arg1;
- (IWaveAudioHAidInterface *)waveAudioHAidInterface;
- (void)setWaveAudioHAidInterface:(IWaveAudioHAidInterface *)arg1;
- (id)soundDB;
- (void)setSoundDB:(id)arg1;
- (id)avgsoundDBList;
- (void)setAvgsoundDBList:(id)arg1;
- (unsigned long long)returnIsQuietTime;
- (void)setReturnIsQuietTime:(unsigned long long)arg1;
- (unsigned long long)returnAvgDBTime;
- (void)setReturnAvgDBTime:(unsigned long long)arg1;
- (BOOL)isAudioInterrupted;
- (void)setIsAudioInterrupted:(BOOL)arg1;
- (void).cxx_destruct;
@end
