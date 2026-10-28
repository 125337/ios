@interface TingTPAudioMixTtsImpl : NSObject
{
    BOOL _isTtsEof; // +0x8
    int _waveListenStatus; // +0xc
    int _sampleNum; // +0x10
    int _sampleBuffSize; // +0x14
    int _ttsStreamType; // +0x18
    int _ttsSampleRate; // +0x1c
    int _ttsBitDepth; // +0x20
    int _ttsChannelCount; // +0x24
    int _remainTtsBufferLength; // +0x28
    int _ttsInputBufferOffset; // +0x2c
    int _totalProcessCount; // +0x30
    AudioListen3aProcessorInterface * _coreImpl; // +0x38
    unsigned long long _ttsTotalBufferLength; // +0x40
    NSMutableArray * _ttsBufferArray; // +0x48
    NSObject<OS_dispatch_semaphore> * _mutex; // +0x50
    char * _mixProcessPcmBuffer; // +0x58
    NSData * _currentTtsBuffer; // +0x60
    NSString * _tmpDataPath; // +0x68
    NSString * _ttsTmpDataPath; // +0x70
    NSString * _tmpMixDataPath; // +0x78
    mach_timebase_info _timeBase; // +0x80
    NSMutableArray * _processTimeDist; // +0x88
    double _totalProcessTime; // +0x90
}
- (id)init;
- (void)dealloc;
- (BOOL)setupWithMetaData:(id)arg1;
- (int)getSampleBufSize;
- (int)getTtsBitDepth:(int)arg1;
- (void)setAudioMixPcmBuffer:(id)arg1 hasMore:(BOOL)arg2 streamType:(int)arg3 sampleRate:(int)arg4 sampleFormat:(int)arg5 channelCount:(int)arg6;
- (id)dequeueData;
- (void)resetCurrentTtsBuffer;
- (void)fillTtsInputBuffer:(int)arg1 ttsInputBuffer:(char *)arg2;
- (id)onNotifyAudioProcessFrameOut:(id)arg1;
- (AudioListen3aProcessorInterface *)coreImpl;
- (void)setCoreImpl:(AudioListen3aProcessorInterface *)arg1;
- (int)waveListenStatus;
- (void)setWaveListenStatus:(int)arg1;
- (int)sampleNum;
- (void)setSampleNum:(int)arg1;
- (int)sampleBuffSize;
- (void)setSampleBuffSize:(int)arg1;
- (BOOL)isTtsEof;
- (void)setIsTtsEof:(BOOL)arg1;
- (int)ttsStreamType;
- (void)setTtsStreamType:(int)arg1;
- (int)ttsSampleRate;
- (void)setTtsSampleRate:(int)arg1;
- (int)ttsBitDepth;
- (void)setTtsBitDepth:(int)arg1;
- (int)ttsChannelCount;
- (void)setTtsChannelCount:(int)arg1;
- (unsigned long long)ttsTotalBufferLength;
- (void)setTtsTotalBufferLength:(unsigned long long)arg1;
- (id)ttsBufferArray;
- (void)setTtsBufferArray:(id)arg1;
- (id)mutex;
- (void)setMutex:(id)arg1;
- (char *)mixProcessPcmBuffer;
- (void)setMixProcessPcmBuffer:(char *)arg1;
- (id)currentTtsBuffer;
- (void)setCurrentTtsBuffer:(id)arg1;
- (int)remainTtsBufferLength;
- (void)setRemainTtsBufferLength:(int)arg1;
- (int)ttsInputBufferOffset;
- (void)setTtsInputBufferOffset:(int)arg1;
- (id)tmpDataPath;
- (void)setTmpDataPath:(id)arg1;
- (id)ttsTmpDataPath;
- (void)setTtsTmpDataPath:(id)arg1;
- (id)tmpMixDataPath;
- (void)setTmpMixDataPath:(id)arg1;
- (mach_timebase_info)timeBase;
- (void)setTimeBase:(mach_timebase_info)arg1;
- (id)processTimeDist;
- (void)setProcessTimeDist:(id)arg1;
- (double)totalProcessTime;
- (void)setTotalProcessTime:(double)arg1;
- (int)totalProcessCount;
- (void)setTotalProcessCount:(int)arg1;
- (void).cxx_destruct;
@end
