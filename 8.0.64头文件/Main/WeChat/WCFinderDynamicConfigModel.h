@interface WCFinderDynamicConfigModel : NSObject
{
    BOOL _enableShowSuggestTagView; // +0x8
    BOOL _enableShowFinderCommentBlacklist; // +0x9
    BOOL _useLowCompressMethod; // +0xa
    BOOL _markReadOpenController; // +0xb
    BOOL _statsReportOpenController; // +0xc
    BOOL _preFetchStreamSwitch; // +0xd
    BOOL _dynamicFinderSwitch; // +0xe
    BOOL _commentToProfile; // +0xf
    BOOL _refuseAllPrivateMsgSwitch; // +0x10
    BOOL _useLiveNearPeople; // +0x11
    BOOL _showWindowProduct; // +0x12
    BOOL _dynamicFinderLiveNewEntranceSwitch; // +0x13
    BOOL _dynamicFinderWXProfileAuthInfoSwitch; // +0x14
    BOOL _openShareListFeedsIgnoreLimited; // +0x15
    BOOL _dynamicFinderLiveEntryOnTopSearch; // +0x16
    BOOL _checkVideoEditFromMiaoJian; // +0x17
    BOOL _openCheckAntiAddictSwitch; // +0x18
    BOOL _enableShowShareRelatedWhenYoungContentLimit; // +0x19
    BOOL _joinLiveInvisiableSwitch; // +0x1a
    BOOL _finderLiveFeedbackNotInterestedSwitch; // +0x1b
    BOOL _musicEventUseHighlights; // +0x1c
    BOOL _forbidPostMediaGPSInfo; // +0x1d
    BOOL _enableProfileRedPacketEvent; // +0x1e
    BOOL _enablePostSelectRedPacket; // +0x1f
    BOOL _isShowFinderMiniAppReferenceEntry; // +0x20
    BOOL _clubEntranceDarkLaunch; // +0x21
    BOOL _clubFeedCanPostInLongPress; // +0x22
    BOOL _enablePostWithMpUrlSwitch; // +0x23
    BOOL _enableShakeUnreadCountToTab; // +0x24
    BOOL _enableStoriesUnreadCountToTab; // +0x25
    BOOL _enableFinderUnreadCountToTab; // +0x26
    BOOL _enableFinderCameraPreload; // +0x27
    BOOL _enableShowWXMentionSwitchEntry; // +0x28
    BOOL _profileUseHeaderCGI; // +0x29
    unsigned long long _maxTopicCount; // +0x30
    unsigned long long _maxMentionSbCount; // +0x38
    double _feedImageCompressRate; // +0x40
    double _headImageCompressRate; // +0x48
    double _profileImageCompressRate; // +0x50
    double _coverImageCompressRate; // +0x58
    double _thumbImageCompressRate; // +0x60
    double _musicImageCompressRate; // +0x68
    double _photoMaxSize; // +0x70
    double _thumbMaxSize; // +0x78
    double _coverMaxSize; // +0x80
    double _headMaxSize; // +0x88
    double _profileMaxSize; // +0x90
    NSString * _feedCompressResolution; // +0x98
    NSString * _headCompressResolution; // +0xa0
    NSString * _profileCompressResolution; // +0xa8
    unsigned long long _coverFrameRate; // +0xb0
    unsigned long long _uploadLargeFileSize; // +0xb8
    NSString * _finderDisableBrandIdentityTips; // +0xc0
    unsigned long long _POIJumpType; // +0xc8
    unsigned long long _maxPreloadTaskCount; // +0xd0
    NSMutableDictionary * _functionSpamDic; // +0xd8
    NSString * _extMiniappPrefix; // +0xe0
    NSString * _originalCertificateUrl; // +0xe8
    NSString * _topicInputStopTokenList; // +0xf0
    NSString * _mentionInputStopTokenList; // +0xf8
    unsigned long long _postTextMaxLimit; // +0x100
    NSString * _vEditorAppId; // +0x108
    unsigned long long _nearByVCCacheTimestamp; // +0x110
    NSString * _thumbCompressResolution; // +0x118
    unsigned long long _cropFullFeedHeightMaxResolution; // +0x120
    long long _prefetchFilterMinFeedCount; // +0x128
    long long _profilePreLoadUserPageWaitSec; // +0x130
    NSString * _miaoJianAppId; // +0x138
    NSString * _miaoJianAppstoreSchemePublishEntry; // +0x140
    NSString * _miaoJianUniversalLink; // +0x148
    NSString * _miaoJianAppstoreSchemeSameStyle; // +0x150
    NSString * _miaojianMetaKey; // +0x158
    NSString * _finderLimitedModeConfig; // +0x160
    NSString * _shopMiniAppId; // +0x168
    NSString * _shopMiniAppPath; // +0x170
    unsigned long long _antiAddictInterval; // +0x178
    unsigned long long _antiAddictDarkStartTime; // +0x180
    unsigned long long _antiAddictDarkEndTime; // +0x188
    unsigned long long _antiAddictSyncLocalInterval; // +0x190
    unsigned long long _localSearchContactUpdateIntervalInSec; // +0x198
    unsigned long long _ringToneVideoDurationLimit; // +0x1a0
    unsigned long long _finderStayReportCountLimit; // +0x1a8
    NSString * _tencentVideoChooseLink; // +0x1b0
    WCFinderLiteAppInfo * _postLinkVideoLiteAppParams; // +0x1b8
    WCFinderLiteAppInfo * _postLinkMiniGameDramaLiteAppParams; // +0x1c0
    unsigned long long _editImageMusicMaxSize; // +0x1c8
    unsigned long long _finderCreateLimitCount; // +0x1d0
    unsigned long long _finderPersonalMsgMaxGreetCount; // +0x1d8
    NSString * _coverCompressResolution; // +0x1e0
    NSString * _originRuleUrl; // +0x1e8
    unsigned long long _postLowBitRate; // +0x1f0
    NSString * _extensionLinkDomains; // +0x1f8
    unsigned long long _postRecommendMinDuration; // +0x200
    NSDictionary * _snsEntrySwitch; // +0x208
    unsigned long long _shortMaxLimit; // +0x210
    unsigned long long _postCGIRetryMaxCount; // +0x218
    unsigned long long _longCompressRetryMaxCount; // +0x220
    unsigned long long _showShortTextViewLimitCount; // +0x228
    NSMutableArray * _postShortValidArray; // +0x230
    unsigned long long _batchFetchFeedsMaxCount; // +0x238
    NSArray * _postPenaltyUnicodeArray; // +0x240
    unsigned long long _remindCommentTextMaxLimit; // +0x248
    unsigned long long _commentTextMaxLimit; // +0x250
    unsigned long long _commentInputMaxLineWrap; // +0x258
    NSArray * _finderSyncRedDotPathList; // +0x260
    NSArray * _liveSyncRedDotPathList; // +0x268
    long long _myTabEntranceType; // +0x270
    NSString * _originalStatementAppId; // +0x278
    NSString * _originalStatementPage; // +0x280
    NSString * _feedReportAppId; // +0x288
    NSString * _feedReportAppPage; // +0x290
    NSString * _originStateUrl; // +0x298
    unsigned long long _snsShareShortVideoMinDuration; // +0x2a0
    long long _postConfirmCGIMinDuration; // +0x2a8
    unsigned long long _streamPreloadProfileTimeInterval; // +0x2b0
    NSString * _adCommentApplyURL; // +0x2b8
    long long _audioTrackLoadDuration; // +0x2c0
    NSString * _originalDeclareHelpUrl; // +0x2c8
    NSString * _originalEduRewardLiteAppId; // +0x2d0
    NSString * _originalEduRewardLitePath; // +0x2d8
    NSString * _originalStateLieAppId; // +0x2e0
    NSString * _originalStateLieAppPath; // +0x2e8
    NSString * _profileOriginalUserAppId; // +0x2f0
    NSString * _profileOriginalUserPath; // +0x2f8
    unsigned long long _originalRecommendLabelShowCount; // +0x300
    unsigned long long _headSizeLimit; // +0x308
    NSString * _postInterestsAppId; // +0x310
    NSString * _postInterestsAppPath; // +0x318
    NSString * _commentPostAddShopAppPath; // +0x320
    NSString * _groupBuyRuleUrl; // +0x328
    NSString * _promotionShopAppId; // +0x330
    NSString * _promotionShopAppPath; // +0x338
    NSString * _createRedPacketMiniAppId; // +0x340
}
- (id)init;
- (void)updateDynamicConfig;
- (void)_updateDynamicConfig;
- (void)updateRedDotSyncPathInfo;
- (void)updateSnsEntrySwitch;
- (id)getConfigStringForKey:(id)arg1 defaultString:(id)arg2;
- (void)updatePostPenaltyUnicodeArray;
- (void)updateTopicStopToken;
- (void)updatePostShortValidToken;
- (void)updateMentionStopToken;
- (void)parseFunctionSpamConfig;
- (BOOL)firstPrefetchIgnoreIntevalConf;
- (void)reportFinderSwitchType;
- (unsigned long long)maxTopicCount;
- (void)setMaxTopicCount:(unsigned long long)arg1;
- (unsigned long long)maxMentionSbCount;
- (void)setMaxMentionSbCount:(unsigned long long)arg1;
- (BOOL)enableShowSuggestTagView;
- (void)setEnableShowSuggestTagView:(BOOL)arg1;
- (BOOL)enableShowFinderCommentBlacklist;
- (void)setEnableShowFinderCommentBlacklist:(BOOL)arg1;
- (double)feedImageCompressRate;
- (void)setFeedImageCompressRate:(double)arg1;
- (double)headImageCompressRate;
- (void)setHeadImageCompressRate:(double)arg1;
- (double)profileImageCompressRate;
- (void)setProfileImageCompressRate:(double)arg1;
- (double)coverImageCompressRate;
- (void)setCoverImageCompressRate:(double)arg1;
- (double)thumbImageCompressRate;
- (void)setThumbImageCompressRate:(double)arg1;
- (double)musicImageCompressRate;
- (void)setMusicImageCompressRate:(double)arg1;
- (double)photoMaxSize;
- (void)setPhotoMaxSize:(double)arg1;
- (double)thumbMaxSize;
- (void)setThumbMaxSize:(double)arg1;
- (double)coverMaxSize;
- (void)setCoverMaxSize:(double)arg1;
- (double)headMaxSize;
- (void)setHeadMaxSize:(double)arg1;
- (double)profileMaxSize;
- (void)setProfileMaxSize:(double)arg1;
- (id)feedCompressResolution;
- (void)setFeedCompressResolution:(id)arg1;
- (id)headCompressResolution;
- (void)setHeadCompressResolution:(id)arg1;
- (id)profileCompressResolution;
- (void)setProfileCompressResolution:(id)arg1;
- (unsigned long long)coverFrameRate;
- (void)setCoverFrameRate:(unsigned long long)arg1;
- (BOOL)useLowCompressMethod;
- (void)setUseLowCompressMethod:(BOOL)arg1;
- (BOOL)markReadOpenController;
- (void)setMarkReadOpenController:(BOOL)arg1;
- (BOOL)statsReportOpenController;
- (void)setStatsReportOpenController:(BOOL)arg1;
- (unsigned long long)uploadLargeFileSize;
- (void)setUploadLargeFileSize:(unsigned long long)arg1;
- (BOOL)preFetchStreamSwitch;
- (void)setPreFetchStreamSwitch:(BOOL)arg1;
- (id)finderDisableBrandIdentityTips;
- (void)setFinderDisableBrandIdentityTips:(id)arg1;
- (BOOL)dynamicFinderSwitch;
- (void)setDynamicFinderSwitch:(BOOL)arg1;
- (unsigned long long)POIJumpType;
- (void)setPOIJumpType:(unsigned long long)arg1;
- (BOOL)commentToProfile;
- (void)setCommentToProfile:(BOOL)arg1;
- (unsigned long long)maxPreloadTaskCount;
- (void)setMaxPreloadTaskCount:(unsigned long long)arg1;
- (id)functionSpamDic;
- (void)setFunctionSpamDic:(id)arg1;
- (id)extMiniappPrefix;
- (void)setExtMiniappPrefix:(id)arg1;
- (BOOL)refuseAllPrivateMsgSwitch;
- (void)setRefuseAllPrivateMsgSwitch:(BOOL)arg1;
- (id)originalCertificateUrl;
- (void)setOriginalCertificateUrl:(id)arg1;
- (id)topicInputStopTokenList;
- (void)setTopicInputStopTokenList:(id)arg1;
- (id)mentionInputStopTokenList;
- (void)setMentionInputStopTokenList:(id)arg1;
- (unsigned long long)postTextMaxLimit;
- (void)setPostTextMaxLimit:(unsigned long long)arg1;
- (id)vEditorAppId;
- (void)setVEditorAppId:(id)arg1;
- (unsigned long long)nearByVCCacheTimestamp;
- (void)setNearByVCCacheTimestamp:(unsigned long long)arg1;
- (id)thumbCompressResolution;
- (void)setThumbCompressResolution:(id)arg1;
- (BOOL)useLiveNearPeople;
- (void)setUseLiveNearPeople:(BOOL)arg1;
- (unsigned long long)cropFullFeedHeightMaxResolution;
- (void)setCropFullFeedHeightMaxResolution:(unsigned long long)arg1;
- (long long)prefetchFilterMinFeedCount;
- (void)setPrefetchFilterMinFeedCount:(long long)arg1;
- (long long)profilePreLoadUserPageWaitSec;
- (void)setProfilePreLoadUserPageWaitSec:(long long)arg1;
- (id)miaoJianAppId;
- (void)setMiaoJianAppId:(id)arg1;
- (id)miaoJianAppstoreSchemePublishEntry;
- (void)setMiaoJianAppstoreSchemePublishEntry:(id)arg1;
- (id)miaoJianUniversalLink;
- (void)setMiaoJianUniversalLink:(id)arg1;
- (id)miaoJianAppstoreSchemeSameStyle;
- (void)setMiaoJianAppstoreSchemeSameStyle:(id)arg1;
- (BOOL)showWindowProduct;
- (void)setShowWindowProduct:(BOOL)arg1;
- (BOOL)dynamicFinderLiveNewEntranceSwitch;
- (void)setDynamicFinderLiveNewEntranceSwitch:(BOOL)arg1;
- (BOOL)dynamicFinderWXProfileAuthInfoSwitch;
- (void)setDynamicFinderWXProfileAuthInfoSwitch:(BOOL)arg1;
- (BOOL)openShareListFeedsIgnoreLimited;
- (void)setOpenShareListFeedsIgnoreLimited:(BOOL)arg1;
- (BOOL)dynamicFinderLiveEntryOnTopSearch;
- (void)setDynamicFinderLiveEntryOnTopSearch:(BOOL)arg1;
- (id)miaojianMetaKey;
- (void)setMiaojianMetaKey:(id)arg1;
- (BOOL)checkVideoEditFromMiaoJian;
- (void)setCheckVideoEditFromMiaoJian:(BOOL)arg1;
- (id)finderLimitedModeConfig;
- (void)setFinderLimitedModeConfig:(id)arg1;
- (id)shopMiniAppId;
- (void)setShopMiniAppId:(id)arg1;
- (id)shopMiniAppPath;
- (void)setShopMiniAppPath:(id)arg1;
- (unsigned long long)antiAddictInterval;
- (void)setAntiAddictInterval:(unsigned long long)arg1;
- (BOOL)openCheckAntiAddictSwitch;
- (void)setOpenCheckAntiAddictSwitch:(BOOL)arg1;
- (unsigned long long)antiAddictDarkStartTime;
- (void)setAntiAddictDarkStartTime:(unsigned long long)arg1;
- (unsigned long long)antiAddictDarkEndTime;
- (void)setAntiAddictDarkEndTime:(unsigned long long)arg1;
- (unsigned long long)antiAddictSyncLocalInterval;
- (void)setAntiAddictSyncLocalInterval:(unsigned long long)arg1;
- (unsigned long long)localSearchContactUpdateIntervalInSec;
- (void)setLocalSearchContactUpdateIntervalInSec:(unsigned long long)arg1;
- (unsigned long long)ringToneVideoDurationLimit;
- (void)setRingToneVideoDurationLimit:(unsigned long long)arg1;
- (BOOL)enableShowShareRelatedWhenYoungContentLimit;
- (void)setEnableShowShareRelatedWhenYoungContentLimit:(BOOL)arg1;
- (unsigned long long)finderStayReportCountLimit;
- (void)setFinderStayReportCountLimit:(unsigned long long)arg1;
- (id)tencentVideoChooseLink;
- (void)setTencentVideoChooseLink:(id)arg1;
- (id)postLinkVideoLiteAppParams;
- (void)setPostLinkVideoLiteAppParams:(id)arg1;
- (id)postLinkMiniGameDramaLiteAppParams;
- (void)setPostLinkMiniGameDramaLiteAppParams:(id)arg1;
- (unsigned long long)editImageMusicMaxSize;
- (void)setEditImageMusicMaxSize:(unsigned long long)arg1;
- (BOOL)joinLiveInvisiableSwitch;
- (void)setJoinLiveInvisiableSwitch:(BOOL)arg1;
- (BOOL)finderLiveFeedbackNotInterestedSwitch;
- (void)setFinderLiveFeedbackNotInterestedSwitch:(BOOL)arg1;
- (BOOL)musicEventUseHighlights;
- (void)setMusicEventUseHighlights:(BOOL)arg1;
- (BOOL)forbidPostMediaGPSInfo;
- (void)setForbidPostMediaGPSInfo:(BOOL)arg1;
- (unsigned long long)finderCreateLimitCount;
- (void)setFinderCreateLimitCount:(unsigned long long)arg1;
- (unsigned long long)finderPersonalMsgMaxGreetCount;
- (void)setFinderPersonalMsgMaxGreetCount:(unsigned long long)arg1;
- (id)coverCompressResolution;
- (void)setCoverCompressResolution:(id)arg1;
- (BOOL)enableProfileRedPacketEvent;
- (void)setEnableProfileRedPacketEvent:(BOOL)arg1;
- (BOOL)enablePostSelectRedPacket;
- (void)setEnablePostSelectRedPacket:(BOOL)arg1;
- (BOOL)isShowFinderMiniAppReferenceEntry;
- (void)setIsShowFinderMiniAppReferenceEntry:(BOOL)arg1;
- (BOOL)clubEntranceDarkLaunch;
- (void)setClubEntranceDarkLaunch:(BOOL)arg1;
- (BOOL)clubFeedCanPostInLongPress;
- (void)setClubFeedCanPostInLongPress:(BOOL)arg1;
- (id)originRuleUrl;
- (void)setOriginRuleUrl:(id)arg1;
- (unsigned long long)postLowBitRate;
- (void)setPostLowBitRate:(unsigned long long)arg1;
- (id)extensionLinkDomains;
- (void)setExtensionLinkDomains:(id)arg1;
- (unsigned long long)postRecommendMinDuration;
- (void)setPostRecommendMinDuration:(unsigned long long)arg1;
- (id)snsEntrySwitch;
- (void)setSnsEntrySwitch:(id)arg1;
- (unsigned long long)shortMaxLimit;
- (void)setShortMaxLimit:(unsigned long long)arg1;
- (unsigned long long)postCGIRetryMaxCount;
- (void)setPostCGIRetryMaxCount:(unsigned long long)arg1;
- (unsigned long long)longCompressRetryMaxCount;
- (void)setLongCompressRetryMaxCount:(unsigned long long)arg1;
- (unsigned long long)showShortTextViewLimitCount;
- (void)setShowShortTextViewLimitCount:(unsigned long long)arg1;
- (id)postShortValidArray;
- (void)setPostShortValidArray:(id)arg1;
- (unsigned long long)batchFetchFeedsMaxCount;
- (void)setBatchFetchFeedsMaxCount:(unsigned long long)arg1;
- (id)postPenaltyUnicodeArray;
- (void)setPostPenaltyUnicodeArray:(id)arg1;
- (unsigned long long)remindCommentTextMaxLimit;
- (void)setRemindCommentTextMaxLimit:(unsigned long long)arg1;
- (unsigned long long)commentTextMaxLimit;
- (void)setCommentTextMaxLimit:(unsigned long long)arg1;
- (unsigned long long)commentInputMaxLineWrap;
- (void)setCommentInputMaxLineWrap:(unsigned long long)arg1;
- (id)finderSyncRedDotPathList;
- (void)setFinderSyncRedDotPathList:(id)arg1;
- (id)liveSyncRedDotPathList;
- (void)setLiveSyncRedDotPathList:(id)arg1;
- (long long)myTabEntranceType;
- (void)setMyTabEntranceType:(long long)arg1;
- (BOOL)enablePostWithMpUrlSwitch;
- (void)setEnablePostWithMpUrlSwitch:(BOOL)arg1;
- (BOOL)enableShakeUnreadCountToTab;
- (void)setEnableShakeUnreadCountToTab:(BOOL)arg1;
- (BOOL)enableStoriesUnreadCountToTab;
- (void)setEnableStoriesUnreadCountToTab:(BOOL)arg1;
- (BOOL)enableFinderUnreadCountToTab;
- (void)setEnableFinderUnreadCountToTab:(BOOL)arg1;
- (id)originalStatementAppId;
- (void)setOriginalStatementAppId:(id)arg1;
- (id)originalStatementPage;
- (void)setOriginalStatementPage:(id)arg1;
- (id)feedReportAppId;
- (void)setFeedReportAppId:(id)arg1;
- (id)feedReportAppPage;
- (void)setFeedReportAppPage:(id)arg1;
- (BOOL)enableFinderCameraPreload;
- (void)setEnableFinderCameraPreload:(BOOL)arg1;
- (id)originStateUrl;
- (void)setOriginStateUrl:(id)arg1;
- (unsigned long long)snsShareShortVideoMinDuration;
- (void)setSnsShareShortVideoMinDuration:(unsigned long long)arg1;
- (BOOL)enableShowWXMentionSwitchEntry;
- (void)setEnableShowWXMentionSwitchEntry:(BOOL)arg1;
- (long long)postConfirmCGIMinDuration;
- (void)setPostConfirmCGIMinDuration:(long long)arg1;
- (BOOL)profileUseHeaderCGI;
- (void)setProfileUseHeaderCGI:(BOOL)arg1;
- (unsigned long long)streamPreloadProfileTimeInterval;
- (void)setStreamPreloadProfileTimeInterval:(unsigned long long)arg1;
- (id)adCommentApplyURL;
- (void)setAdCommentApplyURL:(id)arg1;
- (long long)audioTrackLoadDuration;
- (void)setAudioTrackLoadDuration:(long long)arg1;
- (id)originalDeclareHelpUrl;
- (void)setOriginalDeclareHelpUrl:(id)arg1;
- (id)originalEduRewardLiteAppId;
- (void)setOriginalEduRewardLiteAppId:(id)arg1;
- (id)originalEduRewardLitePath;
- (void)setOriginalEduRewardLitePath:(id)arg1;
- (id)originalStateLieAppId;
- (void)setOriginalStateLieAppId:(id)arg1;
- (id)originalStateLieAppPath;
- (void)setOriginalStateLieAppPath:(id)arg1;
- (id)profileOriginalUserAppId;
- (void)setProfileOriginalUserAppId:(id)arg1;
- (id)profileOriginalUserPath;
- (void)setProfileOriginalUserPath:(id)arg1;
- (unsigned long long)originalRecommendLabelShowCount;
- (void)setOriginalRecommendLabelShowCount:(unsigned long long)arg1;
- (unsigned long long)headSizeLimit;
- (void)setHeadSizeLimit:(unsigned long long)arg1;
- (id)postInterestsAppId;
- (void)setPostInterestsAppId:(id)arg1;
- (id)postInterestsAppPath;
- (void)setPostInterestsAppPath:(id)arg1;
- (id)commentPostAddShopAppPath;
- (void)setCommentPostAddShopAppPath:(id)arg1;
- (id)groupBuyRuleUrl;
- (void)setGroupBuyRuleUrl:(id)arg1;
- (id)promotionShopAppId;
- (void)setPromotionShopAppId:(id)arg1;
- (id)promotionShopAppPath;
- (void)setPromotionShopAppPath:(id)arg1;
- (id)createRedPacketMiniAppId;
- (void)setCreateRedPacketMiniAppId:(id)arg1;
- (void).cxx_destruct;
@end
