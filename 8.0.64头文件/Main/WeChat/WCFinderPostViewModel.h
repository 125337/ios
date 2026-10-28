@interface WCFinderPostViewModel : NSObject <ILBSLifeMgrExt, ILocationMgrExt, EmoticonStoreItemExt, DesignerPortfolioCollectionViewProviderDelegate>
{
    unsigned long long _geoTag; // +0x8
    BOOL _dynamicSwitchRecommendTagViewShow; // +0x10
    BOOL _enablePostWithMpUrlSwitch; // +0x11
    BOOL _showCompletePOIInfo; // +0x12
    BOOL _hasExposeSticker; // +0x13
    BOOL _lbsLifeListFetched; // +0x14
    BOOL _optimizePostPOI; // +0x15
    BOOL _optimizePostLink; // +0x16
    BOOL _showTopMiaoJianRefBanner; // +0x17
    BOOL _hasShowHalfScreenTipsViewOrPOIView; // +0x18
    BOOL _hasStickerList; // +0x19
    BOOL _hasSelectedRedPacket; // +0x1a
    BOOL _alreadyShowOriginalReward; // +0x1b
    BOOL _openPreuploadCDNSwitch; // +0x1c
    unsigned long long _showShortTextViewLimitCount; // +0x20
    unsigned long long _shortTextMaxLimit; // +0x28
    unsigned long long _postTextMaxLimit; // +0x30
    unsigned long long _tagNumber; // +0x38
    unsigned long long _mentionNumber; // +0x40
    WCFinderPostSessionModel * _postSession; // +0x48
    unsigned long long _chooseEventType; // +0x50
    unsigned long long _canCreateEvent; // +0x58
    WCFinderExtReadingInfoModel * _extReadingCacheInfo; // +0x60
    NSArray * _extensionLinkAllowedList; // +0x68
    WCFinderJumpInfo * _jumpInfo; // +0x70
    WCFinderPostPrevDataModel * _prevDataModel; // +0x78
    NSMutableDictionary * _paramsDicFromH5; // +0x80
    WCFinderFeedDraft * _draft; // +0x88
    AnyPromise * _feedValidPromise; // +0x90
    AnyPromise * _videoFeaturePromise; // +0x98
    WCFinderGeneralJumpErrMsgModel * _feedInvalidErrMsgModel; // +0xa0
    MyRedPacketSingleCover * _recommendRedPacketInfo; // +0xa8
    NSString * _finderUsername; // +0xb0
    AnyPromise * _selectableRedPacket; // +0xb8
    NSString * _shortInitialString; // +0xc0
    CLLocation * _lastFeedLocation; // +0xc8
    CLLocation * _lastUserLocation; // +0xd0
    WCFinderBaseCgi * _parseExtCgi; // +0xd8
    NSData * _originObjectModelData; // +0xe0
    DesignerPortfolioCollectionViewProvider * _stickerProvider; // +0xe8
    id <WCFinderPostViewModelDelegate> _delegate; // +0xf0
    SecurityInfoAuthrizeLogic * _authLogic; // +0xf8
    AnyPromise * _watermarkPromise; // +0x100
    NSString * _redpacketCoverReddotContent; // +0x108
    NSMutableArray * _recommendPOIArray; // +0x110
    NSMutableDictionary * _linkParseRespDic; // +0x118
    WCFinderPostTagEntryViewModel * _tagEntryViewModel; // +0x120
    long long _longModifyFeedMaxCount; // +0x128
    long long _shortModifyFeedMaxCount; // +0x130
    NSMutableArray * _modifyModelArray; // +0x138
    NSData * _parseUtilsLastBuffer; // +0x140
    shared_ptr<wevision::XOneshotDet> _watermarkChecker; // +0x148
}
+ (id)buildLocationInfoByLbsResponse:(id)arg1 location:(CLLocationCoordinate2D)arg2 city:(id)arg3;
+ (id)convertFinderLocationToWCLocation:(id)arg1;
+ (BOOL)shouldShowPostWxPayAlertByFinderUsername:(id)arg1;
- (id)loadSelectedReadPacket:(id)arg1;
- (id)getRedpackageCoverReddotContent:(unsigned long long)arg1;
- (long long)getCurrentModifyRemainMaxLength:(unsigned long long)arg1;
- (BOOL)modFeedTextFromSelectModel:(id)arg1 toText:(id)arg2;
- (void)addModModelAction:(id)arg1;
- (id)getModifyModelArrayBySourceType:(unsigned long long)arg1;
- (void)removeModifyModel:(id)arg1;
- (id)getModifySelectRangeArrayBySourceType:(unsigned long long)arg1;
- (id)getModifyClearRangeArrayBySourceType:(unsigned long long)arg1;
- (void)sortModelsByDescendingLocation:(id)arg1;
- (id)getReverseModifyClearRangeArrayBySourceType:(unsigned long long)arg1;
- (long long)getModifyConfigTextCountByType:(unsigned long long)arg1;
- (void)updateModifyDetailInfoFlag;
- (id)getConflictToModifiedRangeFromSelectRange:(_NSRange)arg1 sourceType:(unsigned long long)arg2;
- (void)updateAttachShopMiniAppInfoWithGoodsTitle:(id)arg1 goodsMiniAppId:(id)arg2 goodsMiniAppPath:(id)arg3 goodsMiniFetchInfoId:(id)arg4 jumpIconUrl:(id)arg5 jumpBusinessType:(int)arg6 jumpBusinessExtInfo:(id)arg7 jumpIsFullPage:(BOOL)arg8;
- (void)appendJumpInfo:(id)arg1;
- (void)appendJumpInfo:(id)arg1 notifyUIReload:(BOOL)arg2;
- (id)getSelectedShopMiniAppTitle;
- (id)getSelectedShopMiniAppSubtitle;
- (void)changeSelectedShopMiniAppTitle:(id)arg1 selectedRange:(_NSRange)arg2;
- (id)getSelectedJumpInfoTitleByBusinessType:(int)arg1;
- (id)getSelectedJumpInfoByBusinessType:(int)arg1;
- (void)clearAttachJumpInfoByBusinessType:(int)arg1;
- (BOOL)_addedJumpInfoByBusinessType:(int)arg1;
- (BOOL)_addedJumpInfoByBusinessCategory:(int)arg1;
- (void)appendMembershipShowOnlyJumpInfo:(id)arg1;
- (void)resetMembershipShow;
- (void)appendShowOnlyJumpInfo:(id)arg1;
- (void)resetShowOnlyJumpInfoByBusinessType:(int)arg1;
- (void)restoreMembershipZoneLinkState;
- (id)getSelectedJumpInfoByBusinessCategory:(int)arg1;
- (id)getSelectedJumpInfoTitleByBusinessCategory:(int)arg1;
- (void)clearAttachJumpInfoByBusinessCategory:(int)arg1;
- (id)initWithPostSession:(id)arg1 delegate:(id)arg2;
- (id)initWithDraft:(id)arg1 delegate:(id)arg2;
- (id)linkParseRespDic;
- (void)_configBySession:(id)arg1 draft:(id)arg2;
- (unsigned int)genPOICustomStyle;
- (BOOL)enableShowMiaoJianRefEduBannerView;
- (void)clearCoverInfo;
- (BOOL)hasPostWithJoinGroupBuyPOI;
- (id)finderUsername;
- (void)loadWatermarkChecker;
- (void)deleteDataItemAction;
- (void)updateCacheDataItemWithPostSession:(id)arg1;
- (void)triggerPreUploadCDNMedia;
- (id)genParseTipsFromText:(id)arg1;
- (void)triggerDataItemRecheckLogic;
- (id)videoFeatureCheckPromise;
- (id)getFeedValidCheckMsgModelAddress;
- (id)_videoSDKFeaturePromise;
- (id)extensionLinkAllowedList;
- (void)dealloc;
- (void)contactSwitchChanged:(id)arg1;
- (void)getInfoFromHistorySave;
- (id)stickerInfo;
- (void)setStickerInfo:(id)arg1;
- (long long)emotionDesignerUin;
- (void)fetchUserLBSInfoByUserCacheGPS;
- (void)stopGeocoder;
- (void)OnGetLBSLife:(id)arg1 Error:(int)arg2;
- (id)genWCLocationInfoWithLbsLife:(id)arg1;
- (id)evolvePoiAddressFromLbsLife:(id)arg1;
- (void)updateDataItemPOIInfo:(id)arg1;
- (id)locationInfo;
- (void)onDidFindAddress:(id)arg1 forTag:(unsigned long long)arg2;
- (id)getPOIAddressDisplayContent;
- (void)updateSelectedLocationInfo:(id)arg1 lbsFlagType:(unsigned long long)arg2;
- (void)updateSelectedFinderLocation:(id)arg1 lbsFlagType:(unsigned long long)arg2;
- (id)getPOIRecommendArray;
- (id)getFullPOIRecommendArray;
- (void)fetchExtTitleWithLink:(id)arg1 isFromPasteBoard:(BOOL)arg2 readingType:(unsigned long long)arg3;
- (void)updateLinkParseResultByLink:(id)arg1 errMsg:(id)arg2;
- (void)addRedPacketLinkWithoutVerify:(id)arg1;
- (void)updateDataItemExtReadingInfoWith:(id)arg1;
- (void)clearDataItemExtReadingInfo;
- (id)getExtReadingSelectedContent;
- (id)modifyModelArray;
- (long long)getExtReadingRecommendContentStyle;
- (unsigned long long)getPostRecommendType;
- (id)getExtReadingRecommendContent;
- (BOOL)isDraftChanged;
- (BOOL)shouldJumpProfileDraftTab;
- (BOOL)openWithDraft;
- (void)cleanDraftData;
- (void)updateEventInfo;
- (void)_fetchEventInfoWithEventRequestParams:(id)arg1;
- (void)_createEventEnableCheckWithUIUpdateCallback;
- (unsigned long long)getCurLinkType;
- (BOOL)linkFlagCanBeDeleted:(unsigned long long)arg1;
- (void)clearCurLinkContent;
- (void)setJumpInfo:(id)arg1;
- (void)OnEmoticonStoreItemChanged:(id)arg1;
- (BOOL)shouldUseRichStyle;
- (BOOL)shouldRemoveExpiredPack;
- (BOOL)shouldAutoRetryFetchOnFail;
- (void)onFetchEmoticonDataFailed;
- (void)onGetEmoticonPacksForDisplay:(BOOL)arg1;
- (void)onFetchStickerFinish:(BOOL)arg1;
- (void)updatePostOriginalFlag:(BOOL)arg1;
- (void)checkVideoInvalidInfo;
- (BOOL)checkValidWatermarkByImage:(id)arg1 tailFlag:(BOOL)arg2;
- (id)_watermarkCheckPromise;
- (void)feedValidContentChanged:(id)arg1;
- (void)resetFeedValidPromise;
- (id)feedValidCheckPromise:(id)arg1 succBlock:(id /* block */)arg2;
- (BOOL)shouldShowWxPayAlert;
- (id)originalRewardPromise;
- (unsigned long long)getBanOriginalStatementReason;
- (BOOL)canShowPostTagEntry;
- (id)postTagEntryDefaultText;
- (id)postTagEntryJumpInfo;
- (BOOL)originalFlagIsOn;
- (unsigned long long)getOriginalSwitchStatus;
- (id)wxPayAuthorizationPromise;
- (void)updatePostPageRemainTimeMs:(unsigned long long)arg1;
- (void)updatePostDataItemJumpInfo:(id)arg1;
- (BOOL)isModFeedScene;
- (id)selectableRedPacket;
- (unsigned long long)showShortTextViewLimitCount;
- (void)setShowShortTextViewLimitCount:(unsigned long long)arg1;
- (unsigned long long)shortTextMaxLimit;
- (void)setShortTextMaxLimit:(unsigned long long)arg1;
- (unsigned long long)postTextMaxLimit;
- (void)setPostTextMaxLimit:(unsigned long long)arg1;
- (BOOL)dynamicSwitchRecommendTagViewShow;
- (void)setDynamicSwitchRecommendTagViewShow:(BOOL)arg1;
- (unsigned long long)tagNumber;
- (void)setTagNumber:(unsigned long long)arg1;
- (unsigned long long)mentionNumber;
- (void)setMentionNumber:(unsigned long long)arg1;
- (BOOL)enablePostWithMpUrlSwitch;
- (void)setEnablePostWithMpUrlSwitch:(BOOL)arg1;
- (id)postSession;
- (void)setPostSession:(id)arg1;
- (unsigned long long)chooseEventType;
- (void)setChooseEventType:(unsigned long long)arg1;
- (BOOL)showCompletePOIInfo;
- (void)setShowCompletePOIInfo:(BOOL)arg1;
- (unsigned long long)canCreateEvent;
- (void)setCanCreateEvent:(unsigned long long)arg1;
- (id)extReadingCacheInfo;
- (void)setExtReadingCacheInfo:(id)arg1;
- (void)setExtensionLinkAllowedList:(id)arg1;
- (id)jumpInfo;
- (BOOL)hasExposeSticker;
- (void)setHasExposeSticker:(BOOL)arg1;
- (id)prevDataModel;
- (void)setPrevDataModel:(id)arg1;
- (id)paramsDicFromH5;
- (void)setParamsDicFromH5:(id)arg1;
- (id)draft;
- (void)setDraft:(id)arg1;
- (id)feedValidPromise;
- (void)setFeedValidPromise:(id)arg1;
- (id)videoFeaturePromise;
- (void)setVideoFeaturePromise:(id)arg1;
- (id)feedInvalidErrMsgModel;
- (void)setFeedInvalidErrMsgModel:(id)arg1;
- (id)recommendRedPacketInfo;
- (void)setRecommendRedPacketInfo:(id)arg1;
- (BOOL)lbsLifeListFetched;
- (void)setLbsLifeListFetched:(BOOL)arg1;
- (void)setFinderUsername:(id)arg1;
- (BOOL)optimizePostPOI;
- (void)setOptimizePostPOI:(BOOL)arg1;
- (BOOL)optimizePostLink;
- (void)setOptimizePostLink:(BOOL)arg1;
- (BOOL)showTopMiaoJianRefBanner;
- (void)setShowTopMiaoJianRefBanner:(BOOL)arg1;
- (BOOL)hasShowHalfScreenTipsViewOrPOIView;
- (void)setHasShowHalfScreenTipsViewOrPOIView:(BOOL)arg1;
- (void)setSelectableRedPacket:(id)arg1;
- (id)shortInitialString;
- (void)setShortInitialString:(id)arg1;
- (id)lastFeedLocation;
- (void)setLastFeedLocation:(id)arg1;
- (id)lastUserLocation;
- (void)setLastUserLocation:(id)arg1;
- (id)parseExtCgi;
- (void)setParseExtCgi:(id)arg1;
- (id)originObjectModelData;
- (void)setOriginObjectModelData:(id)arg1;
- (BOOL)hasStickerList;
- (void)setHasStickerList:(BOOL)arg1;
- (id)stickerProvider;
- (void)setStickerProvider:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (shared_ptr<wevision::XOneshotDet>)watermarkChecker;
- (void)setWatermarkChecker:(shared_ptr<wevision::XOneshotDet>)arg1;
- (id)authLogic;
- (void)setAuthLogic:(id)arg1;
- (id)watermarkPromise;
- (void)setWatermarkPromise:(id)arg1;
- (id)redpacketCoverReddotContent;
- (void)setRedpacketCoverReddotContent:(id)arg1;
- (id)recommendPOIArray;
- (void)setRecommendPOIArray:(id)arg1;
- (BOOL)hasSelectedRedPacket;
- (void)setHasSelectedRedPacket:(BOOL)arg1;
- (BOOL)alreadyShowOriginalReward;
- (void)setAlreadyShowOriginalReward:(BOOL)arg1;
- (void)setLinkParseRespDic:(id)arg1;
- (id)tagEntryViewModel;
- (void)setTagEntryViewModel:(id)arg1;
- (long long)longModifyFeedMaxCount;
- (void)setLongModifyFeedMaxCount:(long long)arg1;
- (long long)shortModifyFeedMaxCount;
- (void)setShortModifyFeedMaxCount:(long long)arg1;
- (void)setModifyModelArray:(id)arg1;
- (BOOL)openPreuploadCDNSwitch;
- (void)setOpenPreuploadCDNSwitch:(BOOL)arg1;
- (id)parseUtilsLastBuffer;
- (void)setParseUtilsLastBuffer:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
