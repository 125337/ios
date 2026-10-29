@interface TRTCAudioConfig : NSObject
{
    BOOL _isEnabled; // +0x8
    BOOL _isCustomCapture; // +0x9
    BOOL _isAgcEnabled; // +0xa
    BOOL _isAnsEnabled; // +0xb
    BOOL _isEarMonitoringEnabled; // +0xc
    BOOL _isVolumeEvaluationEnabled; // +0xd
    BOOL _isVadDetectWhenVolumeEvaluate; // +0xe
    long long _sampleRate; // +0x10
    long long _route; // +0x18
    long long _newVolumeType; // +0x20
    long long _audioQuality; // +0x28
    unsigned long long _volumeEvaluationInterval; // +0x30
}
- (id)init;
- (void)dealloc;
- (void)loadFromLocal;
- (void)saveToLocal;
- (unsigned long long)currVolumeEvaluationInterval;
- (long long)sampleRate;
- (void)setSampleRate:(long long)arg1;
- (BOOL)isEnabled;
- (void)setIsEnabled:(BOOL)arg1;
- (BOOL)isCustomCapture;
- (void)setIsCustomCapture:(BOOL)arg1;
- (long long)route;
- (void)setRoute:(long long)arg1;
- (long long)newVolumeType;
- (void)setNewVolumeType:(long long)arg1;
- (long long)audioQuality;
- (void)setAudioQuality:(long long)arg1;
- (BOOL)isAgcEnabled;
- (void)setIsAgcEnabled:(BOOL)arg1;
- (BOOL)isAnsEnabled;
- (void)setIsAnsEnabled:(BOOL)arg1;
- (BOOL)isEarMonitoringEnabled;
- (void)setIsEarMonitoringEnabled:(BOOL)arg1;
- (BOOL)isVolumeEvaluationEnabled;
- (void)setIsVolumeEvaluationEnabled:(BOOL)arg1;
- (unsigned long long)volumeEvaluationInterval;
- (void)setVolumeEvaluationInterval:(unsigned long long)arg1;
- (BOOL)isVadDetectWhenVolumeEvaluate;
- (void)setIsVadDetectWhenVolumeEvaluate:(BOOL)arg1;
@end
