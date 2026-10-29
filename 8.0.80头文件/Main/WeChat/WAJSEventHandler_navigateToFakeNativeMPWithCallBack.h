@interface WAJSEventHandler_navigateToFakeNativeMPWithCallBack : WAJSEventHandler_BaseEvent
{
    WAAppIdToUsernameTransfer * _appID2UserNameTransfer; // +0x8
}
- (id)failParamsWithErrCode:(id)arg1 errMsg:(id)arg2;
- (void)endWithFailureErrCode:(id)arg1 errMsg:(id)arg2;
- (id)finalErrMsg:(id)arg1 fallbackErrMsg:(id)arg2;
- (void)handleJSEvent:(id)arg1;
- (void)prepareNavigationWithTargetAppID:(id)arg1 userName:(id)arg2 dicParam:(id)arg3;
- (void)navigateToTargetAppID:(id)arg1 userName:(id)arg2 dicParam:(id)arg3;
- (void)endWithOKParams:(id)arg1;
- (void)endWithFailErrMsg:(id)arg1 params:(id)arg2;
- (void).cxx_destruct;
@end
