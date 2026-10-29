@interface MMFinderLiveNewMusicSEISynchronizeLogic : NSObject
{
    unsigned int _seqCounter; // +0x8
    unsigned int _lastSeqReceived; // +0xc
    int _currProgress; // +0x10
    id <MMFinderLiveNewMusicSEISynchronizeDelegate> _delegate; // +0x18
    id <MMLiveUniqueTaskId> _taskId; // +0x20
    NSString * _uniquePlayId; // +0x28
    unsigned long long _minSEIInterval; // +0x30
    unsigned long long _lastSEISendTime; // +0x38
}
- (id)initWithTaskId:(id)arg1 delegate:(id)arg2;
- (void)initDefaultData;
- (void)clearDataOnEndPlay;
- (void)sendEndPlaySEIWithSongItem:(id)arg1;
- (void)dealloc;
- (void)registerExtensions;
- (void)unRegisterExtensions;
- (BOOL)checkNeedSendSeiWithSongItem:(id)arg1;
- (void)sendNewMusicSei:(BOOL)arg1 songItem:(id)arg2;
- (id)makeSEIDataWithSongItem:(id)arg1;
- (void)processSEIPBForNewMusicSyncRecv:(id)arg1;
- (void)onLiveNewMusicBgmPositionChanged:(int)arg1 uniqueId:(id)arg2 taskId:(id)arg3;
- (id)liveTask;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)uniquePlayId;
- (void)setUniquePlayId:(id)arg1;
- (unsigned int)seqCounter;
- (void)setSeqCounter:(unsigned int)arg1;
- (unsigned int)lastSeqReceived;
- (void)setLastSeqReceived:(unsigned int)arg1;
- (unsigned long long)minSEIInterval;
- (void)setMinSEIInterval:(unsigned long long)arg1;
- (unsigned long long)lastSEISendTime;
- (void)setLastSEISendTime:(unsigned long long)arg1;
- (int)currProgress;
- (void)setCurrProgress:(int)arg1;
- (void).cxx_destruct;
@end
