@interface WCMegaVideoShareItem : NSObject <NSCoding, NSCopying, PBCoding>
{
    NSString * _objectId; // +0x8
    NSString * _objectNonceId; // +0x10
    NSString * _nickname; // +0x18
    NSString * _avatar; // +0x20
    NSString * _desc; // +0x28
    NSString * _mediaCount; // +0x30
    NSArray * _mediaList; // +0x38
    NSString * _username; // +0x40
    WCFinderShareAttachInfo * _finderInfo; // +0x48
    unsigned long long _authIconType; // +0x50
    NSString * _authIconUrl; // +0x58
}
+ (void)PBArrayAdd_objectId;
+ (void)PBArrayAdd_objectNonceId;
+ (void)PBArrayAdd_nickname;
+ (void)PBArrayAdd_avatar;
+ (void)PBArrayAdd_desc;
+ (void)PBArrayAdd_mediaCount;
+ (void)PBArrayAdd_mediaList;
+ (void)PBArrayAdd_username;
+ (void)PBArrayAdd_finderInfo;
+ (void)PBArrayAdd_authIconType;
+ (void)PBArrayAdd_authIconUrl;
+ (void)initialize;
+ (id)nodeName;
+ (id)modelContainerPropertyMappingForConfigTag:(id)arg1;
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (id)getPBPropertyTable;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (void)fromXML:(XmlReaderNode_t *)arg1;
- (id)toXML;
- (id)toXMLV2;
- (id)getTimelineDesc;
- (id)getGallaryDesc;
- (id)converToShareFeedItem;
- (BOOL)isEqual:(id)arg1;
- (id)objectId;
- (void)setObjectId:(id)arg1;
- (id)objectNonceId;
- (void)setObjectNonceId:(id)arg1;
- (id)nickname;
- (void)setNickname:(id)arg1;
- (id)avatar;
- (void)setAvatar:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)mediaCount;
- (void)setMediaCount:(id)arg1;
- (id)mediaList;
- (void)setMediaList:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)finderInfo;
- (void)setFinderInfo:(id)arg1;
- (unsigned long long)authIconType;
- (void)setAuthIconType:(unsigned long long)arg1;
- (id)authIconUrl;
- (void)setAuthIconUrl:(id)arg1;
- (void).cxx_destruct;
@end

