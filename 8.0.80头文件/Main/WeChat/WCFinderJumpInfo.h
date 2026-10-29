@interface WCFinderJumpInfo : NSObject <WCTTableCoding, PBCoding>
{
    BOOL _needPreload; // +0x8
    BOOL _enableSingleSceneEffect; // +0x9
    BOOL _isNativeAdComponent; // +0xa
    BOOL _ignoreObjectocrFrameInfo; // +0xb
    BOOL _hiddenOnTL; // +0xc
    int _jumpType; // +0x10
    int _businessType; // +0x14
    int _businessCategory; // +0x18
    unsigned int _extType; // +0x1c
    unsigned int _bannerType; // +0x20
    unsigned int _delayPreloadTime; // +0x24
    int _redPacketType; // +0x28
    int _groupStyleType; // +0x2c
    int _source; // +0x30
    unsigned int _cacheDuration; // +0x34
    int _scene; // +0x38
    NSString * _primaryId; // +0x40
    unsigned long long _svrSourceType; // +0x48
    NSString * _jumpId; // +0x50
    WCFinderJumpInfoStyleMutableArray * _styleArray; // +0x58
    NSString * _iconUrl; // +0x60
    NSString * _pagIconUrl; // +0x68
    long long _iconType; // +0x70
    NSString * _wording; // +0x78
    NSString * _recommendReason; // +0x80
    NSString * _extInfo; // +0x88
    NSData * _extBuff; // +0x90
    NSString * _reportInfo; // +0x98
    NSString * _clientReportInfo; // +0xa0
    NSString * _profilebypInfo; // +0xa8
    NSString * _groupKey; // +0xb0
    NSString * _jumpPageId; // +0xb8
    NSString * _uiFingerPrint; // +0xc0
    unsigned long long _aid; // +0xc8
    NSString * _uxinfo; // +0xd0
    unsigned long long _cacheTime; // +0xd8
    unsigned long long _expireTime; // +0xe0
    NSString * _openPopupTitle; // +0xe8
    NSString * _openPopupWording; // +0xf0
    NSString * _clickSessionId; // +0xf8
    FinderJumpInfo_MiniAppInfo * _miniAppInfo; // +0x100
    FinderJumpInfo_Html5Info * _html5Info; // +0x108
    FinderJumpInfo_NativeInfo * _nativeInfo; // +0x110
    FinderJumpInfo_SchemaInfo * _schemaInfo; // +0x118
    WCFinderJumpInfoSchemaMutableArray * _schemaJumpList; // +0x120
    FinderJumpInfo_LiteApp * _liteapp; // +0x128
    EcsJumpInfo * _ecsJumpInfo; // +0x130
    FinderJumpInfo_OnlineHelp * _onlineHelp; // +0x138
    FinderJumpInfoRedDot * _redDot; // +0x140
    NSString * _tid; // +0x148
}
+ (id)generateJumperClickSessionId;
+ (void)PBArrayAdd_jumpType;
+ (void)PBArrayAdd_businessType;
+ (void)PBArrayAdd_iconUrl;
+ (void)PBArrayAdd_wording;
+ (void)PBArrayAdd_recommendReason;
+ (void)PBArrayAdd_extInfo;
+ (void)PBArrayAdd_reportInfo;
+ (void)PBArrayAdd_miniAppInfo;
+ (void)PBArrayAdd_html5Info;
+ (void)PBArrayAdd_nativeInfo;
+ (void)PBArrayAdd_schemaInfo;
+ (void)PBArrayAdd_tid;
+ (void)PBArrayAdd_scene;
+ (void)PBArrayAdd_source;
+ (void)PBArrayAdd_redDot;
+ (void)PBArrayAdd_jumpId;
+ (void)PBArrayAdd_primaryId;
+ (void)PBArrayAdd_cacheTime;
+ (void)PBArrayAdd_svrSourceType;
+ (void)PBArrayAdd_bannerType;
+ (void)PBArrayAdd_liteapp;
+ (void)PBArrayAdd_styleArray;
+ (void)PBArrayAdd_uxinfo;
+ (void)PBArrayAdd_aid;
+ (void)PBArrayAdd_extType;
+ (void)PBArrayAdd_cacheDuration;
+ (void)PBArrayAdd_expireTime;
+ (void)PBArrayAdd_needPreload;
+ (void)PBArrayAdd_delayPreloadTime;
+ (void)PBArrayAdd_iconType;
+ (void)PBArrayAdd_pagIconUrl;
+ (void)PBArrayAdd_redPacketType;
+ (void)PBArrayAdd_groupKey;
+ (void)PBArrayAdd_uiFingerPrint;
+ (void)PBArrayAdd_openPopupTitle;
+ (void)PBArrayAdd_openPopupWording;
+ (void)PBArrayAdd_groupStyleType;
+ (void)PBArrayAdd_jumpPageId;
+ (void)PBArrayAdd_enableSingleSceneEffect;
+ (void)PBArrayAdd_ecsJumpInfo;
+ (void)PBArrayAdd_isNativeAdComponent;
+ (void)PBArrayAdd_businessCategory;
+ (void)PBArrayAdd_ignoreObjectocrFrameInfo;
+ (void)PBArrayAdd_clientReportInfo;
+ (void)PBArrayAdd_schemaJumpList;
+ (void)PBArrayAdd_extBuff;
+ (void)initialize;
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)primaryId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_primaryId;
+ (const void *)jumpId;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_jumpId;
+ (const void *)jumpType;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_jumpType;
+ (const void *)businessType;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_businessType;
+ (const void *)iconUrl;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_iconUrl;
+ (const void *)recommendReason;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_recommendReason;
+ (const void *)extInfo;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_extInfo;
+ (const void *)extBuff;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (id)swift_extBuff;
+ (const void *)reportInfo;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (id)swift_reportInfo;
+ (const void *)source;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (id)swift_source;
+ (const void *)miniAppInfo;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (id)swift_miniAppInfo;
+ (const void *)html5Info;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (id)swift_html5Info;
+ (const void *)nativeInfo;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (id)swift_nativeInfo;
+ (const void *)schemaInfo;
+ (const void *)__wcdb_synthesize_13:(void *)arg1;
+ (id)swift_schemaInfo;
+ (const void *)schemaJumpList;
+ (const void *)__wcdb_synthesize_14:(void *)arg1;
+ (id)swift_schemaJumpList;
+ (const void *)cacheTime;
+ (const void *)__wcdb_synthesize_15:(void *)arg1;
+ (id)swift_cacheTime;
+ (const void *)svrSourceType;
+ (const void *)__wcdb_synthesize_16:(void *)arg1;
+ (id)swift_svrSourceType;
+ (const void *)wording;
+ (const void *)__wcdb_synthesize_17:(void *)arg1;
+ (id)swift_wording;
+ (const void *)bannerType;
+ (const void *)__wcdb_synthesize_18:(void *)arg1;
+ (id)swift_bannerType;
+ (const void *)liteapp;
+ (const void *)__wcdb_synthesize_19:(void *)arg1;
+ (id)swift_liteapp;
+ (const void *)styleArray;
+ (const void *)__wcdb_synthesize_20:(void *)arg1;
+ (id)swift_styleArray;
+ (const void *)scene;
+ (const void *)__wcdb_synthesize_21:(void *)arg1;
+ (id)swift_scene;
+ (const void *)uxinfo;
+ (const void *)__wcdb_synthesize_22:(void *)arg1;
+ (id)swift_uxinfo;
+ (const void *)aid;
+ (const void *)__wcdb_synthesize_23:(void *)arg1;
+ (id)swift_aid;
+ (const void *)extType;
+ (const void *)__wcdb_synthesize_24:(void *)arg1;
+ (id)swift_extType;
+ (const void *)cacheDuration;
+ (const void *)__wcdb_synthesize_25:(void *)arg1;
+ (id)swift_cacheDuration;
+ (const void *)expireTime;
+ (const void *)__wcdb_synthesize_26:(void *)arg1;
+ (id)swift_expireTime;
+ (const void *)needPreload;
+ (const void *)__wcdb_synthesize_27:(void *)arg1;
+ (id)swift_needPreload;
+ (const void *)delayPreloadTime;
+ (const void *)__wcdb_synthesize_28:(void *)arg1;
+ (id)swift_delayPreloadTime;
+ (const void *)iconType;
+ (const void *)__wcdb_synthesize_29:(void *)arg1;
+ (id)swift_iconType;
+ (const void *)pagIconUrl;
+ (const void *)__wcdb_synthesize_30:(void *)arg1;
+ (id)swift_pagIconUrl;
+ (const void *)redPacketType;
+ (const void *)__wcdb_synthesize_31:(void *)arg1;
+ (id)swift_redPacketType;
+ (const void *)groupKey;
+ (const void *)__wcdb_synthesize_32:(void *)arg1;
+ (id)swift_groupKey;
+ (const void *)uiFingerPrint;
+ (const void *)__wcdb_synthesize_33:(void *)arg1;
+ (id)swift_uiFingerPrint;
+ (const void *)openPopupTitle;
+ (const void *)__wcdb_synthesize_34:(void *)arg1;
+ (id)swift_openPopupTitle;
+ (const void *)openPopupWording;
+ (const void *)__wcdb_synthesize_35:(void *)arg1;
+ (id)swift_openPopupWording;
+ (const void *)groupStyleType;
+ (const void *)__wcdb_synthesize_36:(void *)arg1;
+ (id)swift_groupStyleType;
+ (const void *)jumpPageId;
+ (const void *)__wcdb_synthesize_37:(void *)arg1;
+ (id)swift_jumpPageId;
+ (const void *)enableSingleSceneEffect;
+ (const void *)__wcdb_synthesize_38:(void *)arg1;
+ (id)swift_enableSingleSceneEffect;
+ (const void *)ecsJumpInfo;
+ (const void *)__wcdb_synthesize_39:(void *)arg1;
+ (id)swift_ecsJumpInfo;
+ (const void *)isNativeAdComponent;
+ (const void *)__wcdb_synthesize_40:(void *)arg1;
+ (id)swift_isNativeAdComponent;
+ (const void *)businessCategory;
+ (const void *)__wcdb_synthesize_41:(void *)arg1;
+ (id)swift_businessCategory;
+ (const void *)ignoreObjectocrFrameInfo;
+ (const void *)__wcdb_synthesize_42:(void *)arg1;
+ (id)swift_ignoreObjectocrFrameInfo;
+ (const void *)clientReportInfo;
+ (const void *)__wcdb_synthesize_43:(void *)arg1;
+ (id)swift_clientReportInfo;
+ (void)__wcdb_table_constraint_44:(void *)arg1;
+ (void)__wcdb_table_constraint_45:(void *)arg1;
+ (void)__wcdb_index_46:(void *)arg1;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (unsigned long long)columnTypeForWCDB;
+ (id)reportKVInfoJsonFromPB:(id)arg1;
+ (BOOL)judgeMusicJumpInfoBusiness:(int)arg1;
+ (BOOL)judgeTingJumpInfoBusiness:(int)arg1;
+ (id)getObjectFromExtInfoFromExtInfo:(id)arg1 forKey:(id)arg2;
+ (id)appendOrReplaceInfoToExtFromExtInfo:(id)arg1 object:(id)arg2 key:(id)arg3;
+ (id)jumpInfoStyleToDict:(id)arg1;
- (BOOL)isVideoTemplateJumpInfo;
- (id)genVideoTemplateData;
- (BOOL)canShowTemplateEntry;
- (unsigned long long)goodsActivityType;
- (id)postPageDarkUrl;
- (id)goodsRawWording;
- (id)postPageLightUrl;
- (unsigned long long)postAttachLinkType;
- (void)setEnterScene:(unsigned long long)arg1;
- (unsigned long long)enterScene;
- (void)setFromSDK:(BOOL)arg1;
- (BOOL)fromSDK;
- (void)setMusicSourcePosition:(unsigned long long)arg1;
- (void)updateJumperClickSessionId:(id)arg1;
- (id)jumperClickSessionId;
- (void)setFinderPostDelegate:(id)arg1;
- (id)finderPostDelegate;
- (unsigned long long)musicSourcePosition;
- (void)setBindEventId:(unsigned long long)arg1;
- (unsigned long long)bindEventId;
- (id)getPostSongId;
- (id)getPostAudioId;
- (BOOL)isOpenMusicTopic;
- (id)getPostMiaojianSdkPrefix;
- (id)getPostAttachTextContent;
- (id)getJumpInfoLinkTopic;
- (id)getCollectionInfo;
- (BOOL)isPatTopicJumpInfo;
- (BOOL)shouldFeedBottomRedPacket;
- (BOOL)isGoodsJumpInfo;
- (id)getSuspendBubbleJumpInfoReportEid;
- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)initWithFinderJumpInfo:(id)arg1;
- (id)initFromShareStr:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setLiteapp:(id)arg1;
- (id)convertToJumpInfo;
- (id)toShareStr;
- (id)toJsonStr;
- (id)reportKVInfoJson;
- (id)interactiveReportString;
- (id)description;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSONString:(id)arg1;
- (BOOL)isPagIcon;
- (BOOL)modelCustomTransformFromDictionary:(id)arg1 forConfigTag:(id)arg2;
- (id)getPrimaryKey;
- (id)showIdWithShowPosition:(int)arg1;
- (id)getRecommendTips;
- (id)_getCustomTips;
- (id)getRecommendTipsWithStyle:(id)arg1;
- (BOOL)shouldShowOnPosition:(int)arg1;
- (id)styleOnPosition:(int)arg1;
- (BOOL)hiddenOnTL;
- (id)completeUrlWithPos:(unsigned long long)arg1 showPosition:(int)arg2 commentScene:(int)arg3;
- (id)getFinderLocationInfo;
- (id)getPOIInfo;
- (id)getCommentCarouselCardStyle;
- (id)getCarouselStyle;
- (BOOL)isMusicCarouselStyle;
- (BOOL)isMusicSerialJumpInfoBusiness;
- (BOOL)isCommentDescControversialAlertStyle;
- (id)getCommentDescControversialAlertStyle;
- (BOOL)isInnerDomainUrl;
- (BOOL)isEqual:(id)arg1;
- (id)primaryId;
- (void)setPrimaryId:(id)arg1;
- (unsigned long long)svrSourceType;
- (void)setSvrSourceType:(unsigned long long)arg1;
- (id)jumpId;
- (void)setJumpId:(id)arg1;
- (int)jumpType;
- (void)setJumpType:(int)arg1;
- (int)businessType;
- (void)setBusinessType:(int)arg1;
- (int)businessCategory;
- (void)setBusinessCategory:(int)arg1;
- (unsigned int)extType;
- (void)setExtType:(unsigned int)arg1;
- (unsigned int)bannerType;
- (void)setBannerType:(unsigned int)arg1;
- (id)styleArray;
- (void)setStyleArray:(id)arg1;
- (id)iconUrl;
- (void)setIconUrl:(id)arg1;
- (id)pagIconUrl;
- (void)setPagIconUrl:(id)arg1;
- (long long)iconType;
- (void)setIconType:(long long)arg1;
- (id)wording;
- (void)setWording:(id)arg1;
- (id)recommendReason;
- (void)setRecommendReason:(id)arg1;
- (id)extInfo;
- (void)setExtInfo:(id)arg1;
- (id)extBuff;
- (void)setExtBuff:(id)arg1;
- (id)reportInfo;
- (void)setReportInfo:(id)arg1;
- (id)clientReportInfo;
- (void)setClientReportInfo:(id)arg1;
- (id)profilebypInfo;
- (void)setProfilebypInfo:(id)arg1;
- (BOOL)needPreload;
- (void)setNeedPreload:(BOOL)arg1;
- (unsigned int)delayPreloadTime;
- (void)setDelayPreloadTime:(unsigned int)arg1;
- (int)redPacketType;
- (void)setRedPacketType:(int)arg1;
- (id)groupKey;
- (void)setGroupKey:(id)arg1;
- (int)groupStyleType;
- (void)setGroupStyleType:(int)arg1;
- (id)jumpPageId;
- (void)setJumpPageId:(id)arg1;
- (BOOL)enableSingleSceneEffect;
- (void)setEnableSingleSceneEffect:(BOOL)arg1;
- (id)uiFingerPrint;
- (void)setUiFingerPrint:(id)arg1;
- (BOOL)isNativeAdComponent;
- (void)setIsNativeAdComponent:(BOOL)arg1;
- (BOOL)ignoreObjectocrFrameInfo;
- (void)setIgnoreObjectocrFrameInfo:(BOOL)arg1;
- (unsigned long long)aid;
- (void)setAid:(unsigned long long)arg1;
- (id)uxinfo;
- (void)setUxinfo:(id)arg1;
- (int)source;
- (void)setSource:(int)arg1;
- (unsigned long long)cacheTime;
- (void)setCacheTime:(unsigned long long)arg1;
- (unsigned long long)expireTime;
- (void)setExpireTime:(unsigned long long)arg1;
- (unsigned int)cacheDuration;
- (void)setCacheDuration:(unsigned int)arg1;
- (id)openPopupTitle;
- (void)setOpenPopupTitle:(id)arg1;
- (id)openPopupWording;
- (void)setOpenPopupWording:(id)arg1;
- (void)setHiddenOnTL:(BOOL)arg1;
- (id)clickSessionId;
- (void)setClickSessionId:(id)arg1;
- (id)miniAppInfo;
- (void)setMiniAppInfo:(id)arg1;
- (id)html5Info;
- (void)setHtml5Info:(id)arg1;
- (id)nativeInfo;
- (void)setNativeInfo:(id)arg1;
- (id)schemaInfo;
- (void)setSchemaInfo:(id)arg1;
- (id)schemaJumpList;
- (void)setSchemaJumpList:(id)arg1;
- (id)liteapp;
- (id)ecsJumpInfo;
- (void)setEcsJumpInfo:(id)arg1;
- (id)onlineHelp;
- (void)setOnlineHelp:(id)arg1;
- (id)redDot;
- (void)setRedDot:(id)arg1;
- (id)tid;
- (void)setTid:(id)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (void).cxx_destruct;
@end
