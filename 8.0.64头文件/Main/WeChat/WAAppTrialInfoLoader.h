@interface WAAppTrialInfoLoader : MMObject
{
    id /* block */ m_completeBlock; // +0x8
    BOOL m_isRequesting; // +0x10
    WAAppBrandNotifyInfo * m_requestingNotifyInfo; // +0x18
    unsigned int _appServiceType; // +0x20
}
- (void)loadTrialInfoWithPack:(id)arg1 completion:(id /* block */)arg2;
- (BOOL)isRequesting;
- (id)requestingNotifyInfo;
- (void)requestTrialInfoWithPack:(id)arg1;
- (void)onCgiResponse:(id)arg1 forEvent:(unsigned int)arg2;
- (void)handleCheckTrialInfoResponse:(id)arg1;
- (void)sendRequest:(id)arg1 Retry:(unsigned int)arg2;
- (void)finishWithRespAndInvokeCompleteBlock:(unsigned int)arg1 userInfo:(id)arg2;
- (void)updateNotifyInfoWithDownloadUrl:(id)arg1 md5Str:(id)arg2 extInfo:(id)arg3 oldNotify:(id)arg4;
- (unsigned int)appServiceType;
- (void)setAppServiceType:(unsigned int)arg1;
- (void).cxx_destruct;
@end
