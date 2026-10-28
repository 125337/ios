@interface WCFinderCreateGameLivePrepareCGI : WCFinderLiveBaseCgi
{
    int _liveScene; // +0x8
    unsigned int _joinTeamMode; // +0xc
    unsigned int _anchorSwitchFlag; // +0x10
    unsigned int _platformId; // +0x14
    id /* block */ _successBlock; // +0x18
    id /* block */ _failBlock; // +0x20
    MMFinderLiveCreateParamsModel * _createLiveGeneralParamsModel; // +0x28
    NSString * _finderUsername; // +0x30
    FinderMedia * _coverImg; // +0x38
    NSString * _liveDescription; // +0x40
    FinderLocation * _location; // +0x48
    NSString * _liveGameAuthTicket; // +0x50
    NSString * _appId; // +0x58
    NSString * _gameUserId; // +0x60
    GameTeamUpSpecialGiftSettingDetail * _specialGiftSetting; // +0x68
}
- (id)initWithFinderUsername:(id)arg1 liveTaskId:(id)arg2 coverImg:(id)arg3 liveDescription:(id)arg4 liveGameAuthTicket:(id)arg5 appId:(id)arg6 liveScene:(int)arg7 location:(id)arg8 joinTeamMode:(unsigned int)arg9 specialGiftSetting:(id)arg10 generalParamsModel:(id)arg11 anchorSwitchFlag:(unsigned int)arg12 platformId:(unsigned int)arg13 gameUserId:(id)arg14 lotteryPanel:(id)arg15 successBlock:(id /* block */)arg16 failBlock:(id /* block */)arg17;
- (void)createRequest;
- (id)getWordingInfo;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (id)createLiveGeneralParamsModel;
- (void)setCreateLiveGeneralParamsModel:(id)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id)coverImg;
- (void)setCoverImg:(id)arg1;
- (id)liveDescription;
- (void)setLiveDescription:(id)arg1;
- (id)location;
- (void)setLocation:(id)arg1;
- (id)liveGameAuthTicket;
- (void)setLiveGameAuthTicket:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (int)liveScene;
- (void)setLiveScene:(int)arg1;
- (unsigned int)joinTeamMode;
- (void)setJoinTeamMode:(unsigned int)arg1;
- (unsigned int)anchorSwitchFlag;
- (void)setAnchorSwitchFlag:(unsigned int)arg1;
- (unsigned int)platformId;
- (void)setPlatformId:(unsigned int)arg1;
- (id)gameUserId;
- (void)setGameUserId:(id)arg1;
- (id)specialGiftSetting;
- (void)setSpecialGiftSetting:(id)arg1;
- (void).cxx_destruct;
@end
