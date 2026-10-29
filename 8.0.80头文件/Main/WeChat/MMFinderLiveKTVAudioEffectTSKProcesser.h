@interface MMFinderLiveKTVAudioEffectTSKProcesser : MMFinderLiveKTVAudioEffectBaseProcesser
{
    TSKEffectGraph * _graph; // +0x8
    __sFILE * _preProcessDumpFile; // +0x10
    __sFILE * _proProcessDumpFile; // +0x18
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
- (BOOL)debugDumpSwitch;
- (void)createPreProcessDumpFile;
- (void)closePreProcessDumpFile;
- (void)createProProcessDumpFile;
- (void)closeProProcessDumpFile;
- (void)debug_dumpPreProcessBuffer:(void *)arg1 length:(int)arg2;
- (void)debug_dumpProProcessBuffer:(void *)arg1 length:(int)arg2;
- (id)graph;
- (void)setGraph:(id)arg1;
- (__sFILE *)preProcessDumpFile;
- (void)setPreProcessDumpFile:(__sFILE *)arg1;
- (__sFILE *)proProcessDumpFile;
- (void)setProProcessDumpFile:(__sFILE *)arg1;
- (void).cxx_destruct;
@end
