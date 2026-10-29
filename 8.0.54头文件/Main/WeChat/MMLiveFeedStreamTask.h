@interface MMLiveFeedStreamTask : MMLiveBaseTask <MMFinderLiveTaskFunctionPlugin>
{
    BOOL _isForceUseServerNickName; // +0x8
    BOOL _isAssistantRole; // +0x9
    int _commentScene; // +0xc
    MMFinderLiveTaskPluginObj * plugin; // +0x10
    unsigned long long _uiStyle; // +0x18
    NSData * _cookie; // +0x20
    MMFinderLiveFeedStreamMicLogic * _micLogic; // +0x28
    MMLiveCDNPlayerView * _cdnPlayerView; // +0x30
    FeedsPreviewLiveMultiStyleInfo * _multiStyleInfo; // +0x38
    MMFinderLiveConnectMicUsersInfo * _allConnectedMicUsersInfo; // +0x40
    MMFinderLiveFansGroupInfo * _fansGroupInfo; // +0x48
    long long _liveLimitedLevel; // +0x50
    NSArray * _liveAccountInfoList; // +0x58
    long long _currentLiveAliasRoleType; // +0x60
    NSArray * _currentSelfBadgeInfoArr; // +0x68
    unsigned long long _livePaymentType; // +0x70
    NSArray * _currentAnchorBadgeInfoList; // +0x78
    MMFinderLiveContext * _liveContext; // +0x80
    MMFinderLiveShopContext * _liveShopContext; // +0x88
    WCFinderDataItem * _finderDataItem; // +0x90
    MMFinderJoinLiveContext * _joinLiveContext; // +0x98
    NSMutableDictionary * _exposeModelDict; // +0xa0
    WCFinderExtStatsReporter * _extStatReporter; // +0xa8
}
+ (void)filterNotSupportMsg:(id)arg1;
- (void)reportExtStats;
- (void)reportProductGuideExposeStart:(id)arg1 tagType:(unsigned long long)arg2;
- (void)reportProductGuideExposeEnd:(id)arg1 tagType:(unsigned long long)arg2;
- (void)reportProductGuideClick:(id)arg1 tagType:(unsigned long long)arg2;
- (void)reportProductCardFoldStyleExposeStart:(id)arg1;
- (void)reportProductCardFoldStyleExposeEnd:(id)arg1;
- (void)reportProductCardFoldStyleClick:(id)arg1;
- (void)reportProductCardExpandStyleExposeStart:(id)arg1;
- (void)reportProductCardExpandStyleExposeEnd:(id)arg1;
- (void)reportProductCardExpandStyleClick:(id)arg1 productCardClkType:(unsigned long long)arg2;
- (void)reportProductExpandCardExposeStart:(id)arg1;
- (void)reportProductExpandCardExposeEnd:(id)arg1;
- (void)reportProductExpandCardClick:(id)arg1;
- (void)reportProductHotShopExposeStart:(id)arg1;
- (void)reportProductHotShopExposeEnd:(id)arg1;
- (void)reportProductHotShopClick:(id)arg1;
- (void)reportProductCouponExposeStart:(id)arg1;
- (void)reportProductCouponExposeEnd:(id)arg1;
- (void)reportProductCouponClick:(id)arg1;
- (void)reportCommentUnReadExposeStart;
- (void)reportCommentUnReadExposeEnd:(unsigned long long)arg1;
- (void)reportProductCommentUnReadClick:(unsigned long long)arg1;
- (void)reportConnectPkExposeStart;
- (void)reportConnectPkExposeEnd;
- (void)reportRecommendReasonExpose:(id)arg1 type:(int)arg2;
- (void)reportBrandLogoExpose;
- (void)reportTapEnterLiveBtnExposeStart;
- (void)reportTapEnterLiveBtnExposeEnd;
- (void)reportSatisfactionQuestExposeStart;
- (void)reportSatisfactionQuestExposeEnd;
- (void)reportLotteryExposeStart:(id)arg1;
- (void)reportLotteryExposeEnd;
- (void)reportLotteryClick;
- (void)reportTapEducationExposeStart;
- (void)reportTapEducationExposeEnd;
- (void)reportPoiExposeStart;
- (void)reportPoiExposeEnd;
- (void)reportPoiExposeClick;
- (void)reportElementAction:(unsigned long long)arg1 eid:(id)arg2 eidUdfKv:(id)arg3;
- (void)reportExtStatsCgiReport:(int)arg1 value:(unsigned long long)arg2 strValue:(id)arg3 feedActionSubType:(int)arg4;
- (id)getStatReportDataWithType:(int)arg1 dataItem:(id)arg2 value:(id)arg3 strValue:(id)arg4 feedActionSubType:(id)arg5;
- (void)reportGenericExposeStart:(id)arg1;
- (void)reportGenericExposeEnd:(int)arg1;
- (void)reportGenericClick:(id)arg1;
- (id)initWithDataItem:(id)arg1 scene:(int)arg2;
- (void)initLogic;
- (void)initDefaultData;
- (id)createNewTaskId;
- (id)createNewCommentFetchEngine;
- (id)feedStreamCommentFetchEngine;
- (void)initTaskPlugins;
- (unsigned long long)objectID;
- (id)objectNonceID;
- (id)finderUserName;
- (unsigned long long)currentLiveScene;
- (BOOL)liveFeedShowProductView;
- (BOOL)liveFeedShowCommentView;
- (BOOL)liveFeedShowLikeView;
- (unsigned long long)maxCachedCommentCount;
- (void)updateJoinLiveContext:(id)arg1;
- (void)updateIsInLive:(BOOL)arg1;
- (void)onEnterLive;
- (id)currentLiveAccoutInfo;
- (long long)cgiLiveScene;
- (CGSize)videoSize;
- (id)currentRoomRewardRecipientContactList;
- (id)getAccoutInfoForAliasRoleType:(unsigned int)arg1;
- (BOOL)hideNickBySpamCheck;
- (BOOL)enableTopComment;
- (void)updateFansGroupInfo:(id)arg1;
- (void)recvSEI:(id)arg1;
- (void)receiveSEIAnchoInfo:(id)arg1;
- (void)setIsPureAudioMode:(BOOL)arg1;
- (void)updateAudioRoomScene:(unsigned long long)arg1;
- (void)updateLivePaymentTypeWithLiveInfo:(id)arg1;
- (id)liveContextCreateIfNotFound;
- (id)liveShopContextCreateIfNotFound;
- (void)updateLiveExtFlag:(unsigned int)arg1;
- (void)updateLiveMicExtFlag:(unsigned long long)arg1;
- (void)clean;
- (BOOL)canShowLocationInConnectMicScene;
- (BOOL)canShowAnchorLocationInConnectMicScene;
- (id)plugin;
- (void)setPlugin:(id)arg1;
- (unsigned long long)uiStyle;
- (void)setUiStyle:(unsigned long long)arg1;
- (id)cookie;
- (void)setCookie:(id)arg1;
- (id)micLogic;
- (void)setMicLogic:(id)arg1;
- (id)cdnPlayerView;
- (void)setCdnPlayerView:(id)arg1;
- (id)multiStyleInfo;
- (void)setMultiStyleInfo:(id)arg1;
- (id)allConnectedMicUsersInfo;
- (void)setAllConnectedMicUsersInfo:(id)arg1;
- (BOOL)isForceUseServerNickName;
- (void)setIsForceUseServerNickName:(BOOL)arg1;
- (id)fansGroupInfo;
- (void)setFansGroupInfo:(id)arg1;
- (long long)liveLimitedLevel;
- (void)setLiveLimitedLevel:(long long)arg1;
- (id)liveAccountInfoList;
- (void)setLiveAccountInfoList:(id)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (long long)currentLiveAliasRoleType;
- (void)setCurrentLiveAliasRoleType:(long long)arg1;
- (BOOL)isAssistantRole;
- (void)setIsAssistantRole:(BOOL)arg1;
- (id)currentSelfBadgeInfoArr;
- (void)setCurrentSelfBadgeInfoArr:(id)arg1;
- (unsigned long long)livePaymentType;
- (void)setLivePaymentType:(unsigned long long)arg1;
- (id)currentAnchorBadgeInfoList;
- (void)setCurrentAnchorBadgeInfoList:(id)arg1;
- (id)liveContext;
- (void)setLiveContext:(id)arg1;
- (id)liveShopContext;
- (void)setLiveShopContext:(id)arg1;
- (id)finderDataItem;
- (void)setFinderDataItem:(id)arg1;
- (id)joinLiveContext;
- (void)setJoinLiveContext:(id)arg1;
- (id)exposeModelDict;
- (void)setExposeModelDict:(id)arg1;
- (id)extStatReporter;
- (void)setExtStatReporter:(id)arg1;
- (void).cxx_destruct;
@end

