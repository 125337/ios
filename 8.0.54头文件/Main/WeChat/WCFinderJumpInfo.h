@interface WCFinderJumpInfo : NSObject <WCTTableCoding, PBCoding>
{
    BOOL _needPreload; // +0x8
    BOOL _hiddenOnTL; // +0x9
    int _jumpType; // +0xc
    int _businessType; // +0x10
    unsigned int _extType; // +0x14
    unsigned int _bannerType; // +0x18
    unsigned int _delayPreloadTime; // +0x1c
    int _redPacketType; // +0x20
    int _source; // +0x24
    unsigned int _cacheDuration; // +0x28
    int _scene; // +0x2c
    NSString * _primaryId; // +0x30
    unsigned long long _svrSourceType; // +0x38
    NSString * _jumpId; // +0x40
    WCFinderJumpInfoStyleMutableArray * _styleArray; // +0x48
    NSString * _iconUrl; // +0x50
    NSString * _pagIconUrl; // +0x58
    long long _iconType; // +0x60
    NSString * _wording; // +0x68
    NSString * _recommendReason; // +0x70
    NSString * _extInfo; // +0x78
    NSString * _reportInfo; // +0x80
    NSString * _profilebypInfo; // +0x88
    NSString * _groupKey; // +0x90
    NSString * _uiFingerPrint; // +0x98
    unsigned long long _aid; // +0xa0
    NSString * _uxinfo; // +0xa8
    unsigned long long _cacheTime; // +0xb0
    unsigned long long _expireTime; // +0xb8
    NSString * _openPopupTitle; // +0xc0
    NSString * _openPopupWording; // +0xc8
    FinderJumpInfo_MiniAppInfo * _miniAppInfo; // +0xd0
    FinderJumpInfo_Html5Info * _html5Info; // +0xd8
    FinderJumpInfo_NativeInfo * _nativeInfo; // +0xe0
    FinderJumpInfo_SchemaInfo * _schemaInfo; // +0xe8
    FinderJumpInfo_LiteApp * _liteapp; // +0xf0
    FinderJumpInfo_OnlineHelp * _onlineHelp; // +0xf8
    FinderJumpInfoRedDot * _redDot; // +0x100
    NSString * _tid; // +0x108
}
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
+ (const void *)reportInfo;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (id)swift_reportInfo;
+ (const void *)source;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (id)swift_source;
+ (const void *)miniAppInfo;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (id)swift_miniAppInfo;
+ (const void *)html5Info;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (id)swift_html5Info;
+ (const void *)nativeInfo;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (id)swift_nativeInfo;
+ (const void *)schemaInfo;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (id)swift_schemaInfo;
+ (const void *)cacheTime;
+ (const void *)__wcdb_synthesize_13:(void *)arg1;
+ (id)swift_cacheTime;
+ (const void *)svrSourceType;
+ (const void *)__wcdb_synthesize_14:(void *)arg1;
+ (id)swift_svrSourceType;
+ (const void *)wording;
+ (const void *)__wcdb_synthesize_15:(void *)arg1;
+ (id)swift_wording;
+ (const void *)bannerType;
+ (const void *)__wcdb_synthesize_16:(void *)arg1;
+ (id)swift_bannerType;
+ (const void *)liteapp;
+ (const void *)__wcdb_synthesize_17:(void *)arg1;
+ (id)swift_liteapp;
+ (const void *)styleArray;
+ (const void *)__wcdb_synthesize_18:(void *)arg1;
+ (id)swift_styleArray;
+ (const void *)scene;
+ (const void *)__wcdb_synthesize_19:(void *)arg1;
+ (id)swift_scene;
+ (const void *)uxinfo;
+ (const void *)__wcdb_synthesize_20:(void *)arg1;
+ (id)swift_uxinfo;
+ (const void *)aid;
+ (const void *)__wcdb_synthesize_21:(void *)arg1;
+ (id)swift_aid;
+ (const void *)extType;
+ (const void *)__wcdb_synthesize_22:(void *)arg1;
+ (id)swift_extType;
+ (const void *)cacheDuration;
+ (const void *)__wcdb_synthesize_23:(void *)arg1;
+ (id)swift_cacheDuration;
+ (const void *)expireTime;
+ (const void *)__wcdb_synthesize_24:(void *)arg1;
+ (id)swift_expireTime;
+ (const void *)needPreload;
+ (const void *)__wcdb_synthesize_25:(void *)arg1;
+ (id)swift_needPreload;
+ (const void *)delayPreloadTime;
+ (const void *)__wcdb_synthesize_26:(void *)arg1;
+ (id)swift_delayPreloadTime;
+ (const void *)iconType;
+ (const void *)__wcdb_synthesize_27:(void *)arg1;
+ (id)swift_iconType;
+ (const void *)pagIconUrl;
+ (const void *)__wcdb_synthesize_28:(void *)arg1;
+ (id)swift_pagIconUrl;
+ (const void *)redPacketType;
+ (const void *)__wcdb_synthesize_29:(void *)arg1;
+ (id)swift_redPacketType;
+ (const void *)groupKey;
+ (const void *)__wcdb_synthesize_30:(void *)arg1;
+ (id)swift_groupKey;
+ (const void *)uiFingerPrint;
+ (const void *)__wcdb_synthesize_31:(void *)arg1;
+ (id)swift_uiFingerPrint;
+ (const void *)openPopupTitle;
+ (const void *)__wcdb_synthesize_32:(void *)arg1;
+ (id)swift_openPopupTitle;
+ (const void *)openPopupWording;
+ (const void *)__wcdb_synthesize_33:(void *)arg1;
+ (id)swift_openPopupWording;
+ (void)__wcdb_table_constraint_34:(void *)arg1;
+ (void)__wcdb_table_constraint_35:(void *)arg1;
+ (void)__wcdb_index_36:(void *)arg1;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (unsigned long long)columnTypeForWCDB;
+ (id)reportKVInfoJsonFromPB:(id)arg1;
+ (BOOL)judgePostJumpInfoBusiness:(int)arg1;
+ (BOOL)judgeTingJumpInfoBusiness:(int)arg1;
+ (id)getObjectFromExtInfoFromExtInfo:(id)arg1 forKey:(id)arg2;
+ (id)appendOrReplaceInfoToExtFromExtInfo:(id)arg1 object:(id)arg2 key:(id)arg3;
+ (id)jumpInfoStyleToDict:(id)arg1;
- (BOOL)isVideoTemplateJumpInfo;
- (id)genVideoTemplateData;
- (BOOL)canShowTemplateEntry;
- (void)setEnterScene:(unsigned long long)arg1;
- (unsigned long long)enterScene;
- (void)setFromSDK:(BOOL)arg1;
- (BOOL)fromSDK;
- (void)setMusicSourcePosition:(unsigned long long)arg1;
- (void)setFinderPostDelegate:(id)arg1;
- (id)finderPostDelegate;
- (unsigned long long)musicSourcePosition;
- (void)setBindEventId:(long long)arg1;
- (long long)bindEventId;
- (id)getPostSongId;
- (id)getPostAudioId;
- (BOOL)isOpenMusicTopic;
- (id)getPostMiaojianSdkPrefix;
- (id)getPostAttachTextContent;
- (id)getJumpInfoLinkTopic;
- (id)getCollectionInfo;
- (BOOL)isPatTopicJumpInfo;
- (BOOL)shouldFeedBottomRedPacket;
- (id)getPBPropertyTable;
- (id)archivedWCTValue;
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
- (BOOL)isValidAdJumpInfo;
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
- (id)reportInfo;
- (void)setReportInfo:(id)arg1;
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
- (id)uiFingerPrint;
- (void)setUiFingerPrint:(id)arg1;
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
- (id)miniAppInfo;
- (void)setMiniAppInfo:(id)arg1;
- (id)html5Info;
- (void)setHtml5Info:(id)arg1;
- (id)nativeInfo;
- (void)setNativeInfo:(id)arg1;
- (id)schemaInfo;
- (void)setSchemaInfo:(id)arg1;
- (id)liteapp;
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

