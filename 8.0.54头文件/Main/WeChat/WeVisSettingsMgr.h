@interface WeVisSettingsMgr : MMUserService <IMsgExt, MMServiceProtocol>
{
    unsigned long long _lastMs; // +0x8
    map<std::string, std::map<std::string, std::string>, std::less<std::string>, std::allocator<std::pair<const std::string, std::map<std::string, std::string>>>> _paramsMap; // +0x10
    map<WeEffect::APP_SCENARIO, std::string, std::less<WeEffect::APP_SCENARIO>, std::allocator<std::pair<const WeEffect::APP_SCENARIO, std::string>>> _scenarioType2Names; // +0x28
    WeVisEffectConfigResponse * _localSettingInfo; // +0x40
    NSString * _cgiSettingFilePath; // +0x48
}
- (id)init;
- (void)scheduleLoadRemoteInfo:(unsigned long long)arg1;
- (void)onServiceEnterForeground;
- (void)loadRemoteInfo;
- (id)getCGIInfo;
- (void)writeSettingsToPath:(id)arg1;
- (void)onCgiCompletion:(id)arg1 errCode:(unsigned int)arg2;
- (void *)getUpdateParamsMap:(int)arg1;
- (void)onServiceInit;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (BOOL)cgiEnable;
- (id)localSettingInfo;
- (void)setLocalSettingInfo:(id)arg1;
- (id)cgiSettingFilePath;
- (void)setCgiSettingFilePath:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

