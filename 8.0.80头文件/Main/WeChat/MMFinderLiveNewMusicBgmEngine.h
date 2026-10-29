@interface MMFinderLiveNewMusicBgmEngine : NSObject <MMFinderLiveKTVBGMEngineDelegate, MMLiveTaskMgrExt>
{
    BOOL _isPlaying; // +0x8
    int _lastTimePosition; // +0xc
    MMFinderLiveKTVSongItem * _songItem; // +0x10
    MMFinderLiveTaskId * _taskId; // +0x18
    MMFinderLiveKTVBGMEngine * _bgmEngine; // +0x20
    MMFinderLiveKSKitMusicSong * _resourceData; // +0x28
}
- (id)initWithTaskId:(id)arg1;
- (void)dealloc;
- (void)registerExtensions;
- (void)unRegisterExtensions;
- (BOOL)startSingWithSongItem:(id)arg1 resourceData:(id)arg2;
- (void)onLiveTrtcCapturedAudioFrame:(id)arg1;
- (long long)getMusicChannel;
- (void)setMusicChannel:(long long)arg1 cache:(BOOL)arg2;
- (void)setPlayoutVolume:(long long)arg1 business:(long long)arg2;
- (void)unSetPlayoutVolume:(long long)arg1;
- (void)initDefaultData;
- (void)stop;
- (void)pause;
- (void)resume;
- (BOOL)isPlaying;
- (void)onPlayBGMEnd;
- (void)onPlayBGMPaused;
- (void)onPlayBGMStoped;
- (void)onPlayBGMProgress:(long long)arg1 allDuration:(long long)arg2;
- (id)liveTask;
- (id)bgmEngine;
- (void)setIsPlaying:(BOOL)arg1;
- (id)songItem;
- (void)setSongItem:(id)arg1;
- (int)lastTimePosition;
- (void)setLastTimePosition:(int)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (void)setBgmEngine:(id)arg1;
- (id)resourceData;
- (void)setResourceData:(id)arg1;
- (void).cxx_destruct;
@end
