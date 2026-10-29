@interface MMLiveAnchorStatusItem : NSObject <NSCopying>
{
    BOOL _focusModeOnInNormalConnectMic; // +0x8
    unsigned int _curJoinTeamMode; // +0xc
    unsigned int _curSetted_value; // +0x10
    unsigned int _lotteryAttendType; // +0x14
    unsigned long long _anchorStatusFlags; // +0x18
    unsigned long long _settingFlag; // +0x20
    unsigned long long _lotterySettingFlag; // +0x28
    unsigned long long _anchorStatusFlagVersion; // +0x30
    GameJoinTeamSetting_GameTeamUpSpecialGiftSetting * _specialGiftSetting; // +0x38
    unsigned long long _timeMs; // +0x40
}
- (id)initWithLiveExtInfo:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)getAnchorStatusBuffer;
- (BOOL)fromLiveExtInfo:(id)arg1;
- (BOOL)isLiveShoppingAvailable;
- (int)setIsLiveShoppingAvailable:(BOOL)arg1;
- (BOOL)isLiveEnableReward;
- (int)setIsLiveEnableReward:(BOOL)arg1;
- (BOOL)isLiveBanComment;
- (int)setIsLiveBanComment:(BOOL)arg1;
- (BOOL)isLiveEnableComment;
- (int)setIsLiveEnableComment:(BOOL)arg1;
- (BOOL)isLiveBanLike;
- (int)setIsLiveBanLike:(BOOL)arg1;
- (BOOL)isLiveEnableLike;
- (int)setIsLiveEnableLike:(BOOL)arg1;
- (BOOL)isLiveConnectMicEnabled;
- (int)setIsLiveConnectMicEnabled:(BOOL)arg1;
- (BOOL)isLivePureAudioMode;
- (int)setIsLivePureAudioMode:(BOOL)arg1;
- (BOOL)isLiveCutByAntispam;
- (int)setIsLiveCutByAntispam:(BOOL)arg1;
- (BOOL)isLiveEnableAskProductQuestion;
- (int)setIsLiveEnableAskProductQuestion:(BOOL)arg1;
- (BOOL)isLiveEnterBackground;
- (int)setIsLiveEnterBackground:(BOOL)arg1;
- (BOOL)isLiveSysCallInterruption;
- (int)setIsLiveSysCallInterruption:(BOOL)arg1;
- (BOOL)isLiveGameJoinTeamEnabled;
- (void)setJoinGameTeamMode:(unsigned int)arg1;
- (void)setLiveMicSettingFlag:(unsigned long long)arg1;
- (void)updateLiveLotterySettingWithFlag:(unsigned long long)arg1 andType:(unsigned int)arg2;
- (void)updateLiveLotterySetting:(id)arg1;
- (int)setFlag:(int)arg1 value:(BOOL)arg2;
- (BOOL)isLiveEnableShowBiz;
- (int)setIsLiveEnableShowBiz:(BOOL)arg1;
- (BOOL)isHiddenAudienceName;
- (int)setIsHiddenAudienceName:(BOOL)arg1;
- (BOOL)isLiveMicTalkingEnabled;
- (int)setIsLiveMicTalkingEnabled:(BOOL)arg1;
- (BOOL)enableLiveSongs;
- (int)setEnableLiveSongs:(BOOL)arg1;
- (BOOL)gesturesEnabled;
- (int)setGesturesEnabled:(BOOL)arg1;
- (BOOL)noShopInfo;
- (BOOL)openGloryList;
- (int)setNoShopInfo:(BOOL)arg1;
- (BOOL)openSkinSeg;
- (int)setOpenSkinSeg:(BOOL)arg1;
- (int)setOpenGloryList:(BOOL)arg1;
- (BOOL)enableGiftWall;
- (int)setEnableGiftWall:(BOOL)arg1;
- (BOOL)enableAnchorRealtimeDataPanel;
- (int)setEnableAnchorRealtimeDataPanel:(BOOL)arg1;
- (BOOL)enablePaidConnectMic;
- (int)setEnablePaidConnectMic:(BOOL)arg1;
- (BOOL)isLiveShowAnchorLocationEnabled;
- (int)setIsLiveShowAnchorLocationEnabled:(BOOL)arg1;
- (id)description;
- (unsigned long long)anchorStatusFlags;
- (void)setAnchorStatusFlags:(unsigned long long)arg1;
- (unsigned int)curJoinTeamMode;
- (void)setCurJoinTeamMode:(unsigned int)arg1;
- (unsigned int)curSetted_value;
- (void)setCurSetted_value:(unsigned int)arg1;
- (unsigned long long)settingFlag;
- (void)setSettingFlag:(unsigned long long)arg1;
- (unsigned long long)lotterySettingFlag;
- (void)setLotterySettingFlag:(unsigned long long)arg1;
- (unsigned int)lotteryAttendType;
- (void)setLotteryAttendType:(unsigned int)arg1;
- (unsigned long long)anchorStatusFlagVersion;
- (void)setAnchorStatusFlagVersion:(unsigned long long)arg1;
- (BOOL)focusModeOnInNormalConnectMic;
- (void)setFocusModeOnInNormalConnectMic:(BOOL)arg1;
- (id)specialGiftSetting;
- (void)setSpecialGiftSetting:(id)arg1;
- (unsigned long long)timeMs;
- (void)setTimeMs:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

