@interface MMSystemAuthManager : MMUserService <MMResourceMgrExt, MMServiceProtocol>
{
    NSMutableArray * _requestQueue; // +0x8
    MMFrequencyChecker * _frequencyChecker; // +0x10
    SystemAuthConfigurator * _configurator; // +0x18
    NSMutableSet * _rejectedSessionMap; // +0x20
}
+ (void)VoIPMP_requestMicrophoneAuthWithCompletion:(id /* block */)arg1;
+ (void)VoIPMP_requestCameraAuthWithCompletion:(id /* block */)arg1;
+ (void)VoIP_requestMicrophoneAuthWithCompletion:(id /* block */)arg1;
+ (void)VoIP_requestCameraAuthWithCompletion:(id /* block */)arg1;
+ (BOOL)isRecordAuthorizedFor:(unsigned long long)arg1;
+ (unsigned int)locationAuthorizationStatusFor:(unsigned long long)arg1;
+ (BOOL)isLocationAuthorizedFor:(unsigned long long)arg1;
+ (unsigned int)contactsAuthorizationStatusFor:(unsigned long long)arg1;
+ (BOOL)isContactsAuthorizedFor:(unsigned long long)arg1;
+ (BOOL)needApplyContactsAuthorizationFor:(unsigned long long)arg1;
+ (unsigned int)authorizationStatusFor:(unsigned int)arg1 scene:(unsigned long long)arg2;
+ (BOOL)needApplyForAuthorizationFor:(unsigned int)arg1 scene:(unsigned long long)arg2;
+ (id)currentPrivacyFullStatus;
- (void)reportWithAction:(unsigned long long)arg1 capability:(unsigned int)arg2 scene:(unsigned long long)arg3;
- (id)requestRecordPermissionFor:(unsigned long long)arg1;
- (id)requestMicrophoneAuthForScene:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (id)requestLocationAuthForScene:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (BOOL)isLocationRequestFrequencyLimitedFor:(unsigned long long)arg1;
- (BOOL)isUserSensitiveRegion;
- (id)locationSceneIDFor:(unsigned long long)arg1;
- (id)requestAccessContactsAuthFor:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (id)requestCameraAuthForScene:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)onServiceInit;
- (id)requestAuthFor:(unsigned int)arg1 scene:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (id)requestAuthResultFor:(unsigned int)arg1 scene:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (id)__requestAuthFor:(unsigned int)arg1 scene:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (void)checkRequestQueue;
- (void)process:(id)arg1;
- (id)requestWeChatAndSystemAuthFor:(unsigned int)arg1 scene:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (void)completeAndCheckQueue;
- (BOOL)isAuthRequestFrequencyLimitedFor:(unsigned int)arg1 sceneKey:(id)arg2;
- (unsigned long long)getSceneFromWebUrl:(id)arg1;
- (id)frequencyChecker;
- (id)configurator;
- (void)onResUpdateFinish:(long long)arg1 resType:(unsigned int)arg2 subResType:(unsigned int)arg3;
- (id)requestQueue;
- (void)setRequestQueue:(id)arg1;
- (void)setFrequencyChecker:(id)arg1;
- (void)setConfigurator:(id)arg1;
- (id)rejectedSessionMap;
- (void)setRejectedSessionMap:(id)arg1;
- (void).cxx_destruct;
@end

