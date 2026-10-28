@interface WAUniversalAudioPlayer : NSObject <WAUniversalAudioLoaderDelegate>
{
    BOOL _shouldPlay; // +0x8
    BOOL _isPaused; // +0x9
    BOOL _isStopped; // +0xa
    BOOL _record_isPlaying; // +0xb
    BOOL _ioCycleFixLogic; // +0xc
    unsigned int _playErrCount; // +0x10
    id <WAUniversalAudioPlayerDelegate> _delegate; // +0x18
    id <WAUniversalAudioEngineProtocol> _audioEngine; // +0x20
    NSString * _audioID; // +0x28
    NSObject<OS_dispatch_queue> * _audioQueue; // +0x30
    WAUniversalAudioPlayerInfo * _playerInfo; // +0x38
    AVAudioPlayerNode * _playerNode; // +0x40
    unsigned long long _bus; // +0x48
    WAUniversalAudioLoader * _loader; // +0x50
    NSMutableArray * _playerDataQueue; // +0x58
    double _pausedTime; // +0x60
    double _record_volume; // +0x68
    WAUniversalAudioPlayerCachePool * _cachePool; // +0x70
    NSObject<OS_dispatch_queue> * _fileQueue; // +0x78
    long long _recordSampleTime; // +0x80
}
- (id)initWithAudioID:(id)arg1 audioQueue:(id)arg2 cachePool:(id)arg3 fileQueue:(id)arg4;
- (void)dealloc;
- (void)play;
- (void)pause;
- (void)stop;
- (void)seek:(double)arg1;
- (void)loadAudio:(id)arg1;
- (void)destroy;
- (double)currentTime;
- (BOOL)isPlaying;
- (void)setVolume:(double)arg1;
- (double)volume;
- (void)terminateWithError:(id)arg1;
- (void)didDeatchPlayerNode;
- (void)playImplementation;
- (void)pauseImplementation;
- (void)stopImplementation;
- (void)seekImplementation:(double)arg1;
- (void)loadAudioImplementation:(id)arg1;
- (void)destroyImplementation;
- (BOOL)isPlayingImplementation;
- (void)setVolumeImplementation:(double)arg1;
- (double)volumeImplementation;
- (double)currentTimeImplementation;
- (void)terminateWithErrorImplementation:(id)arg1;
- (void)didDeatchPlayerNodeImplementation;
- (void)onLoaderDidLoaded:(id)arg1;
- (void)onLoaderDidSeeked:(id)arg1;
- (void)onLoaderDidError:(id)arg1 error:(id)arg2;
- (id)playerNode;
- (BOOL)reloadData:(BOOL)arg1 error:(id *)arg2 force:(BOOL)arg3;
- (void)cleanPlayerDataQueue;
- (void)cleanLoader;
- (void)resetAudioInfo;
- (void)internalStop;
- (void)internalPause;
- (void)resetPlayerTime;
- (BOOL)scheduleSegment:(id)arg1 startTime:(double)arg2 error:(id *)arg3;
- (void)playFileDidFinished:(id)arg1 queue:(id)arg2;
- (BOOL)scheduleBuffer:(id)arg1 interrupts:(BOOL)arg2 loop:(BOOL)arg3 error:(id *)arg4;
- (void)playPCMBufferDidFinished:(id)arg1 queue:(id)arg2;
- (void)throwError:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)audioEngine;
- (void)setAudioEngine:(id)arg1;
- (id)audioID;
- (void)setAudioID:(id)arg1;
- (id)audioQueue;
- (void)setAudioQueue:(id)arg1;
- (id)playerInfo;
- (void)setPlayerInfo:(id)arg1;
- (void)setPlayerNode:(id)arg1;
- (unsigned long long)bus;
- (void)setBus:(unsigned long long)arg1;
- (id)loader;
- (void)setLoader:(id)arg1;
- (BOOL)shouldPlay;
- (void)setShouldPlay:(BOOL)arg1;
- (id)playerDataQueue;
- (void)setPlayerDataQueue:(id)arg1;
- (BOOL)isPaused;
- (void)setIsPaused:(BOOL)arg1;
- (BOOL)isStopped;
- (void)setIsStopped:(BOOL)arg1;
- (double)pausedTime;
- (void)setPausedTime:(double)arg1;
- (BOOL)record_isPlaying;
- (void)setRecord_isPlaying:(BOOL)arg1;
- (double)record_volume;
- (void)setRecord_volume:(double)arg1;
- (id)cachePool;
- (void)setCachePool:(id)arg1;
- (id)fileQueue;
- (void)setFileQueue:(id)arg1;
- (long long)recordSampleTime;
- (void)setRecordSampleTime:(long long)arg1;
- (unsigned int)playErrCount;
- (void)setPlayErrCount:(unsigned int)arg1;
- (BOOL)ioCycleFixLogic;
- (void)setIoCycleFixLogic:(BOOL)arg1;
- (void).cxx_destruct;
@end
