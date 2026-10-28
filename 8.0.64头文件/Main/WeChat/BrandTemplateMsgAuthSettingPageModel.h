@interface BrandTemplateMsgAuthSettingPageModel : MMObject
{
    unsigned int _opType; // +0x8
    unsigned int _totalSwitch; // +0xc
    NSString * _userName; // +0x10
    unsigned long long _templateSize; // +0x18
    NSString * _templateIdListStr; // +0x20
    NSString * _templateOriginStatusListStr; // +0x28
    NSString * _templateTitleListStr; // +0x30
    NSString * _templateTypeListStr; // +0x38
    NSString * _templateSelectStatusListStr; // +0x40
    unsigned long long _enterScene; // +0x48
    unsigned long long _enterTimestamp; // +0x50
}
- (void)updateOriginInfoWithScopeCache:(id)arg1;
- (void)updateSelectInfoWithScopeCache:(id)arg1;
- (void)updateTotolSwitchWithScopeCache:(id)arg1;
- (id)generateTemplateIdListStr:(id)arg1;
- (id)generateTemplateTitleListStr:(id)arg1;
- (id)generateTemplateTypeListStr:(id)arg1;
- (id)generateTemplateStatusListStr:(id)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (unsigned int)opType;
- (void)setOpType:(unsigned int)arg1;
- (unsigned int)totalSwitch;
- (void)setTotalSwitch:(unsigned int)arg1;
- (unsigned long long)templateSize;
- (void)setTemplateSize:(unsigned long long)arg1;
- (id)templateIdListStr;
- (void)setTemplateIdListStr:(id)arg1;
- (id)templateOriginStatusListStr;
- (void)setTemplateOriginStatusListStr:(id)arg1;
- (id)templateTitleListStr;
- (void)setTemplateTitleListStr:(id)arg1;
- (id)templateTypeListStr;
- (void)setTemplateTypeListStr:(id)arg1;
- (id)templateSelectStatusListStr;
- (void)setTemplateSelectStatusListStr:(id)arg1;
- (unsigned long long)enterScene;
- (void)setEnterScene:(unsigned long long)arg1;
- (unsigned long long)enterTimestamp;
- (void)setEnterTimestamp:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
