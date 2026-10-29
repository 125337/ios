@interface MMFinderLiveGameContext : NSObject
{
    BOOL _hasClickJoinTeamButton; // +0x8
    BOOL _notPassOpenIdOnLaunchGame; // +0x9
    unsigned int _lastJoinGameMode; // +0xc
    unsigned int _platformId; // +0x10
    MMFinderLiveGameTeamInfo * _gameTeamInfo; // +0x18
    FinderLiveGameInfo * _gameInfo; // +0x20
    NSString * _lastJoinGameLaunchParam; // +0x28
    MMFinderLiveGameTeamWAGameJumpInfo * _lastJoinGameWaGameJumpInfo; // +0x30
    OrderedDictionary * _joinTeamQualifications; // +0x38
    GameTeamUpPaymentSetting * _joinTeamPaymentSetting; // +0x40
    GameLiveJumpInfo * _gameLiveJumpInfo; // +0x48
    GeneralGameLiveInfo * _generalGameLiveInfo; // +0x50
    FinderLiveGameData * _liveGameData; // +0x58
    MMFinderLiveGameUserInfo * _gameUserInfo; // +0x60
}
- (id)init;
- (void)copyJoinTeamQualificationsFromPB:(id)arg1;
- (BOOL)isSupportGameDynamicCard;
- (id)description;
- (BOOL)isLiveFromQQ;
- (BOOL)isLiveFromWechat;
- (id)gameTeamInfo;
- (void)setGameTeamInfo:(id)arg1;
- (id)gameInfo;
- (void)setGameInfo:(id)arg1;
- (unsigned int)lastJoinGameMode;
- (void)setLastJoinGameMode:(unsigned int)arg1;
- (id)lastJoinGameLaunchParam;
- (void)setLastJoinGameLaunchParam:(id)arg1;
- (id)lastJoinGameWaGameJumpInfo;
- (void)setLastJoinGameWaGameJumpInfo:(id)arg1;
- (id)joinTeamQualifications;
- (void)setJoinTeamQualifications:(id)arg1;
- (id)joinTeamPaymentSetting;
- (void)setJoinTeamPaymentSetting:(id)arg1;
- (id)gameLiveJumpInfo;
- (void)setGameLiveJumpInfo:(id)arg1;
- (id)generalGameLiveInfo;
- (void)setGeneralGameLiveInfo:(id)arg1;
- (BOOL)hasClickJoinTeamButton;
- (void)setHasClickJoinTeamButton:(BOOL)arg1;
- (id)liveGameData;
- (void)setLiveGameData:(id)arg1;
- (unsigned int)platformId;
- (void)setPlatformId:(unsigned int)arg1;
- (BOOL)notPassOpenIdOnLaunchGame;
- (void)setNotPassOpenIdOnLaunchGame:(BOOL)arg1;
- (id)gameUserInfo;
- (void)setGameUserInfo:(id)arg1;
- (void).cxx_destruct;
@end

