@interface WCFinderLiveInfo : NSObject <WCTColumnCoding, PBCoding>
{
    BOOL _replayPrivilege; // +0x8
    BOOL _enableReplayByDefault; // +0x9
    BOOL _guideGenerationReplay; // +0xa
    BOOL _supprtJumpNav; // +0xb
    BOOL _disableShareCardExpose; // +0xc
    BOOL _liveCardDisableAutoPlay; // +0xd
    unsigned int _onlineCnt; // +0x10
    unsigned int _anchorLiveStatus; // +0x14
    unsigned int _sharePageStatus; // +0x18
    unsigned int _startTime; // +0x1c
    unsigned int _likeCnt; // +0x20
    unsigned int _endTime; // +0x24
    unsigned int _participantCnt; // +0x28
    unsigned int _extFlag; // +0x2c
    unsigned int _sourceType; // +0x30
    unsigned int _subSourceType; // +0x34
    unsigned int _liveBusinessType; // +0x38
    unsigned int _secondaryDeviceFlag; // +0x3c
    unsigned int _autoPlayPriority; // +0x40
    unsigned int _wxaGameAppVersionType; // +0x44
    unsigned int _replayStatus; // +0x48
    unsigned int _maxOnlineCount; // +0x4c
    unsigned int _audiencesAvgSeconds; // +0x50
    unsigned int _previewJoinliveDelaySeconds; // +0x54
    unsigned int _bizLiveNewFansNum; // +0x58
    unsigned int _liveFlag; // +0x5c
    unsigned int _liveVrType; // +0x60
    unsigned int _liveElapsedTime; // +0x64
    unsigned int _spamLiveExtFlag; // +0x68
    unsigned int _ktvPlayerCount; // +0x6c
    unsigned long long _liveId; // +0x70
    unsigned long long _liveStatus; // +0x78
    unsigned long long _audienceEndPageControl; // +0x80
    NSString * _streamUrl; // +0x88
    FinderLiveExtInfo * _liveExtInfo; // +0x90
    FinderLiveMediaSpec * _liveSpec; // +0x98
    FinderLiveSdkChannelInfo * _liveSdkChannelInfo; // +0xa0
    unsigned long long _rewardTotalAmountInWecoin; // +0xa8
    unsigned long long _rewardTotalAmountInHeat; // +0xb0
    FinderLiveTabInfo * _liveTabInfo; // +0xb8
    NSString * _liveBarMsg; // +0xc0
    unsigned long long _newLikeCount; // +0xc8
    NSString * _gameAppId; // +0xd0
    FinderLiveLayerShowInfo * _layerDisplayInfo; // +0xd8
    FinderLiveUrlOption * _trialUrlOption; // +0xe0
    FinderLivePurchaseInfo * _livePurchaseInfo; // +0xe8
    NSString * _replayUrl; // +0xf0
    unsigned long long _anchorStatusFlag; // +0xf8
    LiveSdkInfo * _liveSdkInfo; // +0x100
    unsigned long long _anchorLiveroomFunctionSwitch; // +0x108
    unsigned long long _heatValue; // +0x110
    unsigned long long _liveHeatValue; // +0x118
    NSString * _liveHeatValueStr; // +0x120
    NSMutableArray * _liveActivityType; // +0x128
    FinderBizUserInfo * _bizUserInfo; // +0x130
    NSMutableArray * _multiReason; // +0x138
    FinderLiveReplayInfo * _replayInfo; // +0x140
    NSString * _liveSquareParticipantWording; // +0x148
    FinderLiveEventInfo * _activityInfo; // +0x150
    LiveConcertInfo * _liveConcertInfo; // +0x158
    NSString * _statusDesc; // +0x160
    FinderLiveRewardWishListInfo * _rewardWishListInfo; // +0x168
    IntercomMicInfo * _intercomMicInfo; // +0x170
    FinderLiveCoverInfo * _coverInfo; // +0x178
    FinderJumpInfo * _liveDataDetailsJump; // +0x180
    FinderGetLiveInfoResp_LiveCoverImage * _liveCover; // +0x188
    NSMutableArray * _entranceAdInfos; // +0x190
    FinderLiveMicInfo * _liveMicInfo; // +0x198
    FinderLiveShopTagInfo * _liveShopTagInfo; // +0x1a0
    FinderLiveAnchorReplaceInfo * _anchorReplaceInfo; // +0x1a8
    unsigned long long _streamPreviewJoinliveControlFlag; // +0x1b0
    unsigned long long _livePermissionFlag; // +0x1b8
    unsigned long long _heatPromotionAudienceTotalCount; // +0x1c0
    unsigned long long _heatPromotionNewFansTotalCount; // +0x1c8
    unsigned long long _heatPromotionPayTotalAmountInCents; // +0x1d0
    unsigned long long _totalGmv; // +0x1d8
    FinderMemberLiveInfo * _memberLiveInfo; // +0x1e0
    FinderLivePrivilegeInfo * _livePrivilegeInfo; // +0x1e8
    unsigned long long _fansAudiencePercent; // +0x1f0
    unsigned long long _rewardAudienceCnt; // +0x1f8
    FinderJumpInfo * _creatorCenterEntrance; // +0x200
    NSMutableArray * _closePageActivityBanner; // +0x208
    NSString * _liveDataDetailsJumpWording; // +0x210
    LiveCrowdfundGiftInfo * _giftGoalInfo; // +0x218
    FinderLiveFeedBackInfo * _finderLiveFeedbackInfo; // +0x220
    long long _relatedLiveViewModelId; // +0x228
    FinderLiveModeInfo * _modeInfo; // +0x230
    LiveOnlineInfo * _liveOnlineInfo; // +0x238
    FinderLiveAnchorCloseLivePageData * _anchorCloselivepageData; // +0x240
    FinderLiveKtvSettingsInfo * _ktvSettingsInfo; // +0x248
    FinderLiveAnchorQuestEntrance * _anchorQuestEntrance; // +0x250
    NSString * _replayCommentVisibilityOptionWording; // +0x258
    unsigned long long _forwardCnt; // +0x260
    FinderLiveAutoGenReplayOption * _autoGenReplayOption; // +0x268
    FinderLiveAnchorCloseLiveThankGuide * _thankGuide; // +0x270
    LiveSdkParams * _sdkParams; // +0x278
}
+ (void)PBArrayAdd_liveId;
+ (void)PBArrayAdd_onlineCnt;
+ (void)PBArrayAdd_liveStatus;
+ (void)PBArrayAdd_streamUrl;
+ (void)PBArrayAdd_startTime;
+ (void)PBArrayAdd_likeCnt;
+ (void)PBArrayAdd_endTime;
+ (void)PBArrayAdd_liveExtInfo;
+ (void)PBArrayAdd_liveSdkChannelInfo;
+ (void)PBArrayAdd_participantCnt;
+ (void)PBArrayAdd_extFlag;
+ (void)PBArrayAdd_rewardTotalAmountInWecoin;
+ (void)PBArrayAdd_liveSpec;
+ (void)PBArrayAdd_sourceType;
+ (void)PBArrayAdd_liveTabInfo;
+ (void)PBArrayAdd_liveBarMsg;
+ (void)PBArrayAdd_liveBusinessType;
+ (void)PBArrayAdd_newLikeCount;
+ (void)PBArrayAdd_secondaryDeviceFlag;
+ (void)PBArrayAdd_autoPlayPriority;
+ (void)PBArrayAdd_layerDisplayInfo;
+ (void)PBArrayAdd_anchorStatusFlag;
+ (void)PBArrayAdd_liveSdkInfo;
+ (void)PBArrayAdd_maxOnlineCount;
+ (void)PBArrayAdd_audiencesAvgSeconds;
+ (void)PBArrayAdd_previewJoinliveDelaySeconds;
+ (void)PBArrayAdd_liveFlag;
+ (void)PBArrayAdd_bizUserInfo;
+ (void)PBArrayAdd_trialUrlOption;
+ (void)PBArrayAdd_livePurchaseInfo;
+ (void)PBArrayAdd_replayUrl;
+ (void)PBArrayAdd_replayStatus;
+ (void)PBArrayAdd_multiReason;
+ (void)PBArrayAdd_liveVrType;
+ (void)PBArrayAdd_replayInfo;
+ (void)PBArrayAdd_liveSquareParticipantWording;
+ (void)PBArrayAdd_activityInfo;
+ (void)PBArrayAdd_statusDesc;
+ (void)PBArrayAdd_replayPrivilege;
+ (void)PBArrayAdd_liveConcertInfo;
+ (void)PBArrayAdd_intercomMicInfo;
+ (void)PBArrayAdd_coverInfo;
+ (void)PBArrayAdd_liveCover;
+ (void)PBArrayAdd_entranceAdInfos;
+ (void)PBArrayAdd_liveMicInfo;
+ (void)PBArrayAdd_liveElapsedTime;
+ (void)PBArrayAdd_spamLiveExtFlag;
+ (void)PBArrayAdd_liveShopTagInfo;
+ (void)PBArrayAdd_anchorReplaceInfo;
+ (void)PBArrayAdd_streamPreviewJoinliveControlFlag;
+ (void)PBArrayAdd_memberLiveInfo;
+ (void)PBArrayAdd_livePrivilegeInfo;
+ (void)PBArrayAdd_heatPromotionAudienceTotalCount;
+ (void)PBArrayAdd_heatPromotionNewFansTotalCount;
+ (void)PBArrayAdd_heatPromotionPayTotalAmountInCents;
+ (void)PBArrayAdd_totalGmv;
+ (void)PBArrayAdd_livePermissionFlag;
+ (void)PBArrayAdd_finderLiveFeedbackInfo;
+ (void)PBArrayAdd_modeInfo;
+ (void)PBArrayAdd_anchorCloselivepageData;
+ (void)PBArrayAdd_subSourceType;
+ (void)PBArrayAdd_anchorLiveStatus;
+ (void)PBArrayAdd_sharePageStatus;
+ (void)PBArrayAdd_audienceEndPageControl;
+ (void)PBArrayAdd_disableShareCardExpose;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (unsigned long long)columnTypeForWCDB;
+ (id)finderLiveInfoFrom:(id)arg1;
+ (unsigned int)transferToFinderLiveSourceType:(unsigned int)arg1;
+ (unsigned int)transferToSrcFinderLiveSourceType:(unsigned int)arg1;
- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (id)genFinderLiveObject;
- (BOOL)isLiveClosed;
- (BOOL)isActivity;
- (id)description;
- (BOOL)isLivePureAudioMode;
- (BOOL)isLiveAudioRoomMode;
- (unsigned int)audioRoomScene;
- (BOOL)isLiveKTVMode;
- (BOOL)isChargableLive;
- (BOOL)isMemberLive;
- (BOOL)isSuperfanLive;
- (BOOL)enableFaceDetectMask;
- (BOOL)isRecordLive;
- (BOOL)isCoverEffectSpam;
- (BOOL)isCoverInfoEqualTo:(id)arg1;
- (id)sdkParams;
- (id)finalReplayUri;
- (id)getCurrentReadyPlayOpenScreenAdInfo:(BOOL)arg1 startLiveMs:(unsigned long long)arg2;
- (BOOL)allowInTeenageMode;
- (unsigned long long)liveId;
- (void)setLiveId:(unsigned long long)arg1;
- (unsigned int)onlineCnt;
- (void)setOnlineCnt:(unsigned int)arg1;
- (unsigned long long)liveStatus;
- (void)setLiveStatus:(unsigned long long)arg1;
- (unsigned int)anchorLiveStatus;
- (void)setAnchorLiveStatus:(unsigned int)arg1;
- (unsigned int)sharePageStatus;
- (void)setSharePageStatus:(unsigned int)arg1;
- (unsigned long long)audienceEndPageControl;
- (void)setAudienceEndPageControl:(unsigned long long)arg1;
- (id)streamUrl;
- (void)setStreamUrl:(id)arg1;
- (unsigned int)startTime;
- (void)setStartTime:(unsigned int)arg1;
- (unsigned int)likeCnt;
- (void)setLikeCnt:(unsigned int)arg1;
- (unsigned int)endTime;
- (void)setEndTime:(unsigned int)arg1;
- (id)liveExtInfo;
- (void)setLiveExtInfo:(id)arg1;
- (id)liveSpec;
- (void)setLiveSpec:(id)arg1;
- (id)liveSdkChannelInfo;
- (void)setLiveSdkChannelInfo:(id)arg1;
- (unsigned long long)rewardTotalAmountInWecoin;
- (void)setRewardTotalAmountInWecoin:(unsigned long long)arg1;
- (unsigned int)participantCnt;
- (void)setParticipantCnt:(unsigned int)arg1;
- (unsigned int)extFlag;
- (void)setExtFlag:(unsigned int)arg1;
- (unsigned long long)rewardTotalAmountInHeat;
- (void)setRewardTotalAmountInHeat:(unsigned long long)arg1;
- (unsigned int)sourceType;
- (void)setSourceType:(unsigned int)arg1;
- (unsigned int)subSourceType;
- (void)setSubSourceType:(unsigned int)arg1;
- (id)liveTabInfo;
- (void)setLiveTabInfo:(id)arg1;
- (id)liveBarMsg;
- (void)setLiveBarMsg:(id)arg1;
- (unsigned int)liveBusinessType;
- (void)setLiveBusinessType:(unsigned int)arg1;
- (unsigned long long)newLikeCount;
- (void)setNewLikeCount:(unsigned long long)arg1;
- (unsigned int)secondaryDeviceFlag;
- (void)setSecondaryDeviceFlag:(unsigned int)arg1;
- (unsigned int)autoPlayPriority;
- (void)setAutoPlayPriority:(unsigned int)arg1;
- (id)gameAppId;
- (void)setGameAppId:(id)arg1;
- (unsigned int)wxaGameAppVersionType;
- (void)setWxaGameAppVersionType:(unsigned int)arg1;
- (id)layerDisplayInfo;
- (void)setLayerDisplayInfo:(id)arg1;
- (id)trialUrlOption;
- (void)setTrialUrlOption:(id)arg1;
- (id)livePurchaseInfo;
- (void)setLivePurchaseInfo:(id)arg1;
- (id)replayUrl;
- (void)setReplayUrl:(id)arg1;
- (unsigned long long)anchorStatusFlag;
- (void)setAnchorStatusFlag:(unsigned long long)arg1;
- (id)liveSdkInfo;
- (void)setLiveSdkInfo:(id)arg1;
- (unsigned int)replayStatus;
- (void)setReplayStatus:(unsigned int)arg1;
- (unsigned long long)anchorLiveroomFunctionSwitch;
- (void)setAnchorLiveroomFunctionSwitch:(unsigned long long)arg1;
- (unsigned long long)heatValue;
- (void)setHeatValue:(unsigned long long)arg1;
- (unsigned long long)liveHeatValue;
- (void)setLiveHeatValue:(unsigned long long)arg1;
- (id)liveHeatValueStr;
- (void)setLiveHeatValueStr:(id)arg1;
- (id)liveActivityType;
- (void)setLiveActivityType:(id)arg1;
- (unsigned int)maxOnlineCount;
- (void)setMaxOnlineCount:(unsigned int)arg1;
- (unsigned int)audiencesAvgSeconds;
- (void)setAudiencesAvgSeconds:(unsigned int)arg1;
- (unsigned int)previewJoinliveDelaySeconds;
- (void)setPreviewJoinliveDelaySeconds:(unsigned int)arg1;
- (unsigned int)bizLiveNewFansNum;
- (void)setBizLiveNewFansNum:(unsigned int)arg1;
- (unsigned int)liveFlag;
- (void)setLiveFlag:(unsigned int)arg1;
- (id)bizUserInfo;
- (void)setBizUserInfo:(id)arg1;
- (unsigned int)liveVrType;
- (void)setLiveVrType:(unsigned int)arg1;
- (id)multiReason;
- (void)setMultiReason:(id)arg1;
- (id)replayInfo;
- (void)setReplayInfo:(id)arg1;
- (id)liveSquareParticipantWording;
- (void)setLiveSquareParticipantWording:(id)arg1;
- (id)activityInfo;
- (void)setActivityInfo:(id)arg1;
- (BOOL)replayPrivilege;
- (void)setReplayPrivilege:(BOOL)arg1;
- (id)liveConcertInfo;
- (void)setLiveConcertInfo:(id)arg1;
- (id)statusDesc;
- (void)setStatusDesc:(id)arg1;
- (id)rewardWishListInfo;
- (void)setRewardWishListInfo:(id)arg1;
- (id)intercomMicInfo;
- (void)setIntercomMicInfo:(id)arg1;
- (id)coverInfo;
- (void)setCoverInfo:(id)arg1;
- (id)liveDataDetailsJump;
- (void)setLiveDataDetailsJump:(id)arg1;
- (id)liveCover;
- (void)setLiveCover:(id)arg1;
- (id)entranceAdInfos;
- (void)setEntranceAdInfos:(id)arg1;
- (id)liveMicInfo;
- (void)setLiveMicInfo:(id)arg1;
- (unsigned int)liveElapsedTime;
- (void)setLiveElapsedTime:(unsigned int)arg1;
- (BOOL)enableReplayByDefault;
- (void)setEnableReplayByDefault:(BOOL)arg1;
- (BOOL)guideGenerationReplay;
- (void)setGuideGenerationReplay:(BOOL)arg1;
- (unsigned int)spamLiveExtFlag;
- (void)setSpamLiveExtFlag:(unsigned int)arg1;
- (id)liveShopTagInfo;
- (void)setLiveShopTagInfo:(id)arg1;
- (id)anchorReplaceInfo;
- (void)setAnchorReplaceInfo:(id)arg1;
- (unsigned long long)streamPreviewJoinliveControlFlag;
- (void)setStreamPreviewJoinliveControlFlag:(unsigned long long)arg1;
- (unsigned long long)livePermissionFlag;
- (void)setLivePermissionFlag:(unsigned long long)arg1;
- (unsigned long long)heatPromotionAudienceTotalCount;
- (void)setHeatPromotionAudienceTotalCount:(unsigned long long)arg1;
- (unsigned long long)heatPromotionNewFansTotalCount;
- (void)setHeatPromotionNewFansTotalCount:(unsigned long long)arg1;
- (unsigned long long)heatPromotionPayTotalAmountInCents;
- (void)setHeatPromotionPayTotalAmountInCents:(unsigned long long)arg1;
- (unsigned long long)totalGmv;
- (void)setTotalGmv:(unsigned long long)arg1;
- (id)memberLiveInfo;
- (void)setMemberLiveInfo:(id)arg1;
- (id)livePrivilegeInfo;
- (void)setLivePrivilegeInfo:(id)arg1;
- (unsigned long long)fansAudiencePercent;
- (void)setFansAudiencePercent:(unsigned long long)arg1;
- (unsigned long long)rewardAudienceCnt;
- (void)setRewardAudienceCnt:(unsigned long long)arg1;
- (id)creatorCenterEntrance;
- (void)setCreatorCenterEntrance:(id)arg1;
- (id)closePageActivityBanner;
- (void)setClosePageActivityBanner:(id)arg1;
- (id)liveDataDetailsJumpWording;
- (void)setLiveDataDetailsJumpWording:(id)arg1;
- (id)giftGoalInfo;
- (void)setGiftGoalInfo:(id)arg1;
- (id)finderLiveFeedbackInfo;
- (void)setFinderLiveFeedbackInfo:(id)arg1;
- (long long)relatedLiveViewModelId;
- (void)setRelatedLiveViewModelId:(long long)arg1;
- (id)modeInfo;
- (void)setModeInfo:(id)arg1;
- (id)liveOnlineInfo;
- (void)setLiveOnlineInfo:(id)arg1;
- (id)anchorCloselivepageData;
- (void)setAnchorCloselivepageData:(id)arg1;
- (BOOL)supprtJumpNav;
- (void)setSupprtJumpNav:(BOOL)arg1;
- (id)ktvSettingsInfo;
- (void)setKtvSettingsInfo:(id)arg1;
- (unsigned int)ktvPlayerCount;
- (void)setKtvPlayerCount:(unsigned int)arg1;
- (id)anchorQuestEntrance;
- (void)setAnchorQuestEntrance:(id)arg1;
- (BOOL)disableShareCardExpose;
- (void)setDisableShareCardExpose:(BOOL)arg1;
- (id)replayCommentVisibilityOptionWording;
- (void)setReplayCommentVisibilityOptionWording:(id)arg1;
- (BOOL)liveCardDisableAutoPlay;
- (void)setLiveCardDisableAutoPlay:(BOOL)arg1;
- (unsigned long long)forwardCnt;
- (void)setForwardCnt:(unsigned long long)arg1;
- (id)autoGenReplayOption;
- (void)setAutoGenReplayOption:(id)arg1;
- (id)thankGuide;
- (void)setThankGuide:(id)arg1;
- (void)setSdkParams:(id)arg1;
- (void).cxx_destruct;
@end
