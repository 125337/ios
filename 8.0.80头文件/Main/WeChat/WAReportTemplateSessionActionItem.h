@interface WAReportTemplateSessionActionItem : WAReportBaseItem
{
    unsigned int _EventID; // +0x8
    unsigned int _TimeSecond; // +0xc
    unsigned int _TargetPageType; // +0x10
    unsigned int _MenuOperateType; // +0x14
    unsigned int _GlobalNotifySwitch; // +0x18
    unsigned int _contactType; // +0x1c
    NSString * _templateSessionUserName; // +0x20
    NSString * _AccountCount; // +0x28
    NSString * _TemplateID; // +0x30
    NSString * _serviceNoticeSessionId; // +0x38
}
- (int)reportID;
- (id)reportString;
- (unsigned int)EventID;
- (void)setEventID:(unsigned int)arg1;
- (id)templateSessionUserName;
- (void)setTemplateSessionUserName:(id)arg1;
- (unsigned int)TimeSecond;
- (void)setTimeSecond:(unsigned int)arg1;
- (id)AccountCount;
- (void)setAccountCount:(id)arg1;
- (id)TemplateID;
- (void)setTemplateID:(id)arg1;
- (unsigned int)TargetPageType;
- (void)setTargetPageType:(unsigned int)arg1;
- (unsigned int)MenuOperateType;
- (void)setMenuOperateType:(unsigned int)arg1;
- (unsigned int)GlobalNotifySwitch;
- (void)setGlobalNotifySwitch:(unsigned int)arg1;
- (unsigned int)contactType;
- (void)setContactType:(unsigned int)arg1;
- (id)serviceNoticeSessionId;
- (void)setServiceNoticeSessionId:(id)arg1;
- (void).cxx_destruct;
@end
