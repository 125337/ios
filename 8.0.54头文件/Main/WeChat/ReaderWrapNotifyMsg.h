@interface ReaderWrapNotifyMsg : NSObject <NSCopying>
{
    BOOL _isShowMsgCount; // +0x8
    unsigned int _weappVersion; // +0xc
    unsigned int _weappState; // +0x10
    unsigned int _scene; // +0x14
    unsigned int _msgVersion; // +0x18
    unsigned int _msgShowFlag; // +0x1c
    unsigned int _msgBusiType; // +0x20
    NSString * _title; // +0x28
    NSString * _action; // +0x30
    NSString * _title2; // +0x38
    NSArray * _arrText; // +0x40
    unsigned long long _clickType; // +0x48
    NSString * _url; // +0x50
    NSString * _weappUsername; // +0x58
    NSString * _weappPath; // +0x60
    NSString * _publisherUsername; // +0x68
    NSString * _publisherNickname; // +0x70
    double _space; // +0x78
    NSString * _boxDigest; // +0x80
    NSArray * _digestItems; // +0x88
    NSString * _avatarUrl; // +0x90
    NSString * _notifyMsgId; // +0x98
    MMReaderPubliserInfo * _publisherInfo; // +0xa0
    NSString * _timeColorLight; // +0xa8
    NSString * _timeColorDark; // +0xb0
}
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
+ (id)modelContainerPropertyMappingForConfigTag:(id)arg1;
- (BOOL)isDataValid;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)weAppOpWrap;
- (BOOL)fromXML:(XmlReaderNode_t *)arg1;
- (id)toXML;
- (id)genAttrBoxDigest;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)action;
- (void)setAction:(id)arg1;
- (id)title2;
- (void)setTitle2:(id)arg1;
- (id)arrText;
- (void)setArrText:(id)arg1;
- (unsigned long long)clickType;
- (void)setClickType:(unsigned long long)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)weappUsername;
- (void)setWeappUsername:(id)arg1;
- (id)weappPath;
- (void)setWeappPath:(id)arg1;
- (unsigned int)weappVersion;
- (void)setWeappVersion:(unsigned int)arg1;
- (unsigned int)weappState;
- (void)setWeappState:(unsigned int)arg1;
- (id)publisherUsername;
- (void)setPublisherUsername:(id)arg1;
- (id)publisherNickname;
- (void)setPublisherNickname:(id)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (double)space;
- (void)setSpace:(double)arg1;
- (id)boxDigest;
- (void)setBoxDigest:(id)arg1;
- (BOOL)isShowMsgCount;
- (void)setIsShowMsgCount:(BOOL)arg1;
- (id)digestItems;
- (void)setDigestItems:(id)arg1;
- (id)avatarUrl;
- (void)setAvatarUrl:(id)arg1;
- (unsigned int)msgVersion;
- (void)setMsgVersion:(unsigned int)arg1;
- (id)notifyMsgId;
- (void)setNotifyMsgId:(id)arg1;
- (id)publisherInfo;
- (void)setPublisherInfo:(id)arg1;
- (unsigned int)msgShowFlag;
- (void)setMsgShowFlag:(unsigned int)arg1;
- (unsigned int)msgBusiType;
- (void)setMsgBusiType:(unsigned int)arg1;
- (id)timeColorLight;
- (void)setTimeColorLight:(id)arg1;
- (id)timeColorDark;
- (void)setTimeColorDark:(id)arg1;
- (void).cxx_destruct;
@end

