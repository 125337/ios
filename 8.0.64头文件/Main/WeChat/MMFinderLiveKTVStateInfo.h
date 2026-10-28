@interface MMFinderLiveKTVStateInfo : NSObject <MMFinderLiveKTVSEISyncRecvExt, NSCopying>
{
    BOOL _useVideo; // +0x8
    BOOL _isPause; // +0x9
    BOOL _disableScoreAdjust; // +0xa
    BOOL _isSingerVoicing; // +0xb
    BOOL _logWhenFree; // +0xc
    BOOL _isCurrSingBySelf; // +0xd
    BOOL _isCurrSingAsMinor; // +0xe
    BOOL _singerSelfVoicing; // +0xf
    BOOL _isDirty; // +0x10
    int _totalScore; // +0x14
    int _realTimeScore; // +0x18
    int _realTimeScoreSentenceIndex; // +0x1c
    int _ktvScoreEngineFlag; // +0x20
    int _wonderfulBeginTime; // +0x24
    int _wonderfulEndTime; // +0x28
    int _majorBgmVolume; // +0x2c
    int _majorBgmPitch; // +0x30
    int _singerSelfVoicingCount; // +0x34
    int _userStatusFlag; // +0x38
    NSString * _currSongId; // +0x40
    NSString * _currUniqueId; // +0x48
    NSString * _currSingerUserId; // +0x50
    NSString * _currSongName; // +0x58
    long long _singState; // +0x60
    long long _singMode; // +0x68
    NSString * _scoreLevelStr; // +0x70
    NSString * _nextSongName; // +0x78
    NSString * _nextSongId; // +0x80
    long long _majorBgmChannel; // +0x88
    long long _chorusSingAsMinorError; // +0x90
    MMFinderLiveKTVSongItem * _songItem; // +0x98
    MMFinderLiveKSKitMusicSong * _songData; // +0xa0
    id <MMLiveUniqueTaskId> _taskId; // +0xa8
    unsigned long long _currSingerSelfVolumn; // +0xb0
}
+ (int)transferSingStateToPbSingState:(long long)arg1;
+ (int)transferSingModeToPbSingMode:(long long)arg1;
+ (int)transferBgmChannelToPbBgmChannel:(unsigned long long)arg1;
+ (long long)transferPbSingStateToSingState:(int)arg1;
+ (long long)transferPbSingModeToSingMode:(int)arg1;
+ (long long)transferPbBgmChannelToBgmChannel:(int)arg1;
+ (BOOL)checkBgmVolumeIsValid:(int)arg1;
+ (BOOL)checkBgmPitchIsValid:(int)arg1;
+ (BOOL)checkBgmChanelIsValid:(int)arg1;
+ (id)transferMinorErrorToDesc:(long long)arg1;
- (id)initWithTaskId:(id)arg1;
- (void)dealloc;
- (void)registerExtensions;
- (void)unRegisterExtensions;
- (void)initDefaultDatas;
- (void)updateNewState:(id)arg1;
- (void)updateNewState:(id)arg1 force:(BOOL)arg2 notify:(BOOL)arg3;
- (id)genSnapShot;
- (void)beginSong:(id)arg1 singMode:(long long)arg2;
- (void)startSing:(id)arg1;
- (void)updateSongData:(id)arg1;
- (void)manualNotifyUpdateAfterSongBegin;
- (void)recoverToUnSingState;
- (void)updateCurrSongBasicInfo:(id)arg1;
- (void)updateCurrSongSingerContact:(id)arg1;
- (void)updateCurrSongPauseActionState:(BOOL)arg1;
- (id)getSongItemWithUniqueId:(id)arg1;
- (void)checkSingerSelfIsVoicing:(id)arg1;
- (id)tranferToSEIKTVState;
- (BOOL)isSingingStart;
- (BOOL)isSingingNotEnd;
- (unsigned long long)getCurrSingerSelfVolumn;
- (void)tagDirty;
- (void)clearLastRecords;
- (BOOL)joinToChorusSing;
- (void)exitChorusSing;
- (void)tagChorusSingAsMinorOccurError:(long long)arg1;
- (BOOL)isChorusSingAsMinorOccurError;
- (void)clearDatas;
- (void)clearCaches;
- (BOOL)updateCurrSongId:(id)arg1;
- (BOOL)updateCurrUniqueId:(id)arg1;
- (BOOL)updateUseVideo:(BOOL)arg1;
- (BOOL)updateIsPause:(BOOL)arg1;
- (BOOL)updateIsSingerVoicing:(BOOL)arg1;
- (BOOL)updateDisableScoreAdjust:(BOOL)arg1;
- (BOOL)updateCurrSingerUserId:(id)arg1 force:(BOOL)arg2;
- (BOOL)updateCurrSongName:(id)arg1;
- (BOOL)updateSingState:(long long)arg1 force:(BOOL)arg2;
- (BOOL)updateSingMode:(long long)arg1;
- (BOOL)updateMajorBgmVolume:(int)arg1;
- (BOOL)updateMajorBgmChannel:(long long)arg1;
- (BOOL)updateMajorBgmPitch:(int)arg1;
- (BOOL)updateScoreEngineFlag:(int)arg1;
- (BOOL)updateWonderfulPositionBegin:(int)arg1 end:(int)arg2;
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
- (long long)singMode;
- (void)setSingMode:(long long)arg1;
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
- (int)wonderfulBeginTime;
- (void)setWonderfulBeginTime:(int)arg1;
- (int)wonderfulEndTime;
- (void)setWonderfulEndTime:(int)arg1;
- (long long)majorBgmChannel;
- (void)setMajorBgmChannel:(long long)arg1;
- (int)majorBgmVolume;
- (void)setMajorBgmVolume:(int)arg1;
- (int)majorBgmPitch;
- (void)setMajorBgmPitch:(int)arg1;
- (BOOL)isCurrSingBySelf;
- (void)setIsCurrSingBySelf:(BOOL)arg1;
- (BOOL)isCurrSingAsMinor;
- (void)setIsCurrSingAsMinor:(BOOL)arg1;
- (long long)chorusSingAsMinorError;
- (void)setChorusSingAsMinorError:(long long)arg1;
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
