@interface MMFinderLiveKTVAudioEffectTSKProcesser : MMFinderLiveKTVAudioEffectBaseProcesser
{
    TSKEffectGraph * _graph; // +0x8
}
- (void)createEffectGraph;
- (void)freeEffectGraph;
- (void)updateOptimizeReverbSetting;
- (unsigned long long)effectTypeForReverbType:(unsigned long long)arg1;
- (BOOL)startAudioProcesser;
- (BOOL)stopAudioProcesser;
- (BOOL)process:(id)arg1;
- (BOOL)updateSettingParam:(id)arg1;
- (id)supportedReverbTypes;
- (id)graph;
- (void)setGraph:(id)arg1;
- (void).cxx_destruct;
@end

