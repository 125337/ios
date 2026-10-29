@interface MMFinderLiveContext : NSObject
{
    BOOL _showNewStyleHeatValueStyle; // +0x8
    BOOL _enableRewardQuota; // +0x9
    BOOL _currentWecoinBalanceUpdated; // +0xa
    BOOL _hasShowGiftMultipleSendTips; // +0xb
    BOOL _enableDisplayFollowBtn; // +0xc
    unsigned int _liveExtFlag; // +0x10
    unsigned int _liveFlag; // +0x14
    unsigned int _bizFriendFollowCount; // +0x18
    unsigned int _initialRemainTime; // +0x1c
    unsigned int _purchaseLivePreviewDuration; // +0x20
    unsigned int _anchorTaskGuideType; // +0x24
    MMFinderLiveTaskId * _taskId; // +0x28
    FinderLiveContact * _selfContact; // +0x30
    FinderLiveContact * _anchorContact; // +0x38
    FinderLiveExtFlag * _liveExtFlagExt; // +0x40
    unsigned long long _liveMicExtFlag; // +0x48
    unsigned long long _extShowFlag; // +0x50
    unsigned long long _backendAnchorStatusFlag; // +0x58
    unsigned long long _askProductQuestionExtFlag; // +0x60
    WCFinderGetLiveMsgCGI * _lastGetLiveMsgCGI; // +0x68
    WCFinderPostLiveLikeCGI * _lastPostLiveLikeCGI; // +0x70
    FinderLiveErrorPage * _liveErrorPage; // +0x78
    FinderLiveAbnormalClosedPageInfo * _audienceAbnormalClosedPageInfo; // +0x80
    FinderBizUserInfo * _bindedBizUserInfo; // +0x88
    FinderBizUserInfo * _displayedBizUserInfo; // +0x90
    NSData * _recommendUserSendGiftInfoCtx; // +0x98
    NSData * _packageGiftRecommendInfoCtx; // +0xa0
    FinderLiveSyncAnchorCloseLiveGuideInfoResp * _anchorCloseLiveGuideInfo; // +0xa8
    unsigned long long _currentRewardQuota; // +0xb0
    unsigned long long _currentWecoinBalance; // +0xb8
    double _consumeQuotaBalance; // +0xc0
    double _historyConsumeQuotaBalance; // +0xc8
    NSString * _consumeQuotaVerifyUrl; // +0xd0
    unsigned long long _lastFlowSignHistoryRewardQuota; // +0xd8
    long long _purchaseLivePreviewType; // +0xe0
    NSString * _anchorTaskGuideId; // +0xe8
}
- (BOOL)enableLiveRoomReward;
- (BOOL)enableAudienceReward;
- (BOOL)enableAudienceMic;
- (BOOL)isRecentlyMic;
- (BOOL)enableDisplayNewHeatValue;
- (BOOL)enableGetLiveMsgDisplayNewHeatValue;
- (id)description;
- (BOOL)isBizLive;
- (id)bizLiveNickname;
- (id)bizLiveUsername;
- (id)bizLiveUsernameWithBrandPrefix;
- (BOOL)enableDisplayFollowBtn;
- (BOOL)enableShowGiftMultipleSendTips;
- (void)setHasShowGiftMultipleSendTips:(BOOL)arg1;
- (BOOL)isShowGloryListSwitchOpen;
- (BOOL)designatedGiftPkEnabled;
- (BOOL)isAudienceMicRankSwitchOpen;
- (BOOL)isAudienceExposedGiftEnabled;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)selfContact;
- (void)setSelfContact:(id)arg1;
- (id)anchorContact;
- (void)setAnchorContact:(id)arg1;
- (unsigned int)liveExtFlag;
- (void)setLiveExtFlag:(unsigned int)arg1;
- (id)liveExtFlagExt;
- (void)setLiveExtFlagExt:(id)arg1;
- (unsigned long long)liveMicExtFlag;
- (void)setLiveMicExtFlag:(unsigned long long)arg1;
- (unsigned long long)extShowFlag;
- (void)setExtShowFlag:(unsigned long long)arg1;
- (unsigned long long)backendAnchorStatusFlag;
- (void)setBackendAnchorStatusFlag:(unsigned long long)arg1;
- (unsigned long long)askProductQuestionExtFlag;
- (void)setAskProductQuestionExtFlag:(unsigned long long)arg1;
- (id)lastGetLiveMsgCGI;
- (void)setLastGetLiveMsgCGI:(id)arg1;
- (id)lastPostLiveLikeCGI;
- (void)setLastPostLiveLikeCGI:(id)arg1;
- (id)liveErrorPage;
- (void)setLiveErrorPage:(id)arg1;
- (id)audienceAbnormalClosedPageInfo;
- (void)setAudienceAbnormalClosedPageInfo:(id)arg1;
- (BOOL)showNewStyleHeatValueStyle;
- (void)setShowNewStyleHeatValueStyle:(BOOL)arg1;
- (unsigned int)liveFlag;
- (void)setLiveFlag:(unsigned int)arg1;
- (id)bindedBizUserInfo;
- (void)setBindedBizUserInfo:(id)arg1;
- (id)displayedBizUserInfo;
- (void)setDisplayedBizUserInfo:(id)arg1;
- (unsigned int)bizFriendFollowCount;
- (void)setBizFriendFollowCount:(unsigned int)arg1;
- (id)recommendUserSendGiftInfoCtx;
- (void)setRecommendUserSendGiftInfoCtx:(id)arg1;
- (id)packageGiftRecommendInfoCtx;
- (void)setPackageGiftRecommendInfoCtx:(id)arg1;
- (unsigned int)initialRemainTime;
- (void)setInitialRemainTime:(unsigned int)arg1;
- (id)anchorCloseLiveGuideInfo;
- (void)setAnchorCloseLiveGuideInfo:(id)arg1;
- (BOOL)enableRewardQuota;
- (void)setEnableRewardQuota:(BOOL)arg1;
- (unsigned long long)currentRewardQuota;
- (void)setCurrentRewardQuota:(unsigned long long)arg1;
- (unsigned long long)currentWecoinBalance;
- (void)setCurrentWecoinBalance:(unsigned long long)arg1;
- (double)consumeQuotaBalance;
- (void)setConsumeQuotaBalance:(double)arg1;
- (double)historyConsumeQuotaBalance;
- (void)setHistoryConsumeQuotaBalance:(double)arg1;
- (id)consumeQuotaVerifyUrl;
- (void)setConsumeQuotaVerifyUrl:(id)arg1;
- (BOOL)currentWecoinBalanceUpdated;
- (void)setCurrentWecoinBalanceUpdated:(BOOL)arg1;
- (unsigned long long)lastFlowSignHistoryRewardQuota;
- (void)setLastFlowSignHistoryRewardQuota:(unsigned long long)arg1;
- (BOOL)hasShowGiftMultipleSendTips;
- (void)setEnableDisplayFollowBtn:(BOOL)arg1;
- (long long)purchaseLivePreviewType;
- (void)setPurchaseLivePreviewType:(long long)arg1;
- (unsigned int)purchaseLivePreviewDuration;
- (void)setPurchaseLivePreviewDuration:(unsigned int)arg1;
- (id)anchorTaskGuideId;
- (void)setAnchorTaskGuideId:(id)arg1;
- (unsigned int)anchorTaskGuideType;
- (void)setAnchorTaskGuideType:(unsigned int)arg1;
- (void).cxx_destruct;
@end

