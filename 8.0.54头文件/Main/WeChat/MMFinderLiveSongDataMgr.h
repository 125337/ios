@interface MMFinderLiveSongDataMgr : MMUserService <MMServiceProtocol>
{
    BOOL _hasMusicInfo; // +0x8
    int _lastHeartRandomValue; // +0xc
    unsigned long long _allMusicDataCount; // +0x10
    long long _currentMusicDataState; // +0x18
    unsigned long long _currSyncronizeSeq; // +0x20
    NSMutableDictionary * _blockSongMap; // +0x28
}
+ (void)setupOrderSongCommentDataItem:(id)arg1 taskId:(id)arg2 clipSongNameToAdpated:(BOOL)arg3;
- (void)onServiceInit;
- (void)onServiceClearData;
- (id)uniqueKeyForTask:(id)arg1;
- (void)getMusicDataListWithTaskId:(id)arg1 audience:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)synchronizeMusicDataList:(id)arg1 taskId:(id)arg2 completion:(id /* block */)arg3;
- (void)updateLiveSongSingingStateWithFinderTaskId:(id)arg1 songName:(id)arg2 state:(BOOL)arg3 successBlock:(id /* block */)arg4 failBlock:(id /* block */)arg5;
- (unsigned long long)genCurrentTimestampSeq;
- (unsigned long long)allMusicDataCount;
- (long long)currentMusicDataState;
- (int)lastHeartRandomValue;
- (void)setLastHeartRandomValue:(int)arg1;
- (BOOL)hasMusicInfo;
- (void)setHasMusicInfo:(BOOL)arg1;
- (unsigned long long)currSyncronizeSeq;
- (void)setCurrSyncronizeSeq:(unsigned long long)arg1;
- (id)blockSongMap;
- (void)setBlockSongMap:(id)arg1;
- (void).cxx_destruct;
@end

