@interface WCFinderInitConfigInfo : NSObject
{
    BOOL _usefindergetcommentlist; // +0x8
    BOOL _needFaceVerify; // +0x9
    BOOL _supportCommentEmoticon; // +0xa
    unsigned int _retryDelaySecond; // +0xc
    unsigned int _pcCardShowStyle; // +0x10
    unsigned int _useNewNoticeIconStyleInFeed; // +0x14
    unsigned int _supportCommentRecommend; // +0x18
    FinderTeenModeTipsConfig * _teenmodeTipsConfig; // +0x20
    FinderTeenModeSetting * _teenmodeSetting; // +0x28
    FinderWxPersonalizedSetting * _wxPersonalizedSetting; // +0x30
    FinderRingtoneConfig * _ringtoneConfig; // +0x38
    FinderDescCarouselConfig * _carouselConfig; // +0x40
    NewLifeConfig * _newlifeConfig; // +0x48
    FinderSnsCreateUserInfo * _snsCreateUserInfo; // +0x50
    FinderCheckPrefetchConfig * _finderCheckPrefetchConf; // +0x58
    PCFinderExptInfo * _pcFinderExptInfo; // +0x60
    FinderNicknameCustomCharacters * _nicknameCustomCharacters; // +0x68
    LongVideoInfo * _longvideoInfo; // +0x70
    FinderUploadGetTempUrl * _uploadGetTempUrl; // +0x78
    FinderHelpPromotionConfig * _helpPromotionConfig; // +0x80
    FinderRedDotExposeInfoConfig * _reddotExposeInfoConfig; // +0x88
    FinderPlaceHolderConfig * _finderPlaceHolderConf; // +0x90
    FinderJoinLiveVisibleInfo * _joinliveVisibleInfo; // +0x98
    FinderFriendTabConfig * _friendTabConfig; // +0xa0
    SimpleCommonConfig * _simpleCommonConfig; // +0xa8
}
- (id)initWithConfigArray:(id)arg1;
- (void)updateConfigInfoWithItemArray:(id)arg1;
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
- (void).cxx_destruct;
@end

