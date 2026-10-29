@interface MMFinderLiveBackgroundMusicLogic : NSObject <IRemoteControlCheckExt>
{
    BOOL _canPlayMusic; // +0x8
    NSMutableArray * _musicURLList; // +0x10
    unsigned long long _currentIndex; // +0x18
    AVPlayer * _audioPlayer; // +0x20
    unsigned long long _playerErrorCount; // +0x28
}
- (id)initWithMusicList:(id)arg1;
- (void)play;
- (void)playNext;
- (void)resumeOrPlayNext;
- (void)pause;
- (void)stop;
- (BOOL)isPlaying;
- (unsigned long long)musicCount;
- (void)dealloc;
- (void)createMusicURLListWithList:(id)arg1;
- (void)handlePlayerError;
- (void)checkAndResumeAfterEvent;
- (void)onPlayerDidFinishPlaying;
- (void)onPlayerItemFailedToPlayToEndTime:(id)arg1;
- (void)addAudioPlayerObserver;
- (void)removeAudioPlayerObserver;
- (void)addAudioSessionObserver;
- (void)removeAudioSessionObserver;
- (void)audioSessionRouteChange:(id)arg1;
- (void)audioSessionInterruption:(id)arg1;
- (void)appDidBecomeActive:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)iRemoteControlCheckShouldPlayOrPause;
- (void)iRemoteControlCheckShouldPlay;
- (void)iRemoteControlCheckShouldPause;
- (BOOL)canPlayMusic;
- (void)setCanPlayMusic:(BOOL)arg1;
- (id)musicURLList;
- (void)setMusicURLList:(id)arg1;
- (unsigned long long)currentIndex;
- (void)setCurrentIndex:(unsigned long long)arg1;
- (id)audioPlayer;
- (void)setAudioPlayer:(id)arg1;
- (unsigned long long)playerErrorCount;
- (void)setPlayerErrorCount:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

