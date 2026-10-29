@interface MMFinderLiveKTVTrialListenManageLogic : NSObject
{
    BOOL _isTrialListenPlaying; // +0x8
    id /* block */ _playCallback; // +0x10
    long long _currProcessState; // +0x18
    MMLiveTaskId * _taskId; // +0x20
    MMFinderLiveKSKitMusicSong * _currSongData; // +0x28
    MMLiveStorageCleanupPinningToken * _songResourcesPinningToken; // +0x30
    MMFinderLiveKTVTrialListenPlayer * _trialListenPlayer; // +0x38
    TrialListenBGMInfo * _currBgmInfo; // +0x40
}
- (id)initWithTaskId:(id)arg1;
- (void)dealloc;
- (long long)start:(id)arg1;
- (long long)stop;
- (long long)getOthersVolumeWhenTrialPlaying;
- (void)prepareResources;
- (void)startTrialPlay;
- (void)clearCurrentStates;
- (void)notifyPlaying:(BOOL)arg1;
- (void)createTrialListenPlayerIfNeed;
- (void)updateProcessState:(long long)arg1;
- (id)liveTask;
- (id)currSong;
- (id /* block */)playCallback;
- (void)setPlayCallback:(id /* block */)arg1;
- (long long)currProcessState;
- (void)setCurrProcessState:(long long)arg1;
- (BOOL)isTrialListenPlaying;
- (void)setIsTrialListenPlaying:(BOOL)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)currSongData;
- (void)setCurrSongData:(id)arg1;
- (id)songResourcesPinningToken;
- (void)setSongResourcesPinningToken:(id)arg1;
- (id)trialListenPlayer;
- (void)setTrialListenPlayer:(id)arg1;
- (id)currBgmInfo;
- (void)setCurrBgmInfo:(id)arg1;
- (void).cxx_destruct;
@end
