@interface KSAudioPlayer : NSObject <KSAudioPlayerProtocol>
{
    id <KSAudioPlayerUserDefineProtocol> _userProtocol; // +0x8
    NSObject<OS_dispatch_queue> * _queue; // +0x10
    KSSongInfo * _curSong; // +0x18
    id <KSAudioPlayerDelegate> _delegate; // +0x20
    BOOL _manualProcessInterrup; // +0x28
    BOOL _pauseOnHeadPhoneOut; // +0x29
    float _volume; // +0x2c
    float _playRate; // +0x30
    BOOL _seekToPlayAuto; // +0x34
    KSNewAudioPlayerManager * _audioManager; // +0x38
    KSAudioStreamPlayBackItem * _playerItem; // +0x40
}
- (id)init;
- (id)initWithUserProtocol:(id)arg1 queue:(id)arg2;
- (void)dealloc;
- (unsigned long long)status;
- (double)duration;
- (double)cacheProgress;
- (unsigned int)secondCacheCnt;
- (double)curTime;
- (double)playTimeWithNoPause;
- (double)firstBufTime;
- (id)dataProviderDetail;
- (id)errDetail;
- (unsigned long long)errType;
- (id)curSong;
- (float)volume;
- (void)setVolume:(float)arg1;
- (float)playRate;
- (void)setPlayRate:(float)arg1;
- (BOOL)play:(id)arg1;
- (BOOL)play:(id)arg1 seekTime:(double)arg2;
- (void)stop;
- (void)pause;
- (void)resume;
- (void)seek:(double)arg1;
- (BOOL)seekSync:(double)arg1;
- (id)createDataProvider:(id)arg1;
- (BOOL)pauseInner:(BOOL)arg1;
- (BOOL)pauseSync;
- (void)pausePlayAndDownloadData;
- (BOOL)resumeInner:(BOOL)arg1;
- (BOOL)resumeSync;
- (BOOL)bAudioSessionActive;
- (id)getAudioProcessor:(id)arg1;
- (BOOL)isPlaying;
- (BOOL)isRealPlaying;
- (BOOL)isPause;
- (BOOL)isSeeking;
- (BOOL)isPlayStop;
- (void)audioPlayer:(id)arg1 status:(unsigned long long)arg2 params:(id)arg3;
- (void)audioPlayer:(id)arg1 dataBuffering:(double)arg2;
- (id)audioQueue;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)manualProcessInterrup;
- (void)setManualProcessInterrup:(BOOL)arg1;
- (BOOL)pauseOnHeadPhoneOut;
- (void)setPauseOnHeadPhoneOut:(BOOL)arg1;
- (BOOL)seekToPlayAuto;
- (void)setSeekToPlayAuto:(BOOL)arg1;
- (id)audioManager;
- (void)setAudioManager:(id)arg1;
- (id)playerItem;
- (void)setPlayerItem:(id)arg1;
- (void).cxx_destruct;
@end

