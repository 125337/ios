@interface HearingAidTestEnvironmentLogic : NSObject <HearingAidRecorderDelegate>
{
    BOOL _isAudioInterrupted; // +0x8
    float _isQuietThreshold; // +0xc
    id <HearingAidInitLogicDelegate> _delegate; // +0x10
    HearingAidRecorderLogic * _recorder; // +0x18
    IWaveAudioHAidInterface * _waveAudioHAidInterface; // +0x20
    NSMutableArray * _soundDB; // +0x28
    NSMutableArray * _avgsoundDBList; // +0x30
    unsigned long long _returnIsQuietTime; // +0x38
    unsigned long long _returnAvgDBTime; // +0x40
}
- (id)init;
- (void)startNoiseDetect;
- (void)onReceiveAudioData:(id)arg1;
- (void)stopNoiseDetect;
- (double)dbToNormalized:(double)arg1 baseDb:(double)arg2 scale:(double)arg3;
- (double)traditionalMap:(double)arg1;
- (double)customPeakPowerFromDB:(double)arg1;
- (double)dbToNormalized:(double)arg1;
- (BOOL)voiceResourcesIsReady;
- (void)startDownloadResource;
- (unsigned long long)genCurrentTimeInMs;
- (void)setAudioIsInterrupted:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
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
- (float)isQuietThreshold;
- (void)setIsQuietThreshold:(float)arg1;
- (void).cxx_destruct;
@end
