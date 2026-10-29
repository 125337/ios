@interface MMFinderLiveKTVAudioEffectBaseProcesser : NSObject
{
    BOOL _initSucc; // +0x8
    BOOL _isStart; // +0x9
    id <MMFinderLiveKTVProcesserDelegate> _processerDelegate; // +0x10
    LiveKTVAudioEffectProcessInitParam * _settingParam; // +0x18
    unsigned long long _settingReverbType; // +0x20
    NSRecursiveLock * _audioProcesserLock; // +0x28
}
- (id)initWithParam:(id)arg1;
- (void)dealloc;
- (void)initDefaultDatas;
- (void)configAudioEffectCacheSettings;
- (BOOL)isFrameUnitParamLegal:(id)arg1;
- (int)getSampleSize:(int)arg1 sampleRate:(int)arg2 format:(unsigned long long)arg3 frameDuration:(int)arg4;
- (void)updateOptimizeReverbSetting;
- (id)audioSettingCache;
- (BOOL)checkNeedIgnoreFrameProcess:(id)arg1;
- (BOOL)startAudioProcesser;
- (BOOL)stopAudioProcesser;
- (BOOL)process:(id)arg1;
- (void)setOptimizeReverbType:(unsigned long long)arg1;
- (unsigned long long)optimizeReverbType;
- (BOOL)updateSettingParam:(id)arg1;
- (id)supportedReverbTypes;
- (id)processerDelegate;
- (void)setProcesserDelegate:(id)arg1;
- (BOOL)initSucc;
- (void)setInitSucc:(BOOL)arg1;
- (BOOL)isStart;
- (void)setIsStart:(BOOL)arg1;
- (id)settingParam;
- (void)setSettingParam:(id)arg1;
- (unsigned long long)settingReverbType;
- (void)setSettingReverbType:(unsigned long long)arg1;
- (id)audioProcesserLock;
- (void)setAudioProcesserLock:(id)arg1;
- (void).cxx_destruct;
@end

