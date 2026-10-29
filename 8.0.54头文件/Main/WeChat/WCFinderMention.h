@interface WCFinderMention : NSObject <WCTTableCoding>
{
    BOOL _hasRead; // +0x8
    BOOL _isDeleted; // +0x9
    BOOL _isAuthor; // +0xa
    BOOL _isFinder; // +0xb
    BOOL _notificationRead; // +0xc
    BOOL _thanked; // +0xd
    BOOL _tingSourceTypeLoaded; // +0xe
    unsigned int _createTime; // +0x10
    unsigned int _extFlag; // +0x14
    unsigned int _followExpireTime; // +0x18
    int _finderObjectType; // +0x1c
    unsigned int _followFlag; // +0x20
    unsigned long long _mentionID; // +0x28
    NSString * _mentionIDKey; // +0x30
    NSString * _headURL; // +0x38
    NSString * _nickname; // +0x40
    NSString * _username; // +0x48
    NSString * _content; // +0x50
    NSString * _thumbURL; // +0x58
    unsigned long long _type; // +0x60
    NSString * _objectID; // +0x68
    NSString * _refCommentID; // +0x70
    NSString * _refContent; // +0x78
    unsigned long long _scene; // +0x80
    FinderNotification * _notification; // +0x88
    unsigned long long _mediaType; // +0x90
    NSString * _title; // +0x98
    NSString * _replyNickname; // +0xa0
    NSString * _replyUsername; // +0xa8
    NSString * _nonceID; // +0xb0
    FinderMentionContact * _mentionContact; // +0xb8
    FinderMentionContact * _replyMentionContact; // +0xc0
    WCFinderContact * _authorContact; // +0xc8
    WCFinderContact * _contact; // +0xd0
    WCFinderContact * _replyContact; // +0xd8
    FinderMentionAggregated * _aggregatedMention; // +0xe0
    WCFinderMentionAggregatedContactList * _aggregatedContactList; // +0xe8
    unsigned long long _aggregatedCount; // +0xf0
    NSString * _clientMsgId; // +0xf8
    unsigned long long _followId; // +0x100
    unsigned long long _refVideoObjectId; // +0x108
    NSString * _refVideoObjectNonceId; // +0x110
    WCFinderCommentMentionInfo * _mentionInfo; // +0x118
    FinderMentionExtInfo * _extInfo; // +0x120
    FinderMention_LikeContactInfo * _likeInfo; // +0x128
    unsigned long long _svrMentionId; // +0x130
    unsigned long long _refFavID; // +0x138
    FinderMention_FinderMentionThankInfo * _thankInfo; // +0x140
    unsigned long long _businessType; // +0x148
    FinderMention * _mentionObject; // +0x150
    FinderContact * __finderAuthorContact; // +0x158
    unsigned long long _tingSourceType; // +0x160
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)mentionID;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_mentionID;
+ (const void *)headURL;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_headURL;
+ (const void *)nickname;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_nickname;
+ (const void *)content;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_content;
+ (const void *)thumbURL;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_thumbURL;
+ (const void *)type;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_type;
+ (const void *)createTime;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_createTime;
+ (const void *)hasRead;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (id)swift_hasRead;
+ (const void *)objectID;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (id)swift_objectID;
+ (const void *)refCommentID;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (id)swift_refCommentID;
+ (const void *)isDeleted;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (id)swift_isDeleted;
+ (const void *)isAuthor;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (id)swift_isAuthor;
+ (const void *)notificationRead;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (id)swift_notificationRead;
+ (const void *)isFinder;
+ (const void *)__wcdb_synthesize_13:(void *)arg1;
+ (id)swift_isFinder;
+ (const void *)extFlag;
+ (const void *)__wcdb_synthesize_14:(void *)arg1;
+ (id)swift_extFlag;
+ (const void *)refContent;
+ (const void *)__wcdb_synthesize_15:(void *)arg1;
+ (id)swift_refContent;
+ (const void *)scene;
+ (const void *)__wcdb_synthesize_16:(void *)arg1;
+ (id)swift_scene;
+ (const void *)notification;
+ (const void *)__wcdb_synthesize_17:(void *)arg1;
+ (id)swift_notification;
+ (const void *)mediaType;
+ (const void *)__wcdb_synthesize_18:(void *)arg1;
+ (id)swift_mediaType;
+ (const void *)title;
+ (const void *)__wcdb_synthesize_19:(void *)arg1;
+ (id)swift_title;
+ (const void *)replyNickname;
+ (const void *)__wcdb_synthesize_20:(void *)arg1;
+ (id)swift_replyNickname;
+ (const void *)replyUsername;
+ (const void *)__wcdb_synthesize_21:(void *)arg1;
+ (id)swift_replyUsername;
+ (const void *)nonceID;
+ (const void *)__wcdb_synthesize_22:(void *)arg1;
+ (id)swift_nonceID;
+ (const void *)username;
+ (const void *)__wcdb_synthesize_23:(void *)arg1;
+ (id)swift_username;
+ (const void *)mentionContact;
+ (const void *)__wcdb_synthesize_24:(void *)arg1;
+ (id)swift_mentionContact;
+ (const void *)replyMentionContact;
+ (const void *)__wcdb_synthesize_25:(void *)arg1;
+ (id)swift_replyMentionContact;
+ (const void *)aggregatedMention;
+ (const void *)__wcdb_synthesize_26:(void *)arg1;
+ (id)swift_aggregatedMention;
+ (const void *)mentionIDKey;
+ (const void *)__wcdb_synthesize_27:(void *)arg1;
+ (id)swift_mentionIDKey;
+ (const void *)aggregatedContactList;
+ (const void *)__wcdb_synthesize_28:(void *)arg1;
+ (id)swift_aggregatedContactList;
+ (const void *)aggregatedCount;
+ (const void *)__wcdb_synthesize_29:(void *)arg1;
+ (id)swift_aggregatedCount;
+ (const void *)followExpireTime;
+ (const void *)__wcdb_synthesize_30:(void *)arg1;
+ (id)swift_followExpireTime;
+ (const void *)clientMsgId;
+ (const void *)__wcdb_synthesize_31:(void *)arg1;
+ (id)swift_clientMsgId;
+ (const void *)followId;
+ (const void *)__wcdb_synthesize_32:(void *)arg1;
+ (id)swift_followId;
+ (const void *)finderObjectType;
+ (const void *)__wcdb_synthesize_33:(void *)arg1;
+ (id)swift_finderObjectType;
+ (const void *)refVideoObjectId;
+ (const void *)__wcdb_synthesize_34:(void *)arg1;
+ (id)swift_refVideoObjectId;
+ (const void *)refVideoObjectNonceId;
+ (const void *)__wcdb_synthesize_35:(void *)arg1;
+ (id)swift_refVideoObjectNonceId;
+ (const void *)_finderAuthorContact;
+ (const void *)__wcdb_synthesize_36:(void *)arg1;
+ (id)swift__finderAuthorContact;
+ (const void *)mentionInfo;
+ (const void *)__wcdb_synthesize_37:(void *)arg1;
+ (id)swift_mentionInfo;
+ (const void *)extInfo;
+ (const void *)__wcdb_synthesize_38:(void *)arg1;
+ (id)swift_extInfo;
+ (const void *)likeInfo;
+ (const void *)__wcdb_synthesize_39:(void *)arg1;
+ (id)swift_likeInfo;
+ (const void *)svrMentionId;
+ (const void *)__wcdb_synthesize_40:(void *)arg1;
+ (id)swift_svrMentionId;
+ (const void *)followFlag;
+ (const void *)__wcdb_synthesize_41:(void *)arg1;
+ (id)swift_followFlag;
+ (const void *)refFavID;
+ (const void *)__wcdb_synthesize_42:(void *)arg1;
+ (id)swift_refFavID;
+ (const void *)thanked;
+ (const void *)__wcdb_synthesize_43:(void *)arg1;
+ (id)swift_thanked;
+ (const void *)thankInfo;
+ (const void *)__wcdb_synthesize_44:(void *)arg1;
+ (id)swift_thankInfo;
+ (const void *)businessType;
+ (const void *)__wcdb_synthesize_45:(void *)arg1;
+ (id)swift_businessType;
+ (const void *)mentionObject;
+ (const void *)__wcdb_synthesize_46:(void *)arg1;
+ (id)swift_mentionObject;
+ (void)__wcdb_column_constraint_47:(void *)arg1;
+ (void)__wcdb_index_48:(void *)arg1;
+ (void)__wcdb_index_49:(void *)arg1;
+ (void)__wcdb_index_50:(void *)arg1;
+ (void)__wcdb_index_51:(void *)arg1;
+ (void)__wcdb_index_52:(void *)arg1;
+ (void)__wcdb_index_53:(void *)arg1;
+ (void)__wcdb_index_54:(void *)arg1;
+ (void)__wcdb_index_55:(void *)arg1;
+ (void)__wcdb_index_56:(void *)arg1;
+ (void)__wcdb_column_constraint_57:(void *)arg1;
+ (id)finderMentionFromMention:(id)arg1;
- (id)contact;
- (id)replyContact;
- (id)authorContact;
- (BOOL)forceUseContent;
- (id)description;
- (id)getUsernameList;
- (BOOL)isCommentMentionedMention;
- (BOOL)isAggregatedMention;
- (BOOL)shouldShowThanks;
- (unsigned long long)mentionContactFollowState;
- (BOOL)isFollowMembership;
- (BOOL)commentLiked;
- (void)setCommentLiked:(BOOL)arg1;
- (BOOL)commentInvalid;
- (void)setCommentInvalid;
- (unsigned long long)tingSourceType;
- (unsigned long long)feedType;
- (unsigned long long)msgTypeForReport;
- (void)updateMentionContent:(id)arg1;
- (void)updateRefContent:(id)arg1;
- (id)interactionLabelReportDict;
- (BOOL)enableSilent;
- (BOOL)silented;
- (void)setSilented:(BOOL)arg1;
- (unsigned long long)mentionID;
- (void)setMentionID:(unsigned long long)arg1;
- (id)mentionIDKey;
- (void)setMentionIDKey:(id)arg1;
- (id)headURL;
- (void)setHeadURL:(id)arg1;
- (id)nickname;
- (void)setNickname:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (id)thumbURL;
- (void)setThumbURL:(id)arg1;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (unsigned int)createTime;
- (void)setCreateTime:(unsigned int)arg1;
- (BOOL)hasRead;
- (void)setHasRead:(BOOL)arg1;
- (id)objectID;
- (void)setObjectID:(id)arg1;
- (id)refCommentID;
- (void)setRefCommentID:(id)arg1;
- (BOOL)isDeleted;
- (void)setIsDeleted:(BOOL)arg1;
- (BOOL)isAuthor;
- (void)setIsAuthor:(BOOL)arg1;
- (BOOL)isFinder;
- (void)setIsFinder:(BOOL)arg1;
- (unsigned int)extFlag;
- (void)setExtFlag:(unsigned int)arg1;
- (id)refContent;
- (void)setRefContent:(id)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (id)notification;
- (void)setNotification:(id)arg1;
- (BOOL)notificationRead;
- (void)setNotificationRead:(BOOL)arg1;
- (unsigned long long)mediaType;
- (void)setMediaType:(unsigned long long)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)replyNickname;
- (void)setReplyNickname:(id)arg1;
- (id)replyUsername;
- (void)setReplyUsername:(id)arg1;
- (id)nonceID;
- (void)setNonceID:(id)arg1;
- (id)mentionContact;
- (void)setMentionContact:(id)arg1;
- (id)replyMentionContact;
- (void)setReplyMentionContact:(id)arg1;
- (void)setAuthorContact:(id)arg1;
- (void)setContact:(id)arg1;
- (void)setReplyContact:(id)arg1;
- (id)aggregatedMention;
- (void)setAggregatedMention:(id)arg1;
- (id)aggregatedContactList;
- (void)setAggregatedContactList:(id)arg1;
- (unsigned long long)aggregatedCount;
- (void)setAggregatedCount:(unsigned long long)arg1;
- (unsigned int)followExpireTime;
- (void)setFollowExpireTime:(unsigned int)arg1;
- (id)clientMsgId;
- (void)setClientMsgId:(id)arg1;
- (unsigned long long)followId;
- (void)setFollowId:(unsigned long long)arg1;
- (int)finderObjectType;
- (void)setFinderObjectType:(int)arg1;
- (unsigned long long)refVideoObjectId;
- (void)setRefVideoObjectId:(unsigned long long)arg1;
- (id)refVideoObjectNonceId;
- (void)setRefVideoObjectNonceId:(id)arg1;
- (id)mentionInfo;
- (void)setMentionInfo:(id)arg1;
- (id)extInfo;
- (void)setExtInfo:(id)arg1;
- (id)likeInfo;
- (void)setLikeInfo:(id)arg1;
- (unsigned long long)svrMentionId;
- (void)setSvrMentionId:(unsigned long long)arg1;
- (unsigned int)followFlag;
- (void)setFollowFlag:(unsigned int)arg1;
- (unsigned long long)refFavID;
- (void)setRefFavID:(unsigned long long)arg1;
- (BOOL)thanked;
- (void)setThanked:(BOOL)arg1;
- (id)thankInfo;
- (void)setThankInfo:(id)arg1;
- (unsigned long long)businessType;
- (void)setBusinessType:(unsigned long long)arg1;
- (id)mentionObject;
- (void)setMentionObject:(id)arg1;
- (id)_finderAuthorContact;
- (void)set_finderAuthorContact:(id)arg1;
- (void)setTingSourceType:(unsigned long long)arg1;
- (BOOL)tingSourceTypeLoaded;
- (void)setTingSourceTypeLoaded:(BOOL)arg1;
- (void).cxx_destruct;
@end

