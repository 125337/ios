@interface KSAudioStreamPlayBackItem : NSObject <KSAudioDataProviderDelegate, KSAudioQueueDelegate>
{
    KSAudioDataProvider * _audioDataProvider; // +0x8
    id <KSAudioFileProtocol> _audioFile; // +0x10
    unsigned long long _status; // +0x18
    NSError * _detailErr; // +0x20
    unsigned long long _errType; // +0x28
    NSObject<OS_dispatch_queue> * _queue; // +0x30
    void * _queueContext; // +0x38
    AudioStreamBasicDescription _outputFormat; // +0x40
    double _duration; // +0x68
    float _volume; // +0x70
    float _playRate; // +0x74
    BOOL _secondCacheSW; // +0x78
    BOOL _bForceStop; // +0x79
    BOOL _isPlayingEndingPause; // +0x7a
    BOOL _isPauseStatusAtPreSeek; // +0x7b
    unsigned int _secondCacheCnt; // +0x7c
    double _audioQueuePlayTime; // +0x80
    KSAudioPlayer * _audioPlayer; // +0x88
    id <KSAudioProcessorProtocol> _audioProcessor; // +0x90
    KSAudioQueue * _audioQueue; // +0x98
    double _seekTime; // +0xa0
    double _timeoffset; // +0xa8
    double _curTime; // +0xb0
    double _bufferingProgress; // +0xb8
    double _startTime; // +0xc0
    double _firstBufTime; // +0xc8
    double _secondCacheTotalDuration; // +0xd0
    double _secondCacheStartTime; // +0xd8
    unsigned long long _preStatus; // +0xe0
    long long _timmerDispatchCnt; // +0xe8
}
- (id)initWithFileProvider:(id)arg1 queue:(id)arg2 context:(void *)arg3;
- (void)dealloc;
- (BOOL)prepareAudioData:(double)arg1;
- (BOOL)pause:(BOOL)arg1;
- (BOOL)pauseSync:(BOOL)arg1;
- (BOOL)pausePlayAndDownloadData;
- (BOOL)resume:(BOOL)arg1;
- (BOOL)resumeSync:(BOOL)arg1;
- (BOOL)isStopped;
- (void)stop:(BOOL)arg1;
- (void)seek:(double)arg1;
- (BOOL)seekSync:(double)arg1;
- (BOOL)preSeekInner:(double)arg1;
- (double)firstBufTime;
- (id)dataProviderDetail;
- (void)setVolume:(float)arg1;
- (float)volume;
- (void)setPlayRate:(float)arg1;
- (float)playRate;
- (id)curSong;
- (void)setStatus:(unsigned long long)arg1;
- (double)currentTimeSync;
- (double)duration;
- (double)currentTime;
- (double)cacheProgress;
- (void)setErrType:(unsigned long long)arg1;
- (void)setDetailErr:(id)arg1;
- (void)stopInner:(BOOL)arg1;
- (BOOL)pauseInner:(BOOL)arg1;
- (BOOL)resumeInner:(BOOL)arg1;
- (BOOL)parseData:(id)arg1 desCnt:(unsigned int *)arg2 err:(id *)arg3;
- (BOOL)parseLPCMData:(id)arg1 desCnt:(unsigned int *)arg2 err:(id *)arg3;
- (BOOL)perparePlayAudio;
- (BOOL)playAudioData;
- (void)onPlayErr;
- (BOOL)seekInner:(double)arg1;
- (BOOL)isCanSeek:(double)arg1;
- (void)prepareAddtionReadData:(long long)arg1;
- (void)initOutputFormat;
- (void)audioQueue:(id)arg1 hasAvailablebuf:(id)arg2;
- (void)audioQueue:(id)arg1 stateChange:(BOOL)arg2;
- (AudioTimeStamp *)syncStartTimeStamp;
- (void)providerOnDataReady:(id)arg1;
- (void)providerOnDataReceive:(id)arg1;
- (void)providerOnDataFinish:(id)arg1;
- (void)providerOnDataErr:(id)arg1;
- (void)providerOnNetErr:(id)arg1;
- (void)provider:(id)arg1 onGuessType:(id)arg2;
- (void)provider:(id)arg1 useDefaultAudioFile:(id *)arg2;
- (unsigned long long)status;
- (id)audioDataProvider;
- (id)queue;
- (unsigned long long)errType;
- (id)detailErr;
- (void *)queueContext;
- (unsigned int)secondCacheCnt;
- (void)setSecondCacheCnt:(unsigned int)arg1;
- (double)audioQueuePlayTime;
- (void)setAudioQueuePlayTime:(double)arg1;
- (id)audioPlayer;
- (void)setAudioPlayer:(id)arg1;
- (id)audioProcessor;
- (void)setAudioProcessor:(id)arg1;
- (id)audioQueue;
- (void)setAudioQueue:(id)arg1;
- (double)seekTime;
- (void)setSeekTime:(double)arg1;
- (double)timeoffset;
- (void)setTimeoffset:(double)arg1;
- (double)curTime;
- (void)setCurTime:(double)arg1;
- (double)bufferingProgress;
- (void)setBufferingProgress:(double)arg1;
- (BOOL)secondCacheSW;
- (void)setSecondCacheSW:(BOOL)arg1;
- (double)startTime;
- (void)setStartTime:(double)arg1;
- (void)setFirstBufTime:(double)arg1;
- (double)secondCacheTotalDuration;
- (void)setSecondCacheTotalDuration:(double)arg1;
- (double)secondCacheStartTime;
- (void)setSecondCacheStartTime:(double)arg1;
- (unsigned long long)preStatus;
- (void)setPreStatus:(unsigned long long)arg1;
- (long long)timmerDispatchCnt;
- (void)setTimmerDispatchCnt:(long long)arg1;
- (BOOL)bForceStop;
- (void)setBForceStop:(BOOL)arg1;
- (BOOL)isPlayingEndingPause;
- (void)setIsPlayingEndingPause:(BOOL)arg1;
- (BOOL)isPauseStatusAtPreSeek;
- (void)setIsPauseStatusAtPreSeek:(BOOL)arg1;
- (void).cxx_destruct;
@end
