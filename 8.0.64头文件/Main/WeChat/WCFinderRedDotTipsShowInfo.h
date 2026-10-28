@interface WCFinderRedDotTipsShowInfo : NSObject <PBCoding>
{
    BOOL _isExemptNMControl; // +0x8
    int _showExtInfoType; // +0xc
    unsigned int _cacheChangeTabOption; // +0x10
    unsigned long long _showType; // +0x18
    unsigned long long _count; // +0x20
    NSString * _title; // +0x28
    NSString * _subTitle; // +0x30
    NSString * _iconUrl; // +0x38
    NSString * _path; // +0x40
    unsigned long long _clearType; // +0x48
    NSString * _parent; // +0x50
    NSData * _showExtInfo; // +0x58
    NSMutableArray * _multiIconUrls; // +0x60
    WCFinderTipsShowClientStatsInfo * _clientStatsInfo; // +0x68
    unsigned long long _showLiveTabId; // +0x70
    unsigned long long _ignoreFreqLimit; // +0x78
    unsigned long long _exposeCountLimit; // +0x80
    unsigned long long _exposeLimitStrategy; // +0x88
    unsigned long long _exposeExpireTime; // +0x90
    unsigned long long _coldTime; // +0x98
    AttributeTitle * _attributeTitleConfig; // +0xa0
    FinderTipsShowInfo_DSLRender * _dslRender; // +0xa8
    WCFinderRedDotShowInfoRenderInfo * _cacheDSLRenderInfo; // +0xb0
    WCFinderRedDotShowInfoRenderInfo * _cacheNonDSLRenderInfo; // +0xb8
    NSString * _language; // +0xc0
    NSString * _tipsUuid; // +0xc8
    NSMutableArray * _revokeConfigArray; // +0xd0
    unsigned long long _buildMsTimeStamp; // +0xd8
    NSString * _redDotDetailInfoReport; // +0xe0
    FinderPopupShowInfo * _popupShowInfo; // +0xe8
    FinderTipsShowInfo_IconSize * _bigCardImageSize; // +0xf0
}
+ (void)PBArrayAdd_showType;
+ (void)PBArrayAdd_count;
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_iconUrl;
+ (void)PBArrayAdd_path;
+ (void)PBArrayAdd_clearType;
+ (void)PBArrayAdd_parent;
+ (void)PBArrayAdd_showExtInfoType;
+ (void)PBArrayAdd_showExtInfo;
+ (void)PBArrayAdd_multiIconUrls;
+ (void)PBArrayAdd_clientStatsInfo;
+ (void)PBArrayAdd_showLiveTabId;
+ (void)PBArrayAdd_ignoreFreqLimit;
+ (void)PBArrayAdd_exposeCountLimit;
+ (void)PBArrayAdd_exposeLimitStrategy;
+ (void)PBArrayAdd_coldTime;
+ (void)PBArrayAdd_attributeTitleConfig;
+ (void)PBArrayAdd_cacheChangeTabOption;
+ (void)PBArrayAdd_dslRender;
+ (void)PBArrayAdd_tipsUuid;
+ (void)PBArrayAdd_language;
+ (void)PBArrayAdd_revokeConfigArray;
+ (void)PBArrayAdd_buildMsTimeStamp;
+ (void)PBArrayAdd_popupShowInfo;
+ (void)PBArrayAdd_bigCardImageSize;
+ (void)PBArrayAdd_exposeExpireTime;
+ (void)PBArrayAdd_subTitle;
+ (void)PBArrayAdd_isExemptNMControl;
+ (void)initialize;
+ (id)showInfoWith:(id)arg1 tipsUuid:(id)arg2;
+ (unsigned long long)getTargetEntrySceneFromPath:(id)arg1;
- (id)getPBPropertyTable;
- (id)init;
- (id)bindCtrlInfo;
- (id)tipsID;
- (unsigned long long)ctrlInfoType;
- (unsigned long long)ctrlInfoBusinessType;
- (id)ctrlExtInfo;
- (id)ctrlInfoFinderExtInfo;
- (BOOL)checkIfNeedSyncSvrColdTimeExpired;
- (BOOL)isVaildInfo;
- (BOOL)isExpiredShowInfo;
- (BOOL)isValidAttributeTitleConfig;
- (BOOL)isImageIconShowType;
- (BOOL)isLittleIconShowType;
- (BOOL)isSquareIconShowType;
- (BOOL)isTitleAtRight;
- (BOOL)isImageIconHiddenRedDot;
- (BOOL)isRightCircleImageShowType;
- (BOOL)isMultiAvatorRedDot;
- (BOOL)isTitleCapsuleRedDot;
- (long long)multiAvatarShowCountLimit;
- (id)tipsShowDiscoveryExtInfo;
- (id)tipsShowEntranceExtInfo;
- (id)tipsWxMentionExtInfo;
- (id)tipsFinderMentionExtInfo;
- (id)tipsPersonalCenterExtInfo;
- (id)tipsShowTabExtInfo;
- (id)tipsFinderEntranceExtInfo;
- (id)genFinderEntranceMergeDetailDic;
- (id)redDotDetailInfoReport;
- (long long)getPersonalCenterIncreaseRedDotCountExceptPrivateMsg;
- (id)getRedDotExtReportInfo;
- (id)checkToReturnRedDotExtReportInfo;
- (id)getReportRedDotExt;
- (id)getEntranceReportRedDotExtInfo;
- (id)cacheDSLRenderInfo;
- (void)bindDSLRedDotModel:(id)arg1 entryAvailableWidth:(double)arg2 entryScene:(unsigned long long)arg3;
- (id)cacheNonDSLRenderInfo;
- (void)bindNonDSLRedDotModel:(id)arg1 entryAvailableWidth:(double)arg2 entryScene:(unsigned long long)arg3;
- (id)getSDKReportParams;
- (id)getSDKReportParamsWithCtrlInfo:(id)arg1;
- (id)getRenderModelForEntryScene:(unsigned long long)arg1 finderMention:(id)arg2 isDSLRender:(BOOL)arg3;
- (void)appendNodeContent:(id)arg1 toReportContent:(id)arg2 useOriginalNode:(BOOL)arg3;
- (void)appendDetailNodeContent:(id)arg1 toReportContent:(id)arg2;
- (void)_appendNodeContent:(id)arg1 toReportContent:(id)arg2 contentDetailNode:(id)arg3 nodeText:(id)arg4;
- (id)getKVReportContent;
- (id)getKVReportIconUrl;
- (id)generateFinderShowInfo;
- (id)displayFallbackTruncatedWording;
- (id)description;
- (id)debugDescription;
- (unsigned long long)popUpSwipeDownCnt;
- (unsigned long long)popUpquickSwipeDownCnt;
- (unsigned long long)showType;
- (void)setShowType:(unsigned long long)arg1;
- (unsigned long long)count;
- (void)setCount:(unsigned long long)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)subTitle;
- (void)setSubTitle:(id)arg1;
- (id)iconUrl;
- (void)setIconUrl:(id)arg1;
- (id)path;
- (void)setPath:(id)arg1;
- (unsigned long long)clearType;
- (void)setClearType:(unsigned long long)arg1;
- (id)parent;
- (void)setParent:(id)arg1;
- (int)showExtInfoType;
- (void)setShowExtInfoType:(int)arg1;
- (id)showExtInfo;
- (void)setShowExtInfo:(id)arg1;
- (id)multiIconUrls;
- (void)setMultiIconUrls:(id)arg1;
- (id)clientStatsInfo;
- (void)setClientStatsInfo:(id)arg1;
- (unsigned long long)showLiveTabId;
- (void)setShowLiveTabId:(unsigned long long)arg1;
- (unsigned long long)ignoreFreqLimit;
- (void)setIgnoreFreqLimit:(unsigned long long)arg1;
- (unsigned long long)exposeCountLimit;
- (void)setExposeCountLimit:(unsigned long long)arg1;
- (unsigned long long)exposeLimitStrategy;
- (void)setExposeLimitStrategy:(unsigned long long)arg1;
- (unsigned long long)exposeExpireTime;
- (void)setExposeExpireTime:(unsigned long long)arg1;
- (unsigned long long)coldTime;
- (void)setColdTime:(unsigned long long)arg1;
- (id)attributeTitleConfig;
- (void)setAttributeTitleConfig:(id)arg1;
- (unsigned int)cacheChangeTabOption;
- (void)setCacheChangeTabOption:(unsigned int)arg1;
- (id)dslRender;
- (void)setDslRender:(id)arg1;
- (void)setCacheDSLRenderInfo:(id)arg1;
- (void)setCacheNonDSLRenderInfo:(id)arg1;
- (id)language;
- (void)setLanguage:(id)arg1;
- (id)tipsUuid;
- (void)setTipsUuid:(id)arg1;
- (BOOL)isExemptNMControl;
- (void)setIsExemptNMControl:(BOOL)arg1;
- (id)revokeConfigArray;
- (void)setRevokeConfigArray:(id)arg1;
- (unsigned long long)buildMsTimeStamp;
- (void)setBuildMsTimeStamp:(unsigned long long)arg1;
- (void)setRedDotDetailInfoReport:(id)arg1;
- (id)popupShowInfo;
- (void)setPopupShowInfo:(id)arg1;
- (id)bigCardImageSize;
- (void)setBigCardImageSize:(id)arg1;
- (void).cxx_destruct;
@end
