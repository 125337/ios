@interface BrandPluginTemplateMsgReportModel : MMObject
{
    unsigned int _opType; // +0x8
    unsigned int _jumpType; // +0xc
    unsigned int _location; // +0x10
    unsigned int _msgType; // +0x14
    NSString * _userName; // +0x18
    NSString * _templateId; // +0x20
    NSString * _msgTitle; // +0x28
    NSString * _msgContent; // +0x30
    NSString * _templateUniqueMsgId; // +0x38
    NSString * _sessionId; // +0x40
}
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)templateId;
- (void)setTemplateId:(id)arg1;
- (id)msgTitle;
- (void)setMsgTitle:(id)arg1;
- (id)msgContent;
- (void)setMsgContent:(id)arg1;
- (id)templateUniqueMsgId;
- (void)setTemplateUniqueMsgId:(id)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (unsigned int)opType;
- (void)setOpType:(unsigned int)arg1;
- (unsigned int)jumpType;
- (void)setJumpType:(unsigned int)arg1;
- (unsigned int)location;
- (void)setLocation:(unsigned int)arg1;
- (unsigned int)msgType;
- (void)setMsgType:(unsigned int)arg1;
- (void).cxx_destruct;
@end
