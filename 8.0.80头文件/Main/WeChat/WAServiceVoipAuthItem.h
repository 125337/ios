@interface WAServiceVoipAuthItem : NSObject
{
    unsigned int _status; // +0x8
    NSString * _appId; // +0x10
    NSString * _templateId; // +0x18
    NSString * _templateName; // +0x20
    NSString * _templateCallingRole; // +0x28
}
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)templateId;
- (void)setTemplateId:(id)arg1;
- (id)templateName;
- (void)setTemplateName:(id)arg1;
- (id)templateCallingRole;
- (void)setTemplateCallingRole:(id)arg1;
- (unsigned int)status;
- (void)setStatus:(unsigned int)arg1;
- (void).cxx_destruct;
@end
