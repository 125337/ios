@interface WAReportTemplateMsgActionItem : WAReportBaseItem
{
    unsigned int _operateTime; // +0x8
    unsigned int _templateMsgType; // +0xc
    unsigned int _appBrandType; // +0x10
    unsigned long long _eventID; // +0x18
    NSString * _templateID; // +0x20
}
- (id)reportString;
- (unsigned long long)eventID;
- (void)setEventID:(unsigned long long)arg1;
- (id)templateID;
- (void)setTemplateID:(id)arg1;
- (unsigned int)operateTime;
- (void)setOperateTime:(unsigned int)arg1;
- (unsigned int)templateMsgType;
- (void)setTemplateMsgType:(unsigned int)arg1;
- (unsigned int)appBrandType;
- (void)setAppBrandType:(unsigned int)arg1;
- (void).cxx_destruct;
@end
