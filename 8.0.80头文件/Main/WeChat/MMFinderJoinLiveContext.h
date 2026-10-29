@interface MMFinderJoinLiveContext : NSObject
{
    BOOL _enableCheerInClapMode; // +0x8
    BOOL _secondaryDeviceCloseLiveSwitch; // +0x9
    BOOL _enableDescExtend; // +0xa
    BOOL _isAssistantRole; // +0xb
    BOOL _isSyndicateParticipant; // +0xc
    BOOL _shouldShowHasBoughtProductInAnchorLiveNotify; // +0xd
    unsigned int _joinLiveFlag; // +0x10
    unsigned int _shoppingNotAvailableFlag; // +0x14
    unsigned int _anchorSwitchFlag; // +0x18
    MMFinderLiveTaskId * _liveTaskId; // +0x20
    FinderJoinLiveResp * _response; // +0x28
    NSData * _liveCookies; // +0x30
    LiveSdkInfo * _liveSDKInfo; // +0x38
    WCFinderLiveInfo * _finderLiveInfo; // +0x40
    FinderWindowProductInfo * _productInfo; // +0x48
    FinderLiveUserInfo * _userInfo; // +0x50
    FinderLiveMicInfo * _liveMicInfo; // +0x58
    NSString * _joinLiveTips; // +0x60
    NSArray * _templateInfoArr; // +0x68
    WCFinderLiveIdentityModel * _liveIdentityModel; // +0x70
    FinderLocation * _liveLocation; // +0x78
    FinderLiveAdInfo * _liveAdInfo; // +0x80
    FinderLiveCheerInfo * _liveCheerInfo; // +0x88
    FinderLiveHotCommentAnimationInfoList * _hotCommentAnimationInfoList; // +0x90
    FinderLiveShopWindowAdItem * _promotingAd; // +0x98
    FinderLiveBackgroundMusicInfo * _bgMusicInfo; // +0xa0
    FinderBizUserInfo * _bizUserInfo; // +0xa8
    FinderShopCouponInfo * _promotingCoupon; // +0xb0
    GameRankSwitchInfo * _gameRankSwitchInfo; // +0xb8
    GameLiveRankInfo * _gameLiveRankInfo; // +0xc0
    FinderLivePromoteMsgInfo * _promoteMsgInfo; // +0xc8
    NSString * _ecSource; // +0xd0
    NSString * _liveDescription; // +0xd8
    LiveDescInfo * _liveDescInfo; // +0xe0
    unsigned long long _liveFunctionSwitchFlags; // +0xe8
    unsigned long long _anchorLiveExtFlag; // +0xf0
    FinderLiveAudienceEventInfo * _audienceEventInfo; // +0xf8
    MMFinderLiveFansGroupInfo * _fansGroupInfo; // +0x100
    unsigned long long _joinLiveFromSrc; // +0x108
    LiveRoomImg * _liveRoomImages; // +0x110
    FinderLiveRewardQuotaSwitchInfo * _rewardQuotaSwitchInfo; // +0x118
    FinderLivePackageExtInfo * _packageExtInfo; // +0x120
    FinderLivePromoteExtInfo * _promoteExtInfo; // +0x128
    FinderLiveInternalPageInfo * _liveInternalPageInfo; // +0x130
    FinderLiveResourcePreloadInfo * _resourcePreloadInfo; // +0x138
    FinderLiveGamePlayTogether * _gamePlayTogetherInfo; // +0x140
    FinderLiveUserAttrUserSetting * _userSetting; // +0x148
    NSString * _joinLiveTraceBuffer; // +0x150
    FinderLiveFlashSaleInfo * _flashSaleInfo; // +0x158
    FinderLiveAnchorFlashSaleConfigInfo * _anchorFlashSaleConfig; // +0x160
    FinderLiveConcertRights * _concertRights; // +0x168
    CommentHintWordings * _commentHintWordings; // +0x170
    FinderLiveModeInfo * _liveModeInfo; // +0x178
    FinderJumpInfo * _triggerLiteappInfo; // +0x180
    MMFinderJoinLivePrefetchInfo * _prefetchInfo; // +0x188
    NSMutableArray * _pageArray; // +0x190
    FinderLiveKtvPlayerWaitList * _playerWaitList; // +0x198
    FinderLiveKtvExtInfo * _ktvExtInfo; // +0x1a0
    FinderLiveBackendPeriodSeiInfo * _backendSeiInfo; // +0x1a8
    FinderObjectMonotonicData_LiveIndependentData * _requestLiveMonoData; // +0x1b0
    FinderLiveShortcutWordingConfig * _shortcutWordingConfig; // +0x1b8
    FinderJoinLiveReq * _request; // +0x1c0
    WCLocationInfo * _liveLocationInfo; // +0x1c8
    NSString * _reqCookiesMd5; // +0x1d0
    NSString * _respCookiesMd5; // +0x1d8
    MMFinderLiveConcertInfo * _liveConcertInfo; // +0x1e0
    FinderLiveRecommendPreloadInfo * _recommendPreloadInfo; // +0x1e8
}
- (id)initWithLiveTaskId:(id)arg1 request:(id)arg2 response:(id)arg3 fromSrc:(unsigned long long)arg4 lastJoinLiveContext:(id)arg5;
- (id)initWithLiveTaskId:(id)arg1 request:(id)arg2 response:(id)arg3 fromSrc:(unsigned long long)arg4 lastJoinLiveContext:(id)arg5 canOverrideGlobalValues:(BOOL)arg6;
- (void)updateJoinLiveContextWithRequest:(id)arg1 response:(id)arg2 lastJoinLiveContext:(id)arg3 canOverrideGlobalValues:(BOOL)arg4;
- (BOOL)allowFetchRecommendRelateList;
- (unsigned int)joinliveGetliverelatedlistPullType;
- (id)joinLiveRespExtend;
- (BOOL)prefetchMoreLiveSwitch;
- (unsigned int)prefetchMoreLiveWatchDuration;
- (BOOL)allowPreloadRewardGiftList;
- (BOOL)allowPreloadShopShelfList;
- (BOOL)allowPreloadECConfig;
- (BOOL)allowPreloadOnlineMember;
- (BOOL)allowPreloadECProductPromoteBubble;
- (double)maxBigEmoticonCommentImgSize;
- (double)minBigEmoticonCommentImgSize;
- (BOOL)isUsingInlineBigEmoticonCommentStyle;
- (double)maxBigEmoticonBarrageImgSize;
- (id)description;
- (id)liveTaskId;
- (void)setLiveTaskId:(id)arg1;
- (id)response;
- (void)setResponse:(id)arg1;
- (id)liveCookies;
- (void)setLiveCookies:(id)arg1;
- (id)liveSDKInfo;
- (void)setLiveSDKInfo:(id)arg1;
- (id)finderLiveInfo;
- (void)setFinderLiveInfo:(id)arg1;
- (id)productInfo;
- (void)setProductInfo:(id)arg1;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (id)liveMicInfo;
- (void)setLiveMicInfo:(id)arg1;
- (id)joinLiveTips;
- (void)setJoinLiveTips:(id)arg1;
- (id)templateInfoArr;
- (void)setTemplateInfoArr:(id)arg1;
- (unsigned int)joinLiveFlag;
- (void)setJoinLiveFlag:(unsigned int)arg1;
- (unsigned int)shoppingNotAvailableFlag;
- (void)setShoppingNotAvailableFlag:(unsigned int)arg1;
- (BOOL)enableCheerInClapMode;
- (void)setEnableCheerInClapMode:(BOOL)arg1;
- (id)liveIdentityModel;
- (void)setLiveIdentityModel:(id)arg1;
- (id)liveLocation;
- (void)setLiveLocation:(id)arg1;
- (id)liveAdInfo;
- (void)setLiveAdInfo:(id)arg1;
- (id)liveCheerInfo;
- (void)setLiveCheerInfo:(id)arg1;
- (id)hotCommentAnimationInfoList;
- (void)setHotCommentAnimationInfoList:(id)arg1;
- (id)promotingAd;
- (void)setPromotingAd:(id)arg1;
- (id)bgMusicInfo;
- (void)setBgMusicInfo:(id)arg1;
- (id)bizUserInfo;
- (void)setBizUserInfo:(id)arg1;
- (id)promotingCoupon;
- (void)setPromotingCoupon:(id)arg1;
- (id)gameRankSwitchInfo;
- (void)setGameRankSwitchInfo:(id)arg1;
- (id)gameLiveRankInfo;
- (void)setGameLiveRankInfo:(id)arg1;
- (id)promoteMsgInfo;
- (void)setPromoteMsgInfo:(id)arg1;
- (id)ecSource;
- (void)setEcSource:(id)arg1;
- (BOOL)secondaryDeviceCloseLiveSwitch;
- (void)setSecondaryDeviceCloseLiveSwitch:(BOOL)arg1;
- (id)liveDescription;
- (void)setLiveDescription:(id)arg1;
- (id)liveDescInfo;
- (void)setLiveDescInfo:(id)arg1;
- (BOOL)enableDescExtend;
- (void)setEnableDescExtend:(BOOL)arg1;
- (BOOL)isAssistantRole;
- (void)setIsAssistantRole:(BOOL)arg1;
- (BOOL)isSyndicateParticipant;
- (void)setIsSyndicateParticipant:(BOOL)arg1;
- (unsigned int)anchorSwitchFlag;
- (void)setAnchorSwitchFlag:(unsigned int)arg1;
- (unsigned long long)liveFunctionSwitchFlags;
- (void)setLiveFunctionSwitchFlags:(unsigned long long)arg1;
- (unsigned long long)anchorLiveExtFlag;
- (void)setAnchorLiveExtFlag:(unsigned long long)arg1;
- (id)audienceEventInfo;
- (void)setAudienceEventInfo:(id)arg1;
- (id)fansGroupInfo;
- (void)setFansGroupInfo:(id)arg1;
- (unsigned long long)joinLiveFromSrc;
- (void)setJoinLiveFromSrc:(unsigned long long)arg1;
- (id)liveRoomImages;
- (void)setLiveRoomImages:(id)arg1;
- (id)rewardQuotaSwitchInfo;
- (void)setRewardQuotaSwitchInfo:(id)arg1;
- (id)packageExtInfo;
- (void)setPackageExtInfo:(id)arg1;
- (id)promoteExtInfo;
- (void)setPromoteExtInfo:(id)arg1;
- (id)liveInternalPageInfo;
- (void)setLiveInternalPageInfo:(id)arg1;
- (id)resourcePreloadInfo;
- (void)setResourcePreloadInfo:(id)arg1;
- (id)gamePlayTogetherInfo;
- (void)setGamePlayTogetherInfo:(id)arg1;
- (id)userSetting;
- (void)setUserSetting:(id)arg1;
- (id)joinLiveTraceBuffer;
- (void)setJoinLiveTraceBuffer:(id)arg1;
- (id)flashSaleInfo;
- (void)setFlashSaleInfo:(id)arg1;
- (id)anchorFlashSaleConfig;
- (void)setAnchorFlashSaleConfig:(id)arg1;
- (id)concertRights;
- (void)setConcertRights:(id)arg1;
- (id)commentHintWordings;
- (void)setCommentHintWordings:(id)arg1;
- (id)liveModeInfo;
- (void)setLiveModeInfo:(id)arg1;
- (id)triggerLiteappInfo;
- (void)setTriggerLiteappInfo:(id)arg1;
- (id)prefetchInfo;
- (void)setPrefetchInfo:(id)arg1;
- (id)pageArray;
- (void)setPageArray:(id)arg1;
- (id)playerWaitList;
- (void)setPlayerWaitList:(id)arg1;
- (id)ktvExtInfo;
- (void)setKtvExtInfo:(id)arg1;
- (id)backendSeiInfo;
- (void)setBackendSeiInfo:(id)arg1;
- (BOOL)shouldShowHasBoughtProductInAnchorLiveNotify;
- (void)setShouldShowHasBoughtProductInAnchorLiveNotify:(BOOL)arg1;
- (id)requestLiveMonoData;
- (void)setRequestLiveMonoData:(id)arg1;
- (id)shortcutWordingConfig;
- (void)setShortcutWordingConfig:(id)arg1;
- (id)request;
- (void)setRequest:(id)arg1;
- (id)liveLocationInfo;
- (void)setLiveLocationInfo:(id)arg1;
- (id)reqCookiesMd5;
- (void)setReqCookiesMd5:(id)arg1;
- (id)respCookiesMd5;
- (void)setRespCookiesMd5:(id)arg1;
- (id)liveConcertInfo;
- (void)setLiveConcertInfo:(id)arg1;
- (id)recommendPreloadInfo;
- (void)setRecommendPreloadInfo:(id)arg1;
- (void).cxx_destruct;
@end
