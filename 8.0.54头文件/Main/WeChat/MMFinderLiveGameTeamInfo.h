@interface MMFinderLiveGameTeamInfo : NSObject <NSCopying>
{
    BOOL _disable; // +0x8
    unsigned int _status; // +0xc
    unsigned int _inTeamingUp; // +0x10
    unsigned int _isTeamFull; // +0x14
    unsigned int _teamupGiftStatus; // +0x18
    unsigned int _teamupGiftReddot; // +0x1c
    NSString * _title; // +0x20
    NSString * _rankDesc; // +0x28
    NSString * _teamupMemberDesc; // +0x30
    NSString * _launchParam; // +0x38
    NSString * _bubbleInfo; // +0x40
    FinderLiveGameTeamInfo_GameLiveEnablePaymentPanelInfo * _panelInfo; // +0x48
    NSString * _teamupGiftDesc; // +0x50
    FinderLiveGameTeamInfo_WeappJumpInfo * _teamupGiftJumpInfo; // +0x58
    NSString * _reddotId; // +0x60
    NSString * _teamupGiftIcon; // +0x68
    NSString * _teamupGiftWordingColor; // +0x70
    NSString * _teamupGiftBackgroundColor; // +0x78
    NSString * _teamupMemberDescForAging; // +0x80
    FinderLiveGameTeamInfo_StartLiveGuide * _startLiveGuide; // +0x88
    NSString * _gameDesc; // +0x90
    FinderLiveGameTeamInfo_WeappJumpInfo * _wxaJumpInfo; // +0x98
    NSString * _joinGameButtonText; // +0xa0
    FinderLiveGameTeamInfo_FinderGameLiveWxaExtraJoinInfo * _wxaExtraJoinInfo; // +0xa8
    FinderLiveGameTeamInfo_FinderGameLiveAppInfo * _gameAppInfo; // +0xb0
    FinderLiveGameTeamInfo_GameTeamUpInfoForAndience * _gameTeamupInfoForAudience; // +0xb8
}
- (id)initWithGameTeamInfo:(id)arg1;
- (id)initWithAppMsgGameTeamInfo:(id)arg1;
- (BOOL)isWAGame;
- (id)channelExtraDataForWAGame;
- (id)waGameJumpInfo;
- (id)copyWithZone:(_NSZone *)arg1;
- (void)copyFromGameTeamInfo:(id)arg1;
- (void)copyFromAppMsgGameTeamInfo:(id)arg1;
- (BOOL)disable;
- (void)setDisable:(BOOL)arg1;
- (unsigned int)status;
- (void)setStatus:(unsigned int)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)rankDesc;
- (void)setRankDesc:(id)arg1;
- (id)teamupMemberDesc;
- (void)setTeamupMemberDesc:(id)arg1;
- (id)launchParam;
- (void)setLaunchParam:(id)arg1;
- (unsigned int)inTeamingUp;
- (void)setInTeamingUp:(unsigned int)arg1;
- (id)bubbleInfo;
- (void)setBubbleInfo:(id)arg1;
- (unsigned int)isTeamFull;
- (void)setIsTeamFull:(unsigned int)arg1;
- (id)panelInfo;
- (void)setPanelInfo:(id)arg1;
- (unsigned int)teamupGiftStatus;
- (void)setTeamupGiftStatus:(unsigned int)arg1;
- (id)teamupGiftDesc;
- (void)setTeamupGiftDesc:(id)arg1;
- (unsigned int)teamupGiftReddot;
- (void)setTeamupGiftReddot:(unsigned int)arg1;
- (id)teamupGiftJumpInfo;
- (void)setTeamupGiftJumpInfo:(id)arg1;
- (id)reddotId;
- (void)setReddotId:(id)arg1;
- (id)teamupGiftIcon;
- (void)setTeamupGiftIcon:(id)arg1;
- (id)teamupGiftWordingColor;
- (void)setTeamupGiftWordingColor:(id)arg1;
- (id)teamupGiftBackgroundColor;
- (void)setTeamupGiftBackgroundColor:(id)arg1;
- (id)teamupMemberDescForAging;
- (void)setTeamupMemberDescForAging:(id)arg1;
- (id)startLiveGuide;
- (void)setStartLiveGuide:(id)arg1;
- (id)gameDesc;
- (void)setGameDesc:(id)arg1;
- (id)wxaJumpInfo;
- (void)setWxaJumpInfo:(id)arg1;
- (id)joinGameButtonText;
- (void)setJoinGameButtonText:(id)arg1;
- (id)wxaExtraJoinInfo;
- (void)setWxaExtraJoinInfo:(id)arg1;
- (id)gameAppInfo;
- (void)setGameAppInfo:(id)arg1;
- (id)gameTeamupInfoForAudience;
- (void)setGameTeamupInfoForAudience:(id)arg1;
- (void).cxx_destruct;
@end

