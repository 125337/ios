@interface BrandTemplateMsgAuthMessageBubbleModel : MMObject
{
    unsigned int _templateType; // +0x8
    unsigned int _jumpType; // +0xc
    unsigned int _contactType; // +0x10
    unsigned int _businessType; // +0x14
    unsigned int _containerType; // +0x18
    unsigned int _noticeType; // +0x1c
    unsigned int _isRead; // +0x20
    unsigned int _location; // +0x24
    unsigned int _templateOpType; // +0x28
    unsigned int _templateSubType; // +0x2c
    NSString * _userName; // +0x30
    NSString * _templateIdStr; // +0x38
    NSString * _msgTitle; // +0x40
    NSString * _msgContent; // +0x48
    NSString * _jumpInfo; // +0x50
    NSString * _messageId; // +0x58
    NSString * _liveId; // +0x60
    NSString * _feedId; // +0x68
    NSString * _opTypeNote; // +0x70
    NSString * _templateUniqueMsgId; // +0x78
}
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)templateIdStr;
- (void)setTemplateIdStr:(id)arg1;
- (unsigned int)templateType;
- (void)setTemplateType:(unsigned int)arg1;
- (id)msgTitle;
- (void)setMsgTitle:(id)arg1;
- (id)msgContent;
- (void)setMsgContent:(id)arg1;
- (unsigned int)jumpType;
- (void)setJumpType:(unsigned int)arg1;
- (id)jumpInfo;
- (void)setJumpInfo:(id)arg1;
- (unsigned int)contactType;
- (void)setContactType:(unsigned int)arg1;
- (unsigned int)businessType;
- (void)setBusinessType:(unsigned int)arg1;
- (unsigned int)containerType;
- (void)setContainerType:(unsigned int)arg1;
- (unsigned int)noticeType;
- (void)setNoticeType:(unsigned int)arg1;
- (unsigned int)isRead;
- (void)setIsRead:(unsigned int)arg1;
- (unsigned int)location;
- (void)setLocation:(unsigned int)arg1;
- (id)messageId;
- (void)setMessageId:(id)arg1;
- (unsigned int)templateOpType;
- (void)setTemplateOpType:(unsigned int)arg1;
- (id)liveId;
- (void)setLiveId:(id)arg1;
- (id)feedId;
- (void)setFeedId:(id)arg1;
- (id)opTypeNote;
- (void)setOpTypeNote:(id)arg1;
- (id)templateUniqueMsgId;
- (void)setTemplateUniqueMsgId:(id)arg1;
- (unsigned int)templateSubType;
- (void)setTemplateSubType:(unsigned int)arg1;
- (void).cxx_destruct;
@end
