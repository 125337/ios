@interface ServiceNotifyMessageItem : NSObject
{
    NSString * _previewTitle; // +0x8
    NSString * _avatarUrl; // +0x10
    NSString * _nick; // +0x18
    NSString * _iconUrl; // +0x20
    NSString * _templateId; // +0x28
    NSString * _header; // +0x30
    NSString * _tail; // +0x38
    NSString * _xml; // +0x40
    NSArray * _displayList; // +0x48
    WCFinderJumpInfo * _jumpInfo; // +0x50
}
- (id)copyWithZone:(_NSZone *)arg1;
- (void)parseWithXmlReader:(XmlReaderNode_t *)arg1 content:(id)arg2;
- (id)previewTitle;
- (void)setPreviewTitle:(id)arg1;
- (id)avatarUrl;
- (void)setAvatarUrl:(id)arg1;
- (id)nick;
- (void)setNick:(id)arg1;
- (id)iconUrl;
- (void)setIconUrl:(id)arg1;
- (id)templateId;
- (void)setTemplateId:(id)arg1;
- (id)header;
- (void)setHeader:(id)arg1;
- (id)tail;
- (void)setTail:(id)arg1;
- (id)xml;
- (void)setXml:(id)arg1;
- (id)displayList;
- (void)setDisplayList:(id)arg1;
- (id)jumpInfo;
- (void)setJumpInfo:(id)arg1;
- (void).cxx_destruct;
@end
