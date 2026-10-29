@interface WAAppTrialInfoLoader : MMObject
{
    id /* block */ m_completeBlock; // +0x8
    unsigned int _appServiceType; // +0x10
}
- (void)loadTrialInfoWithPack:(id)arg1 completion:(id /* block */)arg2;
- (void)requestTrialInfoWithPack:(id)arg1;
- (void)onCgiResponse:(id)arg1 forEvent:(unsigned int)arg2;
- (void)handleCheckTrialInfoResponse:(id)arg1;
- (void)sendRequest:(id)arg1 Retry:(unsigned int)arg2;
- (void)updateNotifyInfoWithDownloadUrl:(id)arg1 md5Str:(id)arg2 extInfo:(id)arg3 oldNotify:(id)arg4;
- (unsigned int)appServiceType;
- (void)setAppServiceType:(unsigned int)arg1;
- (void).cxx_destruct;
@end

