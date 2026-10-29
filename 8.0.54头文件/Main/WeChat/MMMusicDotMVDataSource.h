@interface MMMusicDotMVDataSource : NSObject
{
    BOOL _isChatroomEnabled; // +0x8
    int _currDotIndex; // +0xc
    unsigned int _canCreateMVBitFlag; // +0x10
    unsigned int _durationInMs; // +0x14
    unsigned int _currTimeMs; // +0x18
    id <MMMusicDotMVDataSourceDelegate> _delegate; // +0x20
    MMMusicMVModel * _mvModel; // +0x28
    NSString * _statusVerifyInfo; // +0x30
    NSString * _songId; // +0x38
}
- (id)initWithMVModel:(id)arg1;
- (void)updateWithMVModel:(id)arg1;
- (void)updateTimeInfo:(id)arg1 arrFlexBasicClipTrack:(id)arg2;
- (void)updateCurrPlayedTime:(unsigned int)arg1;
- (unsigned int)getCurrPlayedTimeMs;
- (unsigned int)getCurrIndexFromCurrPlayTime:(unsigned int)arg1;
- (BOOL)isCurrentAccountBlocked;
- (BOOL)canCreateMV;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)mvModel;
- (void)setMvModel:(id)arg1;
- (int)currDotIndex;
- (void)setCurrDotIndex:(int)arg1;
- (unsigned int)canCreateMVBitFlag;
- (void)setCanCreateMVBitFlag:(unsigned int)arg1;
- (BOOL)isChatroomEnabled;
- (void)setIsChatroomEnabled:(BOOL)arg1;
- (id)statusVerifyInfo;
- (void)setStatusVerifyInfo:(id)arg1;
- (id)songId;
- (void)setSongId:(id)arg1;
- (unsigned int)durationInMs;
- (void)setDurationInMs:(unsigned int)arg1;
- (unsigned int)currTimeMs;
- (void)setCurrTimeMs:(unsigned int)arg1;
- (void).cxx_destruct;
@end

