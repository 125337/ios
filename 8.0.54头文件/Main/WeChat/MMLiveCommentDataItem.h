@interface MMLiveCommentDataItem : NSObject <NSCopying>
{
    BOOL _overTime; // +0x8
    BOOL _isSelfCommit; // +0x9
    BOOL _isJoinLiveOfficialTip; // +0xa
    BOOL _isSelfAssistantComment; // +0xb
    BOOL _isLikeMsg; // +0xc
    BOOL _isSelfLikeComment; // +0xd
    BOOL _like; // +0xe
    BOOL _isFloatingMsg; // +0xf
    BOOL _isFloatingBarrageDisplay; // +0x10
    BOOL _isPlatformNotificationMsg; // +0x11
    BOOL _isInteractiveNotifyComment; // +0x12
    BOOL _isStickMsg; // +0x13
    BOOL _hasTopDisplayInTable; // +0x14
    unsigned int _msgType; // +0x18
    unsigned int _msgSubType; // +0x1c
    unsigned int _atime; // +0x20
    unsigned int _likeCount; // +0x24
    unsigned int _comboProductCount; // +0x28
    unsigned int _rankingPosition; // +0x2c
    int _showLikeNum; // +0x30
    int _commentLikeCount; // +0x34
    unsigned int _floatMsgType; // +0x38
    unsigned int _stickMsgType; // +0x3c
    unsigned int _uiMsgWrapLocalID; // +0x40
    unsigned int _uiMsgWrapCreateTime; // +0x44
    unsigned int _status; // +0x48
    unsigned int _topCommentOriginType; // +0x4c
    NSString * _taskKey; // +0x50
    double _localSeq; // +0x58
    NSString * _identityId; // +0x60
    NSString * _headimgurl; // +0x68
    NSString * _nickName; // +0x70
    FinderLiveBoxId * _boxId; // +0x78
    NSString * _initialContent; // +0x80
    NSString * _content; // +0x88
    NSString * _poiAddrStr; // +0x90
    NSString * _poiAddrSubStr; // +0x98
    NSString * _name; // +0xa0
    NSString * _fromName; // +0xa8
    NSString * _roomId; // +0xb0
    unsigned long long _seq; // +0xb8
    NSString * _clientMsgId; // +0xc0
    NSString * _localClientMsgId; // +0xc8
    FinderLiveContact * _finderLiveContact; // +0xd0
    FinderLiveContact * _toUserContact; // +0xd8
    MMFinderLiveRewardGiftItem * _comboProduct; // +0xe0
    NSDictionary * _businessInfo; // +0xe8
    NSData * _appMsgpayload; // +0xf0
    MMLiveCommentDataActionObj * _actionObj; // +0xf8
    NSString * _bizUsername; // +0x100
    NSString * _globalRankChangeStr; // +0x108
    id _extraInfo; // +0x110
    FinderLocation * _finderLocation; // +0x118
    GameLiveJumpInfo * _gameLiveJumpInfo; // +0x120
    NSString * _lastClickedContentLink; // +0x128
    NSString * _floatMsgReferProductId; // +0x130
    NSString * _bgColorStr; // +0x138
    FinderWindowProductInfo * _productInfo; // +0x140
    NSString * _anchorNoticeTitle; // +0x148
    FinderLiveAudienceSubmitProductOrderInfo * _audienceSubmitProductOrderInfo; // +0x150
    FinderLiveAppMsgProductHotSaleNotificationInfo * _hotSaleNotificationInfo; // +0x158
    NSData * _productRecommendLastBuffer; // +0x160
    NSLock * _lock; // +0x168
    unsigned long long _notifyMsgPriority; // +0x170
}
+ (id)uniqueCommentClientMsgId;
+ (BOOL)isLocalComment:(id)arg1 equalRemoteComment:(id)arg2;
+ (id)createLocalAddCommentAssistantNotice:(id)arg1;
+ (id)createLocalRemoveCommentAssistantNotice:(id)arg1;
+ (id)createLocalCommentAssistantNotice:(id)arg1 addMsg:(BOOL)arg2;
+ (id)createComboLiveRewardCommentWithReward:(id)arg1 rewardRecipientContact:(id)arg2 taskId:(id)arg3 sendingComboId:(id)arg4 comboGiftCount:(unsigned long long)arg5 extInfo:(id)arg6;
+ (id)createSelfCommitCommentWithContent:(id)arg1 taskId:(id)arg2 toUser:(id)arg3 postType:(unsigned long long)arg4 boxId:(id)arg5 extra:(id)arg6;
+ (id)createSelfCommitCommentWithContent:(id)arg1 taskId:(id)arg2 toUser:(id)arg3 postType:(unsigned long long)arg4 boxId:(id)arg5 poiAddrSubStr:(id)arg6 extra:(id)arg7;
+ (id)createSelfCommitPersionalMsgWithContent:(id)arg1 taskId:(id)arg2 toUser:(id)arg3 postType:(unsigned long long)arg4 boxId:(id)arg5 poiAddrSubStr:(id)arg6 extra:(id)arg7;
+ (id)createUserCommentWithBarrageComment:(id)arg1 taskId:(id)arg2;
+ (id)createSystemBanNotifyForTaskId:(id)arg1;
+ (id)createSystemAllowNotifyForTaskId:(id)arg1;
+ (id)createFinderLiveRewardEnabled:(BOOL)arg1 forTaskId:(id)arg2;
+ (id)createFinderLiveLikeEnabled:(BOOL)arg1 forTaskId:(id)arg2;
+ (id)createFinderLiveHiddenName:(BOOL)arg1 forTaskId:(id)arg2;
+ (id)createFinderLiveDisableSkinSegforTaskId:(id)arg1;
+ (id)createFinderLiveEnableSkinSegforTaskId:(id)arg1;
+ (id)createNewAnchorTaskNotifyForTaskId:(id)arg1 onTop:(BOOL)arg2 updateInfo:(id)arg3;
+ (id)createFinderLiveJoinGameEnabled:(BOOL)arg1 forTaskId:(id)arg2 isWAGame:(BOOL)arg3 specialGiftEnable:(BOOL)arg4;
+ (id)createFinderLivePOIDescriptionWithLocation:(id)arg1 forTaskId:(id)arg2;
+ (id)createFinderLiveAnchorNotice:(id)arg1;
+ (id)createFinderLiveAnchorNotice:(id)arg1 noticeExtend:(id)arg2;
+ (id)createFinderLiveAnchorTopLiveDesc:(id)arg1;
+ (id)createFinderLiveWithFinderLiveAppMsg:(id)arg1 forTaskId:(id)arg2;
+ (id)createFinderSubscribeWithBizUsername:(id)arg1 bizNickname:(id)arg2 forTaskId:(id)arg3;
+ (id)createFinderSelfJoinWithExtInfo:(id)arg1 forTaskId:(id)arg2;
+ (id)createFinderReserveOrDownloadWithGameInfo:(id)arg1 forTaskId:(id)arg2;
+ (id)createFinderGameWithGameJumpInfo:(id)arg1;
+ (id)createSystemAntispamBanNotifyForTaskId:(id)arg1;
+ (id)createSystemConnectMicNotifyWithConnectedIdentityId:(id)arg1 defaultDisplayName:(id)arg2 taskId:(id)arg3;
+ (id)createSystemDisConnectMicNotifyWithConnectedIdentityId:(id)arg1 defaultDisplayName:(id)arg2 taskId:(id)arg3;
+ (id)createFinderCanApplyConnectMicChangedNotify:(BOOL)arg1;
+ (id)createFinderConnectMsgWithContent:(id)arg1;
+ (id)createFinderConnectMicConditionSettingChangedNotify:(unsigned long long)arg1;
+ (id)createFinderFreeTalkFlagChangedNotify:(BOOL)arg1;
+ (id)createFinderLiveMutedByAnchorStatusChangedNotify:(BOOL)arg1;
+ (id)createFinderIsPureAudioModeChangedNotify:(BOOL)arg1;
+ (id)createFinderLivePauseStatusItem:(BOOL)arg1 forTaskId:(id)arg2;
+ (id)createFinderAnchorNoticeCommentForTaskId:(id)arg1;
+ (id)createFinderSelfGotoShopBusinessPageNotifyCommentForTaskId:(id)arg1;
+ (id)createFinderRecommendReasonCommentForTaskId:(id)arg1 recommendReason:(id)arg2;
+ (id)createFinderJoinLiveCommentForTaskId:(id)arg1 joinLiveTip:(id)arg2;
+ (id)createFinderLiveBoxChatRoomCommentTipMsgForTaskId:(id)arg1 boxId:(id)arg2;
+ (id)createFinderLiveInLiveFriendCountTipMsg:(unsigned int)arg1 forTaskId:(id)arg2;
+ (id)createFinderTickleCommentForTaskId:(id)arg1 fromUserName:(id)arg2 toDataItem:(id)arg3;
+ (id)createFinderLiveProductQuestionPersionalUnreadOfficialComment;
+ (id)createFinderLiveProductQuestionRecvOfficialComment;
+ (unsigned int)convertGroupLiveMsgType:(unsigned int)arg1;
+ (unsigned int)convertFinderLiveMsgType:(unsigned int)arg1;
+ (unsigned int)convertFinderLiveAppMsgType:(unsigned int)arg1;
+ (unsigned int)convertBackFinderLiveMsgType:(unsigned int)arg1;
+ (id)convertSystemMessageFromXML:(id)arg1 roomId:(id)arg2 isLikeMsg:(BOOL *)arg3;
+ (id)convertSystemMessageFromTemplateContentNode:(XmlReaderNode_t *)arg1 roomId:(id)arg2;
+ (id)getResultWithRegularInString:(id)arg1 WithPatterns:(id)arg2;
+ (id)convertContent:(id)arg1 msgType:(unsigned int)arg2 roomId:(id)arg3 isLikeMsg:(BOOL *)arg4;
+ (id)convertContentToDisplayContent:(id)arg1 msgType:(unsigned int)arg2;
+ (id)convertNameToDisplayName:(id)arg1 msgType:(unsigned int)arg2;
+ (BOOL)isFinderLiveAppMsgSupported:(id)arg1;
+ (id)createWithFinderLiveAppMsg:(id)arg1 forTaskId:(id)arg2 boxId:(id)arg3;
+ (id)commentDataItemWithFinderLiveAppMsgForGiftGoalAnchorNotice:(id)arg1 forTaskId:(id)arg2;
+ (id)createHasBoughtProductInAnchorLiveComment;
+ (id)getProductDesc:(id)arg1;
+ (id)anchorTopDescTextHref;
+ (BOOL)isCommentMsgTypeCanLike:(unsigned int)arg1;
+ (id)convertNameToPrivateName:(id)arg1;
+ (id)subContentToLength:(id)arg1 maxLength:(unsigned long long)arg2;
+ (BOOL)isFinderLiveContactSelf:(id)arg1;
+ (id)poiMsgActionLinkUrl;
+ (id)poiIconImgPath;
+ (id)questionProductMsgDescLinkUrl;
+ (id)questionProductMsgRecvNotifyLinkUrl;
+ (unsigned long long)getCurrentRoleType;
+ (BOOL)isSupportAsyncCreateWithFinderLivePBMessage:(id)arg1;
+ (unsigned int)transferCommentStatusToMsgStatus:(unsigned int)arg1;
+ (unsigned int)transferMsgStatusToCommentStatus:(unsigned int)arg1;
+ (BOOL)isLocalSeq:(double)arg1 equalLocalSeq:(double)arg2;
+ (BOOL)isLocalSeq:(double)arg1 largerOrEqualLocalSeq:(double)arg2;
- (BOOL)isCommentTableStyleFromUser;
- (void)supplyMsgSubTypeWithPostType:(unsigned long long)arg1;
- (unsigned int)convertToFinderLiveAppMsgType;
- (id)init;
- (void)initDefaultDatas;
- (id)initWithLiveMessage:(id)arg1 roomId:(id)arg2;
- (id)initWithFinderLiveMessage:(id)arg1;
- (id)initWithFinderLiveMsgForProductQuestionExplainOfficialComment:(id)arg1;
- (id)createFinderLiveAppMsg;
- (id)initWithFinderLiveAppMsgForFriendChat:(id)arg1 forTaskId:(id)arg2 boxId:(id)arg3;
- (id)getContentForJoinLiveMsg;
- (void)supplyMsgSubTypeWithFinderLiveMessage:(id)arg1;
- (id)initWithCommonSystemNotifyAppMsg:(id)arg1 forTaskId:(id)arg2;
- (id)initWithFinderLiveAppMsgForComboLiveReward:(id)arg1 forTaskId:(id)arg2;
- (id)initWithFinderLiveAppMsgForGiftWallTopOne:(id)arg1 forTaskId:(id)arg2;
- (id)initWithFinderLiveAppMsgForLightGiftWall:(id)arg1 forTaskId:(id)arg2;
- (id)initWithFinderLiveAppMsgForJoinFansGroupNotify:(id)arg1 forTaskId:(id)arg2;
- (id)initWithFinderLiveAppMsgForAchievedWishList:(id)arg1 forTaskId:(id)arg2;
- (id)initWithFinderLiveAppMsgForPlatformReminderNotification:(id)arg1 forTaskId:(id)arg2;
- (id)initWithFinderLiveAppMsgForProductHotSale:(id)arg1 forTaskId:(id)arg2;
- (id)initWithSyncRecommendProductInfo:(id)arg1 forTaskId:(id)arg2;
- (id)initWithFinderLiveAppMsgForProductAudienceOrder:(id)arg1 forTaskId:(id)arg2;
- (BOOL)isAnchorComment;
- (BOOL)isAnchorOrAssistantComment;
- (id)anchorOrAssistantBadgeName;
- (BOOL)shouldHideRankForInvisiableJoinLive;
- (BOOL)hasFansGroupEntranceAuthority;
- (BOOL)hasRewardRank;
- (unsigned int)getRewardRank;
- (BOOL)hasGlobalRank;
- (unsigned int)getGlobalRank;
- (BOOL)hasGloryRank;
- (unsigned int)getGloryRank;
- (BOOL)hasGameRank;
- (BOOL)hasGameEsportRank;
- (BOOL)hasFansGroupRank;
- (unsigned int)getFansGroupRank;
- (BOOL)hasInvisiableBadge;
- (BOOL)hasBuyBadge;
- (BOOL)hasBuyCountBadge;
- (BOOL)hasOrdinaryBuyerBadge;
- (BOOL)hasSeniorBuyerBadge;
- (BOOL)hasFollowerBadge;
- (BOOL)hasFrequentWatchBadge;
- (BOOL)hasRoleSign;
- (BOOL)hasMysterious;
- (BOOL)isSenderSuperfan;
- (id)getRewardBadgeInfo;
- (id)getGlobalRewardBadgeInfo;
- (id)getGloryBadgeInfo;
- (id)getGameRankBadgeInfo;
- (id)getGameEsportBadgeInfo;
- (id)getFansGroupBadgeInfo;
- (id)getSuperfanBadgeInfo;
- (id)getRoleBadgeInfo;
- (id)getInvisiableBadgeInfo;
- (id)getBuyBadgeInfo;
- (id)getBuyCountBadgeInfo;
- (id)getOrdinaryBuyerBadgeInfo;
- (id)getSeniorBuyerBadgeInfo;
- (id)getFollowerBadgeInfo;
- (id)getFrequentWatchBadgeInfo;
- (id)getMysteriousBadgeInfo;
- (unsigned int)getNotifyMsgPriorityLevel;
- (unsigned long long)getNotifyMsgPriority;
- (unsigned int)getNotifyMsgPrioritySubLevelWithLevel:(unsigned int)arg1;
- (unsigned int)liveMsgExtInfoType;
- (id)liveMsgExtInfoJoinLiveContent;
- (BOOL)isCommentAtMe;
- (BOOL)isCommentAtAll;
- (BOOL)isFromMyFriend;
- (BOOL)isCommentFromMySelf;
- (BOOL)isCommentToMySelf;
- (BOOL)isCommentNeedSpecialNotify;
- (id)initWithFinderLiveAppMsgForRewardRankingNotice:(id)arg1 forTaskId:(id)arg2;
- (id)initWithFinderLiveAppMsgFoPaymentGame:(id)arg1 forTaskId:(id)arg2;
- (void)setupCommentNofityWith:(id)arg1;
- (void)setupCommonCommentNofityWith:(id)arg1;
- (id)initWithFinderLiveAppMsgForCommentNotify:(id)arg1 forTaskId:(id)arg2;
- (id)initWithFinderLiveAppMsgForCommentTopAeraMsg:(id)arg1 forTaskId:(id)arg2;
- (BOOL)canCommentTopAeraMsgSupport:(id)arg1;
- (id)initWithFinderLiveAppMsgForGlobalLevelUpgrade:(id)arg1 forTaskId:(id)arg2;
- (id)initWithFinderLiveAppMsgForReplyComment:(id)arg1 forTaskId:(id)arg2 boxId:(id)arg3;
- (id)initWithFinderLiveAppMsgForProductQuestionComment:(id)arg1 forTaskId:(id)arg2 boxId:(id)arg3;
- (id)initWithFinderLiveAppMsgForPersonalProductQuestion:(id)arg1 forTaskId:(id)arg2 boxId:(id)arg3;
- (id)initWithFinderLiveAppMsgForRoomManagerRoleChanged:(id)arg1 forTaskId:(id)arg2;
- (id)initWithFinderLiveAppMsgForAtAllFromFriend:(id)arg1 forTaskId:(id)arg2 boxId:(id)arg3;
- (id)initWithFinderLiveAppMsgForLocationCommentFromFriend:(id)arg1 forTaskId:(id)arg2 boxId:(id)arg3;
- (id)initWithFinderLiveAppMsgForAtCommentInFriend:(id)arg1 forTaskId:(id)arg2 boxId:(id)arg3;
- (id)initWithFinderLiveAppMsgForAd:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)getCompletedHeadImgUrlStr:(id)arg1;
- (id)createName;
- (id)createFinderNickName;
- (id)createFinderNickName:(id)arg1;
- (id)getDisplayStrWithNameSpacialHandled:(BOOL)arg1 taskId:(id)arg2;
- (id)getDisplayStrWithNameSpacialHandled:(BOOL)arg1 taskId:(id)arg2 forceHideName:(BOOL)arg3;
- (id)getQuestionProductDesc;
- (BOOL)isDirectDisplayOutOfCommentTable;
- (id)getPrefixForPOIContent;
- (id)getDisplayStr;
- (id)getDisplayStrWithTaskId:(id)arg1;
- (void)setLocalSeq:(double)arg1;
- (void)setSeq:(unsigned long long)arg1;
- (void)setMsgType:(unsigned int)arg1;
- (void)setIsLikeMsg:(BOOL)arg1;
- (BOOL)isSelfCommit;
- (id)taskKey;
- (void)setTaskKey:(id)arg1;
- (id)genTaskKey;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isSeqUnValid;
- (id)uniqueMsgId;
- (unsigned int)getCommentSenderRoleTypeWithTask:(id)arg1;
- (BOOL)isCommentNeedAppendImmediately;
- (BOOL)isCommentFitMsgType:(id)arg1 msgSubType:(id)arg2;
- (id)transferToLocalAppMsg;
- (id)transferToUpLoadAppMsg;
- (id)transferToAppMsg:(BOOL)arg1;
- (BOOL)isCommentStatusBeSure;
- (BOOL)overTime;
- (void)setOverTime:(BOOL)arg1;
- (double)localSeq;
- (id)identityId;
- (void)setIdentityId:(id)arg1;
- (id)headimgurl;
- (void)setHeadimgurl:(id)arg1;
- (id)nickName;
- (void)setNickName:(id)arg1;
- (unsigned int)msgType;
- (unsigned int)msgSubType;
- (void)setMsgSubType:(unsigned int)arg1;
- (id)boxId;
- (void)setBoxId:(id)arg1;
- (id)initialContent;
- (void)setInitialContent:(id)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (id)poiAddrStr;
- (void)setPoiAddrStr:(id)arg1;
- (id)poiAddrSubStr;
- (void)setPoiAddrSubStr:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)fromName;
- (void)setFromName:(id)arg1;
- (unsigned int)atime;
- (void)setAtime:(unsigned int)arg1;
- (void)setIsSelfCommit:(BOOL)arg1;
- (BOOL)isJoinLiveOfficialTip;
- (void)setIsJoinLiveOfficialTip:(BOOL)arg1;
- (BOOL)isSelfAssistantComment;
- (void)setIsSelfAssistantComment:(BOOL)arg1;
- (BOOL)isLikeMsg;
- (id)roomId;
- (void)setRoomId:(id)arg1;
- (BOOL)isSelfLikeComment;
- (void)setIsSelfLikeComment:(BOOL)arg1;
- (unsigned long long)seq;
- (id)clientMsgId;
- (void)setClientMsgId:(id)arg1;
- (id)localClientMsgId;
- (void)setLocalClientMsgId:(id)arg1;
- (unsigned int)likeCount;
- (void)setLikeCount:(unsigned int)arg1;
- (id)finderLiveContact;
- (void)setFinderLiveContact:(id)arg1;
- (id)toUserContact;
- (void)setToUserContact:(id)arg1;
- (id)comboProduct;
- (void)setComboProduct:(id)arg1;
- (unsigned int)comboProductCount;
- (void)setComboProductCount:(unsigned int)arg1;
- (unsigned int)rankingPosition;
- (void)setRankingPosition:(unsigned int)arg1;
- (id)businessInfo;
- (void)setBusinessInfo:(id)arg1;
- (id)appMsgpayload;
- (void)setAppMsgpayload:(id)arg1;
- (id)actionObj;
- (void)setActionObj:(id)arg1;
- (id)bizUsername;
- (void)setBizUsername:(id)arg1;
- (id)globalRankChangeStr;
- (void)setGlobalRankChangeStr:(id)arg1;
- (id)extraInfo;
- (void)setExtraInfo:(id)arg1;
- (id)finderLocation;
- (void)setFinderLocation:(id)arg1;
- (id)gameLiveJumpInfo;
- (void)setGameLiveJumpInfo:(id)arg1;
- (int)showLikeNum;
- (void)setShowLikeNum:(int)arg1;
- (BOOL)like;
- (void)setLike:(BOOL)arg1;
- (int)commentLikeCount;
- (void)setCommentLikeCount:(int)arg1;
- (id)lastClickedContentLink;
- (void)setLastClickedContentLink:(id)arg1;
- (BOOL)isFloatingMsg;
- (void)setIsFloatingMsg:(BOOL)arg1;
- (unsigned int)floatMsgType;
- (void)setFloatMsgType:(unsigned int)arg1;
- (id)floatMsgReferProductId;
- (void)setFloatMsgReferProductId:(id)arg1;
- (BOOL)isFloatingBarrageDisplay;
- (void)setIsFloatingBarrageDisplay:(BOOL)arg1;
- (id)bgColorStr;
- (void)setBgColorStr:(id)arg1;
- (BOOL)isPlatformNotificationMsg;
- (void)setIsPlatformNotificationMsg:(BOOL)arg1;
- (BOOL)isInteractiveNotifyComment;
- (void)setIsInteractiveNotifyComment:(BOOL)arg1;
- (BOOL)isStickMsg;
- (void)setIsStickMsg:(BOOL)arg1;
- (unsigned int)stickMsgType;
- (void)setStickMsgType:(unsigned int)arg1;
- (id)productInfo;
- (void)setProductInfo:(id)arg1;
- (unsigned int)uiMsgWrapLocalID;
- (void)setUiMsgWrapLocalID:(unsigned int)arg1;
- (unsigned int)uiMsgWrapCreateTime;
- (void)setUiMsgWrapCreateTime:(unsigned int)arg1;
- (unsigned int)status;
- (void)setStatus:(unsigned int)arg1;
- (id)anchorNoticeTitle;
- (void)setAnchorNoticeTitle:(id)arg1;
- (unsigned int)topCommentOriginType;
- (void)setTopCommentOriginType:(unsigned int)arg1;
- (id)audienceSubmitProductOrderInfo;
- (void)setAudienceSubmitProductOrderInfo:(id)arg1;
- (id)hotSaleNotificationInfo;
- (void)setHotSaleNotificationInfo:(id)arg1;
- (id)productRecommendLastBuffer;
- (void)setProductRecommendLastBuffer:(id)arg1;
- (BOOL)hasTopDisplayInTable;
- (void)setHasTopDisplayInTable:(BOOL)arg1;
- (id)lock;
- (void)setLock:(id)arg1;
- (unsigned long long)notifyMsgPriority;
- (void)setNotifyMsgPriority:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

