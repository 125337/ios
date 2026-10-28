@interface WCFinderLiveGameTeamModel : NSObject
{
    int _scene; // +0x8
    int _role; // +0xc
    unsigned int _joinTeamMode; // +0x10
    FinderJumpInfo * _playTogetherIconJumpInfo; // +0x18
    MMFinderLiveTask * _finderLiveTask; // +0x20
    NSString * _gameAppId; // +0x28
    NSString * _entraAntiInfo; // +0x30
    NSString * _gameUserId; // +0x38
    NSString * _headImgUrl; // +0x40
    long long _gamePlatformId; // +0x48
    NSString * _nickname; // +0x50
    GameTeamUpSpecialGiftSettingDetail * _specialGiftSetting; // +0x58
    NSString * _dataFromGame; // +0x60
    NSString * _gameClientParams; // +0x68
    NSString * _uxInfo; // +0x70
    NSString * _commentScene; // +0x78
    NSString * _enterImmerseType; // +0x80
}
- (id)playTogetherIconJumpInfo;
- (void)setPlayTogetherIconJumpInfo:(id)arg1;
- (id)finderLiveTask;
- (void)setFinderLiveTask:(id)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (int)role;
- (void)setRole:(int)arg1;
- (id)gameAppId;
- (void)setGameAppId:(id)arg1;
- (id)entraAntiInfo;
- (void)setEntraAntiInfo:(id)arg1;
- (id)gameUserId;
- (void)setGameUserId:(id)arg1;
- (id)headImgUrl;
- (void)setHeadImgUrl:(id)arg1;
- (long long)gamePlatformId;
- (void)setGamePlatformId:(long long)arg1;
- (id)nickname;
- (void)setNickname:(id)arg1;
- (unsigned int)joinTeamMode;
- (void)setJoinTeamMode:(unsigned int)arg1;
- (id)specialGiftSetting;
- (void)setSpecialGiftSetting:(id)arg1;
- (id)dataFromGame;
- (void)setDataFromGame:(id)arg1;
- (id)gameClientParams;
- (void)setGameClientParams:(id)arg1;
- (id)uxInfo;
- (void)setUxInfo:(id)arg1;
- (id)commentScene;
- (void)setCommentScene:(id)arg1;
- (id)enterImmerseType;
- (void)setEnterImmerseType:(id)arg1;
- (void).cxx_destruct;
@end
