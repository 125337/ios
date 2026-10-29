@interface WCAdvertiseInfo : NSObject <NSCoding>
{
    int adType; // +0x8
    NSString * adDescription; // +0x10
    NSString * adActionLink; // +0x18
    NSString * adActionCardTpId; // +0x20
    NSString * adActionCardExt; // +0x28
    NSString * adActionCardTitle; // +0x30
    WCMultiLanguageItem * adActionCardLinkTitle; // +0x38
    int adActionType; // +0x40
    NSString * adViewId; // +0x48
    NSString * adCommonInfo; // +0x50
    int adPosition; // +0x58
    int noExposureExpireTime; // +0x5c
    int exposureNoActionExpireTime; // +0x60
    long long adGroupEndTime; // +0x68
    BOOL webviewRightBarShow; // +0x70
    BOOL shouldTimeLineVideoRasterize; // +0x71
    NSString * adUserNickName; // +0x78
    BOOL adUsePreferedInfo; // +0x80
    NSString * adPreferNickName; // +0x88
    NSString * adPreferAvatar; // +0x90
    BOOL bExposured; // +0x98
    int myAdCommentCount; // +0x9c
    unsigned int myAdCommentStartTime; // +0xa0
    NSString * adActionLinkWithTraceId; // +0xa8
    int source; // +0xb0
    NSString * expId; // +0xb8
    NSString * expOriginSnsId; // +0xc0
    BOOL adActionLinkHidden; // +0xc8
    BOOL attachShareLinkHidden; // +0xc9
    BOOL bWithoutAdExp; // +0xca
    BOOL bIgnoreNewMsgTip; // +0xcb
    BOOL bIgnoreNewLikeMsg; // +0xcc
    BOOL bIgnoreNewCommentMsg; // +0xcd
    BOOL headClickRightBarShow; // +0xce
    BOOL addPlayIconOnCover; // +0xcf
    BOOL _bSyncFirst; // +0xd0
    BOOL _adVideoContinuePlay; // +0xd1
    BOOL _videoPlayInStreamingMode; // +0xd2
    BOOL _forbiddenCustomAnimation; // +0xd3
    BOOL _preloadWeAppPkg; // +0xd4
    BOOL _preloadFinderFeed; // +0xd5
    BOOL _preloadFinderLive; // +0xd6
    BOOL _addClickTimeToWeAppPath; // +0xd7
    BOOL _forbiddenShowRelievedBuy; // +0xd8
    BOOL _imageUseAVIF; // +0xd9
    BOOL _previewFlag; // +0xda
    BOOL _adExpired; // +0xdb
    BOOL _forbidUpdateContact; // +0xdc
    unsigned int headClickType; // +0xe0
    int adChainType; // +0xe4
    int adChainTypeExpireTime; // +0xe8
    int longVideoAcessType; // +0xec
    int adActionAppStoreType; // +0xf0
    unsigned int adContentStyle; // +0xf4
    int exposureCnt; // +0xf8
    int _verticalVideoDisplayType; // +0xfc
    unsigned int _originAdType; // +0x100
    NSString * adInfoSyncBuffer; // +0x108
    NSString * adActionLinkName; // +0x110
    WCMultiLanguageItem * adActionLinkTitle; // +0x118
    WCMultiLanguageItem * expandOutsideTitle; // +0x120
    WCMultiLanguageItem * expandInsideTitle; // +0x128
    NSString * uxInfo; // +0x130
    NSString * attachShareLinkUrl; // +0x138
    NSString * attachShareLinkWording; // +0x140
    unsigned long long commentStartTime; // +0x148
    unsigned long long commentEndTime; // +0x150
    unsigned long long unInterestStartTime; // +0x158
    unsigned long long unInterestEndTime; // +0x160
    NSMutableDictionary * adArgsDic; // +0x168
    NSString * headClickParam; // +0x170
    WCADCanvasInfo * headCanvasInfo; // +0x178
    WCAdWeAppInfo * headWeAppInfo; // +0x180
    WCAdFinderProfileInfo * headFinderProfile; // +0x188
    WCAdHeadFinderTopicInfo * headFinderTopicInfo; // +0x190
    WCADPoiInfo * adPoiInfo; // +0x198
    WCADChainStrengthenInfo * adChainStrengthenInfo; // +0x1a0
    long long adChainLastUpdateTime; // +0x1a8
    NSString * adActionAppStoreTitle; // +0x1b0
    NSString * adActionAppStoreLink; // +0x1b8
    WCADCanvasInfo * adCanvasInfo; // +0x1c0
    WCADCanvasInfo * leftBtnAdCanvasInfo; // +0x1c8
    WCADCanvasInfo * rightBtnAdCanvasInfo; // +0x1d0
    WCADCanvasInfo * adFullCardGestureCanvasInfo; // +0x1d8
    NSString * shareCanvasXml; // +0x1e0
    NSString * traceId; // +0x1e8
    NSString * sessionAid; // +0x1f0
    NSString * originTraceId; // +0x1f8
    NSString * originSessionAid; // +0x200
    WCAdFeedDisplayInfo * adFeedDisplayInfo; // +0x208
    NSMutableDictionary * adCardItemDic; // +0x210
    WCAdCardInfo * adCardInfo; // +0x218
    WCAdWeAppInfo * adWeAppInfo; // +0x220
    WCAdSelectInfo * adSelectInfo; // +0x228
    NSData * remindFriendsInfo; // +0x230
    WCADAtFriendCompatible * atFriendCompatible; // +0x238
    WCAdFinderInfo * adFinderInfo; // +0x240
    WCAdLiveInfo * adLiveInfo; // +0x248
    WCAdFinderLiveInfo * adFinderLiveInfo; // +0x250
    WCAdFinderTopicInfo * adFinderTopicInfo; // +0x258
    WCAdDynamicUpdateInfo * adDynamicUpdateInfo; // +0x260
    WCAdSliderCardInfo * adSliderCardInfo; // +0x268
    WCAdCardBtnInfo * adActionLinkClickInfo; // +0x270
    WCAdAppGiftPackCodeInfo * adAppGiftPackCodeInfo; // +0x278
    long long _adLandingTime; // +0x280
    long long _adLandingTimeLocalMs; // +0x288
    NSString * _adViewIdHash; // +0x290
    NSString * _adRewardParams; // +0x298
    NSString * _adExtInfo; // +0x2a0
    WCADBodyWrap * _bodyWrap; // +0x2a8
    WCADCommentWrap * _commentWrap; // +0x2b0
    WCADPageWrap * _detailPageWrap; // +0x2b8
    WCADPageWrap * _h5PageWrap; // +0x2c0
    WCADPageWrap * _albumPageWrap; // +0x2c8
    WCADVideoWrap * _videoWrap; // +0x2d0
    WCADVideoWrap * _streamVideoWrap; // +0x2d8
    WCADPageWrap * _poiH5PageWrap; // +0x2e0
    WCAdCardBtnInfo * _headClickActionInfo; // +0x2e8
    WCAdInteractionLabelInfo * _interactionLabelInfo; // +0x2f0
    WCAdTagButtonInfo * _tagButtonInfo; // +0x2f8
    WCAdCommonInteractionInfo * _commonInteractionInfo; // +0x300
    WCAdWeWorkProfileInfo * _headWeWorkProfile; // +0x308
    WCAdRandomPickCardInfo * _randomPickCardInfo; // +0x310
    NSString * _originAdXml; // +0x318
    NSString * _dynamicSnsObjXml; // +0x320
    NSString * _dynamicAdXml; // +0x328
    NSString * _dynamicAdInfoXml; // +0x330
    NSString * _dynamicXmlsMd5; // +0x338
    NSString * _originUxInfo; // +0x340
    NSString * _originSnsId; // +0x348
    NSMutableDictionary * _skAdItems; // +0x350
    WCAdFullCardInfo * _adFullCardInfo; // +0x358
    WCAdScanInfo * _adScanInfo; // +0x360
    WCAdDislikeInfo * _adDislikeInfo; // +0x368
    WCAdFeedbackInfo * _adFeedbackInfo; // +0x370
    WCAdSphereCardInfo * _adSphereCardInfo; // +0x378
    WCAdTwistInfo * _adTwistInfo; // +0x380
    WCAdShakeInfo * _adShakeInfo; // +0x388
    WCAdTouchParticleInfo * _adTouchParticleInfo; // +0x390
    WCAdCombinedGridInfo * _adCombinedGridInfo; // +0x398
    WCAdDynamicFeedInfo * _adDynamicFeedInfo; // +0x3a0
    NSString * _adCanvasExt; // +0x3a8
    NSMutableArray * _dynamicInfos; // +0x3b0
    WCAdSchemaJumpInfo * _schemaJumpInfo; // +0x3b8
    WCADVideoWrap * _videoPlayerInfoWrapper; // +0x3c0
    WCAdPreloadConfigInfo * _preloadConfigInfo; // +0x3c8
    WCAdExpParamsInfo * _adExpParams; // +0x3d0
    WCADCanvasEggAnimationInfo * _eggAnimationInfo; // +0x3d8
    WCAdLookbookCardInfo * _adLookbookCardInfo; // +0x3e0
    NSString * _adUid; // +0x3e8
    NSString * _feedbackWording; // +0x3f0
    WCAdWeAppInfo * _feedbackWeAppInfo; // +0x3f8
    NSString * _adIPv4Url; // +0x400
    NSArray * _clickActionInfoList; // +0x408
    WCAdRollInfo * _adRollInfo; // +0x410
    WCAdBreakFrameInfo * _adBreakFrameInfo; // +0x418
    WCAdDynamicCacheInfo * _adDynamicCacheInfo; // +0x420
    WCAdSocialLikeInfo * _adSocialLikeInfo; // +0x428
    NSString * _sessionKeyAd; // +0x430
    double _score; // +0x438
    NSString * _costLevel; // +0x440
    WCAdCanvasShareInfo * _canvasShareInfo; // +0x448
    WCAdFinderLiveStreamInfo * _adFinderLiveStreamInfo; // +0x450
    WCAdWeGameGiftTagInfo * _adWeGameGiftTagInfo; // +0x458
    long long _previewExpiredTime; // +0x460
    WCAdDynamicAttr * _dynamicAttr; // +0x468
    WCAdInteractionTagInfo * _adInteractionTagInfo; // +0x470
    WCAdHeadStateInfo * _adHeadStateInfo; // +0x478
    WCAdHighlightTagInfo * _adHighlightTagInfo; // +0x480
    WCAdStateSettingBarInfo * _adStateSettingBarInfo; // +0x488
    WCAdConsultBarInfo * _adConsultBarInfo; // +0x490
    WCAdConsultBarCarouselInfo * _adConsultBarCarouselInfo; // +0x498
    WCAdHotDiscussedBarInfo * _adHotDiscussedBarInfo; // +0x4a0
}
+ (id)modelPropertyWhitelistForConfigTag:(id)arg1;
+ (id)dictionaryFromADDynamicInfo:(id)arg1;
+ (BOOL)setItem:(id)arg1 value:(id)arg2 forDynamic:(id)arg3;
- (id)init;
- (id)copyWithLocalPropertiesOnly;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)hasMyAdComments;
- (id)getAdActionTitle;
- (id)getAdActionLink;
- (id)getAdActionLinkWithSource:(long long)arg1;
- (unsigned int)getAdClickLinkActionType;
- (id)adActionLink;
- (BOOL)isValidForActionLink;
- (BOOL)shouldShowActionLink;
- (BOOL)isValidForJumpWeApp;
- (BOOL)isValidForJumpAppstore;
- (BOOL)isAppstoreInternalJump;
- (BOOL)isCanvasAd;
- (id)fetchCanvasAdGlobalWebStoreUrl;
- (id)fetchCanvasWebStoreUrlsWithInternalJump:(BOOL)arg1;
- (id)fetchTimelineWebStoreUrlsWithInternalJump:(BOOL)arg1;
- (void)appendAppUrlWithclickActionInfo:(id)arg1 toUrls:(id)arg2 internalJump:(BOOL)arg3;
- (BOOL)isLinkAd;
- (id)tryGetTraceId;
- (id)tryGetSessionAid;
- (id)tryGetUxInfo;
- (id)tryToGetOriginSnsId;
- (id)tryToGetPreloadConfigInfo;
- (BOOL)updateWithDynamicInfoResponse:(id)arg1;
- (BOOL)isDynamicXmlInfosAvailable;
- (void)updateDynamicXmlsWithSnsXml:(id)arg1 adXml:(id)arg2 adInfo:(id)arg3;
- (BOOL)isRatingCardAd;
- (BOOL)isFullCardLongPressAd;
- (BOOL)isGestureAd;
- (BOOL)isTwistCardAd;
- (BOOL)isShakeCardAd;
- (BOOL)isCombinedGridAd;
- (BOOL)isLookbookCardAd;
- (BOOL)isFullCardDragImageAd;
- (BOOL)isInteractiveAd;
- (BOOL)canShowTwistAnimation;
- (BOOL)canShowSimpleTwistAnimation;
- (BOOL)canShowShakeAnimation;
- (BOOL)canShowSimpleShakeAnimation;
- (BOOL)canShowCanvasEggAnimation;
- (long long)fetchCardAdLogoType;
- (BOOL)isBreakFrameAd;
- (BOOL)isSocialLikeAd;
- (BOOL)isContinuousLikeAd;
- (BOOL)isFireworkCheerAd;
- (BOOL)isSocialLikePatAd;
- (BOOL)isFinderLiveStreamAd;
- (BOOL)isDynamicFeedAd;
- (long long)countOfAdCanvasPageList;
- (id)genAdStatExt:(BOOL)arg1;
- (BOOL)shouldForceStay;
- (id)getInnerFirstVideoComponentItem;
- (void)allowAllVideoComponentsMakingVoice:(BOOL)arg1;
- (void)resetAllComponentDynamicValues;
- (BOOL)shouldAdActionJumpCanvasPage;
- (BOOL)shouldShowDislikeReasonList;
- (BOOL)shouldShowFeedbackList;
- (id)adDynamicCacheInfo;
- (id)adLiveInfo;
- (id)adChainStrengthenInfo;
- (id)adFinderTopicInfo;
- (id)adWeAppInfo;
- (id)adSocialLikeInfo;
- (id)adHighlightTagInfo;
- (id)adStateSettingBarInfo;
- (id)adHotDiscussedBarInfo;
- (id)bodyWrap;
- (id)commentWrap;
- (id)adViewIdHash;
- (BOOL)shouldImageUseAVIF;
- (BOOL)isForbidAutoPlay;
- (BOOL)hideFirstBossComment;
- (BOOL)isStateSettingBarAd;
- (id)fetchAdStateSettingBarInfo;
- (id)fetchConsultBarCarouselInfo;
- (BOOL)needShowCommonBarContainer;
- (int)fetchFinderLiveStreamDisplayType;
- (int)adType;
- (void)setAdType:(int)arg1;
- (id)adDescription;
- (void)setAdDescription:(id)arg1;
- (void)setAdActionLink:(id)arg1;
- (id)adActionCardTpId;
- (void)setAdActionCardTpId:(id)arg1;
- (id)adActionCardExt;
- (void)setAdActionCardExt:(id)arg1;
- (id)adActionCardTitle;
- (void)setAdActionCardTitle:(id)arg1;
- (int)adActionType;
- (void)setAdActionType:(int)arg1;
- (id)adViewId;
- (void)setAdViewId:(id)arg1;
- (id)adCommonInfo;
- (void)setAdCommonInfo:(id)arg1;
- (id)adInfoSyncBuffer;
- (void)setAdInfoSyncBuffer:(id)arg1;
- (int)adPosition;
- (void)setAdPosition:(int)arg1;
- (BOOL)bExposured;
- (void)setBExposured:(BOOL)arg1;
- (int)noExposureExpireTime;
- (void)setNoExposureExpireTime:(int)arg1;
- (int)exposureNoActionExpireTime;
- (void)setExposureNoActionExpireTime:(int)arg1;
- (long long)adGroupEndTime;
- (void)setAdGroupEndTime:(long long)arg1;
- (BOOL)webviewRightBarShow;
- (void)setWebviewRightBarShow:(BOOL)arg1;
- (BOOL)shouldTimeLineVideoRasterize;
- (void)setShouldTimeLineVideoRasterize:(BOOL)arg1;
- (id)adUserNickName;
- (void)setAdUserNickName:(id)arg1;
- (BOOL)adUsePreferedInfo;
- (void)setAdUsePreferedInfo:(BOOL)arg1;
- (id)adPreferNickName;
- (void)setAdPreferNickName:(id)arg1;
- (id)adPreferAvatar;
- (void)setAdPreferAvatar:(id)arg1;
- (int)myAdCommentCount;
- (void)setMyAdCommentCount:(int)arg1;
- (unsigned int)myAdCommentStartTime;
- (void)setMyAdCommentStartTime:(unsigned int)arg1;
- (BOOL)adActionLinkHidden;
- (void)setAdActionLinkHidden:(BOOL)arg1;
- (id)adActionLinkName;
- (void)setAdActionLinkName:(id)arg1;
- (id)adActionLinkTitle;
- (void)setAdActionLinkTitle:(id)arg1;
- (id)expandOutsideTitle;
- (void)setExpandOutsideTitle:(id)arg1;
- (id)expandInsideTitle;
- (void)setExpandInsideTitle:(id)arg1;
- (id)uxInfo;
- (void)setUxInfo:(id)arg1;
- (id)attachShareLinkUrl;
- (void)setAttachShareLinkUrl:(id)arg1;
- (id)attachShareLinkWording;
- (void)setAttachShareLinkWording:(id)arg1;
- (BOOL)attachShareLinkHidden;
- (void)setAttachShareLinkHidden:(BOOL)arg1;
- (unsigned long long)commentStartTime;
- (void)setCommentStartTime:(unsigned long long)arg1;
- (unsigned long long)commentEndTime;
- (void)setCommentEndTime:(unsigned long long)arg1;
- (unsigned long long)unInterestStartTime;
- (void)setUnInterestStartTime:(unsigned long long)arg1;
- (unsigned long long)unInterestEndTime;
- (void)setUnInterestEndTime:(unsigned long long)arg1;
- (BOOL)bWithoutAdExp;
- (void)setBWithoutAdExp:(BOOL)arg1;
- (id)adArgsDic;
- (void)setAdArgsDic:(id)arg1;
- (BOOL)bIgnoreNewMsgTip;
- (void)setBIgnoreNewMsgTip:(BOOL)arg1;
- (BOOL)bIgnoreNewLikeMsg;
- (void)setBIgnoreNewLikeMsg:(BOOL)arg1;
- (BOOL)bIgnoreNewCommentMsg;
- (void)setBIgnoreNewCommentMsg:(BOOL)arg1;
- (BOOL)headClickRightBarShow;
- (void)setHeadClickRightBarShow:(BOOL)arg1;
- (unsigned int)headClickType;
- (void)setHeadClickType:(unsigned int)arg1;
- (id)headClickParam;
- (void)setHeadClickParam:(id)arg1;
- (id)headCanvasInfo;
- (void)setHeadCanvasInfo:(id)arg1;
- (id)headWeAppInfo;
- (void)setHeadWeAppInfo:(id)arg1;
- (id)headFinderProfile;
- (void)setHeadFinderProfile:(id)arg1;
- (id)headFinderTopicInfo;
- (void)setHeadFinderTopicInfo:(id)arg1;
- (id)adActionLinkWithTraceId;
- (void)setAdActionLinkWithTraceId:(id)arg1;
- (id)adPoiInfo;
- (void)setAdPoiInfo:(id)arg1;
- (void)setAdChainStrengthenInfo:(id)arg1;
- (int)adChainType;
- (void)setAdChainType:(int)arg1;
- (int)adChainTypeExpireTime;
- (void)setAdChainTypeExpireTime:(int)arg1;
- (long long)adChainLastUpdateTime;
- (void)setAdChainLastUpdateTime:(long long)arg1;
- (int)source;
- (void)setSource:(int)arg1;
- (id)expId;
- (void)setExpId:(id)arg1;
- (id)expOriginSnsId;
- (void)setExpOriginSnsId:(id)arg1;
- (int)longVideoAcessType;
- (void)setLongVideoAcessType:(int)arg1;
- (id)adActionAppStoreTitle;
- (void)setAdActionAppStoreTitle:(id)arg1;
- (id)adActionAppStoreLink;
- (void)setAdActionAppStoreLink:(id)arg1;
- (int)adActionAppStoreType;
- (void)setAdActionAppStoreType:(int)arg1;
- (id)adCanvasInfo;
- (void)setAdCanvasInfo:(id)arg1;
- (id)leftBtnAdCanvasInfo;
- (void)setLeftBtnAdCanvasInfo:(id)arg1;
- (id)rightBtnAdCanvasInfo;
- (void)setRightBtnAdCanvasInfo:(id)arg1;
- (id)adFullCardGestureCanvasInfo;
- (void)setAdFullCardGestureCanvasInfo:(id)arg1;
- (id)shareCanvasXml;
- (void)setShareCanvasXml:(id)arg1;
- (id)traceId;
- (void)setTraceId:(id)arg1;
- (id)sessionAid;
- (void)setSessionAid:(id)arg1;
- (id)originTraceId;
- (void)setOriginTraceId:(id)arg1;
- (id)originSessionAid;
- (void)setOriginSessionAid:(id)arg1;
- (id)adFeedDisplayInfo;
- (void)setAdFeedDisplayInfo:(id)arg1;
- (id)adCardItemDic;
- (void)setAdCardItemDic:(id)arg1;
- (unsigned int)adContentStyle;
- (void)setAdContentStyle:(unsigned int)arg1;
- (id)adCardInfo;
- (void)setAdCardInfo:(id)arg1;
- (void)setAdWeAppInfo:(id)arg1;
- (id)adSelectInfo;
- (void)setAdSelectInfo:(id)arg1;
- (int)exposureCnt;
- (void)setExposureCnt:(int)arg1;
- (id)remindFriendsInfo;
- (void)setRemindFriendsInfo:(id)arg1;
- (id)atFriendCompatible;
- (void)setAtFriendCompatible:(id)arg1;
- (BOOL)addPlayIconOnCover;
- (void)setAddPlayIconOnCover:(BOOL)arg1;
- (id)adFinderInfo;
- (void)setAdFinderInfo:(id)arg1;
- (void)setAdLiveInfo:(id)arg1;
- (id)adFinderLiveInfo;
- (void)setAdFinderLiveInfo:(id)arg1;
- (void)setAdFinderTopicInfo:(id)arg1;
- (id)adDynamicUpdateInfo;
- (void)setAdDynamicUpdateInfo:(id)arg1;
- (id)adSliderCardInfo;
- (void)setAdSliderCardInfo:(id)arg1;
- (id)adActionLinkClickInfo;
- (void)setAdActionLinkClickInfo:(id)arg1;
- (id)adAppGiftPackCodeInfo;
- (void)setAdAppGiftPackCodeInfo:(id)arg1;
- (long long)adLandingTime;
- (void)setAdLandingTime:(long long)arg1;
- (long long)adLandingTimeLocalMs;
- (void)setAdLandingTimeLocalMs:(long long)arg1;
- (void)setAdViewIdHash:(id)arg1;
- (id)adRewardParams;
- (void)setAdRewardParams:(id)arg1;
- (BOOL)bSyncFirst;
- (void)setBSyncFirst:(BOOL)arg1;
- (BOOL)adVideoContinuePlay;
- (void)setAdVideoContinuePlay:(BOOL)arg1;
- (id)adExtInfo;
- (void)setAdExtInfo:(id)arg1;
- (int)verticalVideoDisplayType;
- (void)setVerticalVideoDisplayType:(int)arg1;
- (void)setBodyWrap:(id)arg1;
- (void)setCommentWrap:(id)arg1;
- (id)detailPageWrap;
- (void)setDetailPageWrap:(id)arg1;
- (id)h5PageWrap;
- (void)setH5PageWrap:(id)arg1;
- (id)albumPageWrap;
- (void)setAlbumPageWrap:(id)arg1;
- (id)videoWrap;
- (void)setVideoWrap:(id)arg1;
- (id)streamVideoWrap;
- (void)setStreamVideoWrap:(id)arg1;
- (id)poiH5PageWrap;
- (void)setPoiH5PageWrap:(id)arg1;
- (id)headClickActionInfo;
- (void)setHeadClickActionInfo:(id)arg1;
- (id)interactionLabelInfo;
- (void)setInteractionLabelInfo:(id)arg1;
- (id)tagButtonInfo;
- (void)setTagButtonInfo:(id)arg1;
- (id)commonInteractionInfo;
- (void)setCommonInteractionInfo:(id)arg1;
- (id)headWeWorkProfile;
- (void)setHeadWeWorkProfile:(id)arg1;
- (id)randomPickCardInfo;
- (void)setRandomPickCardInfo:(id)arg1;
- (id)originAdXml;
- (void)setOriginAdXml:(id)arg1;
- (id)dynamicSnsObjXml;
- (void)setDynamicSnsObjXml:(id)arg1;
- (id)dynamicAdXml;
- (void)setDynamicAdXml:(id)arg1;
- (id)dynamicAdInfoXml;
- (void)setDynamicAdInfoXml:(id)arg1;
- (id)dynamicXmlsMd5;
- (void)setDynamicXmlsMd5:(id)arg1;
- (id)originUxInfo;
- (void)setOriginUxInfo:(id)arg1;
- (id)originSnsId;
- (void)setOriginSnsId:(id)arg1;
- (unsigned int)originAdType;
- (void)setOriginAdType:(unsigned int)arg1;
- (id)skAdItems;
- (void)setSkAdItems:(id)arg1;
- (id)adFullCardInfo;
- (void)setAdFullCardInfo:(id)arg1;
- (id)adScanInfo;
- (void)setAdScanInfo:(id)arg1;
- (id)adDislikeInfo;
- (void)setAdDislikeInfo:(id)arg1;
- (id)adFeedbackInfo;
- (void)setAdFeedbackInfo:(id)arg1;
- (id)adSphereCardInfo;
- (void)setAdSphereCardInfo:(id)arg1;
- (id)adTwistInfo;
- (void)setAdTwistInfo:(id)arg1;
- (id)adShakeInfo;
- (void)setAdShakeInfo:(id)arg1;
- (id)adTouchParticleInfo;
- (void)setAdTouchParticleInfo:(id)arg1;
- (id)adCombinedGridInfo;
- (void)setAdCombinedGridInfo:(id)arg1;
- (id)adDynamicFeedInfo;
- (void)setAdDynamicFeedInfo:(id)arg1;
- (id)adCanvasExt;
- (void)setAdCanvasExt:(id)arg1;
- (id)dynamicInfos;
- (void)setDynamicInfos:(id)arg1;
- (id)schemaJumpInfo;
- (void)setSchemaJumpInfo:(id)arg1;
- (id)videoPlayerInfoWrapper;
- (void)setVideoPlayerInfoWrapper:(id)arg1;
- (id)preloadConfigInfo;
- (void)setPreloadConfigInfo:(id)arg1;
- (id)adExpParams;
- (void)setAdExpParams:(id)arg1;
- (id)eggAnimationInfo;
- (void)setEggAnimationInfo:(id)arg1;
- (BOOL)videoPlayInStreamingMode;
- (void)setVideoPlayInStreamingMode:(BOOL)arg1;
- (BOOL)forbiddenCustomAnimation;
- (void)setForbiddenCustomAnimation:(BOOL)arg1;
- (BOOL)preloadWeAppPkg;
- (void)setPreloadWeAppPkg:(BOOL)arg1;
- (id)adLookbookCardInfo;
- (void)setAdLookbookCardInfo:(id)arg1;
- (id)adUid;
- (void)setAdUid:(id)arg1;
- (id)feedbackWording;
- (void)setFeedbackWording:(id)arg1;
- (id)feedbackWeAppInfo;
- (void)setFeedbackWeAppInfo:(id)arg1;
- (id)adIPv4Url;
- (void)setAdIPv4Url:(id)arg1;
- (BOOL)preloadFinderFeed;
- (void)setPreloadFinderFeed:(BOOL)arg1;
- (BOOL)preloadFinderLive;
- (void)setPreloadFinderLive:(BOOL)arg1;
- (BOOL)addClickTimeToWeAppPath;
- (void)setAddClickTimeToWeAppPath:(BOOL)arg1;
- (id)clickActionInfoList;
- (void)setClickActionInfoList:(id)arg1;
- (id)adRollInfo;
- (void)setAdRollInfo:(id)arg1;
- (id)adBreakFrameInfo;
- (void)setAdBreakFrameInfo:(id)arg1;
- (void)setAdDynamicCacheInfo:(id)arg1;
- (BOOL)forbiddenShowRelievedBuy;
- (void)setForbiddenShowRelievedBuy:(BOOL)arg1;
- (void)setAdSocialLikeInfo:(id)arg1;
- (id)sessionKeyAd;
- (void)setSessionKeyAd:(id)arg1;
- (double)score;
- (void)setScore:(double)arg1;
- (id)costLevel;
- (void)setCostLevel:(id)arg1;
- (id)canvasShareInfo;
- (void)setCanvasShareInfo:(id)arg1;
- (id)adFinderLiveStreamInfo;
- (void)setAdFinderLiveStreamInfo:(id)arg1;
- (BOOL)imageUseAVIF;
- (void)setImageUseAVIF:(BOOL)arg1;
- (id)adWeGameGiftTagInfo;
- (void)setAdWeGameGiftTagInfo:(id)arg1;
- (BOOL)previewFlag;
- (void)setPreviewFlag:(BOOL)arg1;
- (long long)previewExpiredTime;
- (void)setPreviewExpiredTime:(long long)arg1;
- (BOOL)adExpired;
- (void)setAdExpired:(BOOL)arg1;
- (id)dynamicAttr;
- (void)setDynamicAttr:(id)arg1;
- (id)adInteractionTagInfo;
- (void)setAdInteractionTagInfo:(id)arg1;
- (id)adHeadStateInfo;
- (void)setAdHeadStateInfo:(id)arg1;
- (void)setAdHighlightTagInfo:(id)arg1;
- (void)setAdStateSettingBarInfo:(id)arg1;
- (id)adConsultBarInfo;
- (void)setAdConsultBarInfo:(id)arg1;
- (id)adConsultBarCarouselInfo;
- (void)setAdConsultBarCarouselInfo:(id)arg1;
- (void)setAdHotDiscussedBarInfo:(id)arg1;
- (BOOL)forbidUpdateContact;
- (void)setForbidUpdateContact:(BOOL)arg1;
- (void).cxx_destruct;
@end

