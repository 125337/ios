@interface MMKSLiveAudioPlayer : NSObject <KSAudioPlayerProtocol>
{
    BOOL _manualProcessInterrup; // +0x8
    BOOL _pauseOnHeadPhoneOut; // +0x9
    BOOL _bIsObservering; // +0xa
    BOOL _bIsManualPaused; // +0xb
    BOOL _isPendingPlay; // +0xc
    BOOL _isPreparing; // +0xd
    double _playbackRate; // +0x10
    KSSongInfo * _curSong; // +0x18
    id <KSAudioPlayerDelegate> _delegate; // +0x20
    unsigned long long _status; // +0x28
    double _cacheProgress; // +0x30
    double _bufferTime; // +0x38
    AVPlayer * _player; // +0x40
    AVPlayerItem * _currentPlayerItem; // +0x48
    double _seekTime; // +0x50
    double _resumeTime; // +0x58
}
- (void)dealloc;
- (id)init;
- (BOOL)play:(id)arg1;
- (BOOL)play:(id)arg1 seekTime:(double)arg2;
- (void)stop;
- (void)internalStop;
- (void)pause;
- (void)resume;
- (void)seek:(double)arg1;
- (double)firstBufTime;
- (id)dataProviderDetail;
- (id)errDetail;
- (unsigned long long)errType;
- (double)duration;
- (double)curTime;
- (double)cacheProgress;
- (unsigned int)secondCacheCnt;
- (double)playTimeWithNoPause;
- (double)bufferTime;
- (double)playbackRate;
- (void)setPlaybackRate:(double)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setStatus:(unsigned long long)arg1 error:(id)arg2;
- (void)setStatus:(unsigned long long)arg1 error:(id)arg2 presetParams:(id)arg3;
- (void)setVolume:(float)arg1;
- (float)volume;
- (void)releasePlayer;
- (void)addObserver;
- (void)removeObserver;
- (void)onPlayerDidFinishPlaying;
- (void)onPlayerItemFailedToPlayToEndTime:(id)arg1;
- (id)curSong;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)status;
- (BOOL)manualProcessInterrup;
- (void)setManualProcessInterrup:(BOOL)arg1;
- (BOOL)pauseOnHeadPhoneOut;
- (void)setPauseOnHeadPhoneOut:(BOOL)arg1;
- (void)setCacheProgress:(double)arg1;
- (void)setBufferTime:(double)arg1;
- (id)player;
- (void)setPlayer:(id)arg1;
- (id)currentPlayerItem;
- (void)setCurrentPlayerItem:(id)arg1;
- (double)seekTime;
- (void)setSeekTime:(double)arg1;
- (double)resumeTime;
- (void)setResumeTime:(double)arg1;
- (BOOL)bIsObservering;
- (void)setBIsObservering:(BOOL)arg1;
- (BOOL)bIsManualPaused;
- (void)setBIsManualPaused:(BOOL)arg1;
- (BOOL)isPendingPlay;
- (void)setIsPendingPlay:(BOOL)arg1;
- (BOOL)isPreparing;
- (void)setIsPreparing:(BOOL)arg1;
- (void).cxx_destruct;
@end
