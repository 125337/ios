@interface MMFinderLiveKTVStateInfo : NSObject <MMFinderLiveKTVSEISyncRecvExt, NSCopying>
{
    BOOL _useVideo; // +0x8
    BOOL _isPause; // +0x9
    BOOL _disableScoreAdjust; // +0xa
    BOOL _isSingerVoicing; // +0xb
    BOOL _logWhenFree; // +0xc
    BOOL _isCurrSingBySelf; // +0xd
    BOOL _singerSelfVoicing; // +0xe
    BOOL _isDirty; // +0xf
    int _totalScore; // +0x10
    int _realTimeScore; // +0x14
    int _realTimeScoreSentenceIndex; // +0x18
    int _ktvScoreEngineFlag; // +0x1c
    int _singerSelfVoicingCount; // +0x20
    int _userStatusFlag; // +0x24
    NSString * _currSongId; // +0x28
    NSString * _currUniqueId; // +0x30
    NSString * _currSingerUserId; // +0x38
    NSString * _currSongName; // +0x40
    long long _singState; // +0x48
    NSString * _scoreLevelStr; // +0x50
    NSString * _nextSongName; // +0x58
    NSString * _nextSongId; // +0x60
    MMFinderLiveKTVSongItem * _songItem; // +0x68
    MMFinderLiveKSKitMusicSong * _songData; // +0x70
    id <MMLiveUniqueTaskId> _taskId; // +0x78
    unsigned long long _currSingerSelfVolumn; // +0x80
}
+ (int)transferSingStateToPbSingState:(long long)arg1;
+ (long long)transferPbSingStateToSingState:(int)arg1;
- (id)initWithTaskId:(id)arg1;
- (void)dealloc;
- (void)registerExtensions;
- (void)unRegisterExtensions;
- (void)updateNewState:(id)arg1;
- (void)updateNewState:(id)arg1 force:(BOOL)arg2;
- (id)genSnapShot;
- (void)beginSong:(id)arg1;
- (void)startSing:(id)arg1;
- (void)manualNotifyUpdateAfterSongBegin;
- (void)recoverToUnSingState;
- (void)updateCurrSongBasicInfo:(id)arg1;
- (void)updateCurrSongSingerContact:(id)arg1;
- (void)updateCurrSongPauseActionState:(BOOL)arg1;
- (id)getSongItemWithUniqueId:(id)arg1;
- (void)checkSingerSelfIsVoicing:(id)arg1;
- (id)tranferToSEIKTVState;
- (BOOL)isSingingStart;
- (unsigned long long)getCurrSingerSelfVolumn;
- (void)tagDirty;
- (void)clearLastRecords;
- (void)clearDatas;
- (void)clearCaches;
- (BOOL)updateCurrSongId:(id)arg1;
- (BOOL)updateCurrUniqueId:(id)arg1;
- (BOOL)updateUseVideo:(BOOL)arg1;
- (BOOL)updateIsPause:(BOOL)arg1;
- (BOOL)updateIsSingerVoicing:(BOOL)arg1;
- (BOOL)updateDisableScoreAdjust:(BOOL)arg1;
- (BOOL)updateCurrSingerUserId:(id)arg1;
- (BOOL)updateCurrSongName:(id)arg1;
- (BOOL)updateSingState:(long long)arg1 force:(BOOL)arg2;
- (BOOL)updateScoreEngineFlag:(int)arg1;
- (BOOL)isSingStateNeedCheck:(long long)arg1;
- (BOOL)updateTotalScore:(int)arg1;
- (BOOL)updateRealTimeScore:(int)arg1 sentenceIndex:(int)arg2;
- (BOOL)updateScoreLevelStr:(id)arg1;
- (BOOL)updateNextSongName:(id)arg1;
- (BOOL)updateSongItem;
- (id)getKTVManageLogic;
- (id)liveTask;
- (BOOL)isCurrEndOrCancel;
- (int)voicingCountThreshold;
- (int)volumeThreshold;
- (id)copyWithZone:(_NSZone *)arg1;
- (void)updateUserStatusFlagToSEIKTVState:(id)arg1;
- (void)onLiveSEIKTVStateSyncRecv:(id)arg1 ktvSeiData:(id)arg2 taskId:(id)arg3;
- (void)updateSEIKTVState:(id)arg1 ktvSeiData:(id)arg2;
- (void)transferSEIUserStatus:(int)arg1 toKTVState:(id)arg2;
- (id)currSongId;
- (void)setCurrSongId:(id)arg1;
- (id)currUniqueId;
- (void)setCurrUniqueId:(id)arg1;
- (id)currSingerUserId;
- (void)setCurrSingerUserId:(id)arg1;
- (id)currSongName;
- (void)setCurrSongName:(id)arg1;
- (BOOL)useVideo;
- (void)setUseVideo:(BOOL)arg1;
- (long long)singState;
- (void)setSingState:(long long)arg1;
- (int)totalScore;
- (void)setTotalScore:(int)arg1;
- (int)realTimeScore;
- (void)setRealTimeScore:(int)arg1;
- (int)realTimeScoreSentenceIndex;
- (void)setRealTimeScoreSentenceIndex:(int)arg1;
- (id)scoreLevelStr;
- (void)setScoreLevelStr:(id)arg1;
- (BOOL)isPause;
- (void)setIsPause:(BOOL)arg1;
- (BOOL)disableScoreAdjust;
- (void)setDisableScoreAdjust:(BOOL)arg1;
- (id)nextSongName;
- (void)setNextSongName:(id)arg1;
- (id)nextSongId;
- (void)setNextSongId:(id)arg1;
- (BOOL)isSingerVoicing;
- (void)setIsSingerVoicing:(BOOL)arg1;
- (int)ktvScoreEngineFlag;
- (void)setKtvScoreEngineFlag:(int)arg1;
- (BOOL)logWhenFree;
- (void)setLogWhenFree:(BOOL)arg1;
- (BOOL)isCurrSingBySelf;
- (void)setIsCurrSingBySelf:(BOOL)arg1;
- (id)songItem;
- (void)setSongItem:(id)arg1;
- (id)songData;
- (void)setSongData:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (int)singerSelfVoicingCount;
- (void)setSingerSelfVoicingCount:(int)arg1;
- (BOOL)singerSelfVoicing;
- (void)setSingerSelfVoicing:(BOOL)arg1;
- (int)userStatusFlag;
- (void)setUserStatusFlag:(int)arg1;
- (unsigned long long)currSingerSelfVolumn;
- (void)setCurrSingerSelfVolumn:(unsigned long long)arg1;
- (BOOL)isDirty;
- (void)setIsDirty:(BOOL)arg1;
- (void).cxx_destruct;
@end

