@interface WCFinderLiveStarteGameModeViewModel : WCFinderStarterLiveBaseViewModel <ILocationMgrExt, WCFinderLiveExt>
{
    int _createGameLiveScene; // +0x8
    int _wxaGameLiveScene; // +0xc
    unsigned int _currJoinTeamMode; // +0x10
    unsigned int _currJoinTeamCoinValue; // +0x14
    unsigned int _scene; // +0x18
    unsigned int _opensdkVersion; // +0x1c
    unsigned int _platformId; // +0x20
    id <WCFinderStarterLiveGameViewModelDelegate> _gameDelegate; // +0x28
    NSMutableArray * _gameUserInfoList; // +0x30
    NSArray * _gameCategoryList; // +0x38
    long long _entryScene; // +0x40
    NSString * _appId; // +0x48
    MMFinderLiveGameUserInfo * _gameUserInfo; // +0x50
    GameTeamUpSpecialGiftSettingDetail * _specialGiftSetting; // +0x58
    NSData * _spamCheckInfo; // +0x60
    MMFinderLivePromoteManageLogic * _promoteManageLogic; // +0x68
    NSMutableDictionary * _opensdkGameLiveExtInfo; // +0x70
    NSString * _extraAntiInfo; // +0x78
    NSString * _gameUserId; // +0x80
    NSString * _liveDescription; // +0x88
    FinderLocation * _locationInfo; // +0x90
    NSString * _liveGameAuthTicket; // +0x98
    NSString * _liveCoverUrl; // +0xa0
    NSString * _defaultLiveCoverUrl; // +0xa8
    NSString * _finderUsername; // +0xb0
    MMFinderLiveImageOcrOp * _ocrOp; // +0xb8
    NSString * _liveObjectExportId; // +0xc0
    NSString * _extInfoAppId; // +0xc8
    NSString * _appName; // +0xd0
    NSString * _ticket; // +0xd8
}
- (void)getGameUserInfoList;
- (void)getGameUserInfoWithAppId:(id)arg1 opensdkVersion:(unsigned int)arg2 extInfoDic:(id)arg3 needFetchData:(BOOL)arg4;
- (void)initPropertyWithExtInfoDic:(id)arg1;
- (void)fetchDataWithAppId:(id)arg1;
- (BOOL)isGameLiveCreated;
- (void)getFilteredGameUserInfoWithAppId:(id)arg1;
- (void)getStickerStatusWithAppid:(id)arg1;
- (BOOL)haveFinderContact;
- (void)updateWithLiveTaskId:(id)arg1 appId:(id)arg2 andGameLiveEntryScene:(long long)arg3;
- (void)fetchLocation;
- (void)updateLiveCoverUrl:(id)arg1;
- (id)getLiveCoverUrl;
- (id)finderLiveTask;
- (void)updateGameLiveDataItemCompletion:(id /* block */)arg1;
- (void)updateLiveDescription:(id)arg1;
- (void)updateLiveGameAuthTicket:(id)arg1;
- (void)updateLocationInfoWithCachedLocation:(id)arg1;
- (void)createGameLivePrepareWithGeneralParamsModel:(id)arg1 gameLiveParams:(id)arg2 lotteryPanel:(id)arg3 Success:(id /* block */)arg4 failure:(id /* block */)arg5;
- (void)createMiniGameLiveWithAckSpamMsg:(BOOL)arg1 successBlock:(id /* block */)arg2;
- (void)asyncGetCreateLiveImageOcrSpamInfo:(id)arg1 appId:(id)arg2 coverImgUrl:(id)arg3 coverImgPath:(id)arg4 headImg:(id)arg5 headImgPath:(id)arg6 headUrl:(id)arg7 completion:(id /* block */)arg8;
- (void)assembleSpamCheckInfoWithCoverPicFeature:(id)arg1 headImgPicFeat:(id)arg2;
- (void)innerGetGameUserInfoList;
- (id)gameUserInfoList;
- (void)createRecordGameLiveWithSuccessBlock:(id /* block */)arg1;
- (id)gameDelegate;
- (void)setGameDelegate:(id)arg1;
- (void)setGameUserInfoList:(id)arg1;
- (id)gameCategoryList;
- (void)setGameCategoryList:(id)arg1;
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
- (id)opensdkGameLiveExtInfo;
- (void)setOpensdkGameLiveExtInfo:(id)arg1;
- (id)extraAntiInfo;
- (void)setExtraAntiInfo:(id)arg1;
- (id)gameUserId;
- (void)setGameUserId:(id)arg1;
- (id)liveDescription;
- (void)setLiveDescription:(id)arg1;
- (id)locationInfo;
- (void)setLocationInfo:(id)arg1;
- (id)liveGameAuthTicket;
- (void)setLiveGameAuthTicket:(id)arg1;
- (id)liveCoverUrl;
- (void)setLiveCoverUrl:(id)arg1;
- (id)defaultLiveCoverUrl;
- (void)setDefaultLiveCoverUrl:(id)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id)ocrOp;
- (void)setOcrOp:(id)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (id)liveObjectExportId;
- (void)setLiveObjectExportId:(id)arg1;
- (id)extInfoAppId;
- (void)setExtInfoAppId:(id)arg1;
- (id)appName;
- (void)setAppName:(id)arg1;
- (id)ticket;
- (void)setTicket:(id)arg1;
- (unsigned int)opensdkVersion;
- (void)setOpensdkVersion:(unsigned int)arg1;
- (unsigned int)platformId;
- (void)setPlatformId:(unsigned int)arg1;
- (void).cxx_destruct;
@end

