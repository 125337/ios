@interface ReaderWrapNotifyMsg : NSObject <NSCopying>
{
    BOOL _isShowMsgCount; // +0x8
    unsigned char _mergeType; // +0x9
    unsigned int _weappVersion; // +0xc
    unsigned int _weappState; // +0x10
    unsigned int _scene; // +0x14
    unsigned int _msgVersion; // +0x18
    unsigned int _msgShowFlag; // +0x1c
    unsigned int _msgBusiType; // +0x20
    unsigned int _notifyMsgItemShowType; // +0x24
    long long _serviceType; // +0x28
    NSString * _title; // +0x30
    NSString * _action; // +0x38
    NSString * _title2; // +0x40
    NSArray * _arrText; // +0x48
    unsigned long long _clickType; // +0x50
    NSString * _url; // +0x58
    NSString * _weappUsername; // +0x60
    NSString * _weappPath; // +0x68
    NSString * _publisherUsername; // +0x70
    NSString * _publisherNickname; // +0x78
    NSString * _bizUsername; // +0x80
    double _space; // +0x88
    NSString * _boxDigest; // +0x90
    NSArray * _digestItems; // +0x98
    long long _mergeCount; // +0xa0
    NSString * _avatarUrl; // +0xa8
    NSString * _notifyMsgId; // +0xb0
    MMReaderPubliserInfo * _publisherInfo; // +0xb8
    NSString * _timeColorLight; // +0xc0
    NSString * _timeColorDark; // +0xc8
    NSNumber * _isFold; // +0xd0
    NSNumber * _needHideRedCount; // +0xd8
    NSString * _mpArticleKey; // +0xe0
}
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
+ (id)modelContainerPropertyMappingForConfigTag:(id)arg1;
- (id)getNodeName;
- (BOOL)isDataValid;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)weAppOpWrap;
- (BOOL)fromXML:(XmlReaderNode_t *)arg1;
- (id)toXML;
- (id)genAttrBoxDigest:(id)arg1;
- (BOOL)isMerge;
- (long long)genMergeCount;
- (long long)serviceType;
- (void)setServiceType:(long long)arg1;
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
- (id)bizUsername;
- (void)setBizUsername:(id)arg1;
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
- (unsigned char)mergeType;
- (void)setMergeType:(unsigned char)arg1;
- (long long)mergeCount;
- (void)setMergeCount:(long long)arg1;
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
- (unsigned int)notifyMsgItemShowType;
- (void)setNotifyMsgItemShowType:(unsigned int)arg1;
- (id)isFold;
- (void)setIsFold:(id)arg1;
- (id)needHideRedCount;
- (void)setNeedHideRedCount:(id)arg1;
- (id)mpArticleKey;
- (void)setMpArticleKey:(id)arg1;
- (void).cxx_destruct;
@end
