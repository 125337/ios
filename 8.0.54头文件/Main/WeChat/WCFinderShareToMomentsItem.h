@interface WCFinderShareToMomentsItem : NSObject <YYModel, NSCoding, NSCopying, PBCoding>
{
    BOOL _isDebug; // +0x8
    NSString * _objectId; // +0x10
    NSString * _localId; // +0x18
    NSString * _timeLineThumbName; // +0x20
    NSString * _objectNonceId; // +0x28
    NSString * _feedType; // +0x30
    NSString * _nickname; // +0x38
    NSString * _avatar; // +0x40
    NSString * _contactJumpInfoStr; // +0x48
    NSString * _desc; // +0x50
    NSString * _mediaCount; // +0x58
    NSString * _liveId; // +0x60
    NSArray * _mediaList; // +0x68
    NSString * _username; // +0x70
    NSString * _bizUsername; // +0x78
    WCFinderShareAttachInfo * _megaVideo; // +0x80
    unsigned long long _authIconType; // +0x88
    NSString * _authIconUrl; // +0x90
    NSString * _finderForwardSource; // +0x98
    NSString * _ecSource; // +0xa0
    NSData * _shareBypRawData; // +0xa8
    NSString * _bizNickname; // +0xb0
    NSString * _bizAvatar; // +0xb8
    NSString * _bizUsernameV2; // +0xc0
    unsigned long long _bizAuthIconType; // +0xc8
    NSString * _bizAuthIconUrl; // +0xd0
    unsigned long long _contentType; // +0xd8
    NewLifeShareExtInfo * _newlifeShareExtInfo; // +0xe0
    NSString * _lastGMsgID; // +0xe8
    NSString * _shareUsername; // +0xf0
    long long _sourceCommentScene; // +0xf8
}
+ (void)PBArrayAdd_objectId;
+ (void)PBArrayAdd_localId;
+ (void)PBArrayAdd_timeLineThumbName;
+ (void)PBArrayAdd_objectNonceId;
+ (void)PBArrayAdd_feedType;
+ (void)PBArrayAdd_nickname;
+ (void)PBArrayAdd_avatar;
+ (void)PBArrayAdd_desc;
+ (void)PBArrayAdd_mediaCount;
+ (void)PBArrayAdd_liveId;
+ (void)PBArrayAdd_mediaList;
+ (void)PBArrayAdd_username;
+ (void)PBArrayAdd_megaVideo;
+ (void)PBArrayAdd_bizUsername;
+ (void)PBArrayAdd_authIconType;
+ (void)PBArrayAdd_authIconUrl;
+ (void)PBArrayAdd_bizNickname;
+ (void)PBArrayAdd_bizAvatar;
+ (void)PBArrayAdd_bizUsernameV2;
+ (void)PBArrayAdd_bizAuthIconType;
+ (void)PBArrayAdd_bizAuthIconUrl;
+ (void)PBArrayAdd_finderForwardSource;
+ (void)PBArrayAdd_contactJumpInfoStr;
+ (void)PBArrayAdd_ecSource;
+ (void)PBArrayAdd_contentType;
+ (void)PBArrayAdd_shareBypRawData;
+ (void)PBArrayAdd_lastGMsgID;
+ (void)PBArrayAdd_newlifeShareExtInfo;
+ (void)PBArrayAdd_isDebug;
+ (void)PBArrayAdd_sourceCommentScene;
+ (void)initialize;
+ (id)modelContainerPropertyMappingForConfigTag:(id)arg1;
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (id)getPBPropertyTable;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (void)fromXML:(XmlReaderNode_t *)arg1;
- (BOOL)fromBrandXML:(XmlReaderNode_t *)arg1;
- (id)toXML;
- (id)toXMLV2;
- (id)nicknameForDisplay;
- (id)avatarForDisplay;
- (id)bizUsernameForDisplay;
- (unsigned long long)authIconTypeForDisplay;
- (id)authIconUrlForDisplay;
- (void)setShareBypData:(id)arg1;
- (id)shareBypData;
- (BOOL)isPureText;
- (BOOL)isNewLife;
- (BOOL)isMemberShipFeed;
- (id)getTimelineDesc;
- (id)getGallaryDesc;
- (id)bizUsername;
- (void)setContactJumpInfo:(id)arg1;
- (id)contactJumpInfo;
- (BOOL)createTimeLineThumb;
- (BOOL)clearTimeLineThumb;
- (id)timeLineThumbFilePath;
- (void)exposeReport:(id)arg1 params:(id)arg2;
- (id)objectId;
- (void)setObjectId:(id)arg1;
- (id)localId;
- (void)setLocalId:(id)arg1;
- (id)timeLineThumbName;
- (void)setTimeLineThumbName:(id)arg1;
- (id)objectNonceId;
- (void)setObjectNonceId:(id)arg1;
- (id)feedType;
- (void)setFeedType:(id)arg1;
- (id)nickname;
- (void)setNickname:(id)arg1;
- (id)avatar;
- (void)setAvatar:(id)arg1;
- (id)contactJumpInfoStr;
- (void)setContactJumpInfoStr:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)mediaCount;
- (void)setMediaCount:(id)arg1;
- (id)liveId;
- (void)setLiveId:(id)arg1;
- (id)mediaList;
- (void)setMediaList:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (void)setBizUsername:(id)arg1;
- (id)megaVideo;
- (void)setMegaVideo:(id)arg1;
- (unsigned long long)authIconType;
- (void)setAuthIconType:(unsigned long long)arg1;
- (id)authIconUrl;
- (void)setAuthIconUrl:(id)arg1;
- (id)finderForwardSource;
- (void)setFinderForwardSource:(id)arg1;
- (id)ecSource;
- (void)setEcSource:(id)arg1;
- (id)shareBypRawData;
- (void)setShareBypRawData:(id)arg1;
- (id)bizNickname;
- (void)setBizNickname:(id)arg1;
- (id)bizAvatar;
- (void)setBizAvatar:(id)arg1;
- (id)bizUsernameV2;
- (void)setBizUsernameV2:(id)arg1;
- (unsigned long long)bizAuthIconType;
- (void)setBizAuthIconType:(unsigned long long)arg1;
- (id)bizAuthIconUrl;
- (void)setBizAuthIconUrl:(id)arg1;
- (BOOL)isDebug;
- (void)setIsDebug:(BOOL)arg1;
- (unsigned long long)contentType;
- (void)setContentType:(unsigned long long)arg1;
- (id)newlifeShareExtInfo;
- (void)setNewlifeShareExtInfo:(id)arg1;
- (id)lastGMsgID;
- (void)setLastGMsgID:(id)arg1;
- (id)shareUsername;
- (void)setShareUsername:(id)arg1;
- (long long)sourceCommentScene;
- (void)setSourceCommentScene:(long long)arg1;
- (void).cxx_destruct;
@end

