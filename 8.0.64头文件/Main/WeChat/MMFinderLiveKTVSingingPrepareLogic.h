@interface MMFinderLiveKTVSingingPrepareLogic : NSObject
{
    id <MMLiveUniqueTaskId> _taskId; // +0x8
    MMFinderLiveKSKitMusicSong * _songData; // +0x10
    MMLiveStorageCleanupPinningToken * _songResourcesPinningToken; // +0x18
}
- (id)initWithTaskId:(id)arg1;
- (void)prepareToStartSing;
- (void)prepareToStartSingAsMinor:(id /* block */)arg1;
- (unsigned long long)getCurrSongPrepareState;
- (void)startToPrepareSongResource:(id)arg1 resMode:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)onSingPrepareResponse:(id)arg1 succ:(BOOL)arg2;
- (id)ktvBox;
- (id)finderTaskId;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)songData;
- (void)setSongData:(id)arg1;
- (id)songResourcesPinningToken;
- (void)setSongResourcesPinningToken:(id)arg1;
- (void).cxx_destruct;
@end
