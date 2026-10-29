@interface MMFinderLiveMusicDataMgr : MMUserService <MMServiceProtocol>
{
    BOOL _hasMusicInfo; // +0x8
    BOOL _recentSynchronizeResult; // +0x9
    unsigned long long _allMusicDataCount; // +0x10
    NSMutableArray * _musicSourceDataArray; // +0x18
    NSMutableArray * _briefMusicInfos; // +0x20
}
+ (BOOL)isArray:(id)arg1 equalArray:(id)arg2;
+ (BOOL)isEqualBetween:(id)arg1 with:(id)arg2;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)updateFinderLiveBaseMusicInfo:(id)arg1;
- (BOOL)getMusicDataListFromIndex:(unsigned long long)arg1 limitCount:(unsigned long long)arg2 taskId:(id)arg3 completion:(id /* block */)arg4;
- (void)getMusicDataListWithSongIdArray:(id)arg1 briefMusicInfo:(id)arg2 taskId:(id)arg3 completion:(id /* block */)arg4;
- (BOOL)containsBriefMusicInfo:(id)arg1;
- (void)insertBriefMusicInfo:(id)arg1 atIndex:(unsigned long long)arg2 withTaskId:(id)arg3;
- (void)deleteBriefMusicInfo:(id)arg1 atIndex:(unsigned long long)arg2 withTaskId:(id)arg3;
- (void)synchronizeBriefMusicInfos:(id)arg1 withTaskId:(id)arg2;
- (BOOL)isMusicDataItemContain:(id)arg1;
- (id)musicSourceDataArray;
- (id)briefMusicInfos;
- (unsigned long long)allMusicDataCount;
- (long long)currentMusicDataState;
- (id)currentSongIdCopyArr;
- (void)synchronizeSongIdArrayWithTaskId:(id)arg1;
- (void)notifyAllDataCountChanged;
- (void)innerSynchronizeSongIdArrayWithTaskIdDelay:(id)arg1;
- (void)setAllMusicDataCount:(unsigned long long)arg1;
- (void)setMusicSourceDataArray:(id)arg1;
- (void)setBriefMusicInfos:(id)arg1;
- (BOOL)hasMusicInfo;
- (void)setHasMusicInfo:(BOOL)arg1;
- (BOOL)recentSynchronizeResult;
- (void)setRecentSynchronizeResult:(BOOL)arg1;
- (void).cxx_destruct;
@end
