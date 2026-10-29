@interface PluginUtilMgr : MMRootService <MMServiceProtocol, IMMLanguageMgrExt, IUpdateProfileMgrExt, MMKernelExt>
{
    NSDictionary * m_dicNameToType; // +0x8
    NSArray * m_arrNames; // +0x10
    NSArray * m_arrLocalizedNickNames; // +0x18
    NSArray * m_arrOfficialNames; // +0x20
    NSDictionary * m_officialNameToNickNameDict; // +0x28
    NSArray * m_arrLocalizedOfficialNickNames; // +0x30
    WeCustomerHelperContactInfoAssist * _customerHelperContactInfoAssist; // +0x38
}
- (void)initLocalizedName;
- (void)initLocalizedOfficialName;
- (void)initOfficialName;
- (void)initPluginUserNames;
- (void)initNameToTypeDict;
- (id)init;
- (id)pluginTypeToName:(long long)arg1;
- (long long)nameToPluginType:(id)arg1;
- (id)getPluginLocalizedNickName:(long long)arg1;
- (BOOL)hasOfficialUserName:(id)arg1;
- (id)getOfficialUserNameWithType:(long long)arg1;
- (id)getOfficialLocalizedNickName:(id)arg1;
- (id)getOfficialLocalizedNickNameWithType:(long long)arg1;
- (void)refreshLocalizedName;
- (void)onLanguageChange;
- (void)onRegCountryChange;
- (void)onManulLoginOK;
- (id)customerHelperContactInfoAssist;
- (void)setCustomerHelperContactInfoAssist:(id)arg1;
- (void).cxx_destruct;
@end
