@interface EditVideoBGMPlayer : NSObject
{
    BOOL _muted; // +0x8
    BOOL _playOnSystemMutedState; // +0x9
    BOOL _allowsExternalPlayback; // +0xa
    BOOL _asyncLoadInfo; // +0xb
    BOOL _asyncSessionCategroy; // +0xc
    BOOL _hasReadyToPlayObserver; // +0xd
    BOOL _hasStartedPlaying; // +0xe
    id <EditVideoBGMPlayerDelegate> _delegate; // +0x10
    AVPlayer * _player; // +0x18
    NSString * _currentLocalFilePath; // +0x20
}
- (id)init;
- (void)dealloc;
- (id)player;
- (void)setMuted:(BOOL)arg1;
- (void)setAllowsExternalPlayback:(BOOL)arg1;
- (void)addCurrentItemReadyToPlayObserver;
- (void)removeCurrentItemReadyToPlayObserver;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)playMusic:(id)arg1;
- (void)asyncPlayMusicWithData:(id)arg1;
- (void)playMusicWithData:(id)arg1;
- (void)_playWithAVAsset:(id)arg1;
- (BOOL)musicDataNeedTimeCrop:(id)arg1;
- (id)assetWithUrl:(id)arg1;
- (id)assetWithLocalPath:(id)arg1 startTimeInMs:(unsigned long long)arg2 durationInMs:(unsigned long long)arg3;
- (id)getPlayerUrl;
- (struct)currentPlayerTime;
- (long long)currentTimeControlStatus;
- (id)getInnerPlayer;
- (id)urlOfCurrentlyPlayingInPlayer:(id)arg1;
- (void)pause;
- (void)resume;
- (void)updateSessionCategory;
- (void)seekToTime:(double)arg1;
- (BOOL)isPausedState;
- (BOOL)isPlayingState;
- (BOOL)shouldBePlaying;
- (double)currentPlayerItemDuration;
- (void)onEditVideoBGMPlayerPlaytoEnd;
- (void)replayMusic;
- (void)updatePlayerMuted;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)muted;
- (BOOL)playOnSystemMutedState;
- (void)setPlayOnSystemMutedState:(BOOL)arg1;
- (BOOL)allowsExternalPlayback;
- (BOOL)asyncLoadInfo;
- (void)setAsyncLoadInfo:(BOOL)arg1;
- (BOOL)asyncSessionCategroy;
- (void)setAsyncSessionCategroy:(BOOL)arg1;
- (void)setPlayer:(id)arg1;
- (BOOL)hasReadyToPlayObserver;
- (void)setHasReadyToPlayObserver:(BOOL)arg1;
- (BOOL)hasStartedPlaying;
- (void)setHasStartedPlaying:(BOOL)arg1;
- (id)currentLocalFilePath;
- (void)setCurrentLocalFilePath:(id)arg1;
- (void).cxx_destruct;
@end
