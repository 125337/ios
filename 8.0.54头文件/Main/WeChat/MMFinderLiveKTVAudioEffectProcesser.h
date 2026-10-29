@interface MMFinderLiveKTVAudioEffectProcesser : MMFinderLiveKTVAudioEffectBaseProcesser
{
    BOOL _writeToNewBuffer; // +0x8
    BOOL _isProcessedDataSizeChanged; // +0x9
    int _processedDataSize; // +0xc
    void * _processerHandler; // +0x10
    NSMutableData * _processedData; // +0x18
    __sFILE * _preProcessDumpFile; // +0x20
    __sFILE * _proProcessDumpFile; // +0x28
}
- (void)dealloc;
- (void)initDefaultDatas;
- (void)createProcesserHandler;
- (void)freeProcesserHandler;
- (void)updateOptimizeReverbSetting;
- (int)fxTypeForReverbType:(unsigned long long)arg1;
- (void)updateProcessedDataSize;
- (int)getOutSampleSizeFromInSampleSize:(int)arg1 channelCnt:(int)arg2;
- (void)resizeProcessedDataIfNeed:(int)arg1;
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
- (void *)processerHandler;
- (void)setProcesserHandler:(void *)arg1;
- (BOOL)writeToNewBuffer;
- (void)setWriteToNewBuffer:(BOOL)arg1;
- (int)processedDataSize;
- (void)setProcessedDataSize:(int)arg1;
- (BOOL)isProcessedDataSizeChanged;
- (void)setIsProcessedDataSizeChanged:(BOOL)arg1;
- (id)processedData;
- (void)setProcessedData:(id)arg1;
- (__sFILE *)preProcessDumpFile;
- (void)setPreProcessDumpFile:(__sFILE *)arg1;
- (__sFILE *)proProcessDumpFile;
- (void)setProProcessDumpFile:(__sFILE *)arg1;
- (void).cxx_destruct;
@end

