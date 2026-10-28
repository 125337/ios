@interface WCFinderComment : NSObject <WCTColumnCoding, PBCoding, WCTTableCoding>
{
    BOOL _likeFlag; // +0x8
    BOOL _isCommentFail; // +0x9
    BOOL _isPosting; // +0xa
    BOOL _continueFlag; // +0xb
    BOOL _isExpand; // +0xc
    BOOL _isRefCommentExpand; // +0xd
    BOOL _upContinue; // +0xe
    BOOL _showSubCommentList; // +0xf
    BOOL _unRead; // +0x10
    BOOL _shouldShowRecommendAction; // +0x11
    BOOL _hotRecommendComment; // +0x12
    unsigned int _deleteFlag; // +0x14
    unsigned int _expandCommentCount; // +0x18
    int _errorCode; // +0x1c
    unsigned int _blacklistFlag; // +0x20
    unsigned int _replyBlacklistFlag; // +0x24
    int _commentEntranceScene; // +0x28
    int _commentScene; // +0x2c
    unsigned int _contentType; // +0x30
    unsigned int _dislikeFlag; // +0x34
    unsigned int _dislikeCount; // +0x38
    NSString * _username; // +0x40
    NSString * _nickname; // +0x48
    NSString * _content; // +0x50
    NSString * _formatedContent; // +0x58
    unsigned long long _commentID; // +0x60
    unsigned long long _localCommentID; // +0x68
    unsigned long long _replyCommentID; // +0x70
    unsigned long long _createTime; // +0x78
    unsigned long long _likeCount; // +0x80
    NSString * _replyNickname; // +0x88
    NSString * _headURL; // +0x90
    NSArray * _levelTwoComment; // +0x98
    unsigned long long _startLevelTwoCommentCount; // +0xa0
    NSString * _clientID; // +0xa8
    NSString * _replyUsername; // +0xb0
    NSString * _replyContent; // +0xb8
    unsigned long long _retryCount; // +0xc0
    double _firstPostTime; // +0xc8
    unsigned long long _scene; // +0xd0
    NSString * _errorMsg; // +0xd8
    NSString * _displayidDiscarded; // +0xe0
    unsigned long long _displayid; // +0xe8
    NSData * _lastBuffer; // +0xf0
    NSString * _displayName; // +0xf8
    NSString * _replyDisplayName; // +0x100
    unsigned long long _rootCommentID; // +0x108
    unsigned long long _reportScene; // +0x110
    long long _extFlag; // +0x118
    NSString * _requestId; // +0x120
    unsigned long long _displayFlag; // +0x128
    NSNumber * _isFriendComment; // +0x130
    NSNumber * _isFriendRefComment; // +0x138
    NSString * _objectID; // +0x140
    NSString * _nonceID; // +0x148
    WCFinderComment * _rootComment; // +0x150
    FinderContactMsgInfo * _msgInfo; // +0x158
    WCFinderContact * _authorContact; // +0x160
    WCFinderContact * _replyContact; // +0x168
    WCFinderCommentMentionArray * _mentionArray; // +0x170
    WCFinderCommentFinderMentionArray * _mentionFinderArray; // +0x178
    WCFinderCommentPastedArray * _pastedStrArray; // +0x180
    NSDictionary * _clientUdfKV; // +0x188
    NSString * _reportJSON; // +0x190
    WCFinderIpRegionInfo * _ipRegionInfo; // +0x198
    NSString * _chatroomMemberNickname; // +0x1a0
    CommentContentInfo * _contentInfo; // +0x1a8
    NSMutableArray * _keywordInfoList; // +0x1b0
    WCFinderKeywordComponent * _keywords; // +0x1b8
    unsigned long long _mentionCount; // +0x1c0
    FinderCommentInfo * _commentInfo; // +0x1c8
    NSString * _feedOwnerUsername; // +0x1d0
    NSString * _hotRecommendCommentDisplayname; // +0x1d8
    unsigned long long _translateType; // +0x1e0
    NSString * _translateContent; // +0x1e8
    NSString * _translateSource; // +0x1f0
    NSString * _replacedContent; // +0x1f8
    NSString * _recommendTopCacheName; // +0x200
    NSString * _topRecommendDisplayName; // +0x208
}
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (unsigned long long)columnType;
+ (id)overtTextColorWithType:(unsigned long long)arg1 defaultColor:(id)arg2;
+ (void)PBArrayAdd_username;
+ (void)PBArrayAdd_nickname;
+ (void)PBArrayAdd_content;
+ (void)PBArrayAdd_commentID;
+ (void)PBArrayAdd_replyCommentID;
+ (void)PBArrayAdd_deleteFlag;
+ (void)PBArrayAdd_likeFlag;
+ (void)PBArrayAdd_likeCount;
+ (void)PBArrayAdd_expandCommentCount;
+ (void)PBArrayAdd_headURL;
+ (void)PBArrayAdd_levelTwoComment;
+ (void)PBArrayAdd_replyNickname;
+ (void)PBArrayAdd_isCommentFail;
+ (void)PBArrayAdd_isPosting;
+ (void)PBArrayAdd_clientID;
+ (void)PBArrayAdd_createTime;
+ (void)PBArrayAdd_replyUsername;
+ (void)PBArrayAdd_displayFlag;
+ (void)PBArrayAdd_blacklistFlag;
+ (void)PBArrayAdd_replyContent;
+ (void)PBArrayAdd_objectID;
+ (void)PBArrayAdd_retryCount;
+ (void)PBArrayAdd_firstPostTime;
+ (void)PBArrayAdd_scene;
+ (void)PBArrayAdd_errorCode;
+ (void)PBArrayAdd_errorMsg;
+ (void)PBArrayAdd_continueFlag;
+ (void)PBArrayAdd_upContinue;
+ (void)PBArrayAdd_rootCommentID;
+ (void)PBArrayAdd_extFlag;
+ (void)PBArrayAdd_unRead;
+ (void)PBArrayAdd_msgInfo;
+ (void)PBArrayAdd_commentEntranceScene;
+ (void)PBArrayAdd_authorContact;
+ (void)PBArrayAdd_replyContact;
+ (void)PBArrayAdd_mentionArray;
+ (void)PBArrayAdd_startLevelTwoCommentCount;
+ (void)PBArrayAdd_reportJSON;
+ (void)PBArrayAdd_ipRegionInfo;
+ (void)PBArrayAdd_contentType;
+ (void)PBArrayAdd_contentInfo;
+ (void)PBArrayAdd_keywordInfoList;
+ (void)PBArrayAdd_replacedContent;
+ (void)PBArrayAdd_chatroomMemberNickname;
+ (void)PBArrayAdd_commentInfo;
+ (void)PBArrayAdd_mentionFinderArray;
+ (void)PBArrayAdd_requestId;
+ (void)initialize;
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)username;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_username;
+ (const void *)nickname;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_nickname;
+ (const void *)content;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_content;
+ (const void *)commentID;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_commentID;
+ (const void *)localCommentID;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_localCommentID;
+ (const void *)replyCommentID;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_replyCommentID;
+ (const void *)deleteFlag;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_deleteFlag;
+ (const void *)createTime;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (id)swift_createTime;
+ (const void *)likeCount;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (id)swift_likeCount;
+ (const void *)expandCommentCount;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (id)swift_expandCommentCount;
+ (const void *)replyNickname;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (id)swift_replyNickname;
+ (const void *)headURL;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (id)swift_headURL;
+ (const void *)clientID;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (id)swift_clientID;
+ (const void *)isCommentFail;
+ (const void *)__wcdb_synthesize_13:(void *)arg1;
+ (id)swift_isCommentFail;
+ (const void *)isPosting;
+ (const void *)__wcdb_synthesize_14:(void *)arg1;
+ (id)swift_isPosting;
+ (const void *)replyUsername;
+ (const void *)__wcdb_synthesize_15:(void *)arg1;
+ (id)swift_replyUsername;
+ (const void *)replyContent;
+ (const void *)__wcdb_synthesize_16:(void *)arg1;
+ (id)swift_replyContent;
+ (const void *)displayFlag;
+ (const void *)__wcdb_synthesize_17:(void *)arg1;
+ (id)swift_displayFlag;
+ (const void *)objectID;
+ (const void *)__wcdb_synthesize_18:(void *)arg1;
+ (id)swift_objectID;
+ (const void *)scene;
+ (const void *)__wcdb_synthesize_19:(void *)arg1;
+ (id)swift_scene;
+ (const void *)errorCode;
+ (const void *)__wcdb_synthesize_20:(void *)arg1;
+ (id)swift_errorCode;
+ (const void *)nonceID;
+ (const void *)__wcdb_synthesize_21:(void *)arg1;
+ (id)swift_nonceID;
+ (const void *)errorMsg;
+ (const void *)__wcdb_synthesize_22:(void *)arg1;
+ (id)swift_errorMsg;
+ (const void *)rootCommentID;
+ (const void *)__wcdb_synthesize_23:(void *)arg1;
+ (id)swift_rootCommentID;
+ (const void *)rootComment;
+ (const void *)__wcdb_synthesize_24:(void *)arg1;
+ (id)swift_rootComment;
+ (const void *)reportScene;
+ (const void *)__wcdb_synthesize_25:(void *)arg1;
+ (id)swift_reportScene;
+ (const void *)extFlag;
+ (const void *)__wcdb_synthesize_26:(void *)arg1;
+ (id)swift_extFlag;
+ (const void *)unRead;
+ (const void *)__wcdb_synthesize_27:(void *)arg1;
+ (id)swift_unRead;
+ (const void *)commentEntranceScene;
+ (const void *)__wcdb_synthesize_28:(void *)arg1;
+ (id)swift_commentEntranceScene;
+ (const void *)commentScene;
+ (const void *)__wcdb_synthesize_29:(void *)arg1;
+ (id)swift_commentScene;
+ (const void *)authorContact;
+ (const void *)__wcdb_synthesize_30:(void *)arg1;
+ (id)swift_authorContact;
+ (const void *)replyContact;
+ (const void *)__wcdb_synthesize_31:(void *)arg1;
+ (id)swift_replyContact;
+ (const void *)mentionArray;
+ (const void *)__wcdb_synthesize_32:(void *)arg1;
+ (id)swift_mentionArray;
+ (const void *)pastedStrArray;
+ (const void *)__wcdb_synthesize_33:(void *)arg1;
+ (id)swift_pastedStrArray;
+ (const void *)startLevelTwoCommentCount;
+ (const void *)__wcdb_synthesize_34:(void *)arg1;
+ (id)swift_startLevelTwoCommentCount;
+ (const void *)clientUdfKV;
+ (const void *)__wcdb_synthesize_35:(void *)arg1;
+ (id)swift_clientUdfKV;
+ (const void *)ipRegionInfo;
+ (const void *)__wcdb_synthesize_36:(void *)arg1;
+ (id)swift_ipRegionInfo;
+ (const void *)contentType;
+ (const void *)__wcdb_synthesize_37:(void *)arg1;
+ (id)swift_contentType;
+ (const void *)contentInfo;
+ (const void *)__wcdb_synthesize_38:(void *)arg1;
+ (id)swift_contentInfo;
+ (const void *)keywordInfoList;
+ (const void *)__wcdb_synthesize_39:(void *)arg1;
+ (id)swift_keywordInfoList;
+ (const void *)replacedContent;
+ (const void *)__wcdb_synthesize_40:(void *)arg1;
+ (id)swift_replacedContent;
+ (const void *)chatroomMemberNickname;
+ (const void *)__wcdb_synthesize_41:(void *)arg1;
+ (id)swift_chatroomMemberNickname;
+ (const void *)commentInfo;
+ (const void *)__wcdb_synthesize_42:(void *)arg1;
+ (id)swift_commentInfo;
+ (const void *)requestId;
+ (const void *)__wcdb_synthesize_43:(void *)arg1;
+ (id)swift_requestId;
+ (void)__wcdb_table_constraint_44:(void *)arg1;
+ (void)__wcdb_table_constraint_45:(void *)arg1;
+ (void)__wcdb_index_46:(void *)arg1;
+ (void)__wcdb_index_47:(void *)arg1;
+ (void)__wcdb_index_48:(void *)arg1;
+ (id)finderCommentWithCommentInfo:(id)arg1;
+ (id)finderCommentWithRecommendCommentInfo:(id)arg1;
- (id)archivedWCTValue;
- (BOOL)isJumpInfoComment;
- (id)getPostBtnConfig;
- (id)_configWithJumpInfo:(id)arg1 defaultSVGName:(id)arg2 defaultTitle:(id)arg3;
- (unsigned long long)genJumpInfoCommentType;
- (id)getRefFeedJumpInfoFeedId;
- (BOOL)_isTemplateVideoComment;
- (BOOL)_isTopicVideoComment;
- (BOOL)_isMusicVideoComent;
- (BOOL)_isRefTypeSuit:(int)arg1;
- (BOOL)_isJumpInfoStyleSuit;
- (id)imgStyle;
- (id)videoJumpInfo;
- (id)videoTemplateInfo;
- (id)refFeedPatMusicId;
- (id)videoTopicPostAttachContent;
- (id)videoTopicContent;
- (id)videoTopicName;
- (id)curJumpInfo;
- (id)templateCommentPreviewUrl;
- (double)templateCommentPreviewAspectRatio;
- (id)templateCommentUserName;
- (id)templateCommentDesc;
- (id)videoJumpInfoFeedId;
- (unsigned long long)prefixType;
- (unsigned long long)overtType;
- (id)overtText;
- (id)overtIconName;
- (id)overtTextColorWithDefaultColor:(id)arg1;
- (BOOL)hasBigImage;
- (id)getImageInfo;
- (CGSize)commentImgSize;
- (CGSize)commentCellDisplaySize;
- (BOOL)hasLocalImage;
- (id)getLocalImage;
- (void)setLocalImage:(id)arg1;
- (BOOL)hasEmoticon;
- (id)getEmoticonInfo;
- (id)getEmoticonWrap;
- (CGSize)getEmoticonSize;
- (id)getEmoticonMd5;
- (id)getAddEmoticonWrap;
- (id)getEmoticonDownloadWrap;
- (id)genReportDict;
- (id)getPBPropertyTable;
- (BOOL)isLike;
- (id)genFinderCommentInfo;
- (void)setThankFlag:(unsigned int)arg1;
- (unsigned int)thankFlag;
- (id)keywords;
- (id)advertisementInfo;
- (id)promotionInfo;
- (id)commentJumpInfo;
- (id)accountJumpInfo;
- (id)hotRecommendCommentDisplayname;
- (id)commentAdImageUrl;
- (unsigned int)commentType;
- (BOOL)haveMoreSubComment;
- (void)forceSetTop:(BOOL)arg1;
- (void)reverseSetTop;
- (BOOL)isAuthorSetTop;
- (BOOL)isAuthorPublish;
- (BOOL)isFinderPublish;
- (BOOL)isBrandPublish;
- (BOOL)isFinderContactPost;
- (BOOL)isAuthorLiked;
- (BOOL)followAuthorMembership;
- (BOOL)isReplyAuthor;
- (unsigned long long)comboLikeCount;
- (id)description;
- (id)displayName;
- (id)replyDisplayName;
- (id)commentIdentify;
- (BOOL)canRetryPost;
- (BOOL)canRePost;
- (BOOL)shouldStopRepostError;
- (BOOL)isInBlackList;
- (BOOL)isFriendCommentByService;
- (BOOL)isFriendSpreadComment;
- (BOOL)isBarrageHotComment;
- (BOOL)isSubComment;
- (BOOL)isRootComment;
- (id)formatedContent;
- (id)commentInfo;
- (BOOL)isValidRefProductComment;
- (BOOL)isSelection;
- (id)interactionLabelsWithPosition:(unsigned long long)arg1;
- (id)recommendCommentFriendList;
- (id)topRecommendDisplayName;
- (BOOL)canShowRecommendAction;
- (BOOL)isSelfWechatComment;
- (BOOL)isContentFromAI;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)nickname;
- (void)setNickname:(id)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (void)setFormatedContent:(id)arg1;
- (unsigned long long)commentID;
- (void)setCommentID:(unsigned long long)arg1;
- (unsigned long long)localCommentID;
- (void)setLocalCommentID:(unsigned long long)arg1;
- (unsigned long long)replyCommentID;
- (void)setReplyCommentID:(unsigned long long)arg1;
- (unsigned int)deleteFlag;
- (void)setDeleteFlag:(unsigned int)arg1;
- (unsigned long long)createTime;
- (void)setCreateTime:(unsigned long long)arg1;
- (BOOL)likeFlag;
- (void)setLikeFlag:(BOOL)arg1;
- (unsigned long long)likeCount;
- (void)setLikeCount:(unsigned long long)arg1;
- (unsigned int)expandCommentCount;
- (void)setExpandCommentCount:(unsigned int)arg1;
- (id)replyNickname;
- (void)setReplyNickname:(id)arg1;
- (id)headURL;
- (void)setHeadURL:(id)arg1;
- (id)levelTwoComment;
- (void)setLevelTwoComment:(id)arg1;
- (unsigned long long)startLevelTwoCommentCount;
- (void)setStartLevelTwoCommentCount:(unsigned long long)arg1;
- (id)clientID;
- (void)setClientID:(id)arg1;
- (BOOL)isCommentFail;
- (void)setIsCommentFail:(BOOL)arg1;
- (BOOL)isPosting;
- (void)setIsPosting:(BOOL)arg1;
- (id)replyUsername;
- (void)setReplyUsername:(id)arg1;
- (id)replyContent;
- (void)setReplyContent:(id)arg1;
- (unsigned long long)retryCount;
- (void)setRetryCount:(unsigned long long)arg1;
- (double)firstPostTime;
- (void)setFirstPostTime:(double)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (int)errorCode;
- (void)setErrorCode:(int)arg1;
- (id)errorMsg;
- (void)setErrorMsg:(id)arg1;
- (id)displayidDiscarded;
- (void)setDisplayidDiscarded:(id)arg1;
- (unsigned long long)displayid;
- (void)setDisplayid:(unsigned long long)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (BOOL)continueFlag;
- (void)setContinueFlag:(BOOL)arg1;
- (BOOL)isExpand;
- (void)setIsExpand:(BOOL)arg1;
- (BOOL)isRefCommentExpand;
- (void)setIsRefCommentExpand:(BOOL)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setReplyDisplayName:(id)arg1;
- (unsigned long long)rootCommentID;
- (void)setRootCommentID:(unsigned long long)arg1;
- (unsigned long long)reportScene;
- (void)setReportScene:(unsigned long long)arg1;
- (long long)extFlag;
- (void)setExtFlag:(long long)arg1;
- (id)requestId;
- (void)setRequestId:(id)arg1;
- (unsigned long long)displayFlag;
- (void)setDisplayFlag:(unsigned long long)arg1;
- (id)isFriendComment;
- (void)setIsFriendComment:(id)arg1;
- (id)isFriendRefComment;
- (void)setIsFriendRefComment:(id)arg1;
- (unsigned int)blacklistFlag;
- (void)setBlacklistFlag:(unsigned int)arg1;
- (unsigned int)replyBlacklistFlag;
- (void)setReplyBlacklistFlag:(unsigned int)arg1;
- (id)objectID;
- (void)setObjectID:(id)arg1;
- (id)nonceID;
- (void)setNonceID:(id)arg1;
- (BOOL)upContinue;
- (void)setUpContinue:(BOOL)arg1;
- (BOOL)showSubCommentList;
- (void)setShowSubCommentList:(BOOL)arg1;
- (id)rootComment;
- (void)setRootComment:(id)arg1;
- (BOOL)unRead;
- (void)setUnRead:(BOOL)arg1;
- (id)msgInfo;
- (void)setMsgInfo:(id)arg1;
- (id)authorContact;
- (void)setAuthorContact:(id)arg1;
- (id)replyContact;
- (void)setReplyContact:(id)arg1;
- (int)commentEntranceScene;
- (void)setCommentEntranceScene:(int)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (id)mentionArray;
- (void)setMentionArray:(id)arg1;
- (id)mentionFinderArray;
- (void)setMentionFinderArray:(id)arg1;
- (id)pastedStrArray;
- (void)setPastedStrArray:(id)arg1;
- (id)clientUdfKV;
- (void)setClientUdfKV:(id)arg1;
- (id)reportJSON;
- (void)setReportJSON:(id)arg1;
- (id)ipRegionInfo;
- (void)setIpRegionInfo:(id)arg1;
- (id)chatroomMemberNickname;
- (void)setChatroomMemberNickname:(id)arg1;
- (unsigned int)contentType;
- (void)setContentType:(unsigned int)arg1;
- (id)contentInfo;
- (void)setContentInfo:(id)arg1;
- (unsigned int)dislikeFlag;
- (void)setDislikeFlag:(unsigned int)arg1;
- (unsigned int)dislikeCount;
- (void)setDislikeCount:(unsigned int)arg1;
- (id)keywordInfoList;
- (void)setKeywordInfoList:(id)arg1;
- (void)setKeywords:(id)arg1;
- (unsigned long long)mentionCount;
- (void)setMentionCount:(unsigned long long)arg1;
- (void)setCommentInfo:(id)arg1;
- (id)feedOwnerUsername;
- (void)setFeedOwnerUsername:(id)arg1;
- (BOOL)shouldShowRecommendAction;
- (void)setShouldShowRecommendAction:(BOOL)arg1;
- (BOOL)hotRecommendComment;
- (void)setHotRecommendComment:(BOOL)arg1;
- (void)setHotRecommendCommentDisplayname:(id)arg1;
- (unsigned long long)translateType;
- (void)setTranslateType:(unsigned long long)arg1;
- (id)translateContent;
- (void)setTranslateContent:(id)arg1;
- (id)translateSource;
- (void)setTranslateSource:(id)arg1;
- (id)replacedContent;
- (void)setReplacedContent:(id)arg1;
- (id)recommendTopCacheName;
- (void)setRecommendTopCacheName:(id)arg1;
- (void)setTopRecommendDisplayName:(id)arg1;
- (void).cxx_destruct;
@end
