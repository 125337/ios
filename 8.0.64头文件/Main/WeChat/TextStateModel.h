@interface TextStateModel : MMObject <WCTTableCoding, PBCoding>
{
    BOOL _expireFlag; // +0x8
    BOOL _isLocal; // +0x9
    BOOL _initByAffDb; // +0xa
    BOOL _hasHb; // +0xb
    BOOL _hasParsed3rdPartyHandler; // +0xc
    BOOL _deleteFlag; // +0xd
    unsigned int _mediaType; // +0x10
    int _mediaWidth; // +0x14
    int _mediaHeight; // +0x18
    unsigned int _visibility; // +0x1c
    unsigned int _iconType; // +0x20
    unsigned int _createTime; // +0x24
    unsigned int _expireTime; // +0x28
    unsigned int _serverCreateTime; // +0x2c
    unsigned int _publishScene; // +0x30
    unsigned int _modifyTime; // +0x34
    unsigned int _sequence; // +0x38
    NSString * _textStateDescription; // +0x40
    StatusEmoji * _emojiInfo; // +0x48
    NSData * _rawData; // +0x50
    NSData * _privateInfoData; // +0x58
    NSData * _publicInfoData; // +0x60
    NSString * _textStateId; // +0x68
    NSString * _username; // +0x70
    NSString * _positionName; // +0x78
    NSString * _positionId; // +0x80
    NSString * _city; // +0x88
    NSString * _locale; // +0x90
    NSString * _mediaURL; // +0x98
    NSString * _mediaAESKey; // +0xa0
    NSString * _mediaThumbURL; // +0xa8
    NSString * _mediaThumbAESKey; // +0xb0
    NSString * _backgroundId; // +0xb8
    NSString * _topicId; // +0xc0
    NSArray * _topicList; // +0xc8
    NSString * _sourceId; // +0xd0
    NSString * _sourceActivityId; // +0xd8
    NSString * _sourceName; // +0xe0
    NSString * _sourceIconURL; // +0xe8
    NSArray * _jumpInfos; // +0xf0
    NSArray * _sourceJumpInfos; // +0xf8
    NSString * _iconId; // +0x100
    NSString * _verifyInfo; // +0x108
    NSArray * _serverBlackContactUsernames; // +0x110
    NSArray * _privacyContactBlackList; // +0x118
    long long _privacy; // +0x120
    NSArray * _privacyLabelList; // +0x128
    NSArray * _privacyContactNameList; // +0x130
    unsigned long long _option; // +0x138
    NSArray * _privacyDynamicLabelIdList; // +0x140
    NSArray * _iconActions; // +0x148
    NSString * _customIconDescription; // +0x150
    NSString * _referenceUsername; // +0x158
    NSString * _referenceTextStateId; // +0x160
    NSString * _followUsername; // +0x168
    NSString * _followTextStateId; // +0x170
    NSString * _brandKeyInfo; // +0x178
    NSArray * _jumpElements; // +0x180
    NSString * _clientMessageId; // +0x188
    NSNumber * _interactionNumber; // +0x190
    NSNumber * _commentNumber; // +0x198
    NSNumber * _likedNumber; // +0x1a0
    StatusLocation * _location; // +0x1a8
    NSString * _distance; // +0x1b0
    NSString * _publishErrorMessage; // +0x1b8
    TextStatePublishReportObject * _publishReportObject; // +0x1c0
    CContact * _associateContact; // +0x1c8
    NSString * _summary; // +0x1d0
    NSArray * _medias; // +0x1d8
    unsigned long long _mediaDuration; // +0x1e0
    double _contentScore; // +0x1e8
    NSArray * _serverJumpElements; // +0x1f0
    NSString * _redPacketId; // +0x1f8
    PrivateInfo * _privateInfo; // +0x200
    PublicInfo * _publicInfo; // +0x208
    id <TextState3rdPartyHandler> _thirdPartyHandler; // +0x210
    NSString * _superLongText; // +0x218
    StatusEmoji * _coexistEmojiInfo; // +0x220
    NSMutableDictionary * _keyToJumpElementDict; // +0x228
    NSArray * _clusterPresentList; // +0x230
    NSString * _richTextDescription; // +0x238
    CGPoint _positionCoordinate; // +0x240
}
+ (id)myCurrentStatus;
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)username;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_username;
+ (const void *)textStateId;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_textStateId;
+ (const void *)iconId;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_iconId;
+ (const void *)sourceId;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_sourceId;
+ (const void *)sourceName;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_sourceName;
+ (const void *)createTime;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_createTime;
+ (const void *)serverCreateTime;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_serverCreateTime;
+ (const void *)modifyTime;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (id)swift_modifyTime;
+ (const void *)expireTime;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (id)swift_expireTime;
+ (const void *)sequence;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (id)swift_sequence;
+ (const void *)rawData;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (id)swift_rawData;
+ (const void *)expireFlag;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (id)swift_expireFlag;
+ (const void *)deleteFlag;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (id)swift_deleteFlag;
+ (const void *)privateInfoData;
+ (const void *)__wcdb_synthesize_13:(void *)arg1;
+ (id)swift_privateInfoData;
+ (const void *)publicInfoData;
+ (const void *)__wcdb_synthesize_14:(void *)arg1;
+ (id)swift_publicInfoData;
+ (void)__wcdb_column_constraint_15:(void *)arg1;
+ (void)__wcdb_index_16:(void *)arg1;
+ (void)PBArrayAdd_textStateId;
+ (void)PBArrayAdd_positionCoordinate;
+ (void)PBArrayAdd_positionName;
+ (void)PBArrayAdd_positionId;
+ (void)PBArrayAdd_mediaType;
+ (void)PBArrayAdd_mediaURL;
+ (void)PBArrayAdd_mediaAESKey;
+ (void)PBArrayAdd_mediaThumbURL;
+ (void)PBArrayAdd_mediaThumbAESKey;
+ (void)PBArrayAdd_visibility;
+ (void)PBArrayAdd_topicId;
+ (void)PBArrayAdd_topicList;
+ (void)PBArrayAdd_sourceId;
+ (void)PBArrayAdd_sourceActivityId;
+ (void)PBArrayAdd_sourceName;
+ (void)PBArrayAdd_sourceIconURL;
+ (void)PBArrayAdd_iconId;
+ (void)PBArrayAdd_textStateDescription;
+ (void)PBArrayAdd_createTime;
+ (void)PBArrayAdd_expireTime;
+ (void)PBArrayAdd_privacyContactBlackList;
+ (void)PBArrayAdd_option;
+ (void)PBArrayAdd_verifyInfo;
+ (void)PBArrayAdd_backgroundId;
+ (void)PBArrayAdd_publishErrorMessage;
+ (void)PBArrayAdd_publishReportObject;
+ (void)PBArrayAdd_jumpInfos;
+ (void)PBArrayAdd_mediaWidth;
+ (void)PBArrayAdd_mediaHeight;
+ (void)PBArrayAdd_customIconDescription;
+ (void)PBArrayAdd_emojiInfo;
+ (void)PBArrayAdd_privacy;
+ (void)PBArrayAdd_privacyLabelList;
+ (void)PBArrayAdd_privacyContactNameList;
+ (void)PBArrayAdd_referenceUsername;
+ (void)PBArrayAdd_referenceTextStateId;
+ (void)PBArrayAdd_publishScene;
+ (void)PBArrayAdd_sourceJumpInfos;
+ (void)PBArrayAdd_iconActions;
+ (void)PBArrayAdd_modifyTime;
+ (void)PBArrayAdd_serverCreateTime;
+ (void)PBArrayAdd_followUsername;
+ (void)PBArrayAdd_followTextStateId;
+ (void)PBArrayAdd_brandKeyInfo;
+ (void)PBArrayAdd_username;
+ (void)PBArrayAdd_serverJumpElements;
+ (void)PBArrayAdd_sequence;
+ (void)PBArrayAdd_superLongText;
+ (void)PBArrayAdd_coexistEmojiInfo;
+ (void)PBArrayAdd_clientMessageId;
+ (void)PBArrayAdd_privacyDynamicLabelIdList;
+ (void)PBArrayAdd_iconType;
+ (void)PBArrayAdd_clusterPresentList;
+ (void)PBArrayAdd_serverBlackContactUsernames;
+ (void)PBArrayAdd_city;
+ (void)PBArrayAdd_locale;
+ (void)PBArrayAdd_medias;
+ (void)PBArrayAdd_mediaDuration;
+ (void)PBArrayAdd_contentScore;
+ (void)initialize;
+ (BOOL)isTextStateIdLocalCache:(id)arg1;
+ (id)generateTempTextStateId;
- (BOOL)isMyCurrentStatus;
- (BOOL)isDNDMode;
- (long long)compareForTopic:(id)arg1;
- (long long)compareForCreateTime:(id)arg1;
- (BOOL)setFieldsFromRawData;
- (BOOL)VoipRecentStatus_isLegal;
- (BOOL)VoipRecentStatus_isTextType;
- (BOOL)VoipRecentStatus_isPhotoType;
- (BOOL)VoipRecentStatus_isVideoType;
- (long long)compareForExpire:(id)arg1;
- (id)getPBPropertyTable;
- (id)initWithBase64String:(id)arg1;
- (id)initWithExtInfo:(id)arg1;
- (BOOL)publishFaild;
- (void)updateWithExtInfo:(id)arg1;
- (void)updateDBPacketInfo:(id)arg1 publicInfoBase64String:(id)arg2;
- (void)updatePublishInfoWithBase64String:(id)arg1;
- (void)updatePublicInfoByStopPacket:(id)arg1;
- (id)extInfo;
- (void)updateExtInfoMediaDuration:(id)arg1;
- (BOOL)isSelf;
- (BOOL)isValid;
- (BOOL)isRead;
- (void)setEmojiInfo:(id)arg1;
- (id)emojiInfo;
- (void)setTextStateDescription:(id)arg1;
- (id)textStateDescription;
- (void)checkForSuperLongTextAndCoexistTextAndEmoticon;
- (id)remainingTimeString;
- (void)setIconWrap:(id)arg1;
- (id)iconWrap;
- (BOOL)supportCustomMedia;
- (BOOL)supportCustomCover;
- (id)mediaView;
- (id)mediaCoverView;
- (id)sourceInfo;
- (id)descriptionFor3rdParty;
- (id)headImageViewFor3rdParty;
- (id)titleFor3rdParty;
- (unsigned int)interactionCount;
- (unsigned int)commentCount;
- (BOOL)isLiked;
- (id)thirdPartyHandler;
- (BOOL)hasMedia;
- (BOOL)hasNonStaticMedia;
- (BOOL)hasHeadImage;
- (BOOL)allowReferBackground;
- (BOOL)allowFollow;
- (BOOL)allowComment;
- (BOOL)isLivePhoto;
- (id)clusterPresentForType:(id)arg1;
- (id)defaultClusterPresent;
- (void)initStatusClusterByAffDb:(id)arg1;
- (BOOL)isCurrentSelfActiveStatus;
- (BOOL)isMultiState;
- (void)initJumpElementsLazily;
- (id)jumpElements;
- (id)jumpElementForKey:(id)arg1;
- (id)commentObject;
- (id)distanceDescriptionFromLocation:(id)arg1;
- (id)description;
- (BOOL)isEqualToTextState:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)rawData;
- (void)setRawData:(id)arg1;
- (id)privateInfoData;
- (void)setPrivateInfoData:(id)arg1;
- (id)publicInfoData;
- (void)setPublicInfoData:(id)arg1;
- (BOOL)expireFlag;
- (void)setExpireFlag:(BOOL)arg1;
- (id)textStateId;
- (void)setTextStateId:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (CGPoint)positionCoordinate;
- (void)setPositionCoordinate:(CGPoint)arg1;
- (id)positionName;
- (void)setPositionName:(id)arg1;
- (id)positionId;
- (void)setPositionId:(id)arg1;
- (id)city;
- (void)setCity:(id)arg1;
- (id)locale;
- (void)setLocale:(id)arg1;
- (unsigned int)mediaType;
- (void)setMediaType:(unsigned int)arg1;
- (id)mediaURL;
- (void)setMediaURL:(id)arg1;
- (id)mediaAESKey;
- (void)setMediaAESKey:(id)arg1;
- (id)mediaThumbURL;
- (void)setMediaThumbURL:(id)arg1;
- (id)mediaThumbAESKey;
- (void)setMediaThumbAESKey:(id)arg1;
- (int)mediaWidth;
- (void)setMediaWidth:(int)arg1;
- (int)mediaHeight;
- (void)setMediaHeight:(int)arg1;
- (id)backgroundId;
- (void)setBackgroundId:(id)arg1;
- (unsigned int)visibility;
- (void)setVisibility:(unsigned int)arg1;
- (id)topicId;
- (void)setTopicId:(id)arg1;
- (id)topicList;
- (void)setTopicList:(id)arg1;
- (id)sourceId;
- (void)setSourceId:(id)arg1;
- (id)sourceActivityId;
- (void)setSourceActivityId:(id)arg1;
- (id)sourceName;
- (void)setSourceName:(id)arg1;
- (id)sourceIconURL;
- (void)setSourceIconURL:(id)arg1;
- (id)jumpInfos;
- (void)setJumpInfos:(id)arg1;
- (id)sourceJumpInfos;
- (void)setSourceJumpInfos:(id)arg1;
- (id)iconId;
- (void)setIconId:(id)arg1;
- (unsigned int)iconType;
- (void)setIconType:(unsigned int)arg1;
- (unsigned int)createTime;
- (void)setCreateTime:(unsigned int)arg1;
- (unsigned int)expireTime;
- (void)setExpireTime:(unsigned int)arg1;
- (unsigned int)serverCreateTime;
- (void)setServerCreateTime:(unsigned int)arg1;
- (id)verifyInfo;
- (void)setVerifyInfo:(id)arg1;
- (id)serverBlackContactUsernames;
- (void)setServerBlackContactUsernames:(id)arg1;
- (id)privacyContactBlackList;
- (void)setPrivacyContactBlackList:(id)arg1;
- (long long)privacy;
- (void)setPrivacy:(long long)arg1;
- (id)privacyLabelList;
- (void)setPrivacyLabelList:(id)arg1;
- (id)privacyContactNameList;
- (void)setPrivacyContactNameList:(id)arg1;
- (unsigned long long)option;
- (void)setOption:(unsigned long long)arg1;
- (id)privacyDynamicLabelIdList;
- (void)setPrivacyDynamicLabelIdList:(id)arg1;
- (id)iconActions;
- (void)setIconActions:(id)arg1;
- (id)customIconDescription;
- (void)setCustomIconDescription:(id)arg1;
- (id)referenceUsername;
- (void)setReferenceUsername:(id)arg1;
- (id)referenceTextStateId;
- (void)setReferenceTextStateId:(id)arg1;
- (id)followUsername;
- (void)setFollowUsername:(id)arg1;
- (id)followTextStateId;
- (void)setFollowTextStateId:(id)arg1;
- (id)brandKeyInfo;
- (void)setBrandKeyInfo:(id)arg1;
- (unsigned int)publishScene;
- (void)setPublishScene:(unsigned int)arg1;
- (void)setJumpElements:(id)arg1;
- (unsigned int)modifyTime;
- (void)setModifyTime:(unsigned int)arg1;
- (unsigned int)sequence;
- (void)setSequence:(unsigned int)arg1;
- (id)clientMessageId;
- (void)setClientMessageId:(id)arg1;
- (id)interactionNumber;
- (void)setInteractionNumber:(id)arg1;
- (id)commentNumber;
- (void)setCommentNumber:(id)arg1;
- (BOOL)isLocal;
- (void)setIsLocal:(BOOL)arg1;
- (id)likedNumber;
- (void)setLikedNumber:(id)arg1;
- (id)location;
- (void)setLocation:(id)arg1;
- (id)distance;
- (void)setDistance:(id)arg1;
- (id)publishErrorMessage;
- (void)setPublishErrorMessage:(id)arg1;
- (id)publishReportObject;
- (void)setPublishReportObject:(id)arg1;
- (id)associateContact;
- (void)setAssociateContact:(id)arg1;
- (id)summary;
- (void)setSummary:(id)arg1;
- (BOOL)initByAffDb;
- (void)setInitByAffDb:(BOOL)arg1;
- (id)medias;
- (void)setMedias:(id)arg1;
- (unsigned long long)mediaDuration;
- (void)setMediaDuration:(unsigned long long)arg1;
- (double)contentScore;
- (void)setContentScore:(double)arg1;
- (id)serverJumpElements;
- (void)setServerJumpElements:(id)arg1;
- (id)redPacketId;
- (void)setRedPacketId:(id)arg1;
- (id)privateInfo;
- (void)setPrivateInfo:(id)arg1;
- (id)publicInfo;
- (void)setPublicInfo:(id)arg1;
- (BOOL)hasHb;
- (void)setHasHb:(BOOL)arg1;
- (void)setThirdPartyHandler:(id)arg1;
- (BOOL)hasParsed3rdPartyHandler;
- (void)setHasParsed3rdPartyHandler:(BOOL)arg1;
- (BOOL)deleteFlag;
- (void)setDeleteFlag:(BOOL)arg1;
- (id)superLongText;
- (void)setSuperLongText:(id)arg1;
- (id)coexistEmojiInfo;
- (void)setCoexistEmojiInfo:(id)arg1;
- (id)keyToJumpElementDict;
- (void)setKeyToJumpElementDict:(id)arg1;
- (id)clusterPresentList;
- (void)setClusterPresentList:(id)arg1;
- (id)richTextDescription;
- (void)setRichTextDescription:(id)arg1;
- (void).cxx_destruct;
@end
