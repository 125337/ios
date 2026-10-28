@interface MMFinderLiveGameUserInfo : NSObject <NSCopying>
{
    BOOL _isFirstLive; // +0x8
    BOOL _hasStickers; // +0x9
    unsigned int _appStatus; // +0xc
    unsigned int _minMemSize; // +0x10
    unsigned int _playingStatus; // +0x14
    unsigned int _liveStatus; // +0x18
    unsigned int _gameType; // +0x1c
    unsigned int _gameShowType; // +0x20
    unsigned int _supportLiveType; // +0x24
    unsigned int _lastJoinTeamUpSetting; // +0x28
    unsigned int _durationMs; // +0x2c
    unsigned int _redpacketChatroomSelectStatus; // +0x30
    unsigned int _maxVisibleUserCount; // +0x34
    NSString * _appId; // +0x38
    NSString * _appName; // +0x40
    NSString * _iconUrl; // +0x48
    NSString * _downloadUrl; // +0x50
    NSString * _defaultLiveCoverUrl; // +0x58
    NSString * _captureModeTips; // +0x60
    NSMutableArray * _supportLiveTypeArray; // +0x68
    FinderLiveGetUserGameConfigResponse_Weapp * _weApp; // +0x70
    FinderLiveGetUserGameConfigResponse_GeneralCreateLivePrepareInfo * _prepareInfo; // +0x78
    NSString * _stickersUrl; // +0x80
    NSString * _liveCoverUrl; // +0x88
    NSString * _liveDescription; // +0x90
    GameLiveJoinTeamSettingInfo * _joinTeamSettings; // +0x98
    NSString * _jumpGameParam; // +0xa0
    NSMutableArray * _bannerList; // +0xa8
}
- (id)initWithPBItem:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (void)copyFromPBItem:(id)arg1;
- (id)initWithAppInfo:(id)arg1;
- (void)copyFromAppInfo:(id)arg1;
- (BOOL)canStartRecordLive;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)appName;
- (void)setAppName:(id)arg1;
- (id)iconUrl;
- (void)setIconUrl:(id)arg1;
- (id)downloadUrl;
- (void)setDownloadUrl:(id)arg1;
- (unsigned int)appStatus;
- (void)setAppStatus:(unsigned int)arg1;
- (id)defaultLiveCoverUrl;
- (void)setDefaultLiveCoverUrl:(id)arg1;
- (unsigned int)minMemSize;
- (void)setMinMemSize:(unsigned int)arg1;
- (unsigned int)playingStatus;
- (void)setPlayingStatus:(unsigned int)arg1;
- (unsigned int)liveStatus;
- (void)setLiveStatus:(unsigned int)arg1;
- (unsigned int)gameType;
- (void)setGameType:(unsigned int)arg1;
- (unsigned int)gameShowType;
- (void)setGameShowType:(unsigned int)arg1;
- (unsigned int)supportLiveType;
- (void)setSupportLiveType:(unsigned int)arg1;
- (id)captureModeTips;
- (void)setCaptureModeTips:(id)arg1;
- (id)supportLiveTypeArray;
- (void)setSupportLiveTypeArray:(id)arg1;
- (id)weApp;
- (void)setWeApp:(id)arg1;
- (id)prepareInfo;
- (void)setPrepareInfo:(id)arg1;
- (BOOL)isFirstLive;
- (void)setIsFirstLive:(BOOL)arg1;
- (BOOL)hasStickers;
- (void)setHasStickers:(BOOL)arg1;
- (id)stickersUrl;
- (void)setStickersUrl:(id)arg1;
- (id)liveCoverUrl;
- (void)setLiveCoverUrl:(id)arg1;
- (id)liveDescription;
- (void)setLiveDescription:(id)arg1;
- (id)joinTeamSettings;
- (void)setJoinTeamSettings:(id)arg1;
- (unsigned int)lastJoinTeamUpSetting;
- (void)setLastJoinTeamUpSetting:(unsigned int)arg1;
- (id)jumpGameParam;
- (void)setJumpGameParam:(id)arg1;
- (id)bannerList;
- (void)setBannerList:(id)arg1;
- (unsigned int)durationMs;
- (void)setDurationMs:(unsigned int)arg1;
- (unsigned int)redpacketChatroomSelectStatus;
- (void)setRedpacketChatroomSelectStatus:(unsigned int)arg1;
- (unsigned int)maxVisibleUserCount;
- (void)setMaxVisibleUserCount:(unsigned int)arg1;
- (void).cxx_destruct;
@end
