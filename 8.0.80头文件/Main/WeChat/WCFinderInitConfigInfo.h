@interface WCFinderInitConfigInfo : NSObject
{
    BOOL _usefindergetcommentlist; // +0x8
    BOOL _needFaceVerify; // +0x9
    BOOL _supportCommentEmoticon; // +0xa
    BOOL _supportImageComment; // +0xb
    BOOL _shortVideoBulletComment; // +0xc
    unsigned int _retryDelaySecond; // +0x10
    unsigned int _pcCardShowStyle; // +0x14
    unsigned int _useNewNoticeIconStyleInFeed; // +0x18
    unsigned int _supportCommentRecommend; // +0x1c
    FinderTeenModeTipsConfig * _teenmodeTipsConfig; // +0x20
    FinderTeenModeSetting * _teenmodeSetting; // +0x28
    FinderWxPersonalizedSetting * _wxPersonalizedSetting; // +0x30
    FinderRingtoneConfig * _ringtoneConfig; // +0x38
    FinderDescCarouselConfig * _carouselConfig; // +0x40
    NewLifeConfig * _newlifeConfig; // +0x48
    FinderSnsCreateUserInfo * _snsCreateUserInfo; // +0x50
    FinderCheckPrefetchConfig * _finderCheckPrefetchConf; // +0x58
    FinderStreamConfig * _finderStreamConfig; // +0x60
    FinderPreloadClientConfig * _finderPreloadClientConfig; // +0x68
    FinderOfflineModeConfig * _finderOfflineModeConfig; // +0x70
    FinderNetOffModeConfig * _finderNetOffModeConfig; // +0x78
    FinderDynamicTabConfig * _finderDynamicTabConfig; // +0x80
    NativeDramaInfo * _nativeDramaInfo; // +0x88
    PCFinderExptInfo * _pcFinderExptInfo; // +0x90
    FinderNicknameCustomCharacters * _nicknameCustomCharacters; // +0x98
    LongVideoInfo * _longvideoInfo; // +0xa0
    FinderUploadGetTempUrl * _uploadGetTempUrl; // +0xa8
    FinderHelpPromotionConfig * _helpPromotionConfig; // +0xb0
    FinderRedDotExposeInfoConfig * _reddotExposeInfoConfig; // +0xb8
    FinderPlaceHolderConfig * _finderPlaceHolderConf; // +0xc0
    FinderJoinLiveVisibleInfo * _joinliveVisibleInfo; // +0xc8
    FinderFriendTabConfig * _friendTabConfig; // +0xd0
    SimpleCommonConfig * _simpleCommonConfig; // +0xd8
    FinderYuanbaoConfig * _finderYuanbaoConfig; // +0xe0
    FinderJumpInfo_LiteApp * _personalmsgComplainLiteappInfo; // +0xe8
    FinderJumpInfo_LiteApp * _productComplainLiteappInfo; // +0xf0
    FinderLiveMentionReddotSwitch * _finderLiveMentionReddotSwitch; // +0xf8
    FinderVideoTemplateConfig * _finderVideoTemplateConfig; // +0x100
    FinderReddotEnhanceConfig * _finderReddotEnhanceConfig; // +0x108
    FinderInteractionMileStoneConfig * _interactionMilestoneConfig; // +0x110
    FinderPostMandatorDeclareConfig * _postMandatoryDeclareConfig; // +0x118
    FinderInteractionStrongLikeToastConfig * _interactionStrongToastConfig; // +0x120
    FinderEnhanceConfig * _enhanceConfig; // +0x128
    FinderBoxConfig * _finderBoxConfig; // +0x130
    FinderAsyncLoadPollingGlobalConfig * _asyncLoadPollingGlobalConfig; // +0x138
    FinderGetRelatedListCacheConfig * _finderGetRelatedListCacheConfig; // +0x140
    double _commentImageCompressRate; // +0x148
    double _commentImageMaxSize; // +0x150
    NSString * _commentImageCompressResolution; // +0x158
    FinderPostClientConfig * _finderPostClientConfig; // +0x160
}
- (double)safeGetCommentImageCompressRate;
- (double)safeGetCommentImageMaxSize;
- (id)safeGetCommentImageCompressResolution;
- (id)safeGetFeedCompressResolution;
- (double)safeGetFeedPostPhotoMaxSize;
- (id)initWithConfigArray:(id)arg1;
- (void)updateConfigInfoWithItemArray:(id)arg1;
- (void)resetDefault;
- (void)_updateConfigInfoWithItemArray:(id)arg1;
- (id)getValueWithClass:(Class)arg1 configValue:(id)arg2;
- (id)getStringValueFromData:(id)arg1;
- (id)convertCamelFromUnderline:(id)arg1;
- (void)voidFunctionWithConfigItem:(id)arg1;
- (id)customMapDict;
- (id)customPropertyKeyMap:(id)arg1;
- (id)teenmodeTipsConfig;
- (void)setTeenmodeTipsConfig:(id)arg1;
- (unsigned int)retryDelaySecond;
- (void)setRetryDelaySecond:(unsigned int)arg1;
- (id)teenmodeSetting;
- (void)setTeenmodeSetting:(id)arg1;
- (id)wxPersonalizedSetting;
- (void)setWxPersonalizedSetting:(id)arg1;
- (id)ringtoneConfig;
- (void)setRingtoneConfig:(id)arg1;
- (id)carouselConfig;
- (void)setCarouselConfig:(id)arg1;
- (id)newlifeConfig;
- (void)setNewlifeConfig:(id)arg1;
- (unsigned int)pcCardShowStyle;
- (void)setPcCardShowStyle:(unsigned int)arg1;
- (id)snsCreateUserInfo;
- (void)setSnsCreateUserInfo:(id)arg1;
- (id)finderCheckPrefetchConf;
- (void)setFinderCheckPrefetchConf:(id)arg1;
- (id)finderStreamConfig;
- (void)setFinderStreamConfig:(id)arg1;
- (id)finderPreloadClientConfig;
- (void)setFinderPreloadClientConfig:(id)arg1;
- (id)finderOfflineModeConfig;
- (void)setFinderOfflineModeConfig:(id)arg1;
- (id)finderNetOffModeConfig;
- (void)setFinderNetOffModeConfig:(id)arg1;
- (id)finderDynamicTabConfig;
- (void)setFinderDynamicTabConfig:(id)arg1;
- (id)nativeDramaInfo;
- (void)setNativeDramaInfo:(id)arg1;
- (id)pcFinderExptInfo;
- (void)setPcFinderExptInfo:(id)arg1;
- (BOOL)usefindergetcommentlist;
- (void)setUsefindergetcommentlist:(BOOL)arg1;
- (id)nicknameCustomCharacters;
- (void)setNicknameCustomCharacters:(id)arg1;
- (BOOL)needFaceVerify;
- (void)setNeedFaceVerify:(BOOL)arg1;
- (id)longvideoInfo;
- (void)setLongvideoInfo:(id)arg1;
- (id)uploadGetTempUrl;
- (void)setUploadGetTempUrl:(id)arg1;
- (id)helpPromotionConfig;
- (void)setHelpPromotionConfig:(id)arg1;
- (id)reddotExposeInfoConfig;
- (void)setReddotExposeInfoConfig:(id)arg1;
- (unsigned int)useNewNoticeIconStyleInFeed;
- (void)setUseNewNoticeIconStyleInFeed:(unsigned int)arg1;
- (unsigned int)supportCommentRecommend;
- (void)setSupportCommentRecommend:(unsigned int)arg1;
- (id)finderPlaceHolderConf;
- (void)setFinderPlaceHolderConf:(id)arg1;
- (id)joinliveVisibleInfo;
- (void)setJoinliveVisibleInfo:(id)arg1;
- (id)friendTabConfig;
- (void)setFriendTabConfig:(id)arg1;
- (id)simpleCommonConfig;
- (void)setSimpleCommonConfig:(id)arg1;
- (BOOL)supportCommentEmoticon;
- (void)setSupportCommentEmoticon:(BOOL)arg1;
- (BOOL)supportImageComment;
- (void)setSupportImageComment:(BOOL)arg1;
- (id)finderYuanbaoConfig;
- (void)setFinderYuanbaoConfig:(id)arg1;
- (id)personalmsgComplainLiteappInfo;
- (void)setPersonalmsgComplainLiteappInfo:(id)arg1;
- (id)productComplainLiteappInfo;
- (void)setProductComplainLiteappInfo:(id)arg1;
- (id)finderLiveMentionReddotSwitch;
- (void)setFinderLiveMentionReddotSwitch:(id)arg1;
- (id)finderVideoTemplateConfig;
- (void)setFinderVideoTemplateConfig:(id)arg1;
- (id)finderReddotEnhanceConfig;
- (void)setFinderReddotEnhanceConfig:(id)arg1;
- (BOOL)shortVideoBulletComment;
- (void)setShortVideoBulletComment:(BOOL)arg1;
- (id)interactionMilestoneConfig;
- (void)setInteractionMilestoneConfig:(id)arg1;
- (id)postMandatoryDeclareConfig;
- (void)setPostMandatoryDeclareConfig:(id)arg1;
- (id)interactionStrongToastConfig;
- (void)setInteractionStrongToastConfig:(id)arg1;
- (id)enhanceConfig;
- (void)setEnhanceConfig:(id)arg1;
- (id)finderBoxConfig;
- (void)setFinderBoxConfig:(id)arg1;
- (id)asyncLoadPollingGlobalConfig;
- (void)setAsyncLoadPollingGlobalConfig:(id)arg1;
- (id)finderGetRelatedListCacheConfig;
- (void)setFinderGetRelatedListCacheConfig:(id)arg1;
- (double)commentImageCompressRate;
- (void)setCommentImageCompressRate:(double)arg1;
- (double)commentImageMaxSize;
- (void)setCommentImageMaxSize:(double)arg1;
- (id)commentImageCompressResolution;
- (void)setCommentImageCompressResolution:(id)arg1;
- (id)finderPostClientConfig;
- (void)setFinderPostClientConfig:(id)arg1;
- (void).cxx_destruct;
@end
