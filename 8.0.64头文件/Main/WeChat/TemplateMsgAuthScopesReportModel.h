@interface TemplateMsgAuthScopesReportModel : MMObject
{
    unsigned int _enterSource; // +0x8
    unsigned int _msgType; // +0xc
    unsigned int _totalSwitch; // +0x10
    NSString * _userName; // +0x18
    NSString * _templateId; // +0x20
    NSString * _templateTitle; // +0x28
    NSString * _templateItems; // +0x30
    unsigned long long _opType; // +0x38
}
- (id)userName;
- (void)setUserName:(id)arg1;
- (unsigned int)enterSource;
- (void)setEnterSource:(unsigned int)arg1;
- (unsigned int)msgType;
- (void)setMsgType:(unsigned int)arg1;
- (id)templateId;
- (void)setTemplateId:(id)arg1;
- (unsigned int)totalSwitch;
- (void)setTotalSwitch:(unsigned int)arg1;
- (id)templateTitle;
- (void)setTemplateTitle:(id)arg1;
- (id)templateItems;
- (void)setTemplateItems:(id)arg1;
- (unsigned long long)opType;
- (void)setOpType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
