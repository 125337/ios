@interface WCDataItem : NSObject <WCListDiffable, NSCoding, PBCoding, PBCoderNSCodingBridge>
{
    NSString * m_cpKeyForContent; // +0x8
    NSString * m_cpKeyForLikeUsers; // +0x10
    BOOL m_isContentUnsafe; // +0x18
    BOOL m_isLikeUsersUnsafe; // +0x19
    unsigned int hash; // +0x1c
    WCTimelineExtBean * _extBean; // +0x20
    BOOL noChange; // +0x28
    BOOL _isBidirectionalFan; // +0x29
    BOOL _likeFlag; // +0x2a
    BOOL _isRichText; // +0x2b
    BOOL _isSecurityVerified; // +0x2c
    BOOL _shouldErrorIgnoreForSpam; // +0x2d
    BOOL _isHiddenAdvertiseActionFloatTipView; // +0x2e
    BOOL _isNewDataSeparator; // +0x2f
    BOOL _isEarlierContentTipsItem; // +0x30
    BOOL _canEditAfterDeleted; // +0x31
    BOOL _reEditPlaceOnFirst; // +0x32
    BOOL _isWeiShang; // +0x33
    BOOL _isFromFav; // +0x34
    BOOL _isStarred; // +0x35
    BOOL _isPrivate; // +0x36
    unsigned int contentAttributeBitSetFlag; // +0x38
    int _cid; // +0x3c
    int _type; // +0x40
    int _flag; // +0x44
    unsigned int _createtime; // +0x48
    int _contentDescShowType; // +0x4c
    int _contentDescScene; // +0x50
    int _likeCount; // +0x54
    int _commentCount; // +0x58
    int _withCount; // +0x5c
    int _togetherCount; // +0x60
    int _uploadErrType; // +0x64
    unsigned int _extFlag; // +0x68
    int _realLikeCount; // +0x6c
    int _realCommentCount; // +0x70
    int _selfLikeCount; // +0x74
    int _selfCommentCount; // +0x78
    int _sightFolded; // +0x7c
    int _showFlag; // +0x80
    int _sessionActionType; // +0x84
    unsigned int _favLocalId; // +0x88
    unsigned int _starGuidingFlags; // +0x8c
    unsigned int _finderSharingFlags; // +0x90
    unsigned int _newlifeSharingFlags; // +0x94
    NSArray * blackUsers; // +0x98
    NSString * contentDescPattern; // +0xa0
    SnsWeAppInfo * snsWeAppInfo; // +0xa8
    NSArray * visibleUsers; // +0xb0
    NSString * _tid; // +0xb8
    NSString * _username; // +0xc0
    NSString * _nickname; // +0xc8
    NSString * _sourceUrl; // +0xd0
    NSString * _sourceUrl2; // +0xd8
    NSMutableDictionary * _extData; // +0xe0
    WCContentItem * _contentObj; // +0xe8
    WCAppInfo * _appInfo; // +0xf0
    NSString * _publicUserName; // +0xf8
    NSString * _sourceUserName; // +0x100
    NSString * _sourceNickName; // +0x108
    NSString * _contentDesc; // +0x110
    WCActionInfo * _actionInfo; // +0x118
    WCMusicInfo * _musicInfo; // +0x120
    WCStreamVideoInfo * _streamVideoInfo; // +0x128
    WCRedEnvelopesInfo * _redEnvelopesInfo; // +0x130
    WCRedEnvelopesRewardInfo * _redEnvelopesRewardInfo; // +0x138
    WCWeAppInfo * _weappInfo; // +0x140
    WCLiteAppInfo * _liteappInfo; // +0x148
    WCGameShareCardInfo * _gameShareCardInfo; // +0x150
    NSMutableArray * _likeUsers; // +0x158
    NSMutableArray * _commentUsers; // +0x160
    NSMutableArray * _withUsers; // +0x168
    NSMutableArray * _togetherUsers; // +0x170
    long long _uploadErrSnsTipsCode; // +0x178
    NSString * _uploadErrMsg; // +0x180
    NSString * _uploadErrBtnUrl; // +0x188
    NSString * _uploadErrBtnTitle; // +0x190
    NSArray * _uploadErrTogetherUsernames; // +0x198
    NSString * _statisticsData; // +0x1a0
    WCLocationInfo * _locationInfo; // +0x1a8
    NSMutableArray * _groupContactTags; // +0x1b0
    NSMutableArray * _blackContactTags; // +0x1b8
    WCObjectOperation * _objOperation; // +0x1c0
    NSString * _shareOriginUrl; // +0x1c8
    NSString * _shareOpenUrl; // +0x1d0
    NSString * _jsAppId; // +0x1d8
    NSMutableDictionary * _statParasDic; // +0x1e0
    WCMomentsTemplateInfo * _templateInfo; // +0x1e8
    WCAdvertiseInfo * _advertiseInfo; // +0x1f0
    WCAdvertiseInfo * _atFriendAdvertiseInfo; // +0x1f8
    NSData * _advertiseInfoNSCodingData; // +0x200
    NSData * _atFriendAdvertiseInfoNSCodingData; // +0x208
    WCRecommendInfo * _recommendInfo; // +0x210
    NSString * _statExtStr; // +0x218
    NSString * _canvasInfoXml; // +0x220
    WCVideoFlowInfo * _videoFlowInfo; // +0x228
    NSString * _draftID; // +0x230
    NSString * _sessionID; // +0x238
    WCMicroMerchantFeedsGroup * _wsGroup; // +0x240
    long long _wsSellerType; // +0x248
    long long _wsFeedType; // +0x250
    long long _wsVideoSourceType; // +0x258
    long long _placeholderType; // +0x260
    NSMutableArray * _sharedGroupIDs; // +0x268
    NSString * _discoveryContentDesc; // +0x270
}
+ (void)PBArrayAdd_cid;
+ (void)PBArrayAdd_tid;
+ (void)PBArrayAdd_type;
+ (void)PBArrayAdd_flag;
+ (void)PBArrayAdd_username;
+ (void)PBArrayAdd_nickname;
+ (void)PBArrayAdd_createtime;
+ (void)PBArrayAdd_sourceUrl;
+ (void)PBArrayAdd_sourceUrl2;
+ (void)PBArrayAdd_likeFlag;
+ (void)PBArrayAdd_isPrivate;
+ (void)PBArrayAdd_likeCount;
+ (void)PBArrayAdd_likeUsers;
+ (void)PBArrayAdd_commentCount;
+ (void)PBArrayAdd_commentUsers;
+ (void)PBArrayAdd_withCount;
+ (void)PBArrayAdd_withUsers;
+ (void)PBArrayAdd_contentObj;
+ (void)PBArrayAdd_appInfo;
+ (void)PBArrayAdd_publicUserName;
+ (void)PBArrayAdd_sourceUserName;
+ (void)PBArrayAdd_sourceNickName;
+ (void)PBArrayAdd_contentDesc;
+ (void)PBArrayAdd_contentDescShowType;
+ (void)PBArrayAdd_contentDescScene;
+ (void)PBArrayAdd_actionInfo;
+ (void)PBArrayAdd_musicInfo;
+ (void)PBArrayAdd_streamVideoInfo;
+ (void)PBArrayAdd_redEnvelopesInfo;
+ (void)PBArrayAdd_redEnvelopesRewardInfo;
+ (void)PBArrayAdd_weappInfo;
+ (void)PBArrayAdd_isBidirectionalFan;
+ (void)PBArrayAdd_sharedGroupIDs;
+ (void)PBArrayAdd_extData;
+ (void)PBArrayAdd_uploadErrType;
+ (void)PBArrayAdd_uploadErrMsg;
+ (void)PBArrayAdd_shouldErrorIgnoreForSpam;
+ (void)PBArrayAdd_statisticsData;
+ (void)PBArrayAdd_locationInfo;
+ (void)PBArrayAdd_advertiseInfoNSCodingData;
+ (void)PBArrayAdd_atFriendAdvertiseInfoNSCodingData;
+ (void)PBArrayAdd_extFlag;
+ (void)PBArrayAdd_objOperation;
+ (void)PBArrayAdd_shareOriginUrl;
+ (void)PBArrayAdd_shareOpenUrl;
+ (void)PBArrayAdd_jsAppId;
+ (void)PBArrayAdd_statParasDic;
+ (void)PBArrayAdd_realLikeCount;
+ (void)PBArrayAdd_realCommentCount;
+ (void)PBArrayAdd_selfLikeCount;
+ (void)PBArrayAdd_selfCommentCount;
+ (void)PBArrayAdd_recommendInfo;
+ (void)PBArrayAdd_statExtStr;
+ (void)PBArrayAdd_canvasInfoXml;
+ (void)PBArrayAdd_sightFolded;
+ (void)PBArrayAdd_showFlag;
+ (void)PBArrayAdd_videoFlowInfo;
+ (void)PBArrayAdd_isRichText;
+ (void)PBArrayAdd_isWeiShang;
+ (void)PBArrayAdd_liteappInfo;
+ (void)PBArrayAdd_togetherCount;
+ (void)PBArrayAdd_togetherUsers;
+ (void)PBArrayAdd_uploadErrTogetherUsernames;
+ (void)PBArrayAdd_templateInfo;
+ (void)PBArrayAdd_uploadErrBtnUrl;
+ (void)PBArrayAdd_uploadErrBtnTitle;
+ (void)PBArrayAdd_wsSellerType;
+ (void)PBArrayAdd_wsFeedType;
+ (void)PBArrayAdd_wsVideoSourceType;
+ (void)PBArrayAdd_finderSharingFlags;
+ (void)PBArrayAdd_isStarred;
+ (void)PBArrayAdd_starGuidingFlags;
+ (void)PBArrayAdd_gameShareCardInfo;
+ (void)PBArrayAdd_newlifeSharingFlags;
+ (void)PBArrayAdd_isSecurityVerified;
+ (void)PBArrayAdd_uploadErrSnsTipsCode;
+ (void)initialize;
+ (id)trimPOIName:(id)arg1 city:(id)arg2 country:(id)arg3;
+ (id)fromNSCodingBuffer:(id)arg1;
+ (id)fromPBCodingBuffer:(id)arg1;
+ (id)fromServerObject:(id)arg1;
+ (id)fromServerObject:(id)arg1 adDynamicXml:(id)arg2;
+ (id)fromUploadTask:(id)arg1;
+ (BOOL)saveSightVideoThumb:(id)arg1 uploadMedia:(id)arg2;
+ (void)encodeSightThumbToWxAMIfNeeded:(id)arg1 uploadMedia:(id)arg2 thumbData:(id)arg3;
+ (id)fromBGUserInfo:(id)arg1;
+ (id)fromServerADObject:(id)arg1;
+ (id)fromServerRecObject:(id)arg1;
+ (void)addStatExtStr:(id)arg1 source:(unsigned int)arg2;
+ (id)fromServerRecAdMsg:(id)arg1;
+ (id)fromServerObject:(id)arg1 advertiseInfo:(id)arg2 dynamicSnsObjXml:(id)arg3 dynamicAdXml:(id)arg4 dynamicAdInfoXml:(id)arg5;
+ (void)processAfterAdDynamicParse:(id)arg1;
+ (id)dataItemWithPlaceholderType:(long long)arg1 tid:(id)arg2;
- (BOOL)VoipRecentStatus_isLegal;
- (BOOL)VoipRecentStatus_isTextType;
- (BOOL)VoipRecentStatus_isPhotoType;
- (BOOL)VoipRecentStatus_isVideoType;
- (BOOL)isFromMiaoJianApp;
- (id)extInfoFromMiaoJianApp;
- (id)finderRecommendationInfo;
- (void)setFinderRecommendationInfo:(id)arg1;
- (id)finderRecommendationPlaceholderContext;
- (void)setFinderRecommendationPlaceholderContext:(id)arg1;
- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)arg1;
- (id)getPBPropertyTable;
- (id)contentDescPattern;
- (int)realLikeCount;
- (int)realCommentCount;
- (BOOL)isMine;
- (BOOL)hasSharedGroup;
- (BOOL)hasGroupContactList;
- (BOOL)hasGroupTagList;
- (BOOL)hasBlackContactList;
- (BOOL)hasBlackTagList;
- (BOOL)shouldLoadContactData;
- (long long)getPrivacy;
- (void)updateShareScopeWithVisibilityChangeOp:(id)arg1;
- (id)privacyDescription;
- (BOOL)exceedsVisibleTimeRange;
- (BOOL)isBlocked;
- (BOOL)isCopyingEnabled;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)upgradeFromCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (long long)compareDesc:(id)arg1;
- (id)keyPaths;
- (id)descriptionForKeyPaths;
- (id)description;
- (id)itemID;
- (int)itemType;
- (id)sequence;
- (id)getDisplayCity;
- (void)setCreateTime:(unsigned int)arg1;
- (void)setSequence:(id)arg1;
- (unsigned long long)hash;
- (void)setHash:(unsigned long long)arg1;
- (id)toNSCodingBuffer;
- (id)toPBCodingBuffer;
- (id)toBufferWithABTest:(BOOL)arg1;
- (void)beforePBCoderProcess;
- (void)afterPBCoderProcess;
- (BOOL)isUploading;
- (BOOL)isLocal;
- (BOOL)isLikeForMe;
- (BOOL)isCommentForMe;
- (BOOL)isUploadFailed;
- (void)setIsUploadFailed:(BOOL)arg1;
- (BOOL)isRead;
- (BOOL)isShareDataCompleted;
- (void)loadPropertiesFromUploadTask:(id)arg1;
- (BOOL)isAtAbleAdvertise;
- (BOOL)isAtAdvertiserStyle;
- (BOOL)isAdvertiserFirstCommentStyle;
- (long long)indexOfFirstBossComment;
- (BOOL)isAdvertiserFirstLikeStyle;
- (id)getMediaWraps;
- (void)mergeLikeUsers:(id)arg1;
- (void)addNewMessage:(id)arg1 inTargetMessages:(id)arg2;
- (void)updateBySnsAdNotInterestsMsg:(id)arg1;
- (void)mergeRewardItem:(id)arg1;
- (void)mergeMessage:(id)arg1 currentAction:(id)arg2;
- (void)mergeMessage:(id)arg1 needParseContent:(BOOL)arg2;
- (BOOL)isValid;
- (BOOL)validateContent:(BOOL)arg1;
- (long long)compareTime:(id)arg1;
- (void)loadPattern;
- (void)parsePattern;
- (void)identifyPatternTopicFuncIfNeed;
- (BOOL)checkExtDataPatternTopicFuncValid;
- (void)parseContentForUI;
- (void)parseContentForNetWithDataItem:(id)arg1;
- (int)getSnsABTestType;
- (BOOL)isAdOrOpenIM;
- (BOOL)isPhoto;
- (BOOL)hasLivePhoto;
- (BOOL)isTypeThatSupportsLivePhoto;
- (BOOL)isVideo;
- (BOOL)isAd;
- (BOOL)isPhotoAd;
- (BOOL)isVideoAd;
- (BOOL)shouldReportVideoInfo;
- (BOOL)isCardAd;
- (BOOL)isSelectCardAd;
- (BOOL)isFullCardAd;
- (BOOL)isSphereCardAd;
- (BOOL)isTwistCardAd;
- (unsigned int)fetchRealAdCommentCount;
- (unsigned int)fetchRealAdLikeCount;
- (BOOL)isFinderFeedAd;
- (BOOL)isFinderTopicAd;
- (BOOL)isSliderCardAd;
- (BOOL)isCombinedGridAd;
- (BOOL)isDynamicFeedAd;
- (BOOL)isLinkAd;
- (BOOL)shouldGetSizeForAdvertiseMedia;
- (BOOL)shouldShowMediaIcon;
- (BOOL)isAdvertiseMediaHigherThanNickLabel;
- (unsigned int)getAdType;
- (id)getAdUserNickName;
- (BOOL)isLinkAdForbidFav;
- (id)genAdWeAppSceneNote;
- (int)getStatExtAdType;
- (unsigned int)countOfLikePeopleIncludeMyself:(BOOL)arg1;
- (unsigned int)countOfCommentPeopleIncludeMyself:(BOOL)arg1;
- (unsigned int)countOfLikeAndCommentPeopleIncludeMyself:(BOOL)arg1;
- (id)cpKeyForContent;
- (id)cpKeyForLikeUsers;
- (BOOL)isContentUnsafe;
- (BOOL)isLikeUsersUnsafe;
- (BOOL)isContentOriginal;
- (void)printSimpleInfo;
- (void)dumpAllCommentInDebugMode;
- (void)dumpLikeAndCommentInfo;
- (BOOL)hasPreloadVideoTask;
- (void)setAtAdvertsierInfo;
- (void)setAtAdvertsierInfoForUserComment:(id)arg1;
- (BOOL)isAdvertiserFirstLikeForUserComment:(id)arg1;
- (id)getUnDownloadThumbMedias;
- (BOOL)canUseBatchThumbDownload;
- (id)getNeedBatchDownloadMedias;
- (id)findMediaItemById:(id)arg1;
- (BOOL)enableEmptyTextForward;
- (unsigned long long)getDispalySourceContent:(id *)arg1 outputSourceUrl:(id *)arg2 outputSourceBackupUrl:(id *)arg3;
- (unsigned long long)finderShareItem:(id)arg1 dispalySourceContent:(id *)arg2 outputSourceUrl:(id *)arg3;
- (BOOL)shouldShowSourceForAppID:(id)arg1;
- (BOOL)isFold;
- (BOOL)isValidWsFeed;
- (BOOL)containWSGroupItem;
- (BOOL)isWsFeedType;
- (id)debugTag;
- (id)debugDescription;
- (id)shortDebugString;
- (BOOL)isFeedOfMine;
- (void)mergeWithDeletedComment:(id)arg1 isDeletedByFeedOwner:(BOOL)arg2;
- (void)mergeCommentListWithLocalFeed:(id)arg1;
- (void)clearExpiredDeltedByFeedOwnerComment;
- (BOOL)commentMayBeDifferentWithOther:(id)arg1;
- (void)prettyLogCommentListWithlogPrefix:(id)arg1;
- (id)extBean;
- (void)setExtBean:(id)arg1;
- (void)clearExtBean;
- (id)sightCompositeTaskOfMediaItemAtIndex:(long long)arg1;
- (BOOL)saveSightData:(id)arg1 forMediaItemAtIndex:(long long)arg2;
- (BOOL)hasValidStreamVideo;
- (id)blackUsers;
- (void)setBlackUsers:(id)arg1;
- (unsigned int)contentAttributeBitSetFlag;
- (void)setContentAttributeBitSetFlag:(unsigned int)arg1;
- (void)setContentDescPattern:(id)arg1;
- (BOOL)noChange;
- (void)setNoChange:(BOOL)arg1;
- (void)setCpKeyForContent:(id)arg1;
- (void)setCpKeyForLikeUsers:(id)arg1;
- (void)setIsContentUnsafe:(BOOL)arg1;
- (void)setIsLikeUsersUnsafe:(BOOL)arg1;
- (id)snsWeAppInfo;
- (void)setSnsWeAppInfo:(id)arg1;
- (id)visibleUsers;
- (void)setVisibleUsers:(id)arg1;
- (int)cid;
- (void)setCid:(int)arg1;
- (id)tid;
- (void)setTid:(id)arg1;
- (int)type;
- (void)setType:(int)arg1;
- (int)flag;
- (void)setFlag:(int)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)nickname;
- (void)setNickname:(id)arg1;
- (id)sourceUrl;
- (void)setSourceUrl:(id)arg1;
- (id)sourceUrl2;
- (void)setSourceUrl2:(id)arg1;
- (id)extData;
- (void)setExtData:(id)arg1;
- (unsigned int)createtime;
- (void)setCreatetime:(unsigned int)arg1;
- (BOOL)isBidirectionalFan;
- (void)setIsBidirectionalFan:(BOOL)arg1;
- (id)contentObj;
- (void)setContentObj:(id)arg1;
- (id)appInfo;
- (void)setAppInfo:(id)arg1;
- (id)publicUserName;
- (void)setPublicUserName:(id)arg1;
- (id)sourceUserName;
- (void)setSourceUserName:(id)arg1;
- (id)sourceNickName;
- (void)setSourceNickName:(id)arg1;
- (id)contentDesc;
- (void)setContentDesc:(id)arg1;
- (int)contentDescShowType;
- (void)setContentDescShowType:(int)arg1;
- (int)contentDescScene;
- (void)setContentDescScene:(int)arg1;
- (id)actionInfo;
- (void)setActionInfo:(id)arg1;
- (id)musicInfo;
- (void)setMusicInfo:(id)arg1;
- (id)streamVideoInfo;
- (void)setStreamVideoInfo:(id)arg1;
- (id)redEnvelopesInfo;
- (void)setRedEnvelopesInfo:(id)arg1;
- (id)redEnvelopesRewardInfo;
- (void)setRedEnvelopesRewardInfo:(id)arg1;
- (id)weappInfo;
- (void)setWeappInfo:(id)arg1;
- (id)liteappInfo;
- (void)setLiteappInfo:(id)arg1;
- (id)gameShareCardInfo;
- (void)setGameShareCardInfo:(id)arg1;
- (BOOL)likeFlag;
- (void)setLikeFlag:(BOOL)arg1;
- (int)likeCount;
- (void)setLikeCount:(int)arg1;
- (id)likeUsers;
- (void)setLikeUsers:(id)arg1;
- (int)commentCount;
- (void)setCommentCount:(int)arg1;
- (id)commentUsers;
- (void)setCommentUsers:(id)arg1;
- (int)withCount;
- (void)setWithCount:(int)arg1;
- (id)withUsers;
- (void)setWithUsers:(id)arg1;
- (int)togetherCount;
- (void)setTogetherCount:(int)arg1;
- (id)togetherUsers;
- (void)setTogetherUsers:(id)arg1;
- (BOOL)isRichText;
- (void)setIsRichText:(BOOL)arg1;
- (int)uploadErrType;
- (void)setUploadErrType:(int)arg1;
- (BOOL)isSecurityVerified;
- (void)setIsSecurityVerified:(BOOL)arg1;
- (long long)uploadErrSnsTipsCode;
- (void)setUploadErrSnsTipsCode:(long long)arg1;
- (id)uploadErrMsg;
- (void)setUploadErrMsg:(id)arg1;
- (id)uploadErrBtnUrl;
- (void)setUploadErrBtnUrl:(id)arg1;
- (id)uploadErrBtnTitle;
- (void)setUploadErrBtnTitle:(id)arg1;
- (id)uploadErrTogetherUsernames;
- (void)setUploadErrTogetherUsernames:(id)arg1;
- (BOOL)shouldErrorIgnoreForSpam;
- (void)setShouldErrorIgnoreForSpam:(BOOL)arg1;
- (id)statisticsData;
- (void)setStatisticsData:(id)arg1;
- (id)locationInfo;
- (void)setLocationInfo:(id)arg1;
- (id)groupContactTags;
- (void)setGroupContactTags:(id)arg1;
- (id)blackContactTags;
- (void)setBlackContactTags:(id)arg1;
- (unsigned int)extFlag;
- (void)setExtFlag:(unsigned int)arg1;
- (id)objOperation;
- (void)setObjOperation:(id)arg1;
- (id)shareOriginUrl;
- (void)setShareOriginUrl:(id)arg1;
- (id)shareOpenUrl;
- (void)setShareOpenUrl:(id)arg1;
- (id)jsAppId;
- (void)setJsAppId:(id)arg1;
- (id)statParasDic;
- (void)setStatParasDic:(id)arg1;
- (id)templateInfo;
- (void)setTemplateInfo:(id)arg1;
- (id)advertiseInfo;
- (void)setAdvertiseInfo:(id)arg1;
- (id)atFriendAdvertiseInfo;
- (void)setAtFriendAdvertiseInfo:(id)arg1;
- (id)advertiseInfoNSCodingData;
- (void)setAdvertiseInfoNSCodingData:(id)arg1;
- (id)atFriendAdvertiseInfoNSCodingData;
- (void)setAtFriendAdvertiseInfoNSCodingData:(id)arg1;
- (void)setRealLikeCount:(int)arg1;
- (void)setRealCommentCount:(int)arg1;
- (int)selfLikeCount;
- (void)setSelfLikeCount:(int)arg1;
- (int)selfCommentCount;
- (void)setSelfCommentCount:(int)arg1;
- (id)recommendInfo;
- (void)setRecommendInfo:(id)arg1;
- (id)statExtStr;
- (void)setStatExtStr:(id)arg1;
- (id)canvasInfoXml;
- (void)setCanvasInfoXml:(id)arg1;
- (int)sightFolded;
- (void)setSightFolded:(int)arg1;
- (int)showFlag;
- (void)setShowFlag:(int)arg1;
- (id)videoFlowInfo;
- (void)setVideoFlowInfo:(id)arg1;
- (BOOL)isHiddenAdvertiseActionFloatTipView;
- (void)setIsHiddenAdvertiseActionFloatTipView:(BOOL)arg1;
- (BOOL)isNewDataSeparator;
- (void)setIsNewDataSeparator:(BOOL)arg1;
- (BOOL)isEarlierContentTipsItem;
- (void)setIsEarlierContentTipsItem:(BOOL)arg1;
- (BOOL)canEditAfterDeleted;
- (void)setCanEditAfterDeleted:(BOOL)arg1;
- (BOOL)reEditPlaceOnFirst;
- (void)setReEditPlaceOnFirst:(BOOL)arg1;
- (id)draftID;
- (void)setDraftID:(id)arg1;
- (int)sessionActionType;
- (void)setSessionActionType:(int)arg1;
- (id)sessionID;
- (void)setSessionID:(id)arg1;
- (BOOL)isWeiShang;
- (void)setIsWeiShang:(BOOL)arg1;
- (id)wsGroup;
- (void)setWsGroup:(id)arg1;
- (long long)wsSellerType;
- (void)setWsSellerType:(long long)arg1;
- (long long)wsFeedType;
- (void)setWsFeedType:(long long)arg1;
- (long long)wsVideoSourceType;
- (void)setWsVideoSourceType:(long long)arg1;
- (BOOL)isFromFav;
- (void)setIsFromFav:(BOOL)arg1;
- (unsigned int)favLocalId;
- (void)setFavLocalId:(unsigned int)arg1;
- (BOOL)isStarred;
- (void)setIsStarred:(BOOL)arg1;
- (unsigned int)starGuidingFlags;
- (void)setStarGuidingFlags:(unsigned int)arg1;
- (long long)placeholderType;
- (BOOL)isPrivate;
- (void)setIsPrivate:(BOOL)arg1;
- (id)sharedGroupIDs;
- (void)setSharedGroupIDs:(id)arg1;
- (id)discoveryContentDesc;
- (void)setDiscoveryContentDesc:(id)arg1;
- (unsigned int)finderSharingFlags;
- (void)setFinderSharingFlags:(unsigned int)arg1;
- (unsigned int)newlifeSharingFlags;
- (void)setNewlifeSharingFlags:(unsigned int)arg1;
- (void).cxx_destruct;
@end

