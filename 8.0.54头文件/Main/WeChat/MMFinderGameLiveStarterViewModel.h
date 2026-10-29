@interface MMFinderGameLiveStarterViewModel : NSObject <ILocationMgrExt, WCFinderLiveExt>
{
    int _createGameLiveScene; // +0x8
    int _wxaGameLiveScene; // +0xc
    unsigned int _currJoinTeamMode; // +0x10
    unsigned int _currJoinTeamCoinValue; // +0x14
    WCFinderDataItem * _dataItem; // +0x18
    WCFinderLiveShareItem * _shareItem; // +0x20
    long long _entryScene; // +0x28
    NSString * _appId; // +0x30
    MMFinderLiveGameUserInfo * _gameUserInfo; // +0x38
    GameTeamUpSpecialGiftSettingDetail * _specialGiftSetting; // +0x40
    NSData * _spamCheckInfo; // +0x48
    MMFinderLivePromoteManageLogic * _promoteManageLogic; // +0x50
    FinderLocation * _locationInfo; // +0x58
    NSString * _liveGameAuthTicket; // +0x60
    NSString * _liveCoverUrl; // +0x68
    NSString * _defaultLiveCoverUrl; // +0x70
    NSString * _liveDescription; // +0x78
    MMLiveTaskId * _liveTaskId; // +0x80
    NSString * _finderUsername; // +0x88
    MMFinderLiveImageOcrOp * _ocrOp; // +0x90
}
- (id)initWithLiveTaskId:(id)arg1 appId:(id)arg2 andGameLiveEntryScene:(long long)arg3;
- (void)fetchLocation;
- (void)updateLiveCoverUrl:(id)arg1;
- (id)getLiveCoverUrl;
- (id)finderLiveTask;
- (void)updateGameLiveDataItemCompletion:(id /* block */)arg1;
- (void)updateLiveShareItem:(id)arg1;
- (void)updateLiveDescription:(id)arg1;
- (void)updateLiveGameAuthTicket:(id)arg1;
- (void)updateLocationInfoWithCachedLocation:(id)arg1;
- (void)createGameLivePrepareWithGeneralParamsModel:(id)arg1 gameLiveParams:(id)arg2 lotteryPanel:(id)arg3 Success:(id /* block */)arg4 failure:(id /* block */)arg5;
- (void)createMiniGameLiveWithAckSpamMsg:(BOOL)arg1 successBlock:(id /* block */)arg2;
- (void)asyncGetCreateLiveImageOcrSpamInfo:(id)arg1 appId:(id)arg2 coverImgUrl:(id)arg3 coverImgPath:(id)arg4 headImg:(id)arg5 headImgPath:(id)arg6 headUrl:(id)arg7 completion:(id /* block */)arg8;
- (void)assembleSpamCheckInfoWithCoverPicFeature:(id)arg1 headImgPicFeat:(id)arg2;
- (void)releaseCreateLiveImageOcrCache;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)shareItem;
- (void)setShareItem:(id)arg1;
- (long long)entryScene;
- (void)setEntryScene:(long long)arg1;
- (int)createGameLiveScene;
- (void)setCreateGameLiveScene:(int)arg1;
- (int)wxaGameLiveScene;
- (void)setWxaGameLiveScene:(int)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)gameUserInfo;
- (void)setGameUserInfo:(id)arg1;
- (unsigned int)currJoinTeamMode;
- (void)setCurrJoinTeamMode:(unsigned int)arg1;
- (id)specialGiftSetting;
- (void)setSpecialGiftSetting:(id)arg1;
- (unsigned int)currJoinTeamCoinValue;
- (void)setCurrJoinTeamCoinValue:(unsigned int)arg1;
- (id)spamCheckInfo;
- (void)setSpamCheckInfo:(id)arg1;
- (id)promoteManageLogic;
- (void)setPromoteManageLogic:(id)arg1;
- (id)locationInfo;
- (void)setLocationInfo:(id)arg1;
- (id)liveGameAuthTicket;
- (void)setLiveGameAuthTicket:(id)arg1;
- (id)liveCoverUrl;
- (void)setLiveCoverUrl:(id)arg1;
- (id)defaultLiveCoverUrl;
- (void)setDefaultLiveCoverUrl:(id)arg1;
- (id)liveDescription;
- (void)setLiveDescription:(id)arg1;
- (id)liveTaskId;
- (void)setLiveTaskId:(id)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id)ocrOp;
- (void)setOcrOp:(id)arg1;
- (void).cxx_destruct;
@end

