@interface WCFinderDataItem : NSObject <WCFinderFeedArrayConvert, WCTColumnCoding, MMBGMSelectedMusicDataProtocol, MMBGMDataReport, WCTTableCoding, PBCoding>
{
    BOOL _isUpLoading; // +0x8
    BOOL _isUpLoadFail; // +0x9
    BOOL _isDeleted; // +0xa
    BOOL _isCommentClose; // +0xb
    BOOL _fromCamera; // +0xc
    BOOL _secondaryShowFlag; // +0xd
    BOOL _fav; // +0xe
    BOOL _allowForward; // +0xf
    BOOL _foldedFlag; // +0x10
    BOOL _privateFlag; // +0x11
    BOOL _isFromSDKEditor; // +0x12
    BOOL _isNewsFeed; // +0x13
    BOOL _isPOISameCity; // +0x14
    BOOL _isDraft; // +0x15
    BOOL _needFetchSingleLive; // +0x16
    BOOL _needNotPreFetchShopLive; // +0x17
    BOOL _isAdsLive; // +0x18
    int _likeFlag; // +0x1c
    int _recommendType; // +0x20
    unsigned int _cacheTime; // +0x24
    unsigned int _nextCheckObjectStatusTimeStamp; // +0x28
    unsigned int _stickyTime; // +0x2c
    int _objectType; // +0x30
    unsigned int _patMusicCount; // +0x34
    unsigned int _ringtoneCount; // +0x38
    unsigned int _chargeFlag; // +0x3c
    unsigned int _chargeUnitPriceInWecoin; // +0x40
    int _mentionListSelectedOption; // +0x44
    unsigned int _avgSpeed; // +0x48
    int _postWaitType; // +0x4c
    NSString * _tid; // +0x50
    NSString * _disPlayTid; // +0x58
    NSString * _tmpLocalTid; // +0x60
    NSString * _username; // +0x68
    NSString * _nickname; // +0x70
    double _createTime; // +0x78
    WCFinderMedia * _media; // +0x80
    WCFinderLikeMutableArray * _likeList; // +0x88
    WCFinderCommentMutableArray * _commentList; // +0x90
    WCFinderCommentMutableArray * _hotCommentList; // +0x98
    long long _forwardCount; // +0xa0
    long long _uploadErrType; // +0xa8
    NSString * _uploadErrMsg; // +0xb0
    WCFinderContact * _contact; // +0xb8
    WCFinderRecommenderMutableArray * _recommenderList; // +0xc0
    long long _likeCount; // +0xc8
    long long _friendLikeCount; // +0xd0
    long long _commentCount; // +0xd8
    NSString * _recommendReason; // +0xe0
    unsigned long long _readCount; // +0xe8
    NSString * _refObjectID; // +0xf0
    WCFinderContact * _refContact; // +0xf8
    NSString * _refUsername; // +0x100
    NSString * _refNickname; // +0x108
    NSString * _nonceID; // +0x110
    long long _objectStatus; // +0x118
    WCFinderLocationInfo * _locationInfo; // +0x120
    NSString * _sendShareFavWording; // +0x128
    NSMutableArray * _topics; // +0x130
    unsigned long long _orgRecommendType; // +0x138
    NSString * _tipsWording; // +0x140
    double _chooseCoverTime; // +0x148
    unsigned long long _warnFlag; // +0x150
    NSString * _warnWording; // +0x158
    NSString * _sessionBuffer; // +0x160
    unsigned long long _favCount; // +0x168
    WCFinderFriendsLikeMutableArray * _friendsLikeList; // +0x170
    WCFinderFoldLayout * _foldLayout; // +0x178
    unsigned long long _urlValidTime; // +0x180
    unsigned long long _forwardStyle; // +0x188
    NSString * _eupdOob; // +0x190
    unsigned long long _fromScene; // +0x198
    WCFinderDataItemRecommendConfiguration * _recommendConfiguration; // +0x1a0
    unsigned long long _likeActionTimestamp; // +0x1a8
    unsigned long long _starActionTimestamp; // +0x1b0
    unsigned long long _msgEventFlag; // +0x1b8
    NSString * _msgId; // +0x1c0
    long long _incFriendLikeCount; // +0x1c8
    NSData * _likeBuffer; // +0x1d0
    WCFinderLiveInfo * _liveInfo; // +0x1d8
    unsigned long long _createFromType; // +0x1e0
    unsigned long long _permissionFlag; // +0x1e8
    WCFinderAttachmentList * _attachmentList; // +0x1f0
    unsigned long long _recvTimeMs; // +0x1f8
    NSString * _staticCellLeftTips; // +0x200
    WCFinderObjectHotTopicMutableArray * _hotTopics; // +0x208
    WCFinderObjectHotWordInfo * _hotWordInfo; // +0x210
    unsigned long long _postPatMusicType; // +0x218
    unsigned long long _musicType; // +0x220
    NSString * _groupId; // +0x228
    WCFinderSnsShareInfo * _snsShareInfo; // +0x230
    unsigned long long _eventTopicID; // +0x238
    NSString * _fromOtherAppPostParamsJson; // +0x240
    NSString * _remoteUrl; // +0x248
    NSString * _debugMsg; // +0x250
    NSString * _ecSource; // +0x258
    MMMusicMVModel * _musicMVModel; // +0x260
    NSString * _roomId; // +0x268
    NSMutableArray * _freeOfChargeChatroomIdList; // +0x270
    NSMutableArray * _freeOfChargeUsernameList; // +0x278
    FinderStreamDivider * _feedWidgetInfo; // +0x280
    NSString * _extUrlFromOpenSDK; // +0x288
    StatusFooterJumpFinderFeed * _verifiedJumpInfo; // +0x290
    NSString * _adLiveCoverUrl; // +0x298
    NSString * _verifyInfo; // +0x2a0
    unsigned long long _wxStatusRefCount; // +0x2a8
    WCFinderRedDotTipsShowInfo * _showInfo; // +0x2b0
    unsigned long long _adFlag; // +0x2b8
    WCFinderJumpInfoContainer * _jumpInfoContainer; // +0x2c0
    FinderTipsInfo * _tipsInfo; // +0x2c8
    NSData * _liveRelatedLastBuffer; // +0x2d0
    NSData * _cookie; // +0x2d8
    unsigned long long _previewFlag; // +0x2e0
    FinderMusicInfo * _musicInfo; // +0x2e8
    long long _followCount; // +0x2f0
    NSString * _internalFeedbackUrl; // +0x2f8
    NSString * _wxaGameExportId; // +0x300
    MMFinderLiveGoodsItem * _goodsItem; // +0x308
    FinderCommByPass * _commByPass; // +0x310
    MMLiveAdsParams * _adsParams; // +0x318
    FinderObjectAsyncLoadInfo * _feedAsyncLoadInfo; // +0x320
    WCBulletinInfo * _bulletinInfo; // +0x328
    WCBulletinInfo * _GameBulletinInfo; // +0x330
    unsigned long long _bulletinSeq; // +0x338
    NSString * _bizUsername; // +0x340
    FinderLiveQuickReplyWordingInfo * _quickReplyWordingInfo; // +0x348
    NSString * _poiAddrSubStr; // +0x350
    ConcertTicketInfo * _ticket; // +0x358
    WCFinderDataItemSingleStreamSharedData * _streamShareData; // +0x360
    NSString * _asyncCropClientId; // +0x368
    WCFinderDataItemInnerModel * _innerModel; // +0x370
    unsigned long long _objectVersion; // +0x378
    WCFinderMegaVideo * _longVideo; // +0x380
}
+ (id)feedArrayConvertTidFromObject:(id)arg1;
+ (id)feedArrayConvertVMFromItem:(id)arg1 scene:(int)arg2;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (unsigned long long)columnType;
+ (id)dataItemFromTingBuffer:(id)arg1;
+ (id)dataItemFromTextStateInfoBuffer:(id)arg1;
+ (id)textStatusJumpInfoFinderFromBuffer:(id)arg1;
+ (id)templateSetVCTagTitleWithTag:(unsigned long long)arg1;
+ (id)convertFinderMusicInfo:(id)arg1 uiStyle:(unsigned long long)arg2 musicIdGenerator:(id /* block */)arg3;
+ (void)PBArrayAdd_tid;
+ (void)PBArrayAdd_disPlayTid;
+ (void)PBArrayAdd_tmpLocalTid;
+ (void)PBArrayAdd_username;
+ (void)PBArrayAdd_nickname;
+ (void)PBArrayAdd_createTime;
+ (void)PBArrayAdd_likeList;
+ (void)PBArrayAdd_commentList;
+ (void)PBArrayAdd_hotCommentList;
+ (void)PBArrayAdd_forwardCount;
+ (void)PBArrayAdd_likeFlag;
+ (void)PBArrayAdd_isUpLoading;
+ (void)PBArrayAdd_isUpLoadFail;
+ (void)PBArrayAdd_uploadErrType;
+ (void)PBArrayAdd_uploadErrMsg;
+ (void)PBArrayAdd_contact;
+ (void)PBArrayAdd_recommenderList;
+ (void)PBArrayAdd_likeCount;
+ (void)PBArrayAdd_commentCount;
+ (void)PBArrayAdd_recommendReason;
+ (void)PBArrayAdd_cacheTime;
+ (void)PBArrayAdd_readCount;
+ (void)PBArrayAdd_eupdOob;
+ (void)PBArrayAdd_media;
+ (void)PBArrayAdd_isDeleted;
+ (void)PBArrayAdd_isCommentClose;
+ (void)PBArrayAdd_refObjectID;
+ (void)PBArrayAdd_refContact;
+ (void)PBArrayAdd_refUsername;
+ (void)PBArrayAdd_refNickname;
+ (void)PBArrayAdd_recommendType;
+ (void)PBArrayAdd_sendShareFavWording;
+ (void)PBArrayAdd_nextCheckObjectStatusTimeStamp;
+ (void)PBArrayAdd_tipsWording;
+ (void)PBArrayAdd_chooseCoverTime;
+ (void)PBArrayAdd_warnFlag;
+ (void)PBArrayAdd_warnWording;
+ (void)PBArrayAdd_fav;
+ (void)PBArrayAdd_favCount;
+ (void)PBArrayAdd_friendsLikeList;
+ (void)PBArrayAdd_foldedFlag;
+ (void)PBArrayAdd_allowForward;
+ (void)PBArrayAdd_forwardStyle;
+ (void)PBArrayAdd_fromScene;
+ (void)PBArrayAdd_recommendConfiguration;
+ (void)PBArrayAdd_msgEventFlag;
+ (void)PBArrayAdd_msgId;
+ (void)PBArrayAdd_privateFlag;
+ (void)PBArrayAdd_permissionFlag;
+ (void)PBArrayAdd_attachmentList;
+ (void)PBArrayAdd_stickyTime;
+ (void)PBArrayAdd_objectType;
+ (void)PBArrayAdd_isNewsFeed;
+ (void)PBArrayAdd_fromOtherAppPostParamsJson;
+ (void)PBArrayAdd_remoteUrl;
+ (void)PBArrayAdd_snsShareInfo;
+ (void)PBArrayAdd_hotTopics;
+ (void)PBArrayAdd_patMusicCount;
+ (void)PBArrayAdd_musicMVModel;
+ (void)PBArrayAdd_isPOISameCity;
+ (void)PBArrayAdd_eventTopicID;
+ (void)PBArrayAdd_adLiveCoverUrl;
+ (void)PBArrayAdd_mentionListSelectedOption;
+ (void)PBArrayAdd_verifyInfo;
+ (void)PBArrayAdd_wxStatusRefCount;
+ (void)PBArrayAdd_isDraft;
+ (void)PBArrayAdd_hotWordInfo;
+ (void)PBArrayAdd_adFlag;
+ (void)PBArrayAdd_tipsInfo;
+ (void)PBArrayAdd_liveRelatedLastBuffer;
+ (void)PBArrayAdd_musicInfo;
+ (void)PBArrayAdd_followCount;
+ (void)PBArrayAdd_cookie;
+ (void)PBArrayAdd_previewFlag;
+ (void)PBArrayAdd_ringtoneCount;
+ (void)PBArrayAdd_liveInfo;
+ (void)PBArrayAdd_innerModel;
+ (void)initialize;
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)tid;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_tid;
+ (const void *)username;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_username;
+ (const void *)nickname;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_nickname;
+ (const void *)createTime;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_createTime;
+ (const void *)media;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_media;
+ (const void *)likeList;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_likeList;
+ (const void *)commentList;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_commentList;
+ (const void *)forwardCount;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (id)swift_forwardCount;
+ (const void *)likeFlag;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (id)swift_likeFlag;
+ (const void *)isUpLoading;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (id)swift_isUpLoading;
+ (const void *)tmpLocalTid;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (id)swift_tmpLocalTid;
+ (const void *)disPlayTid;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (id)swift_disPlayTid;
+ (const void *)recommenderList;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (id)swift_recommenderList;
+ (const void *)isUpLoadFail;
+ (const void *)__wcdb_synthesize_13:(void *)arg1;
+ (id)swift_isUpLoadFail;
+ (const void *)uploadErrType;
+ (const void *)__wcdb_synthesize_14:(void *)arg1;
+ (id)swift_uploadErrType;
+ (const void *)uploadErrMsg;
+ (const void *)__wcdb_synthesize_15:(void *)arg1;
+ (id)swift_uploadErrMsg;
+ (const void *)likeCount;
+ (const void *)__wcdb_synthesize_16:(void *)arg1;
+ (id)swift_likeCount;
+ (const void *)commentCount;
+ (const void *)__wcdb_synthesize_17:(void *)arg1;
+ (id)swift_commentCount;
+ (const void *)cacheTime;
+ (const void *)__wcdb_synthesize_18:(void *)arg1;
+ (id)swift_cacheTime;
+ (const void *)eupdOob;
+ (const void *)__wcdb_synthesize_19:(void *)arg1;
+ (id)swift_eupdOob;
+ (const void *)readCount;
+ (const void *)__wcdb_synthesize_20:(void *)arg1;
+ (id)swift_readCount;
+ (const void *)hotCommentList;
+ (const void *)__wcdb_synthesize_21:(void *)arg1;
+ (id)swift_hotCommentList;
+ (const void *)isDeleted;
+ (const void *)__wcdb_synthesize_22:(void *)arg1;
+ (id)swift_isDeleted;
+ (const void *)isCommentClose;
+ (const void *)__wcdb_synthesize_23:(void *)arg1;
+ (id)swift_isCommentClose;
+ (const void *)refObjectID;
+ (const void *)__wcdb_synthesize_24:(void *)arg1;
+ (id)swift_refObjectID;
+ (const void *)refUsername;
+ (const void *)__wcdb_synthesize_25:(void *)arg1;
+ (id)swift_refUsername;
+ (const void *)refNickname;
+ (const void *)__wcdb_synthesize_26:(void *)arg1;
+ (id)swift_refNickname;
+ (const void *)friendLikeCount;
+ (const void *)__wcdb_synthesize_27:(void *)arg1;
+ (id)swift_friendLikeCount;
+ (const void *)nonceID;
+ (const void *)__wcdb_synthesize_28:(void *)arg1;
+ (id)swift_nonceID;
+ (const void *)objectStatus;
+ (const void *)__wcdb_synthesize_29:(void *)arg1;
+ (id)swift_objectStatus;
+ (const void *)sendShareFavWording;
+ (const void *)__wcdb_synthesize_30:(void *)arg1;
+ (id)swift_sendShareFavWording;
+ (const void *)nextCheckObjectStatusTimeStamp;
+ (const void *)__wcdb_synthesize_31:(void *)arg1;
+ (id)swift_nextCheckObjectStatusTimeStamp;
+ (const void *)secondaryShowFlag;
+ (const void *)__wcdb_synthesize_32:(void *)arg1;
+ (id)swift_secondaryShowFlag;
+ (const void *)tipsWording;
+ (const void *)__wcdb_synthesize_33:(void *)arg1;
+ (id)swift_tipsWording;
+ (const void *)chooseCoverTime;
+ (const void *)__wcdb_synthesize_34:(void *)arg1;
+ (id)swift_chooseCoverTime;
+ (const void *)warnFlag;
+ (const void *)__wcdb_synthesize_35:(void *)arg1;
+ (id)swift_warnFlag;
+ (const void *)warnWording;
+ (const void *)__wcdb_synthesize_36:(void *)arg1;
+ (id)swift_warnWording;
+ (const void *)fav;
+ (const void *)__wcdb_synthesize_37:(void *)arg1;
+ (id)swift_fav;
+ (const void *)favCount;
+ (const void *)__wcdb_synthesize_38:(void *)arg1;
+ (id)swift_favCount;
+ (const void *)friendsLikeList;
+ (const void *)__wcdb_synthesize_39:(void *)arg1;
+ (id)swift_friendsLikeList;
+ (const void *)foldedFlag;
+ (const void *)__wcdb_synthesize_40:(void *)arg1;
+ (id)swift_foldedFlag;
+ (const void *)allowForward;
+ (const void *)__wcdb_synthesize_41:(void *)arg1;
+ (id)swift_allowForward;
+ (const void *)urlValidTime;
+ (const void *)__wcdb_synthesize_42:(void *)arg1;
+ (id)swift_urlValidTime;
+ (const void *)forwardStyle;
+ (const void *)__wcdb_synthesize_43:(void *)arg1;
+ (id)swift_forwardStyle;
+ (const void *)fromScene;
+ (const void *)__wcdb_synthesize_44:(void *)arg1;
+ (id)swift_fromScene;
+ (const void *)recommendConfiguration;
+ (const void *)__wcdb_synthesize_45:(void *)arg1;
+ (id)swift_recommendConfiguration;
+ (const void *)likeActionTimestamp;
+ (const void *)__wcdb_synthesize_46:(void *)arg1;
+ (id)swift_likeActionTimestamp;
+ (const void *)msgEventFlag;
+ (const void *)__wcdb_synthesize_47:(void *)arg1;
+ (id)swift_msgEventFlag;
+ (const void *)msgId;
+ (const void *)__wcdb_synthesize_48:(void *)arg1;
+ (id)swift_msgId;
+ (const void *)privateFlag;
+ (const void *)__wcdb_synthesize_49:(void *)arg1;
+ (id)swift_privateFlag;
+ (const void *)permissionFlag;
+ (const void *)__wcdb_synthesize_50:(void *)arg1;
+ (id)swift_permissionFlag;
+ (const void *)objectType;
+ (const void *)__wcdb_synthesize_51:(void *)arg1;
+ (id)swift_objectType;
+ (const void *)liveInfo;
+ (const void *)__wcdb_synthesize_52:(void *)arg1;
+ (id)swift_liveInfo;
+ (const void *)stickyTime;
+ (const void *)__wcdb_synthesize_53:(void *)arg1;
+ (id)swift_stickyTime;
+ (const void *)recvTimeMs;
+ (const void *)__wcdb_synthesize_54:(void *)arg1;
+ (id)swift_recvTimeMs;
+ (const void *)isNewsFeed;
+ (const void *)__wcdb_synthesize_55:(void *)arg1;
+ (id)swift_isNewsFeed;
+ (const void *)snsShareInfo;
+ (const void *)__wcdb_synthesize_56:(void *)arg1;
+ (id)swift_snsShareInfo;
+ (const void *)hotTopics;
+ (const void *)__wcdb_synthesize_57:(void *)arg1;
+ (id)swift_hotTopics;
+ (const void *)patMusicCount;
+ (const void *)__wcdb_synthesize_58:(void *)arg1;
+ (id)swift_patMusicCount;
+ (const void *)fromOtherAppPostParamsJson;
+ (const void *)__wcdb_synthesize_59:(void *)arg1;
+ (id)swift_fromOtherAppPostParamsJson;
+ (const void *)remoteUrl;
+ (const void *)__wcdb_synthesize_60:(void *)arg1;
+ (id)swift_remoteUrl;
+ (const void *)eventTopicID;
+ (const void *)__wcdb_synthesize_61:(void *)arg1;
+ (id)swift_eventTopicID;
+ (const void *)musicMVModel;
+ (const void *)__wcdb_synthesize_62:(void *)arg1;
+ (id)swift_musicMVModel;
+ (const void *)isPOISameCity;
+ (const void *)__wcdb_synthesize_63:(void *)arg1;
+ (id)swift_isPOISameCity;
+ (const void *)adLiveCoverUrl;
+ (const void *)__wcdb_synthesize_64:(void *)arg1;
+ (id)swift_adLiveCoverUrl;
+ (const void *)mentionListSelectedOption;
+ (const void *)__wcdb_synthesize_65:(void *)arg1;
+ (id)swift_mentionListSelectedOption;
+ (const void *)verifyInfo;
+ (const void *)__wcdb_synthesize_66:(void *)arg1;
+ (id)swift_verifyInfo;
+ (const void *)wxStatusRefCount;
+ (const void *)__wcdb_synthesize_67:(void *)arg1;
+ (id)swift_wxStatusRefCount;
+ (const void *)isDraft;
+ (const void *)__wcdb_synthesize_68:(void *)arg1;
+ (id)swift_isDraft;
+ (const void *)hotWordInfo;
+ (const void *)__wcdb_synthesize_69:(void *)arg1;
+ (id)swift_hotWordInfo;
+ (const void *)adFlag;
+ (const void *)__wcdb_synthesize_70:(void *)arg1;
+ (id)swift_adFlag;
+ (const void *)tipsInfo;
+ (const void *)__wcdb_synthesize_71:(void *)arg1;
+ (id)swift_tipsInfo;
+ (const void *)liveRelatedLastBuffer;
+ (const void *)__wcdb_synthesize_72:(void *)arg1;
+ (id)swift_liveRelatedLastBuffer;
+ (const void *)musicInfo;
+ (const void *)__wcdb_synthesize_73:(void *)arg1;
+ (id)swift_musicInfo;
+ (const void *)followCount;
+ (const void *)__wcdb_synthesize_74:(void *)arg1;
+ (id)swift_followCount;
+ (const void *)cookie;
+ (const void *)__wcdb_synthesize_75:(void *)arg1;
+ (id)swift_cookie;
+ (const void *)internalFeedbackUrl;
+ (const void *)__wcdb_synthesize_76:(void *)arg1;
+ (id)swift_internalFeedbackUrl;
+ (const void *)previewFlag;
+ (const void *)__wcdb_synthesize_77:(void *)arg1;
+ (id)swift_previewFlag;
+ (const void *)objectVersion;
+ (const void *)__wcdb_synthesize_78:(void *)arg1;
+ (id)swift_objectVersion;
+ (const void *)innerModel;
+ (const void *)__wcdb_synthesize_79:(void *)arg1;
+ (id)swift_innerModel;
+ (const void *)ringtoneCount;
+ (const void *)__wcdb_synthesize_80:(void *)arg1;
+ (id)swift_ringtoneCount;
+ (const void *)starActionTimestamp;
+ (const void *)__wcdb_synthesize_81:(void *)arg1;
+ (id)swift_starActionTimestamp;
+ (void)__wcdb_column_constraint_82:(void *)arg1;
+ (void)__wcdb_index_83:(void *)arg1;
+ (void)__wcdb_index_84:(void *)arg1;
+ (void)__wcdb_index_85:(void *)arg1;
+ (void)__wcdb_index_86:(void *)arg1;
+ (void)__wcdb_index_87:(void *)arg1;
+ (void)__wcdb_column_constraint_88:(void *)arg1;
+ (id)finderDataItemFromObject:(id)arg1;
+ (void)removePostModelPermanentPathMedia:(id)arg1;
+ (void)backfillReportInfoFromOldDataItem:(id)arg1 newDataItem:(id)arg2;
+ (id)ignorePropertyArray;
- (id)nativeDramaContext;
- (id)feedArrayConvertFromOtherListVM:(id)arg1 scene:(int)arg2;
- (id)memberShipModel;
- (id)archivedWCTValue;
- (id)genRingDownloadInfo;
- (id)genTingBuffer;
- (id)mediaTitle;
- (id)coverUrlWithToken;
- (id)thumbUrlToken;
- (id)fullThumbUrlToken;
- (id)toTextStateInfo;
- (id)to3rdPartyDataItems;
- (id)to3rdPartyDataItemBuffer;
- (id)generateLiveTextStateInfoWithVerifyInfo:(id)arg1 textStatusIconId:(id)arg2;
- (id)getImageFromView:(id)arg1;
- (double)mediaHeightWithTargetWidth:(double)arg1;
- (id)generateHeadImgViewWithFrame:(CGRect)arg1;
- (id)generateCoverView;
- (id)generateCoverViewForMomentsCover;
- (id)contactNickname;
- (id)mediaDescrition;
- (BOOL)cachedDataIsExpire;
- (BOOL)checkValidStatusFromCached;
- (id)invalidMsgFromCached;
- (void)checkValidStatusFromServerWithCompletion:(id /* block */)arg1;
- (BOOL)isFirstPublishInTemplatePage;
- (BOOL)isMostFollowPublishInTemplatePage;
- (unsigned long long)genFeedTagType;
- (id)genTemplateSetVCTagTitle;
- (int)targetCommentScene;
- (unsigned long long)reportEnterScene;
- (id)generateNewLifeShareExtInfo:(BOOL)arg1;
- (id)generateMsgWrapForNewLife:(BOOL)arg1;
- (id)generateFavoritesItemForNewLife;
- (id)generateMomentsDataItemForNewLife:(BOOL)arg1;
- (id)minimalDebugRecommendReason;
- (id)detailDebugRecommendReason;
- (id)exposureInformation;
- (id)debugComponents;
- (id)debugRecommendReason;
- (BOOL)isNewLife;
- (BOOL)isDetailAvailableForNewLife;
- (id)coverCropInfo;
- (double)newlifeAspectRatio;
- (id)finderMonotonicData;
- (void)ensureCreateMonotonicData;
- (unsigned int)globalFavoriteFlag;
- (void)setGlobalFavoriteFlag:(unsigned int)arg1;
- (unsigned int)globalFavoriteCount;
- (void)setGlobalFavoriteCount:(unsigned int)arg1;
- (unsigned int)thumbUpFlag;
- (void)setThumbUpFlag:(unsigned int)arg1;
- (unsigned int)thumbUpCount;
- (void)setThumbUpCount:(unsigned int)arg1;
- (void)convertWeixinThumpUpToFinderThumbUp;
- (BOOL)isMPFeed;
- (id)mpArticleUrl;
- (id)generateMsgWrapForNewLifeMPFeed:(id)arg1;
- (id)convertMusicInfo;
- (id)maxHWRatioMediaInfo;
- (id)musicUrl;
- (id)musicId;
- (id)coverUrl;
- (id)songName;
- (id)songAuthorName;
- (BOOL)playable;
- (BOOL)isMusicLiked;
- (id)musicLyricInfos;
- (BOOL)isEqualToMusicData:(id)arg1;
- (id)recommendBuf;
- (id)feedId;
- (id)uniqueId;
- (int)bgmItemType;
- (unsigned long long)songDurationInMs;
- (BOOL)isCustomManageDownloadOperation;
- (id)getCustomDownloadMusicPath;
- (void)customDownloadWithCompletion:(id /* block */)arg1;
- (id)getDownloadMediaWrap;
- (BOOL)isFinderFeedMusic;
- (void)setMusicReportType:(unsigned long long)arg1;
- (unsigned long long)musicReportType;
- (id)getPBPropertyTable;
- (id)init;
- (BOOL)isVaild;
- (BOOL)isLikeState;
- (BOOL)isPrivateLike;
- (unsigned long long)objectID;
- (id)nickname;
- (BOOL)isPureText;
- (BOOL)isVideoItem;
- (BOOL)isContainPhoto;
- (BOOL)hasBGMStreamUrl;
- (BOOL)isEmptyMediaArray;
- (id)title;
- (id)location;
- (void)setLocation:(id)arg1;
- (id)topic;
- (void)setTopic:(id)arg1;
- (id)mentionedContactsArray;
- (void)setMentionedContactsArray:(id)arg1;
- (id)mentionedNicknameArray;
- (void)setMentionedNicknameArray:(id)arg1;
- (id)extReading;
- (void)setExtReading:(id)arg1;
- (BOOL)hasExtReading;
- (unsigned long long)mediaType;
- (BOOL)isNotRealnameError;
- (BOOL)uploadTooLargeAssetError;
- (BOOL)enableFeedRetry;
- (BOOL)uploadFileNotExist;
- (BOOL)uploadEventNotExist;
- (BOOL)shouldShockdLike;
- (BOOL)isWXFriend;
- (id)fromAppId;
- (void)setFromAppId:(id)arg1;
- (void)appendAttachmentItem:(id)arg1;
- (void)appendOrReplaceAttachmentItem:(id)arg1;
- (id)jumpInfoContainer;
- (id)getJumpInfo;
- (BOOL)hasJumpInfoOnCommentContent;
- (BOOL)hasJumpInfoOnCommentOperating;
- (id)getCommentPositionMusicSongName;
- (BOOL)mediaHasWatermark;
- (id)streamShareData;
- (id)extractReuseInfoFromOldDataItem:(id)arg1;
- (double)getFeedToCurGPSMeterDistance;
- (BOOL)isBulletCommentOpen;
- (void)setBulletCommentOpenState:(BOOL)arg1;
- (BOOL)isBulletCommentForbid;
- (BOOL)isNeedPayCourseFeed;
- (BOOL)isNeedPayDramaFeed;
- (BOOL)isNeedPayFeed;
- (BOOL)isCourseFeed;
- (BOOL)isDramaFeed;
- (BOOL)isPaidCollectionFeed;
- (BOOL)isFreeCollectionFeed;
- (BOOL)isRelatedListEnableDiscoveryFinderFeed;
- (id)eventInfo;
- (void)setEventInfo:(id)arg1;
- (id)innerModel;
- (id)objectExtend;
- (id)enhanceConfiguration;
- (BOOL)containVideo;
- (id)genFinderObject;
- (id)genPOIEssentialFinderObject;
- (id)mediaArray;
- (BOOL)shouldShowNickNameWhenForwardToSns;
- (BOOL)isSelfPrivate;
- (BOOL)hasLinkInfo;
- (void)setFeedExportId:(id)arg1;
- (id)feedExportId;
- (BOOL)isPrivateAccount;
- (BOOL)disableFavByPrivateAccount;
- (BOOL)disableForwardByPrivateAccount;
- (BOOL)disableCommentEmotion;
- (BOOL)disableCommentImage;
- (BOOL)disableLikeAction;
- (BOOL)disableCommentEntry;
- (BOOL)disableFavAction;
- (BOOL)hideFavAction;
- (BOOL)isGlobalFav;
- (BOOL)hiddenPlayRateAction;
- (BOOL)disableForwardSheet;
- (id)getPatMusicGroupId;
- (BOOL)isHardAdFeed;
- (BOOL)isHardAdLiveFeed;
- (id)displayRecommendReason;
- (void)mergeLiveMonotonicData:(id)arg1;
- (BOOL)shouldShowFullScreenTipsBar;
- (BOOL)isFullScreenFollowHistoryTipsBarStyle;
- (BOOL)isFullScreenFriendRecommendTipsBarStyle;
- (BOOL)shouldShowFullScreenTimelineJumpView;
- (BOOL)isPatOriginalMusicFeed;
- (BOOL)isPhotoWithBGM;
- (BOOL)isPhotoWithoutBGM;
- (BOOL)shouldFileDumpItem;
- (BOOL)canShowInLandscapeWithCellIndex:(unsigned long long)arg1;
- (BOOL)canScalingShowInLandscapeWithCellIndex:(unsigned long long)arg1;
- (id)getDisplayLocation;
- (BOOL)_canShowInLandscapeWithCellIndex:(unsigned long long)arg1 canLandScapeForScaling:(BOOL)arg2;
- (BOOL)canUseCache;
- (BOOL)canUseAsCacheFeed;
- (BOOL)hasFeedSubtitle;
- (BOOL)isFeedSubtitleOpen;
- (void)setFeedSubtitleOpen:(BOOL)arg1;
- (BOOL)isInteractionLimit;
- (BOOL)commentDisablePostProduct;
- (BOOL)commentProductPosted;
- (BOOL)forceDisplayCreatedTime;
- (void)setCommentProductPosted:(BOOL)arg1;
- (BOOL)isMediaURLValid;
- (BOOL)isLiveFeed;
- (BOOL)isRePlayJumpFeed;
- (BOOL)dataItemUploadSuccess;
- (id)thumbImageUrl;
- (id)mediaImageURL;
- (void)forbidInteractiveAction;
- (BOOL)isTemplateCard;
- (id)pathForPreview;
- (id)pathForCover;
- (id)pathForSightData;
- (id)description;
- (BOOL)hasLongVideo;
- (BOOL)hasProductFeed;
- (BOOL)isLocalLongVideo;
- (id)longVideo;
- (id)longVideoId;
- (id)longVideoNonceId;
- (id)longVideoMedia;
- (id)findHotNewsTopic;
- (BOOL)isMusicDataItem;
- (BOOL)isMemberShipQAItem;
- (id)memberShipAnswerObject;
- (BOOL)isSelfPostMemberShipQAItem;
- (id)memberShipQAItemLikeList;
- (id)finderMemberData;
- (BOOL)originalPermissionDenied;
- (BOOL)isPostingDataItem;
- (BOOL)isLeadToOtherTabDataItem;
- (unsigned long long)getOriginalStatementBanReasonType;
- (unsigned long long)getOriginalStatementBanSvrReasonType;
- (unsigned long long)getOriginalStatementBanMediaReasonType;
- (unsigned long long)getFeedOriginalState;
- (BOOL)mentionListSelected;
- (void)setMentionListSelected:(BOOL)arg1;
- (id)getPlayMediaInfoArray;
- (id)mediaInfoForPlay;
- (id)mediaInfoForPlayAtIndex:(unsigned long long)arg1;
- (long long)indexOfMediaInfo:(id)arg1;
- (id)videoTemplateInfo;
- (id)videoTemplateId;
- (id)videoTemplateMusicId;
- (id)videoTemplateTopicId;
- (unsigned long long)videoTemplateType;
- (BOOL)isEnableSetRingTone;
- (BOOL)isEnableAirPlay;
- (BOOL)isClubFeedAuthor;
- (BOOL)isUploadingOrFail;
- (BOOL)isFakePostSucFeed;
- (id)getMultiIconReason;
- (void)resetMultiIconReason;
- (BOOL)isMemberShipFeed;
- (BOOL)isMemberShipFeedCanPlay;
- (BOOL)isMemberShipFeedForPreview;
- (BOOL)shouldShowShareToSnsAlert;
- (id)getThanksRecomendOtherLikeComment:(BOOL)arg1;
- (BOOL)hasStreamShareData;
- (BOOL)disableThankRecommend;
- (BOOL)isColumnData;
- (BOOL)isSelfPostFeed;
- (BOOL)isSelfClubContactPostFeed;
- (BOOL)isAuthorViewerScene:(int)arg1;
- (id)tid;
- (void)setTid:(id)arg1;
- (id)disPlayTid;
- (void)setDisPlayTid:(id)arg1;
- (id)tmpLocalTid;
- (void)setTmpLocalTid:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (void)setNickname:(id)arg1;
- (double)createTime;
- (void)setCreateTime:(double)arg1;
- (id)media;
- (void)setMedia:(id)arg1;
- (id)likeList;
- (void)setLikeList:(id)arg1;
- (id)commentList;
- (void)setCommentList:(id)arg1;
- (id)hotCommentList;
- (void)setHotCommentList:(id)arg1;
- (long long)forwardCount;
- (void)setForwardCount:(long long)arg1;
- (int)likeFlag;
- (void)setLikeFlag:(int)arg1;
- (BOOL)isUpLoading;
- (void)setIsUpLoading:(BOOL)arg1;
- (BOOL)isUpLoadFail;
- (void)setIsUpLoadFail:(BOOL)arg1;
- (long long)uploadErrType;
- (void)setUploadErrType:(long long)arg1;
- (id)uploadErrMsg;
- (void)setUploadErrMsg:(id)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (id)recommenderList;
- (void)setRecommenderList:(id)arg1;
- (long long)likeCount;
- (void)setLikeCount:(long long)arg1;
- (long long)friendLikeCount;
- (void)setFriendLikeCount:(long long)arg1;
- (long long)commentCount;
- (void)setCommentCount:(long long)arg1;
- (id)recommendReason;
- (void)setRecommendReason:(id)arg1;
- (int)recommendType;
- (void)setRecommendType:(int)arg1;
- (unsigned int)cacheTime;
- (void)setCacheTime:(unsigned int)arg1;
- (unsigned long long)readCount;
- (void)setReadCount:(unsigned long long)arg1;
- (BOOL)isDeleted;
- (void)setIsDeleted:(BOOL)arg1;
- (BOOL)isCommentClose;
- (void)setIsCommentClose:(BOOL)arg1;
- (id)refObjectID;
- (void)setRefObjectID:(id)arg1;
- (id)refContact;
- (void)setRefContact:(id)arg1;
- (id)refUsername;
- (void)setRefUsername:(id)arg1;
- (id)refNickname;
- (void)setRefNickname:(id)arg1;
- (id)nonceID;
- (void)setNonceID:(id)arg1;
- (long long)objectStatus;
- (void)setObjectStatus:(long long)arg1;
- (id)locationInfo;
- (void)setLocationInfo:(id)arg1;
- (BOOL)fromCamera;
- (void)setFromCamera:(BOOL)arg1;
- (id)sendShareFavWording;
- (void)setSendShareFavWording:(id)arg1;
- (unsigned int)nextCheckObjectStatusTimeStamp;
- (void)setNextCheckObjectStatusTimeStamp:(unsigned int)arg1;
- (id)topics;
- (void)setTopics:(id)arg1;
- (BOOL)secondaryShowFlag;
- (void)setSecondaryShowFlag:(BOOL)arg1;
- (unsigned long long)orgRecommendType;
- (void)setOrgRecommendType:(unsigned long long)arg1;
- (id)tipsWording;
- (void)setTipsWording:(id)arg1;
- (double)chooseCoverTime;
- (void)setChooseCoverTime:(double)arg1;
- (unsigned long long)warnFlag;
- (void)setWarnFlag:(unsigned long long)arg1;
- (id)warnWording;
- (void)setWarnWording:(id)arg1;
- (id)sessionBuffer;
- (void)setSessionBuffer:(id)arg1;
- (BOOL)fav;
- (void)setFav:(BOOL)arg1;
- (BOOL)allowForward;
- (void)setAllowForward:(BOOL)arg1;
- (unsigned long long)favCount;
- (void)setFavCount:(unsigned long long)arg1;
- (id)friendsLikeList;
- (void)setFriendsLikeList:(id)arg1;
- (BOOL)foldedFlag;
- (void)setFoldedFlag:(BOOL)arg1;
- (id)foldLayout;
- (void)setFoldLayout:(id)arg1;
- (unsigned long long)urlValidTime;
- (void)setUrlValidTime:(unsigned long long)arg1;
- (unsigned long long)forwardStyle;
- (void)setForwardStyle:(unsigned long long)arg1;
- (id)eupdOob;
- (void)setEupdOob:(id)arg1;
- (unsigned long long)fromScene;
- (void)setFromScene:(unsigned long long)arg1;
- (id)recommendConfiguration;
- (void)setRecommendConfiguration:(id)arg1;
- (unsigned long long)likeActionTimestamp;
- (void)setLikeActionTimestamp:(unsigned long long)arg1;
- (unsigned long long)starActionTimestamp;
- (void)setStarActionTimestamp:(unsigned long long)arg1;
- (unsigned long long)msgEventFlag;
- (void)setMsgEventFlag:(unsigned long long)arg1;
- (id)msgId;
- (void)setMsgId:(id)arg1;
- (long long)incFriendLikeCount;
- (void)setIncFriendLikeCount:(long long)arg1;
- (id)likeBuffer;
- (void)setLikeBuffer:(id)arg1;
- (BOOL)privateFlag;
- (void)setPrivateFlag:(BOOL)arg1;
- (BOOL)isFromSDKEditor;
- (void)setIsFromSDKEditor:(BOOL)arg1;
- (id)liveInfo;
- (void)setLiveInfo:(id)arg1;
- (unsigned int)stickyTime;
- (void)setStickyTime:(unsigned int)arg1;
- (unsigned long long)createFromType;
- (void)setCreateFromType:(unsigned long long)arg1;
- (unsigned long long)permissionFlag;
- (void)setPermissionFlag:(unsigned long long)arg1;
- (int)objectType;
- (void)setObjectType:(int)arg1;
- (id)attachmentList;
- (void)setAttachmentList:(id)arg1;
- (unsigned long long)recvTimeMs;
- (void)setRecvTimeMs:(unsigned long long)arg1;
- (id)staticCellLeftTips;
- (void)setStaticCellLeftTips:(id)arg1;
- (BOOL)isNewsFeed;
- (void)setIsNewsFeed:(BOOL)arg1;
- (id)hotTopics;
- (void)setHotTopics:(id)arg1;
- (id)hotWordInfo;
- (void)setHotWordInfo:(id)arg1;
- (unsigned long long)postPatMusicType;
- (void)setPostPatMusicType:(unsigned long long)arg1;
- (unsigned long long)musicType;
- (void)setMusicType:(unsigned long long)arg1;
- (id)groupId;
- (void)setGroupId:(id)arg1;
- (id)snsShareInfo;
- (void)setSnsShareInfo:(id)arg1;
- (unsigned int)patMusicCount;
- (void)setPatMusicCount:(unsigned int)arg1;
- (unsigned int)ringtoneCount;
- (void)setRingtoneCount:(unsigned int)arg1;
- (unsigned long long)eventTopicID;
- (void)setEventTopicID:(unsigned long long)arg1;
- (id)fromOtherAppPostParamsJson;
- (void)setFromOtherAppPostParamsJson:(id)arg1;
- (id)remoteUrl;
- (void)setRemoteUrl:(id)arg1;
- (id)debugMsg;
- (void)setDebugMsg:(id)arg1;
- (id)ecSource;
- (void)setEcSource:(id)arg1;
- (id)musicMVModel;
- (void)setMusicMVModel:(id)arg1;
- (id)roomId;
- (void)setRoomId:(id)arg1;
- (unsigned int)chargeFlag;
- (void)setChargeFlag:(unsigned int)arg1;
- (unsigned int)chargeUnitPriceInWecoin;
- (void)setChargeUnitPriceInWecoin:(unsigned int)arg1;
- (id)freeOfChargeChatroomIdList;
- (void)setFreeOfChargeChatroomIdList:(id)arg1;
- (id)freeOfChargeUsernameList;
- (void)setFreeOfChargeUsernameList:(id)arg1;
- (id)feedWidgetInfo;
- (void)setFeedWidgetInfo:(id)arg1;
- (id)extUrlFromOpenSDK;
- (void)setExtUrlFromOpenSDK:(id)arg1;
- (BOOL)isPOISameCity;
- (void)setIsPOISameCity:(BOOL)arg1;
- (id)verifiedJumpInfo;
- (void)setVerifiedJumpInfo:(id)arg1;
- (id)adLiveCoverUrl;
- (void)setAdLiveCoverUrl:(id)arg1;
- (id)verifyInfo;
- (void)setVerifyInfo:(id)arg1;
- (int)mentionListSelectedOption;
- (void)setMentionListSelectedOption:(int)arg1;
- (unsigned long long)wxStatusRefCount;
- (void)setWxStatusRefCount:(unsigned long long)arg1;
- (BOOL)isDraft;
- (void)setIsDraft:(BOOL)arg1;
- (id)showInfo;
- (void)setShowInfo:(id)arg1;
- (unsigned long long)adFlag;
- (void)setAdFlag:(unsigned long long)arg1;
- (void)setJumpInfoContainer:(id)arg1;
- (id)tipsInfo;
- (void)setTipsInfo:(id)arg1;
- (id)liveRelatedLastBuffer;
- (void)setLiveRelatedLastBuffer:(id)arg1;
- (id)cookie;
- (void)setCookie:(id)arg1;
- (unsigned long long)previewFlag;
- (void)setPreviewFlag:(unsigned long long)arg1;
- (id)musicInfo;
- (void)setMusicInfo:(id)arg1;
- (long long)followCount;
- (void)setFollowCount:(long long)arg1;
- (id)internalFeedbackUrl;
- (void)setInternalFeedbackUrl:(id)arg1;
- (id)wxaGameExportId;
- (void)setWxaGameExportId:(id)arg1;
- (BOOL)needFetchSingleLive;
- (void)setNeedFetchSingleLive:(BOOL)arg1;
- (BOOL)needNotPreFetchShopLive;
- (void)setNeedNotPreFetchShopLive:(BOOL)arg1;
- (id)goodsItem;
- (void)setGoodsItem:(id)arg1;
- (id)commByPass;
- (void)setCommByPass:(id)arg1;
- (unsigned int)avgSpeed;
- (void)setAvgSpeed:(unsigned int)arg1;
- (id)adsParams;
- (void)setAdsParams:(id)arg1;
- (id)feedAsyncLoadInfo;
- (void)setFeedAsyncLoadInfo:(id)arg1;
- (id)bulletinInfo;
- (void)setBulletinInfo:(id)arg1;
- (id)GameBulletinInfo;
- (void)setGameBulletinInfo:(id)arg1;
- (unsigned long long)bulletinSeq;
- (void)setBulletinSeq:(unsigned long long)arg1;
- (id)bizUsername;
- (void)setBizUsername:(id)arg1;
- (id)quickReplyWordingInfo;
- (void)setQuickReplyWordingInfo:(id)arg1;
- (BOOL)isAdsLive;
- (void)setIsAdsLive:(BOOL)arg1;
- (id)poiAddrSubStr;
- (void)setPoiAddrSubStr:(id)arg1;
- (id)ticket;
- (void)setTicket:(id)arg1;
- (void)setStreamShareData:(id)arg1;
- (int)postWaitType;
- (void)setPostWaitType:(int)arg1;
- (id)asyncCropClientId;
- (void)setAsyncCropClientId:(id)arg1;
- (void)setInnerModel:(id)arg1;
- (unsigned long long)objectVersion;
- (void)setObjectVersion:(unsigned long long)arg1;
- (void)setLongVideo:(id)arg1;
- (void).cxx_destruct;
@end
