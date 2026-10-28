@interface MJVoiceInputProcessor : NSObject
{
    BOOL _isProcessing; // +0x8
    unsigned int _dataSliceLength; // +0xc
    float _gain; // +0x10
    unsigned int _processedSliceOffset; // +0x14
    unsigned int _processedSliceIndex; // +0x18
    unsigned int _inputDataLength; // +0x1c
    id <MJVoiceInputProcessorDelegate> _delegate; // +0x20
    MJAudioFileManager * _audioFileManager; // +0x28
    NSString * _processingIdentifier; // +0x30
    long long _sampleRate; // +0x38
    NSString * _pcmFilePath; // +0x40
    NSObject<OS_dispatch_queue> * _ioQueue; // +0x48
    OMCAudioWaveformGenerator * _waveformGen; // +0x50
    MJVocalAdjustmentCache * _vocalAdjustmentCache; // +0x58
    unsigned long long _denoiseType; // +0x60
    MJVoiceInputDenoiser * _denoiser; // +0x68
}
+ (id)adjustVolumeForPCMData:(id)arg1 withGain:(float)arg2;
+ (id)float32DataWithSInt16Data:(id)arg1;
- (id)initWithAudioFileManager:(id)arg1 sampleRate:(long long)arg2 dataSliceLength:(unsigned int)arg3 gain:(float)arg4 vocalAdjustmentCache:(id)arg5;
- (void)dealloc;
- (void)resetWithDataSliceLength:(unsigned int)arg1 gain:(float)arg2;
- (void)reset;
- (void)startProcessingWithIdentifier:(id)arg1;
- (void)appendProcessingData:(id)arg1;
- (void)stopProcessing;
- (void)notifyWaveformUpdateWithPCMData:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned int)dataSliceLength;
- (void)setDataSliceLength:(unsigned int)arg1;
- (float)gain;
- (void)setGain:(float)arg1;
- (id)audioFileManager;
- (id)processingIdentifier;
- (void)setProcessingIdentifier:(id)arg1;
- (unsigned int)processedSliceOffset;
- (void)setProcessedSliceOffset:(unsigned int)arg1;
- (unsigned int)processedSliceIndex;
- (void)setProcessedSliceIndex:(unsigned int)arg1;
- (BOOL)isProcessing;
- (void)setIsProcessing:(BOOL)arg1;
- (long long)sampleRate;
- (void)setSampleRate:(long long)arg1;
- (id)pcmFilePath;
- (void)setPcmFilePath:(id)arg1;
- (id)ioQueue;
- (void)setIoQueue:(id)arg1;
- (unsigned int)inputDataLength;
- (void)setInputDataLength:(unsigned int)arg1;
- (id)waveformGen;
- (id)vocalAdjustmentCache;
- (void)setVocalAdjustmentCache:(id)arg1;
- (unsigned long long)denoiseType;
- (void)setDenoiseType:(unsigned long long)arg1;
- (id)denoiser;
- (void).cxx_destruct;
@end
